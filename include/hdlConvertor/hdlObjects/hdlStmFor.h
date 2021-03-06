#pragma once

#include <hdlConvertor/hdlObjects/iHdlStatement.h>
#include <hdlConvertor/hdlObjects/iHdlExpr.h>
#include <hdlConvertor/hdlObjects/hdlVariableDef.h>

namespace hdlConvertor {
namespace hdlObjects {

/*
 * HDL AST node for for-statement
 * */
class HdlStmFor: public iHdlStatement {
public:
	std::unique_ptr<iHdlStatement> init;
	std::unique_ptr<iHdlExprItem> cond;
	std::unique_ptr<iHdlStatement> step;
	std::unique_ptr<iHdlStatement> body;

	HdlStmFor(std::unique_ptr<iHdlStatement> init,
			std::unique_ptr<iHdlExprItem> cond, std::unique_ptr<iHdlStatement> step,
			std::unique_ptr<iHdlStatement> body);

	virtual ~HdlStmFor() override;
};

/*
 * HDL AST node for for-in-statement
 * */
class HdlStmForIn: public iHdlStatement {
public:
	// definition of variable(s) which will be used for iteration
	std::vector<std::unique_ptr<iHdlObj>> var_defs;
	// collection which will be iterated over
	std::unique_ptr<iHdlExprItem> collection;
	std::unique_ptr<iHdlStatement> body;

	HdlStmForIn(std::unique_ptr<HdlVariableDef> var,
			std::unique_ptr<iHdlExprItem> collection,
			std::unique_ptr<iHdlStatement> body);
	HdlStmForIn(std::vector<std::unique_ptr<iHdlObj>> &vars,
			std::unique_ptr<iHdlExprItem> collection,
			std::unique_ptr<iHdlStatement> body);
	HdlStmForIn(std::vector<std::unique_ptr<iHdlExprItem>> &vars,
			std::unique_ptr<iHdlExprItem> collection,
			std::unique_ptr<iHdlStatement> body);
	HdlStmForIn(std::unique_ptr<iHdlExprItem> var,
			std::unique_ptr<iHdlExprItem> collection,
			std::unique_ptr<iHdlStatement> body);

	virtual ~HdlStmForIn() override;
};

/*
 * HDL AST node for repeat-statement
 * */
class HdlStmRepeat: public iHdlStatement {
public:
	std::unique_ptr<iHdlExprItem> n;
	std::unique_ptr<iHdlStatement> body;
	HdlStmRepeat(std::unique_ptr<iHdlExprItem> n,
			std::unique_ptr<iHdlStatement> body);
	virtual ~HdlStmRepeat() override;
};

}
}
