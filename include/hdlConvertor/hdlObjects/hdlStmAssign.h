#pragma once

#include <vector>

#include <hdlConvertor/hdlObjects/iHdlStatement.h>
#include <hdlConvertor/hdlObjects/iHdlExpr.h>

namespace hdlConvertor {
namespace hdlObjects {

/*
 * HDL AST node for assignment statement
 * */
class HdlStmAssign: public iHdlStatement {
public:
	std::unique_ptr<iHdlExprItem> dst;
	std::unique_ptr<iHdlExprItem> src;
	std::unique_ptr<iHdlExprItem> time_delay;
	std::unique_ptr<std::vector<std::unique_ptr<iHdlExprItem>>> event_delay;
	bool is_blocking;

	HdlStmAssign(std::unique_ptr<iHdlExprItem> dst, std::unique_ptr<iHdlExprItem> src,
			bool _is_blocking);
	HdlStmAssign(std::unique_ptr<iHdlExprItem> dst, std::unique_ptr<iHdlExprItem> src,
			std::unique_ptr<iHdlExprItem> time_delay,
			std::unique_ptr<std::vector<std::unique_ptr<iHdlExprItem>>> event_delay,
			bool _is_blocking = false);

	virtual ~HdlStmAssign() override;
};

}
}
