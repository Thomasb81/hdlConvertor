
import sys
from hdlConvertorAst.language import Language
from hdlConvertor import HdlConvertor

import pprint


include_dirs = []
c = HdlConvertor()

filenames = 'top2.sv'

d = c.verilog_xpath(filenames, Language.SYSTEM_VERILOG,"//identifier/*", include_dirs)
