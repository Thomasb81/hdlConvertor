#include <hdlConvertor/svConvertor/utils.h>

#include <hdlConvertor/svConvertor/exprParser.h>
#include <hdlConvertor/hdlObjects/hdlValue.h>
#include <hdlConvertor/svConvertor/sv2017Parser/sv2017Lexer.h>

#include <hdlConvertor/createObject.h>

using sv2017Parser = sv2017_antlr::sv2017Parser;
using namespace hdlConvertor::hdlObjects;
using namespace std;

namespace hdlConvertor {
namespace sv {

unique_ptr<iHdlExprItem> Utils::mkStringT() {
	return make_unique<HdlValueId>("__str__");
}

unique_ptr<iHdlExprItem> Utils::mkIntT() {
	return make_unique<HdlValueId>("integer");
}

unique_ptr<iHdlExprItem> Utils::mkWireT() {
	return make_unique<HdlValueId>("wire");
}

unique_ptr<iHdlExprItem> Utils::mkWireT(antlr4::ParserRuleContext *const ctx,
		unique_ptr<iHdlExprItem> range, SIGNING_VAL signed_) {
	return mkWireT(ctx, nullptr, move(range), signed_);
}
std::unique_ptr<hdlObjects::iHdlExprItem> Utils::signing(SIGNING_VAL signed_) {
	if (signed_ == SIGNING_VAL::NO_SIGN) {
		return HdlValueSymbol::null();
	} else {
		return make_unique<HdlValueInt>(signed_ ? 1 : 0);
	}
}
unique_ptr<iHdlExprItem> Utils::mkWireT(antlr4::ParserRuleContext *const ctx,
		unique_ptr<iHdlExprItem> net_type, unique_ptr<iHdlExprItem> range,
		SIGNING_VAL signed_) {
	vector<unique_ptr<iHdlExprItem>> operands;
	operands.push_back(move(range));
	operands.push_back(signing(signed_));
	if (net_type == nullptr)
		net_type = mkWireT();
	return HdlCall::parametrization(ctx, move(net_type), operands);
}

unique_ptr<iHdlExprItem> append_expr(antlr4::ParserRuleContext *const ctx,
		unique_ptr<iHdlExprItem> selected_name,
		HdlOperatorType operator_to_join_with,
		unique_ptr<iHdlExprItem> new_part) {
	if (selected_name) {
		return create_object<HdlCall>(ctx, move(selected_name),
				operator_to_join_with, move(new_part));
	} else {
		return new_part;
	}
}

unique_ptr<iHdlExprItem> reduce(vector<unique_ptr<iHdlExprItem>> &ops,
		HdlOperatorType op) {
	unique_ptr<iHdlExprItem> res = nullptr;
	for (auto &p : ops) {
		if (res == nullptr)
			res = move(p);
		else
			res = make_unique<HdlCall>(move(res), op, move(p));
	}
	return res;
}

}
}
