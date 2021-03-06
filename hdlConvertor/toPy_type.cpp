#include "toPy.h"

namespace hdlConvertor {

using namespace hdlObjects;

PyObject* ToPy::toPy(const HdlClassType o) {
	const char *name;
	try {
		name = HdlClassType_toString(o);
	} catch (const std::runtime_error &e) {
		PyErr_SetString(PyExc_ValueError, e.what());
		return nullptr;
	}
	return PyObject_GetAttrString(HdlClassTypeEnum, name);
}

PyObject* ToPy::toPy(const HdlClassDef *o) {
	PyObject *py_inst = PyObject_CallObject(HdlClassDefCls, NULL);
	if (!py_inst)
		return nullptr;
	if (toPy_property(py_inst, "type", o->type)) {
		return nullptr;
	}
	if (toPy_arr(py_inst, "members", o->members)) {
		return nullptr;
	}

	return py_inst;
}

PyObject* ToPy::toPy(const HdlEnumDef *o) {
	PyObject *py_inst = PyObject_CallObject(HdlEnumDefCls, NULL);
	if (!py_inst)
		return nullptr;
	if (toPy_arr(py_inst, "values", o->values))
		return nullptr;
	return py_inst;
}

PyObject* ToPy::toPy(
		const std::pair<std::unique_ptr<std::string>,
				std::unique_ptr<iHdlExprItem>> &o) {
	PyObject *n;
	if (o.first) {
		n = toPy(*o.first.get());
		if (n == nullptr)
			return nullptr;
	} else {
		Py_INCREF(Py_None);
		n = Py_None;
	}
	PyObject *v;
	if (o.second) {
		v = toPy(o.second.get());
		if (v == nullptr) {
			Py_DECREF(v);
			return nullptr;
		}

	} else {
		Py_INCREF(Py_None);
		v = Py_None;
	}
	return PyTuple_Pack(2, n, v);
}

}
