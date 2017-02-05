
// Generated from Verilog2001.g4 by ANTLR 4.5.3

#pragma once


#include "antlr4-runtime.h"


using namespace antlr4;

namespace verilog {


class Verilog2001Parser : public Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    T__50 = 51, T__51 = 52, T__52 = 53, T__53 = 54, T__54 = 55, T__55 = 56, 
    T__56 = 57, T__57 = 58, T__58 = 59, T__59 = 60, T__60 = 61, T__61 = 62, 
    T__62 = 63, T__63 = 64, T__64 = 65, T__65 = 66, T__66 = 67, T__67 = 68, 
    T__68 = 69, T__69 = 70, T__70 = 71, T__71 = 72, T__72 = 73, T__73 = 74, 
    T__74 = 75, T__75 = 76, T__76 = 77, T__77 = 78, T__78 = 79, T__79 = 80, 
    T__80 = 81, T__81 = 82, T__82 = 83, T__83 = 84, T__84 = 85, T__85 = 86, 
    T__86 = 87, T__87 = 88, T__88 = 89, T__89 = 90, T__90 = 91, T__91 = 92, 
    T__92 = 93, T__93 = 94, T__94 = 95, T__95 = 96, T__96 = 97, T__97 = 98, 
    T__98 = 99, T__99 = 100, T__100 = 101, T__101 = 102, T__102 = 103, T__103 = 104, 
    T__104 = 105, T__105 = 106, T__106 = 107, T__107 = 108, T__108 = 109, 
    T__109 = 110, T__110 = 111, T__111 = 112, T__112 = 113, T__113 = 114, 
    T__114 = 115, T__115 = 116, T__116 = 117, T__117 = 118, T__118 = 119, 
    T__119 = 120, T__120 = 121, T__121 = 122, T__122 = 123, T__123 = 124, 
    T__124 = 125, T__125 = 126, T__126 = 127, T__127 = 128, T__128 = 129, 
    T__129 = 130, T__130 = 131, T__131 = 132, T__132 = 133, T__133 = 134, 
    T__134 = 135, T__135 = 136, T__136 = 137, T__137 = 138, T__138 = 139, 
    T__139 = 140, T__140 = 141, T__141 = 142, T__142 = 143, T__143 = 144, 
    T__144 = 145, T__145 = 146, T__146 = 147, T__147 = 148, T__148 = 149, 
    T__149 = 150, T__150 = 151, T__151 = 152, T__152 = 153, T__153 = 154, 
    T__154 = 155, T__155 = 156, T__156 = 157, T__157 = 158, T__158 = 159, 
    T__159 = 160, T__160 = 161, T__161 = 162, T__162 = 163, T__163 = 164, 
    T__164 = 165, T__165 = 166, T__166 = 167, Real_number = 168, Decimal_number = 169, 
    Binary_number = 170, Octal_number = 171, Hex_number = 172, String = 173, 
    One_line_comment = 174, Block_comment = 175, Escaped_identifier = 176, 
    Simple_identifier = 177, Dollar_Identifier = 178, Time_Identifier = 179, 
    White_space = 180
  };

  enum {
    RuleConfig_declaration = 0, RuleDesign_statement = 1, RuleConfig_rule_statement = 2, 
    RuleDefault_clause = 3, RuleInst_clause = 4, RuleInst_name = 5, RuleLiblist_clause = 6, 
    RuleCell_clause = 7, RuleUse_clause = 8, RuleSource_text = 9, RuleDescription = 10, 
    RuleModule_declaration = 11, RuleModule_keyword = 12, RuleModule_parameter_port_list = 13, 
    RuleList_of_ports = 14, RuleList_of_port_declarations = 15, RulePort = 16, 
    RulePort_expression = 17, RulePort_reference = 18, RulePort_declaration = 19, 
    RuleModule_item = 20, RuleModule_or_generate_item = 21, RuleNon_port_module_item = 22, 
    RuleModule_or_generate_item_declaration = 23, RuleParameter_override = 24, 
    RuleLocal_parameter_declaration = 25, RuleParameter_declaration = 26, 
    RuleParameter_declaration_ = 27, RuleSpecparam_declaration = 28, RuleInout_declaration = 29, 
    RuleInput_declaration = 30, RuleOutput_declaration = 31, RuleEvent_declaration = 32, 
    RuleGenvar_declaration = 33, RuleInteger_declaration = 34, RuleTime_declaration = 35, 
    RuleReal_declaration = 36, RuleRealtime_declaration = 37, RuleReg_declaration = 38, 
    RuleNet_declaration = 39, RuleNet_type = 40, RuleOutput_variable_type = 41, 
    RuleReal_type = 42, RuleVariable_type = 43, RuleDrive_strength = 44, 
    RuleStrength0 = 45, RuleStrength1 = 46, RuleCharge_strength = 47, RuleDelay3 = 48, 
    RuleDelay2 = 49, RuleDelay_value = 50, RuleList_of_event_identifiers = 51, 
    RuleList_of_net_identifiers = 52, RuleList_of_genvar_identifiers = 53, 
    RuleList_of_port_identifiers = 54, RuleList_of_net_decl_assignments = 55, 
    RuleList_of_param_assignments = 56, RuleList_of_specparam_assignments = 57, 
    RuleList_of_real_identifiers = 58, RuleList_of_variable_identifiers = 59, 
    RuleList_of_variable_port_identifiers = 60, RuleNet_decl_assignment = 61, 
    RuleParam_assignment = 62, RuleSpecparam_assignment = 63, RulePulse_control_specparam = 64, 
    RuleError_limit_value = 65, RuleReject_limit_value = 66, RuleLimit_value = 67, 
    RuleDimension = 68, RuleRange = 69, RuleFunction_declaration = 70, RuleFunction_item_declaration = 71, 
    RuleFunction_port_list = 72, RuleFunction_port = 73, RuleRange_or_type = 74, 
    RuleTask_declaration = 75, RuleTask_item_declaration = 76, RuleTask_port_list = 77, 
    RuleTask_port_item = 78, RuleTf_decl_header = 79, RuleTf_declaration = 80, 
    RuleTask_port_type = 81, RuleBlock_item_declaration = 82, RuleBlock_reg_declaration = 83, 
    RuleList_of_block_variable_identifiers = 84, RuleBlock_variable_type = 85, 
    RuleGate_instantiation = 86, RuleCmos_switch_instance = 87, RuleEnable_gate_instance = 88, 
    RuleMos_switch_instance = 89, RuleN_input_gate_instance = 90, RuleN_output_gate_instance = 91, 
    RulePass_switch_instance = 92, RulePass_enable_switch_instance = 93, 
    RulePull_gate_instance = 94, RuleName_of_gate_instance = 95, RulePulldown_strength = 96, 
    RulePullup_strength = 97, RuleEnable_terminal = 98, RuleNcontrol_terminal = 99, 
    RulePcontrol_terminal = 100, RuleInput_terminal = 101, RuleInout_terminal = 102, 
    RuleOutput_terminal = 103, RuleCmos_switchtype = 104, RuleEnable_gatetype = 105, 
    RuleMos_switchtype = 106, RuleN_input_gatetype = 107, RuleN_output_gatetype = 108, 
    RulePass_en_switchtype = 109, RulePass_switchtype = 110, RuleModule_instantiation = 111, 
    RuleParameter_value_assignment = 112, RuleList_of_parameter_assignments = 113, 
    RuleOrdered_parameter_assignment = 114, RuleNamed_parameter_assignment = 115, 
    RuleModule_instance = 116, RuleName_of_instance = 117, RuleList_of_port_connections = 118, 
    RuleOrdered_port_connection = 119, RuleNamed_port_connection = 120, 
    RuleGenerated_instantiation = 121, RuleGenerate_item_or_null = 122, 
    RuleGenerate_item = 123, RuleGenerate_conditional_statement = 124, RuleGenerate_case_statement = 125, 
    RuleGenvar_case_item = 126, RuleGenerate_loop_statement = 127, RuleGenvar_assignment = 128, 
    RuleGenerate_block = 129, RuleContinuous_assign = 130, RuleList_of_net_assignments = 131, 
    RuleNet_assignment = 132, RuleInitial_construct = 133, RuleAlways_construct = 134, 
    RuleBlocking_assignment = 135, RuleNonblocking_assignment = 136, RuleProcedural_continuous_assignments = 137, 
    RuleFunction_blocking_assignment = 138, RuleFunction_statement_or_null = 139, 
    RuleFunction_seq_block = 140, RuleVariable_assignment = 141, RulePar_block = 142, 
    RuleSeq_block = 143, RuleStatement = 144, RuleStatement_or_null = 145, 
    RuleFunction_statement = 146, RuleDelay_or_event_control = 147, RuleDelay_control = 148, 
    RuleDisable_statement = 149, RuleEvent_control = 150, RuleEvent_trigger = 151, 
    RuleEvent_expression = 152, RuleEvent_primary = 153, RuleProcedural_timing_control_statement = 154, 
    RuleWait_statement = 155, RuleConditional_statement = 156, RuleIf_else_if_statement = 157, 
    RuleFunction_conditional_statement = 158, RuleFunction_if_else_if_statement = 159, 
    RuleCase_statement = 160, RuleCase_item = 161, RuleFunction_case_statement = 162, 
    RuleFunction_case_item = 163, RuleFunction_loop_statement = 164, RuleLoop_statement = 165, 
    RuleSystem_task_enable = 166, RuleTask_enable = 167, RuleSpecify_block = 168, 
    RuleSpecify_item = 169, RulePulsestyle_declaration = 170, RuleShowcancelled_declaration = 171, 
    RulePath_declaration = 172, RuleSimple_path_declaration = 173, RuleParallel_path_description = 174, 
    RuleFull_path_description = 175, RuleList_of_path_inputs = 176, RuleList_of_path_outputs = 177, 
    RuleSpecify_input_terminal_descriptor = 178, RuleSpecify_output_terminal_descriptor = 179, 
    RuleInput_identifier = 180, RuleOutput_identifier = 181, RulePath_delay_value = 182, 
    RuleList_of_path_delay_expressions = 183, RuleT_path_delay_expression = 184, 
    RuleTrise_path_delay_expression = 185, RuleTfall_path_delay_expression = 186, 
    RuleTz_path_delay_expression = 187, RuleT01_path_delay_expression = 188, 
    RuleT10_path_delay_expression = 189, RuleT0z_path_delay_expression = 190, 
    RuleTz1_path_delay_expression = 191, RuleT1z_path_delay_expression = 192, 
    RuleTz0_path_delay_expression = 193, RuleT0x_path_delay_expression = 194, 
    RuleTx1_path_delay_expression = 195, RuleT1x_path_delay_expression = 196, 
    RuleTx0_path_delay_expression = 197, RuleTxz_path_delay_expression = 198, 
    RuleTzx_path_delay_expression = 199, RulePath_delay_expression = 200, 
    RuleEdge_sensitive_path_declaration = 201, RuleParallel_edge_sensitive_path_description = 202, 
    RuleFull_edge_sensitive_path_description = 203, RuleData_source_expression = 204, 
    RuleEdge_identifier = 205, RuleState_dependent_path_declaration = 206, 
    RulePolarity_operator = 207, RuleChecktime_condition = 208, RuleDelayed_data = 209, 
    RuleDelayed_reference = 210, RuleEnd_edge_offset = 211, RuleEvent_based_flag = 212, 
    RuleNotify_reg = 213, RuleRemain_active_flag = 214, RuleStamptime_condition = 215, 
    RuleStart_edge_offset = 216, RuleThreshold = 217, RuleTiming_check_limit = 218, 
    RuleConcatenation = 219, RuleConstant_concatenation = 220, RuleConstant_multiple_concatenation = 221, 
    RuleModule_path_concatenation = 222, RuleModule_path_multiple_concatenation = 223, 
    RuleMultiple_concatenation = 224, RuleNet_concatenation = 225, RuleNet_concatenation_value = 226, 
    RuleVariable_concatenation = 227, RuleVariable_concatenation_value = 228, 
    RuleConstant_function_call = 229, RuleFunction_call = 230, RuleSystem_function_call = 231, 
    RuleGenvar_function_call = 232, RuleBase_expression = 233, RuleConstant_base_expression = 234, 
    RuleConstant_expression = 235, RuleConstant_mintypmax_expression = 236, 
    RuleConstant_range_expression = 237, RuleDimension_constant_expression = 238, 
    RuleExpression = 239, RuleTerm = 240, RuleLsb_constant_expression = 241, 
    RuleMintypmax_expression = 242, RuleModule_path_conditional_expression = 243, 
    RuleModule_path_expression = 244, RuleModule_path_mintypmax_expression = 245, 
    RuleMsb_constant_expression = 246, RuleRange_expression = 247, RuleWidth_constant_expression = 248, 
    RuleConstant_primary = 249, RuleModule_path_primary = 250, RulePrimary = 251, 
    RuleNet_lvalue = 252, RuleVariable_lvalue = 253, RuleUnary_operator = 254, 
    RuleBinary_operator = 255, RuleUnary_module_path_operator = 256, RuleBinary_module_path_operator = 257, 
    RuleNumber = 258, RuleDefault_nettype_spec = 259, RuleTiming_spec = 260, 
    RuleAttribute_instance = 261, RuleAttr_spec = 262, RuleAttr_name = 263, 
    RuleArrayed_identifier = 264, RuleBlock_identifier = 265, RuleCell_identifier = 266, 
    RuleConfig_identifier = 267, RuleEscaped_arrayed_identifier = 268, RuleEscaped_hierarchical_identifier = 269, 
    RuleEvent_identifier = 270, RuleFunction_identifier = 271, RuleGate_instance_identifier = 272, 
    RuleGenerate_block_identifier = 273, RuleGenvar_function_identifier = 274, 
    RuleGenvar_identifier = 275, RuleHierarchical_block_identifier = 276, 
    RuleHierarchical_event_identifier = 277, RuleHierarchical_function_identifier = 278, 
    RuleHierarchical_identifier = 279, RuleHierarchical_net_identifier = 280, 
    RuleHierarchical_variable_identifier = 281, RuleHierarchical_task_identifier = 282, 
    RuleIdentifier = 283, RuleInout_port_identifier = 284, RuleInput_port_identifier = 285, 
    RuleInstance_identifier = 286, RuleLibrary_identifier = 287, RuleMemory_identifier = 288, 
    RuleModule_identifier = 289, RuleModule_instance_identifier = 290, RuleNet_identifier = 291, 
    RuleOutput_port_identifier = 292, RuleParameter_identifier = 293, RulePort_identifier = 294, 
    RuleReal_identifier = 295, RuleSimple_arrayed_identifier = 296, RuleSimple_hierarchical_identifier = 297, 
    RuleSpecparam_identifier = 298, RuleSystem_function_identifier = 299, 
    RuleSystem_task_identifier = 300, RuleTask_identifier = 301, RuleTerminal_identifier = 302, 
    RuleText_macro_identifier = 303, RuleTopmodule_identifier = 304, RuleUdp_identifier = 305, 
    RuleUdp_instance_identifier = 306, RuleVariable_identifier = 307, RuleSimple_hierarchical_branch = 308, 
    RuleEscaped_hierarchical_branch = 309
  };

  Verilog2001Parser(TokenStream *input);
  ~Verilog2001Parser();

  virtual std::string getGrammarFileName() const override;
  virtual const atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual dfa::Vocabulary& getVocabulary() const override;


  class Config_declarationContext;
  class Design_statementContext;
  class Config_rule_statementContext;
  class Default_clauseContext;
  class Inst_clauseContext;
  class Inst_nameContext;
  class Liblist_clauseContext;
  class Cell_clauseContext;
  class Use_clauseContext;
  class Source_textContext;
  class DescriptionContext;
  class Module_declarationContext;
  class Module_keywordContext;
  class Module_parameter_port_listContext;
  class List_of_portsContext;
  class List_of_port_declarationsContext;
  class PortContext;
  class Port_expressionContext;
  class Port_referenceContext;
  class Port_declarationContext;
  class Module_itemContext;
  class Module_or_generate_itemContext;
  class Non_port_module_itemContext;
  class Module_or_generate_item_declarationContext;
  class Parameter_overrideContext;
  class Local_parameter_declarationContext;
  class Parameter_declarationContext;
  class Parameter_declaration_Context;
  class Specparam_declarationContext;
  class Inout_declarationContext;
  class Input_declarationContext;
  class Output_declarationContext;
  class Event_declarationContext;
  class Genvar_declarationContext;
  class Integer_declarationContext;
  class Time_declarationContext;
  class Real_declarationContext;
  class Realtime_declarationContext;
  class Reg_declarationContext;
  class Net_declarationContext;
  class Net_typeContext;
  class Output_variable_typeContext;
  class Real_typeContext;
  class Variable_typeContext;
  class Drive_strengthContext;
  class Strength0Context;
  class Strength1Context;
  class Charge_strengthContext;
  class Delay3Context;
  class Delay2Context;
  class Delay_valueContext;
  class List_of_event_identifiersContext;
  class List_of_net_identifiersContext;
  class List_of_genvar_identifiersContext;
  class List_of_port_identifiersContext;
  class List_of_net_decl_assignmentsContext;
  class List_of_param_assignmentsContext;
  class List_of_specparam_assignmentsContext;
  class List_of_real_identifiersContext;
  class List_of_variable_identifiersContext;
  class List_of_variable_port_identifiersContext;
  class Net_decl_assignmentContext;
  class Param_assignmentContext;
  class Specparam_assignmentContext;
  class Pulse_control_specparamContext;
  class Error_limit_valueContext;
  class Reject_limit_valueContext;
  class Limit_valueContext;
  class DimensionContext;
  class RangeContext;
  class Function_declarationContext;
  class Function_item_declarationContext;
  class Function_port_listContext;
  class Function_portContext;
  class Range_or_typeContext;
  class Task_declarationContext;
  class Task_item_declarationContext;
  class Task_port_listContext;
  class Task_port_itemContext;
  class Tf_decl_headerContext;
  class Tf_declarationContext;
  class Task_port_typeContext;
  class Block_item_declarationContext;
  class Block_reg_declarationContext;
  class List_of_block_variable_identifiersContext;
  class Block_variable_typeContext;
  class Gate_instantiationContext;
  class Cmos_switch_instanceContext;
  class Enable_gate_instanceContext;
  class Mos_switch_instanceContext;
  class N_input_gate_instanceContext;
  class N_output_gate_instanceContext;
  class Pass_switch_instanceContext;
  class Pass_enable_switch_instanceContext;
  class Pull_gate_instanceContext;
  class Name_of_gate_instanceContext;
  class Pulldown_strengthContext;
  class Pullup_strengthContext;
  class Enable_terminalContext;
  class Ncontrol_terminalContext;
  class Pcontrol_terminalContext;
  class Input_terminalContext;
  class Inout_terminalContext;
  class Output_terminalContext;
  class Cmos_switchtypeContext;
  class Enable_gatetypeContext;
  class Mos_switchtypeContext;
  class N_input_gatetypeContext;
  class N_output_gatetypeContext;
  class Pass_en_switchtypeContext;
  class Pass_switchtypeContext;
  class Module_instantiationContext;
  class Parameter_value_assignmentContext;
  class List_of_parameter_assignmentsContext;
  class Ordered_parameter_assignmentContext;
  class Named_parameter_assignmentContext;
  class Module_instanceContext;
  class Name_of_instanceContext;
  class List_of_port_connectionsContext;
  class Ordered_port_connectionContext;
  class Named_port_connectionContext;
  class Generated_instantiationContext;
  class Generate_item_or_nullContext;
  class Generate_itemContext;
  class Generate_conditional_statementContext;
  class Generate_case_statementContext;
  class Genvar_case_itemContext;
  class Generate_loop_statementContext;
  class Genvar_assignmentContext;
  class Generate_blockContext;
  class Continuous_assignContext;
  class List_of_net_assignmentsContext;
  class Net_assignmentContext;
  class Initial_constructContext;
  class Always_constructContext;
  class Blocking_assignmentContext;
  class Nonblocking_assignmentContext;
  class Procedural_continuous_assignmentsContext;
  class Function_blocking_assignmentContext;
  class Function_statement_or_nullContext;
  class Function_seq_blockContext;
  class Variable_assignmentContext;
  class Par_blockContext;
  class Seq_blockContext;
  class StatementContext;
  class Statement_or_nullContext;
  class Function_statementContext;
  class Delay_or_event_controlContext;
  class Delay_controlContext;
  class Disable_statementContext;
  class Event_controlContext;
  class Event_triggerContext;
  class Event_expressionContext;
  class Event_primaryContext;
  class Procedural_timing_control_statementContext;
  class Wait_statementContext;
  class Conditional_statementContext;
  class If_else_if_statementContext;
  class Function_conditional_statementContext;
  class Function_if_else_if_statementContext;
  class Case_statementContext;
  class Case_itemContext;
  class Function_case_statementContext;
  class Function_case_itemContext;
  class Function_loop_statementContext;
  class Loop_statementContext;
  class System_task_enableContext;
  class Task_enableContext;
  class Specify_blockContext;
  class Specify_itemContext;
  class Pulsestyle_declarationContext;
  class Showcancelled_declarationContext;
  class Path_declarationContext;
  class Simple_path_declarationContext;
  class Parallel_path_descriptionContext;
  class Full_path_descriptionContext;
  class List_of_path_inputsContext;
  class List_of_path_outputsContext;
  class Specify_input_terminal_descriptorContext;
  class Specify_output_terminal_descriptorContext;
  class Input_identifierContext;
  class Output_identifierContext;
  class Path_delay_valueContext;
  class List_of_path_delay_expressionsContext;
  class T_path_delay_expressionContext;
  class Trise_path_delay_expressionContext;
  class Tfall_path_delay_expressionContext;
  class Tz_path_delay_expressionContext;
  class T01_path_delay_expressionContext;
  class T10_path_delay_expressionContext;
  class T0z_path_delay_expressionContext;
  class Tz1_path_delay_expressionContext;
  class T1z_path_delay_expressionContext;
  class Tz0_path_delay_expressionContext;
  class T0x_path_delay_expressionContext;
  class Tx1_path_delay_expressionContext;
  class T1x_path_delay_expressionContext;
  class Tx0_path_delay_expressionContext;
  class Txz_path_delay_expressionContext;
  class Tzx_path_delay_expressionContext;
  class Path_delay_expressionContext;
  class Edge_sensitive_path_declarationContext;
  class Parallel_edge_sensitive_path_descriptionContext;
  class Full_edge_sensitive_path_descriptionContext;
  class Data_source_expressionContext;
  class Edge_identifierContext;
  class State_dependent_path_declarationContext;
  class Polarity_operatorContext;
  class Checktime_conditionContext;
  class Delayed_dataContext;
  class Delayed_referenceContext;
  class End_edge_offsetContext;
  class Event_based_flagContext;
  class Notify_regContext;
  class Remain_active_flagContext;
  class Stamptime_conditionContext;
  class Start_edge_offsetContext;
  class ThresholdContext;
  class Timing_check_limitContext;
  class ConcatenationContext;
  class Constant_concatenationContext;
  class Constant_multiple_concatenationContext;
  class Module_path_concatenationContext;
  class Module_path_multiple_concatenationContext;
  class Multiple_concatenationContext;
  class Net_concatenationContext;
  class Net_concatenation_valueContext;
  class Variable_concatenationContext;
  class Variable_concatenation_valueContext;
  class Constant_function_callContext;
  class Function_callContext;
  class System_function_callContext;
  class Genvar_function_callContext;
  class Base_expressionContext;
  class Constant_base_expressionContext;
  class Constant_expressionContext;
  class Constant_mintypmax_expressionContext;
  class Constant_range_expressionContext;
  class Dimension_constant_expressionContext;
  class ExpressionContext;
  class TermContext;
  class Lsb_constant_expressionContext;
  class Mintypmax_expressionContext;
  class Module_path_conditional_expressionContext;
  class Module_path_expressionContext;
  class Module_path_mintypmax_expressionContext;
  class Msb_constant_expressionContext;
  class Range_expressionContext;
  class Width_constant_expressionContext;
  class Constant_primaryContext;
  class Module_path_primaryContext;
  class PrimaryContext;
  class Net_lvalueContext;
  class Variable_lvalueContext;
  class Unary_operatorContext;
  class Binary_operatorContext;
  class Unary_module_path_operatorContext;
  class Binary_module_path_operatorContext;
  class NumberContext;
  class Default_nettype_specContext;
  class Timing_specContext;
  class Attribute_instanceContext;
  class Attr_specContext;
  class Attr_nameContext;
  class Arrayed_identifierContext;
  class Block_identifierContext;
  class Cell_identifierContext;
  class Config_identifierContext;
  class Escaped_arrayed_identifierContext;
  class Escaped_hierarchical_identifierContext;
  class Event_identifierContext;
  class Function_identifierContext;
  class Gate_instance_identifierContext;
  class Generate_block_identifierContext;
  class Genvar_function_identifierContext;
  class Genvar_identifierContext;
  class Hierarchical_block_identifierContext;
  class Hierarchical_event_identifierContext;
  class Hierarchical_function_identifierContext;
  class Hierarchical_identifierContext;
  class Hierarchical_net_identifierContext;
  class Hierarchical_variable_identifierContext;
  class Hierarchical_task_identifierContext;
  class IdentifierContext;
  class Inout_port_identifierContext;
  class Input_port_identifierContext;
  class Instance_identifierContext;
  class Library_identifierContext;
  class Memory_identifierContext;
  class Module_identifierContext;
  class Module_instance_identifierContext;
  class Net_identifierContext;
  class Output_port_identifierContext;
  class Parameter_identifierContext;
  class Port_identifierContext;
  class Real_identifierContext;
  class Simple_arrayed_identifierContext;
  class Simple_hierarchical_identifierContext;
  class Specparam_identifierContext;
  class System_function_identifierContext;
  class System_task_identifierContext;
  class Task_identifierContext;
  class Terminal_identifierContext;
  class Text_macro_identifierContext;
  class Topmodule_identifierContext;
  class Udp_identifierContext;
  class Udp_instance_identifierContext;
  class Variable_identifierContext;
  class Simple_hierarchical_branchContext;
  class Escaped_hierarchical_branchContext; 

  class Config_declarationContext : public ParserRuleContext {
  public:
    Config_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Config_identifierContext *config_identifier();
    Design_statementContext *design_statement();
    std::vector<Config_rule_statementContext *> config_rule_statement();
    Config_rule_statementContext* config_rule_statement(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Config_declarationContext* config_declaration();

  class Design_statementContext : public ParserRuleContext {
  public:
    Design_statementContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Cell_identifierContext *> cell_identifier();
    Cell_identifierContext* cell_identifier(size_t i);
    std::vector<Library_identifierContext *> library_identifier();
    Library_identifierContext* library_identifier(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Design_statementContext* design_statement();

  class Config_rule_statementContext : public ParserRuleContext {
  public:
    Config_rule_statementContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Default_clauseContext *default_clause();
    Liblist_clauseContext *liblist_clause();
    Inst_clauseContext *inst_clause();
    Use_clauseContext *use_clause();
    Cell_clauseContext *cell_clause();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Config_rule_statementContext* config_rule_statement();

  class Default_clauseContext : public ParserRuleContext {
  public:
    Default_clauseContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Default_clauseContext* default_clause();

  class Inst_clauseContext : public ParserRuleContext {
  public:
    Inst_clauseContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Inst_nameContext *inst_name();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Inst_clauseContext* inst_clause();

  class Inst_nameContext : public ParserRuleContext {
  public:
    Inst_nameContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Topmodule_identifierContext *topmodule_identifier();
    std::vector<Instance_identifierContext *> instance_identifier();
    Instance_identifierContext* instance_identifier(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Inst_nameContext* inst_name();

  class Liblist_clauseContext : public ParserRuleContext {
  public:
    Liblist_clauseContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Library_identifierContext *> library_identifier();
    Library_identifierContext* library_identifier(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Liblist_clauseContext* liblist_clause();

  class Cell_clauseContext : public ParserRuleContext {
  public:
    Cell_clauseContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cell_identifierContext *cell_identifier();
    Library_identifierContext *library_identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Cell_clauseContext* cell_clause();

  class Use_clauseContext : public ParserRuleContext {
  public:
    Use_clauseContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cell_identifierContext *cell_identifier();
    Library_identifierContext *library_identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Use_clauseContext* use_clause();

  class Source_textContext : public ParserRuleContext {
  public:
    Source_textContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    tree::TerminalNode *EOF();
    Timing_specContext *timing_spec();
    std::vector<Default_nettype_specContext *> default_nettype_spec();
    Default_nettype_specContext* default_nettype_spec(size_t i);
    std::vector<DescriptionContext *> description();
    DescriptionContext* description(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Source_textContext* source_text();

  class DescriptionContext : public ParserRuleContext {
  public:
    DescriptionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_declarationContext *module_declaration();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  DescriptionContext* description();

  class Module_declarationContext : public ParserRuleContext {
  public:
    Module_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_keywordContext *module_keyword();
    Module_identifierContext *module_identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Module_parameter_port_listContext *module_parameter_port_list();
    List_of_portsContext *list_of_ports();
    std::vector<Module_itemContext *> module_item();
    Module_itemContext* module_item(size_t i);
    List_of_port_declarationsContext *list_of_port_declarations();
    std::vector<Non_port_module_itemContext *> non_port_module_item();
    Non_port_module_itemContext* non_port_module_item(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_declarationContext* module_declaration();

  class Module_keywordContext : public ParserRuleContext {
  public:
    Module_keywordContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_keywordContext* module_keyword();

  class Module_parameter_port_listContext : public ParserRuleContext {
  public:
    Module_parameter_port_listContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Parameter_declaration_Context *> parameter_declaration_();
    Parameter_declaration_Context* parameter_declaration_(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_parameter_port_listContext* module_parameter_port_list();

  class List_of_portsContext : public ParserRuleContext {
  public:
    List_of_portsContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PortContext *> port();
    PortContext* port(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_portsContext* list_of_ports();

  class List_of_port_declarationsContext : public ParserRuleContext {
  public:
    List_of_port_declarationsContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Port_declarationContext *> port_declaration();
    Port_declarationContext* port_declaration(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_port_declarationsContext* list_of_port_declarations();

  class PortContext : public ParserRuleContext {
  public:
    PortContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_expressionContext *port_expression();
    Port_identifierContext *port_identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  PortContext* port();

  class Port_expressionContext : public ParserRuleContext {
  public:
    Port_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Port_referenceContext *> port_reference();
    Port_referenceContext* port_reference(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Port_expressionContext* port_expression();

  class Port_referenceContext : public ParserRuleContext {
  public:
    Port_referenceContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_identifierContext *port_identifier();
    Constant_expressionContext *constant_expression();
    Range_expressionContext *range_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Port_referenceContext* port_reference();

  class Port_declarationContext : public ParserRuleContext {
  public:
    Port_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Inout_declarationContext *inout_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Input_declarationContext *input_declaration();
    Output_declarationContext *output_declaration();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Port_declarationContext* port_declaration();

  class Module_itemContext : public ParserRuleContext {
  public:
    Module_itemContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_or_generate_itemContext *module_or_generate_item();
    Port_declarationContext *port_declaration();
    Generated_instantiationContext *generated_instantiation();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Local_parameter_declarationContext *local_parameter_declaration();
    Parameter_declarationContext *parameter_declaration();
    Specify_blockContext *specify_block();
    Specparam_declarationContext *specparam_declaration();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_itemContext* module_item();

  class Module_or_generate_itemContext : public ParserRuleContext {
  public:
    Module_or_generate_itemContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_or_generate_item_declarationContext *module_or_generate_item_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Parameter_overrideContext *parameter_override();
    Continuous_assignContext *continuous_assign();
    Gate_instantiationContext *gate_instantiation();
    Module_instantiationContext *module_instantiation();
    Initial_constructContext *initial_construct();
    Always_constructContext *always_construct();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_or_generate_itemContext* module_or_generate_item();

  class Non_port_module_itemContext : public ParserRuleContext {
  public:
    Non_port_module_itemContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Generated_instantiationContext *generated_instantiation();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Local_parameter_declarationContext *local_parameter_declaration();
    Module_or_generate_itemContext *module_or_generate_item();
    Parameter_declarationContext *parameter_declaration();
    Specify_blockContext *specify_block();
    Specparam_declarationContext *specparam_declaration();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Non_port_module_itemContext* non_port_module_item();

  class Module_or_generate_item_declarationContext : public ParserRuleContext {
  public:
    Module_or_generate_item_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_declarationContext *net_declaration();
    Reg_declarationContext *reg_declaration();
    Integer_declarationContext *integer_declaration();
    Real_declarationContext *real_declaration();
    Time_declarationContext *time_declaration();
    Realtime_declarationContext *realtime_declaration();
    Event_declarationContext *event_declaration();
    Genvar_declarationContext *genvar_declaration();
    Task_declarationContext *task_declaration();
    Function_declarationContext *function_declaration();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_or_generate_item_declarationContext* module_or_generate_item_declaration();

  class Parameter_overrideContext : public ParserRuleContext {
  public:
    Parameter_overrideContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_param_assignmentsContext *list_of_param_assignments();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_overrideContext* parameter_override();

  class Local_parameter_declarationContext : public ParserRuleContext {
  public:
    Local_parameter_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_param_assignmentsContext *list_of_param_assignments();
    RangeContext *range();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Local_parameter_declarationContext* local_parameter_declaration();

  class Parameter_declarationContext : public ParserRuleContext {
  public:
    Parameter_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_declaration_Context *parameter_declaration_();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_declarationContext* parameter_declaration();

  class Parameter_declaration_Context : public ParserRuleContext {
  public:
    Parameter_declaration_Context(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_param_assignmentsContext *list_of_param_assignments();
    RangeContext *range();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_declaration_Context* parameter_declaration_();

  class Specparam_declarationContext : public ParserRuleContext {
  public:
    Specparam_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_specparam_assignmentsContext *list_of_specparam_assignments();
    RangeContext *range();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Specparam_declarationContext* specparam_declaration();

  class Inout_declarationContext : public ParserRuleContext {
  public:
    Inout_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_port_identifiersContext *list_of_port_identifiers();
    Net_typeContext *net_type();
    RangeContext *range();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Inout_declarationContext* inout_declaration();

  class Input_declarationContext : public ParserRuleContext {
  public:
    Input_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_port_identifiersContext *list_of_port_identifiers();
    Net_typeContext *net_type();
    RangeContext *range();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Input_declarationContext* input_declaration();

  class Output_declarationContext : public ParserRuleContext {
  public:
    Output_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_port_identifiersContext *list_of_port_identifiers();
    Net_typeContext *net_type();
    RangeContext *range();
    List_of_variable_port_identifiersContext *list_of_variable_port_identifiers();
    Output_variable_typeContext *output_variable_type();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_declarationContext* output_declaration();

  class Event_declarationContext : public ParserRuleContext {
  public:
    Event_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_event_identifiersContext *list_of_event_identifiers();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_declarationContext* event_declaration();

  class Genvar_declarationContext : public ParserRuleContext {
  public:
    Genvar_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_genvar_identifiersContext *list_of_genvar_identifiers();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Genvar_declarationContext* genvar_declaration();

  class Integer_declarationContext : public ParserRuleContext {
  public:
    Integer_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_variable_identifiersContext *list_of_variable_identifiers();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Integer_declarationContext* integer_declaration();

  class Time_declarationContext : public ParserRuleContext {
  public:
    Time_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_variable_identifiersContext *list_of_variable_identifiers();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Time_declarationContext* time_declaration();

  class Real_declarationContext : public ParserRuleContext {
  public:
    Real_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_real_identifiersContext *list_of_real_identifiers();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Real_declarationContext* real_declaration();

  class Realtime_declarationContext : public ParserRuleContext {
  public:
    Realtime_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_real_identifiersContext *list_of_real_identifiers();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Realtime_declarationContext* realtime_declaration();

  class Reg_declarationContext : public ParserRuleContext {
  public:
    Reg_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_variable_identifiersContext *list_of_variable_identifiers();
    RangeContext *range();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Reg_declarationContext* reg_declaration();

  class Net_declarationContext : public ParserRuleContext {
  public:
    Net_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_typeContext *net_type();
    List_of_net_identifiersContext *list_of_net_identifiers();
    Delay3Context *delay3();
    List_of_net_decl_assignmentsContext *list_of_net_decl_assignments();
    Drive_strengthContext *drive_strength();
    Charge_strengthContext *charge_strength();
    RangeContext *range();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_declarationContext* net_declaration();

  class Net_typeContext : public ParserRuleContext {
  public:
    Net_typeContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_typeContext* net_type();

  class Output_variable_typeContext : public ParserRuleContext {
  public:
    Output_variable_typeContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_variable_typeContext* output_variable_type();

  class Real_typeContext : public ParserRuleContext {
  public:
    Real_typeContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Real_identifierContext *real_identifier();
    Constant_expressionContext *constant_expression();
    std::vector<DimensionContext *> dimension();
    DimensionContext* dimension(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Real_typeContext* real_type();

  class Variable_typeContext : public ParserRuleContext {
  public:
    Variable_typeContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_identifierContext *variable_identifier();
    Constant_expressionContext *constant_expression();
    std::vector<DimensionContext *> dimension();
    DimensionContext* dimension(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_typeContext* variable_type();

  class Drive_strengthContext : public ParserRuleContext {
  public:
    Drive_strengthContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Strength0Context *strength0();
    Strength1Context *strength1();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Drive_strengthContext* drive_strength();

  class Strength0Context : public ParserRuleContext {
  public:
    Strength0Context(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Strength0Context* strength0();

  class Strength1Context : public ParserRuleContext {
  public:
    Strength1Context(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Strength1Context* strength1();

  class Charge_strengthContext : public ParserRuleContext {
  public:
    Charge_strengthContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Charge_strengthContext* charge_strength();

  class Delay3Context : public ParserRuleContext {
  public:
    Delay3Context(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Delay_valueContext *> delay_value();
    Delay_valueContext* delay_value(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Delay3Context* delay3();

  class Delay2Context : public ParserRuleContext {
  public:
    Delay2Context(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Delay_valueContext *> delay_value();
    Delay_valueContext* delay_value(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Delay2Context* delay2();

  class Delay_valueContext : public ParserRuleContext {
  public:
    Delay_valueContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    tree::TerminalNode *Decimal_number();
    Parameter_identifierContext *parameter_identifier();
    Specparam_identifierContext *specparam_identifier();
    Mintypmax_expressionContext *mintypmax_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Delay_valueContext* delay_value();

  class List_of_event_identifiersContext : public ParserRuleContext {
  public:
    List_of_event_identifiersContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Event_identifierContext *> event_identifier();
    Event_identifierContext* event_identifier(size_t i);
    std::vector<DimensionContext *> dimension();
    DimensionContext* dimension(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_event_identifiersContext* list_of_event_identifiers();

  class List_of_net_identifiersContext : public ParserRuleContext {
  public:
    List_of_net_identifiersContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Net_identifierContext *> net_identifier();
    Net_identifierContext* net_identifier(size_t i);
    std::vector<DimensionContext *> dimension();
    DimensionContext* dimension(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_net_identifiersContext* list_of_net_identifiers();

  class List_of_genvar_identifiersContext : public ParserRuleContext {
  public:
    List_of_genvar_identifiersContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Genvar_identifierContext *> genvar_identifier();
    Genvar_identifierContext* genvar_identifier(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_genvar_identifiersContext* list_of_genvar_identifiers();

  class List_of_port_identifiersContext : public ParserRuleContext {
  public:
    List_of_port_identifiersContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Port_identifierContext *> port_identifier();
    Port_identifierContext* port_identifier(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_port_identifiersContext* list_of_port_identifiers();

  class List_of_net_decl_assignmentsContext : public ParserRuleContext {
  public:
    List_of_net_decl_assignmentsContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Net_decl_assignmentContext *> net_decl_assignment();
    Net_decl_assignmentContext* net_decl_assignment(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_net_decl_assignmentsContext* list_of_net_decl_assignments();

  class List_of_param_assignmentsContext : public ParserRuleContext {
  public:
    List_of_param_assignmentsContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Param_assignmentContext *> param_assignment();
    Param_assignmentContext* param_assignment(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_param_assignmentsContext* list_of_param_assignments();

  class List_of_specparam_assignmentsContext : public ParserRuleContext {
  public:
    List_of_specparam_assignmentsContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Specparam_assignmentContext *> specparam_assignment();
    Specparam_assignmentContext* specparam_assignment(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_specparam_assignmentsContext* list_of_specparam_assignments();

  class List_of_real_identifiersContext : public ParserRuleContext {
  public:
    List_of_real_identifiersContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Real_typeContext *> real_type();
    Real_typeContext* real_type(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_real_identifiersContext* list_of_real_identifiers();

  class List_of_variable_identifiersContext : public ParserRuleContext {
  public:
    List_of_variable_identifiersContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Variable_typeContext *> variable_type();
    Variable_typeContext* variable_type(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_variable_identifiersContext* list_of_variable_identifiers();

  class List_of_variable_port_identifiersContext : public ParserRuleContext {
  public:
    List_of_variable_port_identifiersContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Port_identifierContext *> port_identifier();
    Port_identifierContext* port_identifier(size_t i);
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_variable_port_identifiersContext* list_of_variable_port_identifiers();

  class Net_decl_assignmentContext : public ParserRuleContext {
  public:
    Net_decl_assignmentContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_identifierContext *net_identifier();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_decl_assignmentContext* net_decl_assignment();

  class Param_assignmentContext : public ParserRuleContext {
  public:
    Param_assignmentContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_identifierContext *parameter_identifier();
    Constant_expressionContext *constant_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_assignmentContext* param_assignment();

  class Specparam_assignmentContext : public ParserRuleContext {
  public:
    Specparam_assignmentContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Specparam_identifierContext *specparam_identifier();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();
    Pulse_control_specparamContext *pulse_control_specparam();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Specparam_assignmentContext* specparam_assignment();

  class Pulse_control_specparamContext : public ParserRuleContext {
  public:
    Pulse_control_specparamContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Reject_limit_valueContext *reject_limit_value();
    Error_limit_valueContext *error_limit_value();
    Specify_input_terminal_descriptorContext *specify_input_terminal_descriptor();
    Specify_output_terminal_descriptorContext *specify_output_terminal_descriptor();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Pulse_control_specparamContext* pulse_control_specparam();

  class Error_limit_valueContext : public ParserRuleContext {
  public:
    Error_limit_valueContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Limit_valueContext *limit_value();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Error_limit_valueContext* error_limit_value();

  class Reject_limit_valueContext : public ParserRuleContext {
  public:
    Reject_limit_valueContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Limit_valueContext *limit_value();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Reject_limit_valueContext* reject_limit_value();

  class Limit_valueContext : public ParserRuleContext {
  public:
    Limit_valueContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Limit_valueContext* limit_value();

  class DimensionContext : public ParserRuleContext {
  public:
    DimensionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Dimension_constant_expressionContext *> dimension_constant_expression();
    Dimension_constant_expressionContext* dimension_constant_expression(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  DimensionContext* dimension();

  class RangeContext : public ParserRuleContext {
  public:
    RangeContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Msb_constant_expressionContext *msb_constant_expression();
    Lsb_constant_expressionContext *lsb_constant_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  RangeContext* range();

  class Function_declarationContext : public ParserRuleContext {
  public:
    Function_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_identifierContext *function_identifier();
    Range_or_typeContext *range_or_type();
    std::vector<Function_item_declarationContext *> function_item_declaration();
    Function_item_declarationContext* function_item_declaration(size_t i);
    Function_statementContext *function_statement();
    Function_port_listContext *function_port_list();
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_declarationContext* function_declaration();

  class Function_item_declarationContext : public ParserRuleContext {
  public:
    Function_item_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Block_item_declarationContext *block_item_declaration();
    Tf_declarationContext *tf_declaration();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_item_declarationContext* function_item_declaration();

  class Function_port_listContext : public ParserRuleContext {
  public:
    Function_port_listContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Function_portContext *> function_port();
    Function_portContext* function_port(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_port_listContext* function_port_list();

  class Function_portContext : public ParserRuleContext {
  public:
    Function_portContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tf_declarationContext *tf_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_portContext* function_port();

  class Range_or_typeContext : public ParserRuleContext {
  public:
    Range_or_typeContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RangeContext *range();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Range_or_typeContext* range_or_type();

  class Task_declarationContext : public ParserRuleContext {
  public:
    Task_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Task_identifierContext *task_identifier();
    StatementContext *statement();
    std::vector<Task_item_declarationContext *> task_item_declaration();
    Task_item_declarationContext* task_item_declaration(size_t i);
    Task_port_listContext *task_port_list();
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Task_declarationContext* task_declaration();

  class Task_item_declarationContext : public ParserRuleContext {
  public:
    Task_item_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Block_item_declarationContext *block_item_declaration();
    Tf_declarationContext *tf_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Task_item_declarationContext* task_item_declaration();

  class Task_port_listContext : public ParserRuleContext {
  public:
    Task_port_listContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Task_port_itemContext *> task_port_item();
    Task_port_itemContext* task_port_item(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Task_port_listContext* task_port_list();

  class Task_port_itemContext : public ParserRuleContext {
  public:
    Task_port_itemContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tf_declarationContext *tf_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Task_port_itemContext* task_port_item();

  class Tf_decl_headerContext : public ParserRuleContext {
  public:
    Tf_decl_headerContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_typeContext *net_type();
    RangeContext *range();
    Task_port_typeContext *task_port_type();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Tf_decl_headerContext* tf_decl_header();

  class Tf_declarationContext : public ParserRuleContext {
  public:
    Tf_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tf_decl_headerContext *tf_decl_header();
    List_of_port_identifiersContext *list_of_port_identifiers();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Tf_declarationContext* tf_declaration();

  class Task_port_typeContext : public ParserRuleContext {
  public:
    Task_port_typeContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Task_port_typeContext* task_port_type();

  class Block_item_declarationContext : public ParserRuleContext {
  public:
    Block_item_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Block_reg_declarationContext *block_reg_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Event_declarationContext *event_declaration();
    Integer_declarationContext *integer_declaration();
    Local_parameter_declarationContext *local_parameter_declaration();
    Parameter_declarationContext *parameter_declaration();
    Real_declarationContext *real_declaration();
    Realtime_declarationContext *realtime_declaration();
    Time_declarationContext *time_declaration();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_item_declarationContext* block_item_declaration();

  class Block_reg_declarationContext : public ParserRuleContext {
  public:
    Block_reg_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_block_variable_identifiersContext *list_of_block_variable_identifiers();
    RangeContext *range();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_reg_declarationContext* block_reg_declaration();

  class List_of_block_variable_identifiersContext : public ParserRuleContext {
  public:
    List_of_block_variable_identifiersContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Block_variable_typeContext *> block_variable_type();
    Block_variable_typeContext* block_variable_type(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_block_variable_identifiersContext* list_of_block_variable_identifiers();

  class Block_variable_typeContext : public ParserRuleContext {
  public:
    Block_variable_typeContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_identifierContext *variable_identifier();
    std::vector<DimensionContext *> dimension();
    DimensionContext* dimension(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_variable_typeContext* block_variable_type();

  class Gate_instantiationContext : public ParserRuleContext {
  public:
    Gate_instantiationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cmos_switchtypeContext *cmos_switchtype();
    std::vector<Cmos_switch_instanceContext *> cmos_switch_instance();
    Cmos_switch_instanceContext* cmos_switch_instance(size_t i);
    Delay3Context *delay3();
    Mos_switchtypeContext *mos_switchtype();
    std::vector<Mos_switch_instanceContext *> mos_switch_instance();
    Mos_switch_instanceContext* mos_switch_instance(size_t i);
    Pass_switchtypeContext *pass_switchtype();
    std::vector<Pass_switch_instanceContext *> pass_switch_instance();
    Pass_switch_instanceContext* pass_switch_instance(size_t i);
    std::vector<Pull_gate_instanceContext *> pull_gate_instance();
    Pull_gate_instanceContext* pull_gate_instance(size_t i);
    Pulldown_strengthContext *pulldown_strength();
    Pullup_strengthContext *pullup_strength();
    Enable_gatetypeContext *enable_gatetype();
    std::vector<Enable_gate_instanceContext *> enable_gate_instance();
    Enable_gate_instanceContext* enable_gate_instance(size_t i);
    Drive_strengthContext *drive_strength();
    N_input_gatetypeContext *n_input_gatetype();
    std::vector<N_input_gate_instanceContext *> n_input_gate_instance();
    N_input_gate_instanceContext* n_input_gate_instance(size_t i);
    Delay2Context *delay2();
    N_output_gatetypeContext *n_output_gatetype();
    std::vector<N_output_gate_instanceContext *> n_output_gate_instance();
    N_output_gate_instanceContext* n_output_gate_instance(size_t i);
    Pass_en_switchtypeContext *pass_en_switchtype();
    std::vector<Pass_enable_switch_instanceContext *> pass_enable_switch_instance();
    Pass_enable_switch_instanceContext* pass_enable_switch_instance(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Gate_instantiationContext* gate_instantiation();

  class Cmos_switch_instanceContext : public ParserRuleContext {
  public:
    Cmos_switch_instanceContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Output_terminalContext *output_terminal();
    Input_terminalContext *input_terminal();
    Ncontrol_terminalContext *ncontrol_terminal();
    Pcontrol_terminalContext *pcontrol_terminal();
    Name_of_gate_instanceContext *name_of_gate_instance();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Cmos_switch_instanceContext* cmos_switch_instance();

  class Enable_gate_instanceContext : public ParserRuleContext {
  public:
    Enable_gate_instanceContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Output_terminalContext *output_terminal();
    Input_terminalContext *input_terminal();
    Enable_terminalContext *enable_terminal();
    Name_of_gate_instanceContext *name_of_gate_instance();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Enable_gate_instanceContext* enable_gate_instance();

  class Mos_switch_instanceContext : public ParserRuleContext {
  public:
    Mos_switch_instanceContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Output_terminalContext *output_terminal();
    Input_terminalContext *input_terminal();
    Enable_terminalContext *enable_terminal();
    Name_of_gate_instanceContext *name_of_gate_instance();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Mos_switch_instanceContext* mos_switch_instance();

  class N_input_gate_instanceContext : public ParserRuleContext {
  public:
    N_input_gate_instanceContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Output_terminalContext *output_terminal();
    std::vector<Input_terminalContext *> input_terminal();
    Input_terminalContext* input_terminal(size_t i);
    Name_of_gate_instanceContext *name_of_gate_instance();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  N_input_gate_instanceContext* n_input_gate_instance();

  class N_output_gate_instanceContext : public ParserRuleContext {
  public:
    N_output_gate_instanceContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Output_terminalContext *> output_terminal();
    Output_terminalContext* output_terminal(size_t i);
    Input_terminalContext *input_terminal();
    Name_of_gate_instanceContext *name_of_gate_instance();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  N_output_gate_instanceContext* n_output_gate_instance();

  class Pass_switch_instanceContext : public ParserRuleContext {
  public:
    Pass_switch_instanceContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Inout_terminalContext *> inout_terminal();
    Inout_terminalContext* inout_terminal(size_t i);
    Name_of_gate_instanceContext *name_of_gate_instance();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Pass_switch_instanceContext* pass_switch_instance();

  class Pass_enable_switch_instanceContext : public ParserRuleContext {
  public:
    Pass_enable_switch_instanceContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Inout_terminalContext *> inout_terminal();
    Inout_terminalContext* inout_terminal(size_t i);
    Enable_terminalContext *enable_terminal();
    Name_of_gate_instanceContext *name_of_gate_instance();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Pass_enable_switch_instanceContext* pass_enable_switch_instance();

  class Pull_gate_instanceContext : public ParserRuleContext {
  public:
    Pull_gate_instanceContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Output_terminalContext *output_terminal();
    Name_of_gate_instanceContext *name_of_gate_instance();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Pull_gate_instanceContext* pull_gate_instance();

  class Name_of_gate_instanceContext : public ParserRuleContext {
  public:
    Name_of_gate_instanceContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Gate_instance_identifierContext *gate_instance_identifier();
    RangeContext *range();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Name_of_gate_instanceContext* name_of_gate_instance();

  class Pulldown_strengthContext : public ParserRuleContext {
  public:
    Pulldown_strengthContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Strength0Context *strength0();
    Strength1Context *strength1();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Pulldown_strengthContext* pulldown_strength();

  class Pullup_strengthContext : public ParserRuleContext {
  public:
    Pullup_strengthContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Strength0Context *strength0();
    Strength1Context *strength1();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Pullup_strengthContext* pullup_strength();

  class Enable_terminalContext : public ParserRuleContext {
  public:
    Enable_terminalContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Enable_terminalContext* enable_terminal();

  class Ncontrol_terminalContext : public ParserRuleContext {
  public:
    Ncontrol_terminalContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Ncontrol_terminalContext* ncontrol_terminal();

  class Pcontrol_terminalContext : public ParserRuleContext {
  public:
    Pcontrol_terminalContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Pcontrol_terminalContext* pcontrol_terminal();

  class Input_terminalContext : public ParserRuleContext {
  public:
    Input_terminalContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Input_terminalContext* input_terminal();

  class Inout_terminalContext : public ParserRuleContext {
  public:
    Inout_terminalContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_lvalueContext *net_lvalue();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Inout_terminalContext* inout_terminal();

  class Output_terminalContext : public ParserRuleContext {
  public:
    Output_terminalContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_lvalueContext *net_lvalue();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_terminalContext* output_terminal();

  class Cmos_switchtypeContext : public ParserRuleContext {
  public:
    Cmos_switchtypeContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Cmos_switchtypeContext* cmos_switchtype();

  class Enable_gatetypeContext : public ParserRuleContext {
  public:
    Enable_gatetypeContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Enable_gatetypeContext* enable_gatetype();

  class Mos_switchtypeContext : public ParserRuleContext {
  public:
    Mos_switchtypeContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Mos_switchtypeContext* mos_switchtype();

  class N_input_gatetypeContext : public ParserRuleContext {
  public:
    N_input_gatetypeContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  N_input_gatetypeContext* n_input_gatetype();

  class N_output_gatetypeContext : public ParserRuleContext {
  public:
    N_output_gatetypeContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  N_output_gatetypeContext* n_output_gatetype();

  class Pass_en_switchtypeContext : public ParserRuleContext {
  public:
    Pass_en_switchtypeContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Pass_en_switchtypeContext* pass_en_switchtype();

  class Pass_switchtypeContext : public ParserRuleContext {
  public:
    Pass_switchtypeContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Pass_switchtypeContext* pass_switchtype();

  class Module_instantiationContext : public ParserRuleContext {
  public:
    Module_instantiationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_identifierContext *module_identifier();
    std::vector<Module_instanceContext *> module_instance();
    Module_instanceContext* module_instance(size_t i);
    Parameter_value_assignmentContext *parameter_value_assignment();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_instantiationContext* module_instantiation();

  class Parameter_value_assignmentContext : public ParserRuleContext {
  public:
    Parameter_value_assignmentContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_parameter_assignmentsContext *list_of_parameter_assignments();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_value_assignmentContext* parameter_value_assignment();

  class List_of_parameter_assignmentsContext : public ParserRuleContext {
  public:
    List_of_parameter_assignmentsContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ordered_parameter_assignmentContext *> ordered_parameter_assignment();
    Ordered_parameter_assignmentContext* ordered_parameter_assignment(size_t i);
    std::vector<Named_parameter_assignmentContext *> named_parameter_assignment();
    Named_parameter_assignmentContext* named_parameter_assignment(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_parameter_assignmentsContext* list_of_parameter_assignments();

  class Ordered_parameter_assignmentContext : public ParserRuleContext {
  public:
    Ordered_parameter_assignmentContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Ordered_parameter_assignmentContext* ordered_parameter_assignment();

  class Named_parameter_assignmentContext : public ParserRuleContext {
  public:
    Named_parameter_assignmentContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_identifierContext *parameter_identifier();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Named_parameter_assignmentContext* named_parameter_assignment();

  class Module_instanceContext : public ParserRuleContext {
  public:
    Module_instanceContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Name_of_instanceContext *name_of_instance();
    List_of_port_connectionsContext *list_of_port_connections();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_instanceContext* module_instance();

  class Name_of_instanceContext : public ParserRuleContext {
  public:
    Name_of_instanceContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_instance_identifierContext *module_instance_identifier();
    RangeContext *range();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Name_of_instanceContext* name_of_instance();

  class List_of_port_connectionsContext : public ParserRuleContext {
  public:
    List_of_port_connectionsContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ordered_port_connectionContext *> ordered_port_connection();
    Ordered_port_connectionContext* ordered_port_connection(size_t i);
    std::vector<Named_port_connectionContext *> named_port_connection();
    Named_port_connectionContext* named_port_connection(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_port_connectionsContext* list_of_port_connections();

  class Ordered_port_connectionContext : public ParserRuleContext {
  public:
    Ordered_port_connectionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Ordered_port_connectionContext* ordered_port_connection();

  class Named_port_connectionContext : public ParserRuleContext {
  public:
    Named_port_connectionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_identifierContext *port_identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Named_port_connectionContext* named_port_connection();

  class Generated_instantiationContext : public ParserRuleContext {
  public:
    Generated_instantiationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Generate_itemContext *> generate_item();
    Generate_itemContext* generate_item(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Generated_instantiationContext* generated_instantiation();

  class Generate_item_or_nullContext : public ParserRuleContext {
  public:
    Generate_item_or_nullContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Generate_itemContext *generate_item();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_item_or_nullContext* generate_item_or_null();

  class Generate_itemContext : public ParserRuleContext {
  public:
    Generate_itemContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Generate_conditional_statementContext *generate_conditional_statement();
    Generate_case_statementContext *generate_case_statement();
    Generate_loop_statementContext *generate_loop_statement();
    Generate_blockContext *generate_block();
    Module_or_generate_itemContext *module_or_generate_item();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_itemContext* generate_item();

  class Generate_conditional_statementContext : public ParserRuleContext {
  public:
    Generate_conditional_statementContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();
    std::vector<Generate_item_or_nullContext *> generate_item_or_null();
    Generate_item_or_nullContext* generate_item_or_null(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_conditional_statementContext* generate_conditional_statement();

  class Generate_case_statementContext : public ParserRuleContext {
  public:
    Generate_case_statementContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();
    std::vector<Genvar_case_itemContext *> genvar_case_item();
    Genvar_case_itemContext* genvar_case_item(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_case_statementContext* generate_case_statement();

  class Genvar_case_itemContext : public ParserRuleContext {
  public:
    Genvar_case_itemContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    Generate_item_or_nullContext *generate_item_or_null();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Genvar_case_itemContext* genvar_case_item();

  class Generate_loop_statementContext : public ParserRuleContext {
  public:
    Generate_loop_statementContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Genvar_assignmentContext *> genvar_assignment();
    Genvar_assignmentContext* genvar_assignment(size_t i);
    Constant_expressionContext *constant_expression();
    Generate_blockContext *generate_block();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_loop_statementContext* generate_loop_statement();

  class Genvar_assignmentContext : public ParserRuleContext {
  public:
    Genvar_assignmentContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Genvar_identifierContext *genvar_identifier();
    Constant_expressionContext *constant_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Genvar_assignmentContext* genvar_assignment();

  class Generate_blockContext : public ParserRuleContext {
  public:
    Generate_blockContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Generate_block_identifierContext *generate_block_identifier();
    std::vector<Generate_itemContext *> generate_item();
    Generate_itemContext* generate_item(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_blockContext* generate_block();

  class Continuous_assignContext : public ParserRuleContext {
  public:
    Continuous_assignContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_net_assignmentsContext *list_of_net_assignments();
    Drive_strengthContext *drive_strength();
    Delay3Context *delay3();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Continuous_assignContext* continuous_assign();

  class List_of_net_assignmentsContext : public ParserRuleContext {
  public:
    List_of_net_assignmentsContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Net_assignmentContext *> net_assignment();
    Net_assignmentContext* net_assignment(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_net_assignmentsContext* list_of_net_assignments();

  class Net_assignmentContext : public ParserRuleContext {
  public:
    Net_assignmentContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_lvalueContext *net_lvalue();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_assignmentContext* net_assignment();

  class Initial_constructContext : public ParserRuleContext {
  public:
    Initial_constructContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Initial_constructContext* initial_construct();

  class Always_constructContext : public ParserRuleContext {
  public:
    Always_constructContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Always_constructContext* always_construct();

  class Blocking_assignmentContext : public ParserRuleContext {
  public:
    Blocking_assignmentContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_lvalueContext *variable_lvalue();
    ExpressionContext *expression();
    Delay_or_event_controlContext *delay_or_event_control();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Blocking_assignmentContext* blocking_assignment();

  class Nonblocking_assignmentContext : public ParserRuleContext {
  public:
    Nonblocking_assignmentContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_lvalueContext *variable_lvalue();
    ExpressionContext *expression();
    Delay_or_event_controlContext *delay_or_event_control();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Nonblocking_assignmentContext* nonblocking_assignment();

  class Procedural_continuous_assignmentsContext : public ParserRuleContext {
  public:
    Procedural_continuous_assignmentsContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_assignmentContext *variable_assignment();
    Variable_lvalueContext *variable_lvalue();
    Net_assignmentContext *net_assignment();
    Net_lvalueContext *net_lvalue();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedural_continuous_assignmentsContext* procedural_continuous_assignments();

  class Function_blocking_assignmentContext : public ParserRuleContext {
  public:
    Function_blocking_assignmentContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_lvalueContext *variable_lvalue();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_blocking_assignmentContext* function_blocking_assignment();

  class Function_statement_or_nullContext : public ParserRuleContext {
  public:
    Function_statement_or_nullContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_statementContext *function_statement();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_statement_or_nullContext* function_statement_or_null();

  class Function_seq_blockContext : public ParserRuleContext {
  public:
    Function_seq_blockContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Block_identifierContext *block_identifier();
    std::vector<Function_statementContext *> function_statement();
    Function_statementContext* function_statement(size_t i);
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_seq_blockContext* function_seq_block();

  class Variable_assignmentContext : public ParserRuleContext {
  public:
    Variable_assignmentContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_lvalueContext *variable_lvalue();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_assignmentContext* variable_assignment();

  class Par_blockContext : public ParserRuleContext {
  public:
    Par_blockContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Block_identifierContext *block_identifier();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Par_blockContext* par_block();

  class Seq_blockContext : public ParserRuleContext {
  public:
    Seq_blockContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Block_identifierContext *block_identifier();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Seq_blockContext* seq_block();

  class StatementContext : public ParserRuleContext {
  public:
    StatementContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Blocking_assignmentContext *blocking_assignment();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Case_statementContext *case_statement();
    Conditional_statementContext *conditional_statement();
    Disable_statementContext *disable_statement();
    Event_triggerContext *event_trigger();
    Loop_statementContext *loop_statement();
    Nonblocking_assignmentContext *nonblocking_assignment();
    Par_blockContext *par_block();
    Procedural_continuous_assignmentsContext *procedural_continuous_assignments();
    Procedural_timing_control_statementContext *procedural_timing_control_statement();
    Seq_blockContext *seq_block();
    System_task_enableContext *system_task_enable();
    Task_enableContext *task_enable();
    Wait_statementContext *wait_statement();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class Statement_or_nullContext : public ParserRuleContext {
  public:
    Statement_or_nullContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_or_nullContext* statement_or_null();

  class Function_statementContext : public ParserRuleContext {
  public:
    Function_statementContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_blocking_assignmentContext *function_blocking_assignment();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Function_case_statementContext *function_case_statement();
    Function_conditional_statementContext *function_conditional_statement();
    Function_loop_statementContext *function_loop_statement();
    Function_seq_blockContext *function_seq_block();
    Disable_statementContext *disable_statement();
    System_task_enableContext *system_task_enable();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_statementContext* function_statement();

  class Delay_or_event_controlContext : public ParserRuleContext {
  public:
    Delay_or_event_controlContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Delay_controlContext *delay_control();
    Event_controlContext *event_control();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Delay_or_event_controlContext* delay_or_event_control();

  class Delay_controlContext : public ParserRuleContext {
  public:
    Delay_controlContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Delay_valueContext *delay_value();
    Mintypmax_expressionContext *mintypmax_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Delay_controlContext* delay_control();

  class Disable_statementContext : public ParserRuleContext {
  public:
    Disable_statementContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_task_identifierContext *hierarchical_task_identifier();
    Hierarchical_block_identifierContext *hierarchical_block_identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Disable_statementContext* disable_statement();

  class Event_controlContext : public ParserRuleContext {
  public:
    Event_controlContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Event_identifierContext *event_identifier();
    Event_expressionContext *event_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_controlContext* event_control();

  class Event_triggerContext : public ParserRuleContext {
  public:
    Event_triggerContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_event_identifierContext *hierarchical_event_identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_triggerContext* event_trigger();

  class Event_expressionContext : public ParserRuleContext {
  public:
    Event_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Event_primaryContext *> event_primary();
    Event_primaryContext* event_primary(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_expressionContext* event_expression();

  class Event_primaryContext : public ParserRuleContext {
  public:
    Event_primaryContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_primaryContext* event_primary();

  class Procedural_timing_control_statementContext : public ParserRuleContext {
  public:
    Procedural_timing_control_statementContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Delay_or_event_controlContext *delay_or_event_control();
    Statement_or_nullContext *statement_or_null();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedural_timing_control_statementContext* procedural_timing_control_statement();

  class Wait_statementContext : public ParserRuleContext {
  public:
    Wait_statementContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Statement_or_nullContext *statement_or_null();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Wait_statementContext* wait_statement();

  class Conditional_statementContext : public ParserRuleContext {
  public:
    Conditional_statementContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    std::vector<Statement_or_nullContext *> statement_or_null();
    Statement_or_nullContext* statement_or_null(size_t i);
    If_else_if_statementContext *if_else_if_statement();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Conditional_statementContext* conditional_statement();

  class If_else_if_statementContext : public ParserRuleContext {
  public:
    If_else_if_statementContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<Statement_or_nullContext *> statement_or_null();
    Statement_or_nullContext* statement_or_null(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  If_else_if_statementContext* if_else_if_statement();

  class Function_conditional_statementContext : public ParserRuleContext {
  public:
    Function_conditional_statementContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    std::vector<Function_statement_or_nullContext *> function_statement_or_null();
    Function_statement_or_nullContext* function_statement_or_null(size_t i);
    Function_if_else_if_statementContext *function_if_else_if_statement();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_conditional_statementContext* function_conditional_statement();

  class Function_if_else_if_statementContext : public ParserRuleContext {
  public:
    Function_if_else_if_statementContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<Function_statement_or_nullContext *> function_statement_or_null();
    Function_statement_or_nullContext* function_statement_or_null(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_if_else_if_statementContext* function_if_else_if_statement();

  class Case_statementContext : public ParserRuleContext {
  public:
    Case_statementContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    std::vector<Case_itemContext *> case_item();
    Case_itemContext* case_item(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_statementContext* case_statement();

  class Case_itemContext : public ParserRuleContext {
  public:
    Case_itemContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Statement_or_nullContext *statement_or_null();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_itemContext* case_item();

  class Function_case_statementContext : public ParserRuleContext {
  public:
    Function_case_statementContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    std::vector<Function_case_itemContext *> function_case_item();
    Function_case_itemContext* function_case_item(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_case_statementContext* function_case_statement();

  class Function_case_itemContext : public ParserRuleContext {
  public:
    Function_case_itemContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Function_statement_or_nullContext *function_statement_or_null();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_case_itemContext* function_case_item();

  class Function_loop_statementContext : public ParserRuleContext {
  public:
    Function_loop_statementContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_statementContext *function_statement();
    ExpressionContext *expression();
    std::vector<Variable_assignmentContext *> variable_assignment();
    Variable_assignmentContext* variable_assignment(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_loop_statementContext* function_loop_statement();

  class Loop_statementContext : public ParserRuleContext {
  public:
    Loop_statementContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    ExpressionContext *expression();
    std::vector<Variable_assignmentContext *> variable_assignment();
    Variable_assignmentContext* variable_assignment(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Loop_statementContext* loop_statement();

  class System_task_enableContext : public ParserRuleContext {
  public:
    System_task_enableContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    System_task_identifierContext *system_task_identifier();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  System_task_enableContext* system_task_enable();

  class Task_enableContext : public ParserRuleContext {
  public:
    Task_enableContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_task_identifierContext *hierarchical_task_identifier();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Task_enableContext* task_enable();

  class Specify_blockContext : public ParserRuleContext {
  public:
    Specify_blockContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Specify_itemContext *> specify_item();
    Specify_itemContext* specify_item(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Specify_blockContext* specify_block();

  class Specify_itemContext : public ParserRuleContext {
  public:
    Specify_itemContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Specparam_declarationContext *specparam_declaration();
    Pulsestyle_declarationContext *pulsestyle_declaration();
    Showcancelled_declarationContext *showcancelled_declaration();
    Path_declarationContext *path_declaration();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Specify_itemContext* specify_item();

  class Pulsestyle_declarationContext : public ParserRuleContext {
  public:
    Pulsestyle_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_path_outputsContext *list_of_path_outputs();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Pulsestyle_declarationContext* pulsestyle_declaration();

  class Showcancelled_declarationContext : public ParserRuleContext {
  public:
    Showcancelled_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_path_outputsContext *list_of_path_outputs();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Showcancelled_declarationContext* showcancelled_declaration();

  class Path_declarationContext : public ParserRuleContext {
  public:
    Path_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_path_declarationContext *simple_path_declaration();
    Edge_sensitive_path_declarationContext *edge_sensitive_path_declaration();
    State_dependent_path_declarationContext *state_dependent_path_declaration();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Path_declarationContext* path_declaration();

  class Simple_path_declarationContext : public ParserRuleContext {
  public:
    Simple_path_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parallel_path_descriptionContext *parallel_path_description();
    Path_delay_valueContext *path_delay_value();
    Full_path_descriptionContext *full_path_description();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_path_declarationContext* simple_path_declaration();

  class Parallel_path_descriptionContext : public ParserRuleContext {
  public:
    Parallel_path_descriptionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Specify_input_terminal_descriptorContext *specify_input_terminal_descriptor();
    Specify_output_terminal_descriptorContext *specify_output_terminal_descriptor();
    Polarity_operatorContext *polarity_operator();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Parallel_path_descriptionContext* parallel_path_description();

  class Full_path_descriptionContext : public ParserRuleContext {
  public:
    Full_path_descriptionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_path_inputsContext *list_of_path_inputs();
    List_of_path_outputsContext *list_of_path_outputs();
    Polarity_operatorContext *polarity_operator();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Full_path_descriptionContext* full_path_description();

  class List_of_path_inputsContext : public ParserRuleContext {
  public:
    List_of_path_inputsContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Specify_input_terminal_descriptorContext *> specify_input_terminal_descriptor();
    Specify_input_terminal_descriptorContext* specify_input_terminal_descriptor(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_path_inputsContext* list_of_path_inputs();

  class List_of_path_outputsContext : public ParserRuleContext {
  public:
    List_of_path_outputsContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Specify_output_terminal_descriptorContext *> specify_output_terminal_descriptor();
    Specify_output_terminal_descriptorContext* specify_output_terminal_descriptor(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_path_outputsContext* list_of_path_outputs();

  class Specify_input_terminal_descriptorContext : public ParserRuleContext {
  public:
    Specify_input_terminal_descriptorContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Input_identifierContext *input_identifier();
    Constant_expressionContext *constant_expression();
    Range_expressionContext *range_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Specify_input_terminal_descriptorContext* specify_input_terminal_descriptor();

  class Specify_output_terminal_descriptorContext : public ParserRuleContext {
  public:
    Specify_output_terminal_descriptorContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Output_identifierContext *output_identifier();
    Constant_expressionContext *constant_expression();
    Range_expressionContext *range_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Specify_output_terminal_descriptorContext* specify_output_terminal_descriptor();

  class Input_identifierContext : public ParserRuleContext {
  public:
    Input_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Input_port_identifierContext *input_port_identifier();
    Inout_port_identifierContext *inout_port_identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Input_identifierContext* input_identifier();

  class Output_identifierContext : public ParserRuleContext {
  public:
    Output_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Output_port_identifierContext *output_port_identifier();
    Inout_port_identifierContext *inout_port_identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_identifierContext* output_identifier();

  class Path_delay_valueContext : public ParserRuleContext {
  public:
    Path_delay_valueContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_path_delay_expressionsContext *list_of_path_delay_expressions();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Path_delay_valueContext* path_delay_value();

  class List_of_path_delay_expressionsContext : public ParserRuleContext {
  public:
    List_of_path_delay_expressionsContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    T_path_delay_expressionContext *t_path_delay_expression();
    Trise_path_delay_expressionContext *trise_path_delay_expression();
    Tfall_path_delay_expressionContext *tfall_path_delay_expression();
    Tz_path_delay_expressionContext *tz_path_delay_expression();
    T01_path_delay_expressionContext *t01_path_delay_expression();
    T10_path_delay_expressionContext *t10_path_delay_expression();
    T0z_path_delay_expressionContext *t0z_path_delay_expression();
    Tz1_path_delay_expressionContext *tz1_path_delay_expression();
    T1z_path_delay_expressionContext *t1z_path_delay_expression();
    Tz0_path_delay_expressionContext *tz0_path_delay_expression();
    T0x_path_delay_expressionContext *t0x_path_delay_expression();
    Tx1_path_delay_expressionContext *tx1_path_delay_expression();
    T1x_path_delay_expressionContext *t1x_path_delay_expression();
    Tx0_path_delay_expressionContext *tx0_path_delay_expression();
    Txz_path_delay_expressionContext *txz_path_delay_expression();
    Tzx_path_delay_expressionContext *tzx_path_delay_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_path_delay_expressionsContext* list_of_path_delay_expressions();

  class T_path_delay_expressionContext : public ParserRuleContext {
  public:
    T_path_delay_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  T_path_delay_expressionContext* t_path_delay_expression();

  class Trise_path_delay_expressionContext : public ParserRuleContext {
  public:
    Trise_path_delay_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Trise_path_delay_expressionContext* trise_path_delay_expression();

  class Tfall_path_delay_expressionContext : public ParserRuleContext {
  public:
    Tfall_path_delay_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Tfall_path_delay_expressionContext* tfall_path_delay_expression();

  class Tz_path_delay_expressionContext : public ParserRuleContext {
  public:
    Tz_path_delay_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Tz_path_delay_expressionContext* tz_path_delay_expression();

  class T01_path_delay_expressionContext : public ParserRuleContext {
  public:
    T01_path_delay_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  T01_path_delay_expressionContext* t01_path_delay_expression();

  class T10_path_delay_expressionContext : public ParserRuleContext {
  public:
    T10_path_delay_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  T10_path_delay_expressionContext* t10_path_delay_expression();

  class T0z_path_delay_expressionContext : public ParserRuleContext {
  public:
    T0z_path_delay_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  T0z_path_delay_expressionContext* t0z_path_delay_expression();

  class Tz1_path_delay_expressionContext : public ParserRuleContext {
  public:
    Tz1_path_delay_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Tz1_path_delay_expressionContext* tz1_path_delay_expression();

  class T1z_path_delay_expressionContext : public ParserRuleContext {
  public:
    T1z_path_delay_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  T1z_path_delay_expressionContext* t1z_path_delay_expression();

  class Tz0_path_delay_expressionContext : public ParserRuleContext {
  public:
    Tz0_path_delay_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Tz0_path_delay_expressionContext* tz0_path_delay_expression();

  class T0x_path_delay_expressionContext : public ParserRuleContext {
  public:
    T0x_path_delay_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  T0x_path_delay_expressionContext* t0x_path_delay_expression();

  class Tx1_path_delay_expressionContext : public ParserRuleContext {
  public:
    Tx1_path_delay_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Tx1_path_delay_expressionContext* tx1_path_delay_expression();

  class T1x_path_delay_expressionContext : public ParserRuleContext {
  public:
    T1x_path_delay_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  T1x_path_delay_expressionContext* t1x_path_delay_expression();

  class Tx0_path_delay_expressionContext : public ParserRuleContext {
  public:
    Tx0_path_delay_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Tx0_path_delay_expressionContext* tx0_path_delay_expression();

  class Txz_path_delay_expressionContext : public ParserRuleContext {
  public:
    Txz_path_delay_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Txz_path_delay_expressionContext* txz_path_delay_expression();

  class Tzx_path_delay_expressionContext : public ParserRuleContext {
  public:
    Tzx_path_delay_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Tzx_path_delay_expressionContext* tzx_path_delay_expression();

  class Path_delay_expressionContext : public ParserRuleContext {
  public:
    Path_delay_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Path_delay_expressionContext* path_delay_expression();

  class Edge_sensitive_path_declarationContext : public ParserRuleContext {
  public:
    Edge_sensitive_path_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parallel_edge_sensitive_path_descriptionContext *parallel_edge_sensitive_path_description();
    Path_delay_valueContext *path_delay_value();
    Full_edge_sensitive_path_descriptionContext *full_edge_sensitive_path_description();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Edge_sensitive_path_declarationContext* edge_sensitive_path_declaration();

  class Parallel_edge_sensitive_path_descriptionContext : public ParserRuleContext {
  public:
    Parallel_edge_sensitive_path_descriptionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Specify_input_terminal_descriptorContext *specify_input_terminal_descriptor();
    Specify_output_terminal_descriptorContext *specify_output_terminal_descriptor();
    Data_source_expressionContext *data_source_expression();
    Edge_identifierContext *edge_identifier();
    Polarity_operatorContext *polarity_operator();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Parallel_edge_sensitive_path_descriptionContext* parallel_edge_sensitive_path_description();

  class Full_edge_sensitive_path_descriptionContext : public ParserRuleContext {
  public:
    Full_edge_sensitive_path_descriptionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_path_inputsContext *list_of_path_inputs();
    List_of_path_outputsContext *list_of_path_outputs();
    Data_source_expressionContext *data_source_expression();
    Edge_identifierContext *edge_identifier();
    Polarity_operatorContext *polarity_operator();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Full_edge_sensitive_path_descriptionContext* full_edge_sensitive_path_description();

  class Data_source_expressionContext : public ParserRuleContext {
  public:
    Data_source_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_source_expressionContext* data_source_expression();

  class Edge_identifierContext : public ParserRuleContext {
  public:
    Edge_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Edge_identifierContext* edge_identifier();

  class State_dependent_path_declarationContext : public ParserRuleContext {
  public:
    State_dependent_path_declarationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_path_expressionContext *module_path_expression();
    Simple_path_declarationContext *simple_path_declaration();
    Edge_sensitive_path_declarationContext *edge_sensitive_path_declaration();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  State_dependent_path_declarationContext* state_dependent_path_declaration();

  class Polarity_operatorContext : public ParserRuleContext {
  public:
    Polarity_operatorContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Polarity_operatorContext* polarity_operator();

  class Checktime_conditionContext : public ParserRuleContext {
  public:
    Checktime_conditionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mintypmax_expressionContext *mintypmax_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Checktime_conditionContext* checktime_condition();

  class Delayed_dataContext : public ParserRuleContext {
  public:
    Delayed_dataContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Terminal_identifierContext *terminal_identifier();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Delayed_dataContext* delayed_data();

  class Delayed_referenceContext : public ParserRuleContext {
  public:
    Delayed_referenceContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Terminal_identifierContext *terminal_identifier();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Delayed_referenceContext* delayed_reference();

  class End_edge_offsetContext : public ParserRuleContext {
  public:
    End_edge_offsetContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mintypmax_expressionContext *mintypmax_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  End_edge_offsetContext* end_edge_offset();

  class Event_based_flagContext : public ParserRuleContext {
  public:
    Event_based_flagContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_based_flagContext* event_based_flag();

  class Notify_regContext : public ParserRuleContext {
  public:
    Notify_regContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_identifierContext *variable_identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Notify_regContext* notify_reg();

  class Remain_active_flagContext : public ParserRuleContext {
  public:
    Remain_active_flagContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Remain_active_flagContext* remain_active_flag();

  class Stamptime_conditionContext : public ParserRuleContext {
  public:
    Stamptime_conditionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mintypmax_expressionContext *mintypmax_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Stamptime_conditionContext* stamptime_condition();

  class Start_edge_offsetContext : public ParserRuleContext {
  public:
    Start_edge_offsetContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mintypmax_expressionContext *mintypmax_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Start_edge_offsetContext* start_edge_offset();

  class ThresholdContext : public ParserRuleContext {
  public:
    ThresholdContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  ThresholdContext* threshold();

  class Timing_check_limitContext : public ParserRuleContext {
  public:
    Timing_check_limitContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Timing_check_limitContext* timing_check_limit();

  class ConcatenationContext : public ParserRuleContext {
  public:
    ConcatenationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  ConcatenationContext* concatenation();

  class Constant_concatenationContext : public ParserRuleContext {
  public:
    Constant_concatenationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_concatenationContext* constant_concatenation();

  class Constant_multiple_concatenationContext : public ParserRuleContext {
  public:
    Constant_multiple_concatenationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();
    Constant_concatenationContext *constant_concatenation();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_multiple_concatenationContext* constant_multiple_concatenation();

  class Module_path_concatenationContext : public ParserRuleContext {
  public:
    Module_path_concatenationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Module_path_expressionContext *> module_path_expression();
    Module_path_expressionContext* module_path_expression(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_path_concatenationContext* module_path_concatenation();

  class Module_path_multiple_concatenationContext : public ParserRuleContext {
  public:
    Module_path_multiple_concatenationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();
    Module_path_concatenationContext *module_path_concatenation();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_path_multiple_concatenationContext* module_path_multiple_concatenation();

  class Multiple_concatenationContext : public ParserRuleContext {
  public:
    Multiple_concatenationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();
    ConcatenationContext *concatenation();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Multiple_concatenationContext* multiple_concatenation();

  class Net_concatenationContext : public ParserRuleContext {
  public:
    Net_concatenationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Net_concatenation_valueContext *> net_concatenation_value();
    Net_concatenation_valueContext* net_concatenation_value(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_concatenationContext* net_concatenation();

  class Net_concatenation_valueContext : public ParserRuleContext {
  public:
    Net_concatenation_valueContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_net_identifierContext *hierarchical_net_identifier();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Range_expressionContext *range_expression();
    Net_concatenationContext *net_concatenation();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_concatenation_valueContext* net_concatenation_value();

  class Variable_concatenationContext : public ParserRuleContext {
  public:
    Variable_concatenationContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Variable_concatenation_valueContext *> variable_concatenation_value();
    Variable_concatenation_valueContext* variable_concatenation_value(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_concatenationContext* variable_concatenation();

  class Variable_concatenation_valueContext : public ParserRuleContext {
  public:
    Variable_concatenation_valueContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_variable_identifierContext *hierarchical_variable_identifier();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Range_expressionContext *range_expression();
    Variable_concatenationContext *variable_concatenation();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_concatenation_valueContext* variable_concatenation_value();

  class Constant_function_callContext : public ParserRuleContext {
  public:
    Constant_function_callContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_identifierContext *function_identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_function_callContext* constant_function_call();

  class Function_callContext : public ParserRuleContext {
  public:
    Function_callContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_function_identifierContext *hierarchical_function_identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_callContext* function_call();

  class System_function_callContext : public ParserRuleContext {
  public:
    System_function_callContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    System_function_identifierContext *system_function_identifier();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  System_function_callContext* system_function_call();

  class Genvar_function_callContext : public ParserRuleContext {
  public:
    Genvar_function_callContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Genvar_function_identifierContext *genvar_function_identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Genvar_function_callContext* genvar_function_call();

  class Base_expressionContext : public ParserRuleContext {
  public:
    Base_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Base_expressionContext* base_expression();

  class Constant_base_expressionContext : public ParserRuleContext {
  public:
    Constant_base_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_base_expressionContext* constant_base_expression();

  class Constant_expressionContext : public ParserRuleContext {
  public:
    Constant_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_expressionContext* constant_expression();

  class Constant_mintypmax_expressionContext : public ParserRuleContext {
  public:
    Constant_mintypmax_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_mintypmax_expressionContext* constant_mintypmax_expression();

  class Constant_range_expressionContext : public ParserRuleContext {
  public:
    Constant_range_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();
    Msb_constant_expressionContext *msb_constant_expression();
    Lsb_constant_expressionContext *lsb_constant_expression();
    Constant_base_expressionContext *constant_base_expression();
    Width_constant_expressionContext *width_constant_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_range_expressionContext* constant_range_expression();

  class Dimension_constant_expressionContext : public ParserRuleContext {
  public:
    Dimension_constant_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Dimension_constant_expressionContext* dimension_constant_expression();

  class ExpressionContext : public ParserRuleContext {
  public:
    ExpressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TermContext *> term();
    TermContext* term(size_t i);
    std::vector<Binary_operatorContext *> binary_operator();
    Binary_operatorContext* binary_operator(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class TermContext : public ParserRuleContext {
  public:
    TermContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unary_operatorContext *unary_operator();
    PrimaryContext *primary();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    tree::TerminalNode *String();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  TermContext* term();

  class Lsb_constant_expressionContext : public ParserRuleContext {
  public:
    Lsb_constant_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Lsb_constant_expressionContext* lsb_constant_expression();

  class Mintypmax_expressionContext : public ParserRuleContext {
  public:
    Mintypmax_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Mintypmax_expressionContext* mintypmax_expression();

  class Module_path_conditional_expressionContext : public ParserRuleContext {
  public:
    Module_path_conditional_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Module_path_expressionContext *> module_path_expression();
    Module_path_expressionContext* module_path_expression(size_t i);
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_path_conditional_expressionContext* module_path_conditional_expression();

  class Module_path_expressionContext : public ParserRuleContext {
  public:
    Module_path_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_path_primaryContext *module_path_primary();
    Unary_module_path_operatorContext *unary_module_path_operator();
    std::vector<Binary_module_path_operatorContext *> binary_module_path_operator();
    Binary_module_path_operatorContext* binary_module_path_operator(size_t i);
    std::vector<Module_path_expressionContext *> module_path_expression();
    Module_path_expressionContext* module_path_expression(size_t i);
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_path_expressionContext* module_path_expression();

  class Module_path_mintypmax_expressionContext : public ParserRuleContext {
  public:
    Module_path_mintypmax_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Module_path_expressionContext *> module_path_expression();
    Module_path_expressionContext* module_path_expression(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_path_mintypmax_expressionContext* module_path_mintypmax_expression();

  class Msb_constant_expressionContext : public ParserRuleContext {
  public:
    Msb_constant_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Msb_constant_expressionContext* msb_constant_expression();

  class Range_expressionContext : public ParserRuleContext {
  public:
    Range_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Msb_constant_expressionContext *msb_constant_expression();
    Lsb_constant_expressionContext *lsb_constant_expression();
    Base_expressionContext *base_expression();
    Width_constant_expressionContext *width_constant_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Range_expressionContext* range_expression();

  class Width_constant_expressionContext : public ParserRuleContext {
  public:
    Width_constant_expressionContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Width_constant_expressionContext* width_constant_expression();

  class Constant_primaryContext : public ParserRuleContext {
  public:
    Constant_primaryContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_concatenationContext *constant_concatenation();
    Constant_function_callContext *constant_function_call();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();
    Constant_multiple_concatenationContext *constant_multiple_concatenation();
    Genvar_identifierContext *genvar_identifier();
    NumberContext *number();
    Parameter_identifierContext *parameter_identifier();
    Specparam_identifierContext *specparam_identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_primaryContext* constant_primary();

  class Module_path_primaryContext : public ParserRuleContext {
  public:
    Module_path_primaryContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    IdentifierContext *identifier();
    Module_path_concatenationContext *module_path_concatenation();
    Module_path_multiple_concatenationContext *module_path_multiple_concatenation();
    Function_callContext *function_call();
    System_function_callContext *system_function_call();
    Constant_function_callContext *constant_function_call();
    Module_path_mintypmax_expressionContext *module_path_mintypmax_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_path_primaryContext* module_path_primary();

  class PrimaryContext : public ParserRuleContext {
  public:
    PrimaryContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    Hierarchical_identifierContext *hierarchical_identifier();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Range_expressionContext *range_expression();
    ConcatenationContext *concatenation();
    Multiple_concatenationContext *multiple_concatenation();
    Function_callContext *function_call();
    System_function_callContext *system_function_call();
    Constant_function_callContext *constant_function_call();
    Mintypmax_expressionContext *mintypmax_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryContext* primary();

  class Net_lvalueContext : public ParserRuleContext {
  public:
    Net_lvalueContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_net_identifierContext *hierarchical_net_identifier();
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    Constant_range_expressionContext *constant_range_expression();
    Net_concatenationContext *net_concatenation();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_lvalueContext* net_lvalue();

  class Variable_lvalueContext : public ParserRuleContext {
  public:
    Variable_lvalueContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_variable_identifierContext *hierarchical_variable_identifier();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Range_expressionContext *range_expression();
    Variable_concatenationContext *variable_concatenation();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_lvalueContext* variable_lvalue();

  class Unary_operatorContext : public ParserRuleContext {
  public:
    Unary_operatorContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Unary_operatorContext* unary_operator();

  class Binary_operatorContext : public ParserRuleContext {
  public:
    Binary_operatorContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_operatorContext* binary_operator();

  class Unary_module_path_operatorContext : public ParserRuleContext {
  public:
    Unary_module_path_operatorContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Unary_module_path_operatorContext* unary_module_path_operator();

  class Binary_module_path_operatorContext : public ParserRuleContext {
  public:
    Binary_module_path_operatorContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_module_path_operatorContext* binary_module_path_operator();

  class NumberContext : public ParserRuleContext {
  public:
    NumberContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    tree::TerminalNode *Decimal_number();
    tree::TerminalNode *Octal_number();
    tree::TerminalNode *Binary_number();
    tree::TerminalNode *Hex_number();
    tree::TerminalNode *Real_number();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class Default_nettype_specContext : public ParserRuleContext {
  public:
    Default_nettype_specContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Default_nettype_specContext* default_nettype_spec();

  class Timing_specContext : public ParserRuleContext {
  public:
    Timing_specContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<tree::TerminalNode *> Time_Identifier();
    tree::TerminalNode* Time_Identifier(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Timing_specContext* timing_spec();

  class Attribute_instanceContext : public ParserRuleContext {
  public:
    Attribute_instanceContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Attr_specContext *> attr_spec();
    Attr_specContext* attr_spec(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Attribute_instanceContext* attribute_instance();

  class Attr_specContext : public ParserRuleContext {
  public:
    Attr_specContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Attr_nameContext *attr_name();
    Constant_expressionContext *constant_expression();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Attr_specContext* attr_spec();

  class Attr_nameContext : public ParserRuleContext {
  public:
    Attr_nameContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Attr_nameContext* attr_name();

  class Arrayed_identifierContext : public ParserRuleContext {
  public:
    Arrayed_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_arrayed_identifierContext *simple_arrayed_identifier();
    Escaped_arrayed_identifierContext *escaped_arrayed_identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Arrayed_identifierContext* arrayed_identifier();

  class Block_identifierContext : public ParserRuleContext {
  public:
    Block_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_identifierContext* block_identifier();

  class Cell_identifierContext : public ParserRuleContext {
  public:
    Cell_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Cell_identifierContext* cell_identifier();

  class Config_identifierContext : public ParserRuleContext {
  public:
    Config_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Config_identifierContext* config_identifier();

  class Escaped_arrayed_identifierContext : public ParserRuleContext {
  public:
    Escaped_arrayed_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    tree::TerminalNode *Escaped_identifier();
    RangeContext *range();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Escaped_arrayed_identifierContext* escaped_arrayed_identifier();

  class Escaped_hierarchical_identifierContext : public ParserRuleContext {
  public:
    Escaped_hierarchical_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Escaped_hierarchical_branchContext *> escaped_hierarchical_branch();
    Escaped_hierarchical_branchContext* escaped_hierarchical_branch(size_t i);
    std::vector<Simple_hierarchical_branchContext *> simple_hierarchical_branch();
    Simple_hierarchical_branchContext* simple_hierarchical_branch(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Escaped_hierarchical_identifierContext* escaped_hierarchical_identifier();

  class Event_identifierContext : public ParserRuleContext {
  public:
    Event_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_identifierContext* event_identifier();

  class Function_identifierContext : public ParserRuleContext {
  public:
    Function_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_identifierContext* function_identifier();

  class Gate_instance_identifierContext : public ParserRuleContext {
  public:
    Gate_instance_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Arrayed_identifierContext *arrayed_identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Gate_instance_identifierContext* gate_instance_identifier();

  class Generate_block_identifierContext : public ParserRuleContext {
  public:
    Generate_block_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_block_identifierContext* generate_block_identifier();

  class Genvar_function_identifierContext : public ParserRuleContext {
  public:
    Genvar_function_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Genvar_function_identifierContext* genvar_function_identifier();

  class Genvar_identifierContext : public ParserRuleContext {
  public:
    Genvar_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Genvar_identifierContext* genvar_identifier();

  class Hierarchical_block_identifierContext : public ParserRuleContext {
  public:
    Hierarchical_block_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Hierarchical_block_identifierContext* hierarchical_block_identifier();

  class Hierarchical_event_identifierContext : public ParserRuleContext {
  public:
    Hierarchical_event_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Hierarchical_event_identifierContext* hierarchical_event_identifier();

  class Hierarchical_function_identifierContext : public ParserRuleContext {
  public:
    Hierarchical_function_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Hierarchical_function_identifierContext* hierarchical_function_identifier();

  class Hierarchical_identifierContext : public ParserRuleContext {
  public:
    Hierarchical_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_hierarchical_identifierContext *simple_hierarchical_identifier();
    Escaped_hierarchical_identifierContext *escaped_hierarchical_identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Hierarchical_identifierContext* hierarchical_identifier();

  class Hierarchical_net_identifierContext : public ParserRuleContext {
  public:
    Hierarchical_net_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Hierarchical_net_identifierContext* hierarchical_net_identifier();

  class Hierarchical_variable_identifierContext : public ParserRuleContext {
  public:
    Hierarchical_variable_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Hierarchical_variable_identifierContext* hierarchical_variable_identifier();

  class Hierarchical_task_identifierContext : public ParserRuleContext {
  public:
    Hierarchical_task_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Hierarchical_task_identifierContext* hierarchical_task_identifier();

  class IdentifierContext : public ParserRuleContext {
  public:
    IdentifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    tree::TerminalNode *Simple_identifier();
    tree::TerminalNode *Escaped_identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class Inout_port_identifierContext : public ParserRuleContext {
  public:
    Inout_port_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Inout_port_identifierContext* inout_port_identifier();

  class Input_port_identifierContext : public ParserRuleContext {
  public:
    Input_port_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Input_port_identifierContext* input_port_identifier();

  class Instance_identifierContext : public ParserRuleContext {
  public:
    Instance_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Instance_identifierContext* instance_identifier();

  class Library_identifierContext : public ParserRuleContext {
  public:
    Library_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Library_identifierContext* library_identifier();

  class Memory_identifierContext : public ParserRuleContext {
  public:
    Memory_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Memory_identifierContext* memory_identifier();

  class Module_identifierContext : public ParserRuleContext {
  public:
    Module_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_identifierContext* module_identifier();

  class Module_instance_identifierContext : public ParserRuleContext {
  public:
    Module_instance_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Arrayed_identifierContext *arrayed_identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_instance_identifierContext* module_instance_identifier();

  class Net_identifierContext : public ParserRuleContext {
  public:
    Net_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_identifierContext* net_identifier();

  class Output_port_identifierContext : public ParserRuleContext {
  public:
    Output_port_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_port_identifierContext* output_port_identifier();

  class Parameter_identifierContext : public ParserRuleContext {
  public:
    Parameter_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_identifierContext* parameter_identifier();

  class Port_identifierContext : public ParserRuleContext {
  public:
    Port_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Port_identifierContext* port_identifier();

  class Real_identifierContext : public ParserRuleContext {
  public:
    Real_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Real_identifierContext* real_identifier();

  class Simple_arrayed_identifierContext : public ParserRuleContext {
  public:
    Simple_arrayed_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    tree::TerminalNode *Simple_identifier();
    RangeContext *range();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_arrayed_identifierContext* simple_arrayed_identifier();

  class Simple_hierarchical_identifierContext : public ParserRuleContext {
  public:
    Simple_hierarchical_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_hierarchical_branchContext *simple_hierarchical_branch();
    tree::TerminalNode *Escaped_identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_hierarchical_identifierContext* simple_hierarchical_identifier();

  class Specparam_identifierContext : public ParserRuleContext {
  public:
    Specparam_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Specparam_identifierContext* specparam_identifier();

  class System_function_identifierContext : public ParserRuleContext {
  public:
    System_function_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    tree::TerminalNode *Dollar_Identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  System_function_identifierContext* system_function_identifier();

  class System_task_identifierContext : public ParserRuleContext {
  public:
    System_task_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    tree::TerminalNode *Dollar_Identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  System_task_identifierContext* system_task_identifier();

  class Task_identifierContext : public ParserRuleContext {
  public:
    Task_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Task_identifierContext* task_identifier();

  class Terminal_identifierContext : public ParserRuleContext {
  public:
    Terminal_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Terminal_identifierContext* terminal_identifier();

  class Text_macro_identifierContext : public ParserRuleContext {
  public:
    Text_macro_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    tree::TerminalNode *Simple_identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Text_macro_identifierContext* text_macro_identifier();

  class Topmodule_identifierContext : public ParserRuleContext {
  public:
    Topmodule_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Topmodule_identifierContext* topmodule_identifier();

  class Udp_identifierContext : public ParserRuleContext {
  public:
    Udp_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_identifierContext* udp_identifier();

  class Udp_instance_identifierContext : public ParserRuleContext {
  public:
    Udp_instance_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Arrayed_identifierContext *arrayed_identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_instance_identifierContext* udp_instance_identifier();

  class Variable_identifierContext : public ParserRuleContext {
  public:
    Variable_identifierContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_identifierContext* variable_identifier();

  class Simple_hierarchical_branchContext : public ParserRuleContext {
  public:
    Simple_hierarchical_branchContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<tree::TerminalNode *> Simple_identifier();
    tree::TerminalNode* Simple_identifier(size_t i);
    std::vector<tree::TerminalNode *> Decimal_number();
    tree::TerminalNode* Decimal_number(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_hierarchical_branchContext* simple_hierarchical_branch();

  class Escaped_hierarchical_branchContext : public ParserRuleContext {
  public:
    Escaped_hierarchical_branchContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<tree::TerminalNode *> Escaped_identifier();
    tree::TerminalNode* Escaped_identifier(size_t i);
    std::vector<tree::TerminalNode *> Decimal_number();
    tree::TerminalNode* Decimal_number(size_t i);

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Escaped_hierarchical_branchContext* escaped_hierarchical_branch();


private:
  static std::vector<dfa::DFA> _decisionToDFA;
  static atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static dfa::Vocabulary _vocabulary;
  static atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace verilog
