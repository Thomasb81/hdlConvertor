import sys
from os import path
from pprint import pprint
import unittest

TEST_DIR = path.abspath(path.dirname(__file__))
BASE_DIR = path.join(TEST_DIR, "..")
sys.path.insert(1, path.join(BASE_DIR, "dist"))

import hdlConvertor

def test_run(test_file, golden_file):
    test_result = hdlConvertor.verilog_pp(
        path.join(TEST_DIR,test_file),
        ['.','..',path.join('sv_pp','src')],
        "sv2012")
    with open(path.join(TEST_DIR,golden_file), 'r') as myfile:
        test_golden = myfile.read()
    myfile.close()
    return test_result,test_golden


class PreprocessorTC(unittest.TestCase):

    def test_2012_p641(self):
        result,ref = test_run(
            path.join('sv_pp','src','2012_p641.txt'),
            path.join('sv_pp','expected','2012_p641.txt')
        )
        self.assertEqual(result,ref)

    def test_2012_p642(self):
        result,ref = test_run(
            path.join('sv_pp','src','2012_p642.txt'),
            path.join('sv_pp','expected','2012_p642.txt')
        )
        self.assertEqual(result,ref)

    def test_2012_p642_2(self):
        result,ref = test_run(
            path.join('sv_pp','src','2012_p642_2.txt'),
            path.join('sv_pp','expected','2012_p642_2.txt')
        )
        self.assertEqual(result,ref)

    def test_2012_p643(self):
        result,ref = test_run(
            path.join('sv_pp','src','2012_p643.txt'),
            path.join('sv_pp','expected','2012_p643.txt')
        )
        self.assertEqual(result,ref)

    def test_2012_p643_2(self):
        result,ref = test_run(
            path.join('sv_pp','src','2012_p643_2.txt'),
            path.join('sv_pp','expected','2012_p643_2.txt')
        )
        self.assertEqual(result,ref)

    def test_2012_p643_3(self):
        result,ref = test_run(
            path.join('sv_pp','src','2012_p643_3.txt'),
            path.join('sv_pp','expected','2012_p643_3.txt')
        )
        self.assertEqual(result,ref)

    def test_2012_p644(self):
        result,ref = test_run(
            path.join('sv_pp','src','2012_p644.txt'),
            path.join('sv_pp','expected','2012_p644.txt')
        )
        self.assertEqual(result,ref)

    def test_2012_p644_2(self):
        result = hdlConvertor.verilog_pp(
            path.join(TEST_DIR,'sv_pp','src','2012_p644_2.txt'),
            ['.','..',path.join('sv_pp','src')],
            "sv2012")
        self.assertEqual(result,'`include "/home/mydir/myfile"\n')

    def test_2012_p641_il1(self):
        with self.assertRaises(hdlConvertor.parseException) as context:
            hdlConvertor.verilog_pp(
                path.join(TEST_DIR,'sv_pp','src','2012_p641_il1.txt'),
                ['.','..',path.join('sv_pp','src')],
                "sv2012"
            )
        self.assertTrue('Missmatch in number of argument macro declaration D (2) and macro usage (1)' in context.exception)

    def test_2012_p641_il2(self):
        with self.assertRaises(hdlConvertor.parseException) as context:
            hdlConvertor.verilog_pp(
                path.join(TEST_DIR,'sv_pp','src','2012_p641_il2.txt'),
                ['.','..',path.join('sv_pp','src')],
                "sv2012"
            )
        self.assertTrue('Missmatch in number of argument macro declaration D (2) and macro usage (0)' in context.exception)

    def test_2012_p641_il3(self):
        with self.assertRaises(hdlConvertor.parseException) as context:
            hdlConvertor.verilog_pp(
                path.join(TEST_DIR,'sv_pp','src','2012_p641_il3.txt'),
                ['.','..',path.join('sv_pp','src')],
                "sv2012"
            )
        self.assertTrue('Missmatch in number of argument macro declaration D (2) and macro usage (3)' in context.exception)


    def test_2012_p642_il1(self):
        with self.assertRaises(hdlConvertor.parseException) as context:
            result = hdlConvertor.verilog_pp(
                path.join(TEST_DIR,'sv_pp','src','2012_p642_il1.txt'),
                ['.','..',path.join('sv_pp','src')],
                "sv2012"
            )
        self.assertTrue('Missmatch in number of argument macro declaration MACRO1 (3) and macro usage (2)' in context.exception)

    #`MACRO3 must have parentesis according to the SV specification.
    #Currently the code is not able to detect this issue
    @unittest.expectedFailure
    def test_2012_p642_il2(self):
        with self.assertRaises(hdlConvertor.parseException) as context:
            result = hdlConvertor.verilog_pp(
                path.join(TEST_DIR,'sv_pp','src','2012_p642_il2.txt'),
                ['.','..',path.join('sv_pp','src')],
                "sv2012"
            )
        self.assertTrue('Missmatch in number of argument macro declaration (3) and macro usage (0)' in context.exception)

#    def test_2012_p642_il3(self):
#        result = hdlConvertor.verilog_pp(
#                path.join(TEST_DIR,'sv_pp','src','2012_p642_il3.txt'),
#                ['.','..',path.join('sv_pp','src')],
#                "sv2012"
#            )

    def test_FILE_LINE(self):
        test_result = hdlConvertor.verilog_pp(
            path.join(path.dirname(__file__),
                      'sv_pp','src','test_FILE_LINE.sv'
                     ),
        ['.','..',path.join('sv_pp','src')],
        "sv2012")
        test_golden = "module tb();\n\ninitial\n\t$display(\"Internal error: null handle at %s, line %d.\",\n"
        test_golden += "\"" + path.join(path.dirname(__file__),
                      'sv_pp','src','test_FILE_LINE.sv'
                     )+"\", 5);\n\n\nendmodule\n"
        self.assertEqual(test_result,test_golden)

if __name__ == "__main__":
    unittest.main()