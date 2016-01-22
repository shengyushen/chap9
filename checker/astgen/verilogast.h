#define SHR_LIST_SHR(typename2share) \
	make_shared<list<std::shared_ptr<typename2share>>>

#define SHR2(variant1,type2,init) \
	make_shared<variant1>(make_shared<type2>init)

#define SHR4(variant1,m1,m2,type2,init) \
	make_shared<variant1>(make_shared<m1>(make_shared<m2>(make_shared<type2>init)))

class ComponentBase {
};


namespace Verilogast {
class T_description__module_declaration;
class T_description__udp_declaration;
class T_description__config_declaration;
class T_module_declaration__1;
class T_module_declaration__2;
class T_port_named;
class T_port_unnamed;
class T_port_expression;
class T_port_reference;
class T_port_declaration__inout_declaration;
class T_port_declaration__input_declaration;
class T_port_declaration__output_declaration;
class T_module_item__1;
class T_module_item__2;
class T_module_item__port_declaration;
class T_module_item__generate_region;
class T_module_item__specify_block;
class T_module_item__parameter_declaration;
class T_module_item__specparam_declaration;
class T_module_item__net_declaration;
class T_module_item__reg_declaration;
class T_module_item__integer_declaration;
class T_module_item__real_declaration;
class T_module_item__time_declaration;
class T_module_item__realtime_declaration;
class T_module_item__event_declaration;
class T_module_item__genvar_declaration;
class T_module_item__task_declaration;
class T_module_item__function_declaration;
class T_module_item__local_parameter_declaration;
class T_module_item__parameter_override;
class T_module_item__continuous_assign;
class T_module_item__gate_instantiation;
class T_module_item__udp_instantiation;
class T_module_item__module_instantiation;
class T_module_item__initial_construct;
class T_module_item__always_construct;
class T_module_item__loop_generate_construct;
class T_module_item__conditional_generate_construct;
class T_config_declaration;
class T_design_statement;
class T_lib_cell_identifier;
class T_config_rule_statement__default;
class T_config_rule_statement__inst_lib;
class T_config_rule_statement__inst_use;
class T_config_rule_statement__cell_lib;
class T_config_rule_statement__cell_use;
class T_use_clause;
class T_local_parameter_declaration_1;
class T_local_parameter_declaration_2;
class T_parameter_declaration_1;
class T_parameter_declaration_2;
class T_specparam_declaration;
class T_parameter_type__NOSPEC;
class T_parameter_type__INTEGER;
class T_parameter_type__REAL;
class T_parameter_type__REALTIME;
class T_parameter_type__TIME;
class T_inout_declaration;
class T_input_declaration;
class T_output_declaration_net;
class T_output_declaration_reg;
class T_output_declaration_var;
class T_output_variable_type_INTEGER;
class T_output_variable_type_TIME;
class T_event_declaration;
class T_integer_declaration;
class T_net_declaration_net_type1;
class T_net_declaration_net_type2;
class T_net_declaration_net_type3;
class T_net_declaration_net_type4;
class T_net_declaration_trireg_1;
class T_net_declaration_trireg_2;
class T_net_declaration_trireg_3;
class T_net_declaration_trireg_4;
class T_vectored_scalared_NOSPEC;
class T_vectored_scalared_vectored;
class T_vectored_scalared_scalared;
class T_real_declaration;
class T_realtime_declaration;
class T_reg_declaration;
class T_time_declaration;
class T_net_type_NOSPEC;
class T_net_type__KEY_SUPPLY0;
class T_net_type__KEY_SUPPLY1;
class T_net_type__KEY_TRI;
class T_net_type__KEY_TRIAND;
class T_net_type__KEY_TRIOR;
class T_net_type__KEY_TRI0;
class T_net_type__KEY_TRI1;
class T_net_type__KEY_UWIRE;
class T_net_type__KEY_WIRE;
class T_net_type__KEY_WAND;
class T_net_type__KEY_WOR;
class T_real_type_noass;
class T_real_type_ass;
class T_variable_type_noass;
class T_variable_type_ass;
class KEY_HIGHZ0;
class KEY_HIGHZ1;
class KEY_SUPPLY0;
class KEY_STRONG0;
class KEY_PULL0;
class KEY_WEAK0;
class KEY_SUPPLY1;
class KEY_STRONG1;
class KEY_PULL1;
class KEY_WEAK1;
class T_drive_strength_NOSPEC;
class T_drive_strength;
class T_charge_strength_NOSPEC;
class T_charge_strength__small;
class T_charge_strength__medium;
class T_charge_strength__large;
class T_delay3_NOSPEC;
class T_delay3_1;
class T_delay3_minmax1;
class T_delay3_minmax2;
class T_delay3_minmax3;
class T_delay2_NOSPEC;
class T_delay2_1;
class T_delay2_minmax1;
class T_delay2_minmax2;
class T_event_identifier_dimension_list;
class T_net_identifier_dimension_list;
class T_port_identifier_equ1_expression_opt;
class T_defparam_assignment;
class T_net_decl_assignment;
class T_param_assignment;
class T_specparam_assignment;
class T_specparam_assignment_pulse1;
class T_specparam_assignment_pulse2;
class T_dimension;
class T_range_NOSPEC;
class T_range;
class T_automatic_false;
class T_automatic_true;
class T_function_declaration_1;
class T_function_declaration_2;
class T_function_item_declaration_block;
class T_function_item_declaration_input;
class T_attribute_instance_list_tf_input_declaration;
class T_function_range_or_type_NOSPEC;
class T_function_range_or_type;
class T_function_range_or_type_INTEGER;
class T_function_range_or_type_REAL;
class T_function_range_or_type_REALTIME;
class T_function_range_or_type_TIME;
class T_task_declaration1;
class T_task_declaration2;
class T_task_item_declaration_block;
class T_task_item_declaration_input;
class T_task_item_declaration_output;
class T_task_item_declaration_inout;
class T_task_port_item_input;
class T_tf_input_declaration_reg;
class T_tf_input_declaration_type;
class T_tf_output_declaration_reg;
class T_tf_output_declaration_type;
class T_tf_inout_declaration_reg;
class T_tf_inout_declaration_type;
class T_task_port_type_integer;
class T_task_port_type_real;
class T_task_port_type_realtime;
class T_task_port_type_time;
class T_block_item_declaration_reg;
class T_block_item_declaration_integer;
class T_block_item_declaration_time;
class T_block_item_declaration_real;
class T_block_item_declaration_realtime;
class T_block_item_declaration_event;
class T_block_item_declaration_local_param;
class T_block_item_declaration_param;
class T_block_variable_type;
class T_block_real_type;
class T_gate_instantiation_cmos;
class T_gate_instantiation_enable;
class T_gate_instantiation_mos;
class T_gate_instantiation_input;
class T_gate_instantiation_output;
class T_gate_instantiation_pass_en;
class T_gate_instantiation_pass;
class T_gate_instantiation_pulldown;
class T_gate_instantiation_pullup;
class T_cmos_switch_instance;
class T_enable_gate_instance;
class T_mos_switch_instance;
class T_n_input_gate_instance;
class T_n_output_gate_instance;
class T_pass_switch_instance;
class T_pass_enable_switch_instance;
class T_pull_gate_instance;
class T_name_of_gate_instance_NOSPEC;
class T_name_of_gate_instance;
class T_pulldown_strength_NOSPEC;
class T_pulldown_strength01;
class T_pulldown_strength10;
class T_pulldown_strength0;
class T_pullup_strength_NOSPEC;
class T_pullup_strength01;
class T_pullup_strength10;
class T_pullup_strength1;
class T_cmos_switchtype_CMOS;
class T_cmos_switchtype_RCMOS;
class T_enable_gatetype__BUFIF0;
class T_enable_gatetype__BUFIF1;
class T_enable_gatetype__NOTIF0;
class T_enable_gatetype__NOTIF1;
class T_mos_switchtype_NMOS;
class T_mos_switchtype_PMOS;
class T_mos_switchtype_RNMOS;
class T_mos_switchtype_RPMOS;
class T_n_input_gatetype_AND;
class T_n_input_gatetype_NAND;
class T_n_input_gatetype_OR;
class T_n_input_gatetype_NOR;
class T_n_input_gatetype_XOR;
class T_n_input_gatetype_XNOR;
class T_n_output_gatetype_BUF;
class T_n_output_gatetype_NOT;
class T_pass_en_switchtype_TRANIF0;
class T_pass_en_switchtype_TRANIF1;
class T_pass_en_switchtype_RTRANIF1;
class T_pass_en_switchtype_RTRANIF0;
class T_pass_switchtype_TRAN;
class T_pass_switchtype_RTRAN;
class T_module_instantiation;
class T_module_instance;
class T_name_of_module_instance_NOSPEC;
class T_name_of_module_instance;
class T_parameter_value_assignment_NOSPEC;
class T_parameter_value_assignment_order;
class T_parameter_value_assignment_named;
class T_named_parameter_assignment;
class T_list_of_port_connections_ordered;
class T_list_of_port_connections_named;
class T_ordered_port_connection;
class T_named_port_connection;
class T_generate_region;
class T_genvar_declaration;
class T_loop_generate_construct;
class T_genvar_initialization;
class T_genvar_iteration;
class T_conditional_generate_construct_if;
class T_conditional_generate_construct_case;
class T_case_generate_construct;
class T_case_generate_item_case;
class T_case_generate_item_default;
class T_if_generate_construct;
class T_generate_block_NOSPEC;
class T_generate_block_mgi;
class T_generate_block_begin;
class T_udp_declaration_1;
class T_udp_declaration_2;
class T_udp_port_list;
class T_udp_declaration_port_list;
class T_udp_port_declaration_out;
class T_udp_port_declaration_input;
class T_udp_port_declaration_reg;
class T_udp_output_declaration_output;
class T_udp_output_declaration_reg;
class T_udp_input_declaration_singular;
class T_udp_input_declaration;
class T_udp_reg_declaration;
class T_udp_body_comb;
class T_udp_body_seq;
class T_combinational_entry;
class T_sequential_body;
class T_udp_initial_statement_NOSPEC;
class T_udp_initial_statement;
class T_init_val_bin;
class T_init_val_unsigned;
class T_sequential_entry;
class T_sequential_entry_comb;
class T_seq_input_list_level;
class T_seq_input_list_edge;
class T_edge_input_list;
class T_edge_indicator_level;
class T_edge_indicator_edge;
class T_udp_instantiation;
class T_udp_instance;
class T_name_of_udp_instance_NOSPEC;
class T_name_of_udp_instance;
class T_continuous_assign;
class T_net_assignment;
class T_initial_construct;
class T_always_construct;
class T_blocking_assignment;
class T_nonblocking_assignment;
class T_procedural_continuous_assignments_assign;
class T_procedural_continuous_assignments_deassign;
class T_procedural_continuous_assignments_force1;
class T_procedural_continuous_assignments_force2;
class T_procedural_continuous_assignments_release1;
class T_procedural_continuous_assignments_release2;
class T_par_block;
class T_colon_block_identifier_NOSPEC;
class T_colon_block_identifier;
class T_seq_block;
class T_statement_NOSPEC;
class T_statement_blocking_assignment;
class T_statement_case_statement;
class T_statement_conditional_statement;
class T_statement_disable_statement;
class T_statement_event_trigger;
class T_statement_loop_statement;
class T_statement_nonblocking_assignment;
class T_statement_par_block;
class T_statement_procedural_continuous_assignments;
class T_statement_procedural_timing_control_statement;
class T_statement_seq_block;
class T_statement_system_task_enable;
class T_statement_task_enable;
class T_statement_wait_statement;
class T_delay_control_delay_value;
class T_delay_control_mintypmax_expression;
class T_delay_or_event_control_NOSPEC;
class T_delay_or_event_control_delay_control;
class T_delay_or_event_control_event_control;
class T_delay_or_event_control_3;
class T_disable_statement;
class T_event_control_eventid;
class T_event_control_event_exp;
class T_event_control_start;
class T_event_trigger;
class T_event_expression_exp;
class T_event_expression_pos;
class T_event_expression_neg;
class T_event_expression_or;
class T_procedural_timing_control_delay;
class T_procedural_timing_control_event;
class T_procedural_timing_control_statement;
class T_wait_statement;
class T_conditional_statement_ifelse;
class T_conditional_statement_ifelseif;
class T_elseif;
class T_case_statement_case;
class T_case_statement_casez;
class T_case_statement_casex;
class T_case_item;
class T_case_item_default;
class T_colon_opt_false;
class T_colon_opt_true;
class T_loop_statement_forever;
class T_loop_statement_repeat;
class T_loop_statement_while;
class T_loop_statement_for;
class T_system_task_enable;
class T_task_enable;
class T_specify_block;
class T_specify_item_specparam;
class T_specify_item_pulsestyle;
class T_specify_item_showcancelled;
class T_specify_item_path;
class T_specify_item_system;
class T_pulsestyle_declaration_oneevent;
class T_pulsestyle_declaration_onedetect;
class T_showcancelled_declaration_show;
class T_showcancelled_declaration_noshow;
class T_path_declaration_simple;
class T_path_declaration_edge;
class T_path_declaration_state;
class T_simple_path_declaration_parallel;
class T_simple_path_declaration_full;
class T_parallel_path_description;
class T_full_path_description;
class T_specify_input_terminal_descriptor;
class T_specify_output_terminal_descriptor;
class T_list_of_mintypmax_expressions_1;
class T_list_of_mintypmax_expressions_2;
class T_list_of_mintypmax_expressions_3;
class T_list_of_mintypmax_expressions_6;
class T_list_of_mintypmax_expressions_12;
class T_edge_sensitive_path_declaration_parallel;
class T_edge_sensitive_path_declaration_full;
class T_parallel_edge_sensitive_path_description;
class T_full_edge_sensitive_path_description;
class T_state_dependent_path_declaration_simple;
class T_state_dependent_path_declaration_edge;
class T_state_dependent_path_declaration_ifnone;
class T_concatenation;
class T_module_path_multiple_concatenation;
class T_module_path_concatenation;
class T_multiple_concatenation;
class T_function_call;
class T_system_function_call;
class T_conditional_expression;
class T_expression_NOSPEC;
class T_expression_prim;
class T_expression_op1;
class T_expression_op2;
class T_expression_condition;
class T_mintypmax_expression_NOSPEC;
class T_mintypmax_expression_1;
class T_mintypmax_expression_3;
class T_module_path_conditional_expression;
class T_module_path_expression_prim;
class T_module_path_expression_op1;
class T_module_path_expression_op2;
class T_module_path_expression_sel;
class T_module_path_mintypmax_expression_1;
class T_module_path_mintypmax_expression_3;
class T_range_expression_NOSPEC;
class T_range_expression_1;
class T_range_expression_2;
class T_range_expression_addrange;
class T_range_expression_subrange;
class T_module_path_primary_num;
class T_module_path_primary_id;
class T_module_path_primary_concat;
class T_module_path_primary_mul_concat;
class T_module_path_primary_func;
class T_module_path_primary_sysfunc;
class T_module_path_primary_mintypmax;
class T_primary_num;
class T_primary_id;
class T_primary_concat;
class T_primary_mulcon;
class T_primary_func;
class T_primary_sysfunc;
class T_primary_mintypmax;
class T_primary_string;
class T_net_lvalue_id;
class T_net_lvalue_idexp;
class T_net_lvalue_lvlist;
class T_delay_value_UNSIGNED_NUMBER;
class T_delay_value_REAL_NUMBER;
class T_delay_value_id;
class T_attribute_instance;
class T_attr_spec;
class T_hierarchical_identifier;
class T_identifier_lsq_expression_rsq;
class T_polarity_operator_NOSPEC;
class T_polarity_operator_ADD;
class T_polarity_operator_SUB;
class T_system_timing_check_dollor_setup_timing_check;
class T_system_timing_check_dollor_hold_timing_check;
class T_system_timing_check_dollor_setuphold_timing_check;
class T_system_timing_check_dollor_recovery_timing_check;
class T_system_timing_check_dollor_removal_timing_check;
class T_system_timing_check_dollor_recrem_timing_check;
class T_system_timing_check_dollor_skew_timing_check;
class T_system_timing_check_dollor_timeskew_timing_check;
class T_system_timing_check_dollor_fullskew_timing_check;
class T_system_timing_check_dollor_period_timing_check;
class T_system_timing_check_dollor_width_timing_check;
class T_system_timing_check_dollor_nochange_timing_check;
class T_dollor_setup_timing_check;
class T_dollor_hold_timing_check;
class T_dollor_setuphold_timing_check;
class T_dollor_recovery_timing_check;
class T_dollor_removal_timing_check;
class T_dollor_recrem_timing_check;
class T_dollor_skew_timing_check;
class T_dollor_timeskew_timing_check;
class T_dollor_fullskew_timing_check;
class T_dollor_period_timing_check;
class T_dollor_width_timing_check;
class T_dollor_nochange_timing_check;
class T_checktime_condition_NOSPEC;
class T_checktime_condition;
class T_controlled_reference_event;
class T_data_event;
class T_delayed_reference_NOSPEC;
class T_delayed_reference_id;
class T_delayed_reference_idmtmexp;
class T_end_edge_offset;
class T_event_based_flag;
class T_event_based_flag_NOSPEC;
class T_notifier_NOSPEC;
class T_notifier;
class T_reference_event;
class T_remain_active_flag;
class T_stamptime_condition;
class T_start_edge_offset;
class T_threshold;
class T_timing_check_limit;
class T_timing_check_event;
class T_controlled_timing_check_event;
class T_timing_check_event_control_NOSPEC;
class T_timing_check_event_control_POSEDGE;
class T_timing_check_event_control_NEGEDGE;
class T_timing_check_event_control_edge_control_specifier;
class T_specify_terminal_descriptor_in;
class T_specify_terminal_descriptor_out;
class T_edge_control_specifier;
class T_edge_descriptor_01;
class T_edge_descriptor_10;
class T_edge_descriptor_zx01;
class T_edge_descriptor_01zx;
class T_zero_or_one_0;
class T_zero_or_one_1;
class T_z_or_x__x;
class T_z_or_x__X;
class T_z_or_x__z;
class T_z_or_x__Z;
class T_timing_check_condition_NOSPEC;
class T_timing_check_condition;
class T_scalar_timing_check_condition_exp;
class T_scalar_timing_check_condition_Negexp;
class T_scalar_timing_check_condition_eq2;
class T_scalar_timing_check_condition_eq3;
class T_scalar_timing_check_condition_neq2;
class T_scalar_timing_check_condition_neq3;
class T_scalar_constant_unsigned;
class T_scalar_constant_binary;
class T_delayed_data_NOSPEC;
class T_delayed_data_id;
class T_delayed_data_idmtmexp;
class T_edge_identifier_NOSPEC;
class T_edge_identifier_POS;
class T_edge_identifier_NEG;
class T_unary_operator_LOGIC_NEG;
class T_unary_operator_BITWISE_NEG;
class T_unary_operator_REDUCE_NOR;
class T_unary_operator_REDUCE_NAND;
class T_unary_operator_ADD;
class T_unary_operator_SUB;
class T_unary_operator_REDUCE_AND;
class T_unary_operator_REDUCE_OR;
class T_unary_operator_REDUCE_XOR;
class T_unary_operator_REDUCE_XNOR;
class T_binary_operator_MUL;
class T_binary_operator_DIV;
class T_binary_operator_MOD;
class T_binary_operator_EQU2;
class T_binary_operator_NEQ2;
class T_binary_operator_EQU3;
class T_binary_operator_NEQ3;
class T_binary_operator_POWER;
class T_binary_operator_LT;
class T_binary_operator_LE;
class T_binary_operator_GT;
class T_binary_operator_GE;
class T_binary_operator_LOGICAL_RIGHTSHIFT;
class T_binary_operator_LOGICAL_LEFTSHIFT;
class T_binary_operator_ARITHMETIC_RIGHTSHIFT;
class T_binary_operator_ARITHMETIC_LEFTSHIFT;
class T_binary_operator_ADD;
class T_binary_operator_SUB;
class T_binary_operator_AND;
class T_binary_operator_OR;
class T_binary_operator_AND2;
class T_binary_operator_OR2;
class T_binary_operator_XOR;
class T_binary_operator_XNOR;
class T_binary_operator_1;
class T_binary_operator_2;
class T_unary_module_path_operator_GANTANHAO;
class T_unary_module_path_operator_BOLANGHAO;
class T_unary_module_path_operator_AND;
class T_unary_module_path_operator_NAND;
class T_unary_module_path_operator_OR;
class T_unary_module_path_operator_NOR;
class T_unary_module_path_operator_XOR;
class T_unary_module_path_operator_XNOR;
class T_binary_module_path_operator_EQU2;
class T_binary_module_path_operator_NEQ2;
class T_binary_module_path_operator_AND2;
class T_binary_module_path_operator_OR2;
class T_binary_module_path_operator_AND1;
class T_binary_module_path_operator_OR1;
class T_binary_module_path_operator_XOR;
class T_binary_module_path_operator_XNOR;
class T_level_symbol_0;
class T_level_symbol_1;
class T_level_symbol_x;
class T_level_symbol_X;
class T_level_symbol_QUESTION;
class T_level_symbol_b;
class T_level_symbol_B;
class T_level_symbol_SUB;
class T_output_symbol_UNSIGNED_NUMBER;
class T_output_symbol_SIMID;
class T_number_UNSIGNED_NUMBER;
class T_number_UNSIGNED_NUMBER_size;
class T_number_OCTAL_NUMBER;
class T_number_BINARY_NUMBER;
class T_number_HEX_NUMBER;
class T_number_REAL_NUMBER;
class T_next_state_UNSIGNED_NUMBER;
class T_next_state_SIMID;
class T_next_state_SUB;
class T_edge_symbol_r;
class T_edge_symbol_R;
class T_edge_symbol_f;
class T_edge_symbol_F;
class T_edge_symbol_p;
class T_edge_symbol_P;
class T_edge_symbol_n;
class T_edge_symbol_N;
class T_string;
class T_system_function_identifier;
class T_io_declaration_net;
class T_netreg_type__NOSPEC;
class T_netreg_type__KEY_SUPPLY0;
class T_netreg_type__KEY_SUPPLY1;
class T_netreg_type__KEY_TRI;
class T_netreg_type__KEY_TRIAND;
class T_netreg_type__KEY_TRIOR;
class T_netreg_type__KEY_TRI0;
class T_netreg_type__KEY_TRI1;
class T_netreg_type__KEY_UWIRE;
class T_netreg_type__KEY_WIRE;
class T_netreg_type__KEY_WAND;
class T_netreg_type__KEY_WOR;
class T_netreg_type__KEY_REG;
class T_netreg_type__KEY_INTEGER;
class T_netreg_type__KEY_TIME;
class T_statement_or_block_item_statement;
class T_statement_or_block_item_block;
class T_tf_io_declaration_gen1;
class T_tf_io_declaration_gen2;
class T_io_type_NOSPEC;
class T_io_type_output;
class T_io_type_input;
class T_io_type_inout;
class T_reg_false;
class T_reg_true;
class T_identifier_NOSPEC;
class T_identifier;
class T_colon_config_opt_FALSE;
class T_colon_config_opt_TRUE;
class T_signed_FALSE;
class T_signed_TRUE;
typedef boost::variant<
 std::shared_ptr<T_description__module_declaration>
 ,  std::shared_ptr<T_description__udp_declaration>
 ,  std::shared_ptr<T_description__config_declaration>
 > description ; 
typedef boost::variant<
 std::shared_ptr<T_module_declaration__1>
 ,  std::shared_ptr<T_module_declaration__2>
 > module_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_port_named>
 ,  std::shared_ptr<T_port_unnamed>
 > port ; 
typedef boost::variant<
 std::shared_ptr<T_port_expression>
 > port_expression ; 
typedef boost::variant<
 std::shared_ptr<T_port_reference>
 > port_reference ; 
typedef boost::variant<
 std::shared_ptr<T_port_declaration__inout_declaration>
 ,  std::shared_ptr<T_port_declaration__input_declaration>
 ,  std::shared_ptr<T_port_declaration__output_declaration>
 > port_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_module_item__1>
 ,  std::shared_ptr<T_module_item__2>
 > module_item ; 
typedef boost::variant<
 std::shared_ptr<T_module_item__port_declaration>
 ,  std::shared_ptr<T_module_item__generate_region>
 ,  std::shared_ptr<T_module_item__specify_block>
 ,  std::shared_ptr<T_module_item__parameter_declaration>
 ,  std::shared_ptr<T_module_item__specparam_declaration>
 ,  std::shared_ptr<T_module_item__net_declaration>
 ,  std::shared_ptr<T_module_item__reg_declaration>
 ,  std::shared_ptr<T_module_item__integer_declaration>
 ,  std::shared_ptr<T_module_item__real_declaration>
 ,  std::shared_ptr<T_module_item__time_declaration>
 ,  std::shared_ptr<T_module_item__realtime_declaration>
 ,  std::shared_ptr<T_module_item__event_declaration>
 > module_item1 ; 
typedef boost::variant<
 std::shared_ptr<T_module_item__genvar_declaration>
 ,  std::shared_ptr<T_module_item__task_declaration>
 ,  std::shared_ptr<T_module_item__function_declaration>
 ,  std::shared_ptr<T_module_item__local_parameter_declaration>
 ,  std::shared_ptr<T_module_item__parameter_override>
 ,  std::shared_ptr<T_module_item__continuous_assign>
 ,  std::shared_ptr<T_module_item__gate_instantiation>
 ,  std::shared_ptr<T_module_item__udp_instantiation>
 ,  std::shared_ptr<T_module_item__module_instantiation>
 ,  std::shared_ptr<T_module_item__initial_construct>
 ,  std::shared_ptr<T_module_item__always_construct>
 ,  std::shared_ptr<T_module_item__loop_generate_construct>
 ,  std::shared_ptr<T_module_item__conditional_generate_construct>
 > module_item2 ; 
typedef boost::variant<
 std::shared_ptr<T_config_declaration>
 > config_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_design_statement>
 > design_statement ; 
typedef boost::variant<
 std::shared_ptr<T_lib_cell_identifier>
 > library_identifier_period_opt_cell_identifier ; 
typedef boost::variant<
 std::shared_ptr<T_config_rule_statement__default>
 ,  std::shared_ptr<T_config_rule_statement__inst_lib>
 ,  std::shared_ptr<T_config_rule_statement__inst_use>
 ,  std::shared_ptr<T_config_rule_statement__cell_lib>
 ,  std::shared_ptr<T_config_rule_statement__cell_use>
 > config_rule_statement ; 
typedef boost::variant<
 std::shared_ptr<T_use_clause>
 > use_clause ; 
typedef boost::variant<
 std::shared_ptr<T_local_parameter_declaration_1>
 ,  std::shared_ptr<T_local_parameter_declaration_2>
 > local_parameter_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_parameter_declaration_1>
 ,  std::shared_ptr<T_parameter_declaration_2>
 > parameter_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_specparam_declaration>
 > specparam_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_parameter_type__NOSPEC>
 ,  std::shared_ptr<T_parameter_type__INTEGER>
 ,  std::shared_ptr<T_parameter_type__REAL>
 ,  std::shared_ptr<T_parameter_type__REALTIME>
 ,  std::shared_ptr<T_parameter_type__TIME>
 > parameter_type ; 
typedef boost::variant<
 std::shared_ptr<T_inout_declaration>
 > inout_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_input_declaration>
 > input_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_output_declaration_net>
 ,  std::shared_ptr<T_output_declaration_reg>
 ,  std::shared_ptr<T_output_declaration_var>
 > output_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_output_variable_type_INTEGER>
 ,  std::shared_ptr<T_output_variable_type_TIME>
 > output_variable_type ; 
typedef boost::variant<
 std::shared_ptr<T_event_declaration>
 > event_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_integer_declaration>
 > integer_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_net_declaration_net_type1>
 ,  std::shared_ptr<T_net_declaration_net_type2>
 ,  std::shared_ptr<T_net_declaration_net_type3>
 ,  std::shared_ptr<T_net_declaration_net_type4>
 ,  std::shared_ptr<T_net_declaration_trireg_1>
 ,  std::shared_ptr<T_net_declaration_trireg_2>
 ,  std::shared_ptr<T_net_declaration_trireg_3>
 ,  std::shared_ptr<T_net_declaration_trireg_4>
 > net_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_vectored_scalared_NOSPEC>
 ,  std::shared_ptr<T_vectored_scalared_vectored>
 ,  std::shared_ptr<T_vectored_scalared_scalared>
 > vectored_scalared ; 
typedef boost::variant<
 std::shared_ptr<T_real_declaration>
 > real_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_realtime_declaration>
 > realtime_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_reg_declaration>
 > reg_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_time_declaration>
 > time_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_net_type_NOSPEC>
 ,  std::shared_ptr<T_net_type__KEY_SUPPLY0>
 ,  std::shared_ptr<T_net_type__KEY_SUPPLY1>
 ,  std::shared_ptr<T_net_type__KEY_TRI>
 ,  std::shared_ptr<T_net_type__KEY_TRIAND>
 ,  std::shared_ptr<T_net_type__KEY_TRIOR>
 ,  std::shared_ptr<T_net_type__KEY_TRI0>
 ,  std::shared_ptr<T_net_type__KEY_TRI1>
 ,  std::shared_ptr<T_net_type__KEY_UWIRE>
 ,  std::shared_ptr<T_net_type__KEY_WIRE>
 ,  std::shared_ptr<T_net_type__KEY_WAND>
 ,  std::shared_ptr<T_net_type__KEY_WOR>
 > net_type ; 
typedef boost::variant<
 std::shared_ptr<T_real_type_noass>
 ,  std::shared_ptr<T_real_type_ass>
 > real_type ; 
typedef boost::variant<
 std::shared_ptr<T_variable_type_noass>
 ,  std::shared_ptr<T_variable_type_ass>
 > variable_type ; 
typedef boost::variant<
 std::shared_ptr<KEY_HIGHZ0>
 ,  std::shared_ptr<KEY_HIGHZ1>
 ,  std::shared_ptr<KEY_SUPPLY0>
 ,  std::shared_ptr<KEY_STRONG0>
 ,  std::shared_ptr<KEY_PULL0>
 ,  std::shared_ptr<KEY_WEAK0>
 ,  std::shared_ptr<KEY_SUPPLY1>
 ,  std::shared_ptr<KEY_STRONG1>
 ,  std::shared_ptr<KEY_PULL1>
 ,  std::shared_ptr<KEY_WEAK1>
 > strength ; 
typedef boost::variant<
 std::shared_ptr<T_drive_strength_NOSPEC>
 ,  std::shared_ptr<T_drive_strength>
 > drive_strength ; 
typedef boost::variant<
 std::shared_ptr<T_charge_strength_NOSPEC>
 ,  std::shared_ptr<T_charge_strength__small>
 ,  std::shared_ptr<T_charge_strength__medium>
 ,  std::shared_ptr<T_charge_strength__large>
 > charge_strength ; 
typedef boost::variant<
 std::shared_ptr<T_delay3_NOSPEC>
 ,  std::shared_ptr<T_delay3_1>
 ,  std::shared_ptr<T_delay3_minmax1>
 ,  std::shared_ptr<T_delay3_minmax2>
 ,  std::shared_ptr<T_delay3_minmax3>
 > delay3 ; 
typedef boost::variant<
 std::shared_ptr<T_delay2_NOSPEC>
 ,  std::shared_ptr<T_delay2_1>
 ,  std::shared_ptr<T_delay2_minmax1>
 ,  std::shared_ptr<T_delay2_minmax2>
 > delay2 ; 
typedef boost::variant<
 std::shared_ptr<T_event_identifier_dimension_list>
 > event_identifier_dimension_list ; 
typedef boost::variant<
 std::shared_ptr<T_net_identifier_dimension_list>
 > net_identifier_dimension_list ; 
typedef boost::variant<
 std::shared_ptr<T_port_identifier_equ1_expression_opt>
 > port_identifier_equ1_expression_opt ; 
typedef boost::variant<
 std::shared_ptr<T_defparam_assignment>
 > defparam_assignment ; 
typedef boost::variant<
 std::shared_ptr<T_net_decl_assignment>
 > net_decl_assignment ; 
typedef boost::variant<
 std::shared_ptr<T_param_assignment>
 > param_assignment ; 
typedef boost::variant<
 std::shared_ptr<T_specparam_assignment>
 ,  std::shared_ptr<T_specparam_assignment_pulse1>
 ,  std::shared_ptr<T_specparam_assignment_pulse2>
 > specparam_assignment ; 
typedef boost::variant<
 std::shared_ptr<T_dimension>
 > dimension ; 
typedef boost::variant<
 std::shared_ptr<T_range_NOSPEC>
 ,  std::shared_ptr<T_range>
 > range ; 
typedef boost::variant<
 std::shared_ptr<T_automatic_false>
 ,  std::shared_ptr<T_automatic_true>
 > automatic ; 
typedef boost::variant<
 std::shared_ptr<T_function_declaration_1>
 ,  std::shared_ptr<T_function_declaration_2>
 > function_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_function_item_declaration_block>
 ,  std::shared_ptr<T_function_item_declaration_input>
 > function_item_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_attribute_instance_list_tf_input_declaration>
 > attribute_instance_list_tf_input_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_function_range_or_type_NOSPEC>
 ,  std::shared_ptr<T_function_range_or_type>
 ,  std::shared_ptr<T_function_range_or_type_INTEGER>
 ,  std::shared_ptr<T_function_range_or_type_REAL>
 ,  std::shared_ptr<T_function_range_or_type_REALTIME>
 ,  std::shared_ptr<T_function_range_or_type_TIME>
 > function_range_or_type ; 
typedef boost::variant<
 std::shared_ptr<T_task_declaration1>
 ,  std::shared_ptr<T_task_declaration2>
 > task_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_task_item_declaration_block>
 ,  std::shared_ptr<T_task_item_declaration_input>
 ,  std::shared_ptr<T_task_item_declaration_output>
 ,  std::shared_ptr<T_task_item_declaration_inout>
 > task_item_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_task_port_item_input>
 > task_port_item ; 
typedef boost::variant<
 std::shared_ptr<T_tf_input_declaration_reg>
 ,  std::shared_ptr<T_tf_input_declaration_type>
 > tf_input_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_tf_output_declaration_reg>
 ,  std::shared_ptr<T_tf_output_declaration_type>
 > tf_output_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_tf_inout_declaration_reg>
 ,  std::shared_ptr<T_tf_inout_declaration_type>
 > tf_inout_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_task_port_type_integer>
 ,  std::shared_ptr<T_task_port_type_real>
 ,  std::shared_ptr<T_task_port_type_realtime>
 ,  std::shared_ptr<T_task_port_type_time>
 > task_port_type ; 
typedef boost::variant<
 std::shared_ptr<T_block_item_declaration_reg>
 ,  std::shared_ptr<T_block_item_declaration_integer>
 ,  std::shared_ptr<T_block_item_declaration_time>
 ,  std::shared_ptr<T_block_item_declaration_real>
 ,  std::shared_ptr<T_block_item_declaration_realtime>
 ,  std::shared_ptr<T_block_item_declaration_event>
 ,  std::shared_ptr<T_block_item_declaration_local_param>
 ,  std::shared_ptr<T_block_item_declaration_param>
 > block_item_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_block_variable_type>
 > block_variable_type ; 
typedef boost::variant<
 std::shared_ptr<T_block_real_type>
 > block_real_type ; 
typedef boost::variant<
 std::shared_ptr<T_gate_instantiation_cmos>
 ,  std::shared_ptr<T_gate_instantiation_enable>
 ,  std::shared_ptr<T_gate_instantiation_mos>
 ,  std::shared_ptr<T_gate_instantiation_input>
 ,  std::shared_ptr<T_gate_instantiation_output>
 ,  std::shared_ptr<T_gate_instantiation_pass_en>
 ,  std::shared_ptr<T_gate_instantiation_pass>
 ,  std::shared_ptr<T_gate_instantiation_pulldown>
 ,  std::shared_ptr<T_gate_instantiation_pullup>
 > gate_instantiation ; 
typedef boost::variant<
 std::shared_ptr<T_cmos_switch_instance>
 > cmos_switch_instance ; 
typedef boost::variant<
 std::shared_ptr<T_enable_gate_instance>
 > enable_gate_instance ; 
typedef boost::variant<
 std::shared_ptr<T_mos_switch_instance>
 > mos_switch_instance ; 
typedef boost::variant<
 std::shared_ptr<T_n_input_gate_instance>
 > n_input_gate_instance ; 
typedef boost::variant<
 std::shared_ptr<T_n_output_gate_instance>
 > n_output_gate_instance ; 
typedef boost::variant<
 std::shared_ptr<T_pass_switch_instance>
 > pass_switch_instance ; 
typedef boost::variant<
 std::shared_ptr<T_pass_enable_switch_instance>
 > pass_enable_switch_instance ; 
typedef boost::variant<
 std::shared_ptr<T_pull_gate_instance>
 > pull_gate_instance ; 
typedef boost::variant<
 std::shared_ptr<T_name_of_gate_instance_NOSPEC>
 ,  std::shared_ptr<T_name_of_gate_instance>
 > name_of_gate_instance ; 
typedef boost::variant<
 std::shared_ptr<T_pulldown_strength_NOSPEC>
 ,  std::shared_ptr<T_pulldown_strength01>
 ,  std::shared_ptr<T_pulldown_strength10>
 ,  std::shared_ptr<T_pulldown_strength0>
 > pulldown_strength ; 
typedef boost::variant<
 std::shared_ptr<T_pullup_strength_NOSPEC>
 ,  std::shared_ptr<T_pullup_strength01>
 ,  std::shared_ptr<T_pullup_strength10>
 ,  std::shared_ptr<T_pullup_strength1>
 > pullup_strength ; 
typedef boost::variant<
 std::shared_ptr<T_cmos_switchtype_CMOS>
 ,  std::shared_ptr<T_cmos_switchtype_RCMOS>
 > cmos_switchtype ; 
typedef boost::variant<
 std::shared_ptr<T_enable_gatetype__BUFIF0>
 ,  std::shared_ptr<T_enable_gatetype__BUFIF1>
 ,  std::shared_ptr<T_enable_gatetype__NOTIF0>
 ,  std::shared_ptr<T_enable_gatetype__NOTIF1>
 > enable_gatetype ; 
typedef boost::variant<
 std::shared_ptr<T_mos_switchtype_NMOS>
 ,  std::shared_ptr<T_mos_switchtype_PMOS>
 ,  std::shared_ptr<T_mos_switchtype_RNMOS>
 ,  std::shared_ptr<T_mos_switchtype_RPMOS>
 > mos_switchtype ; 
typedef boost::variant<
 std::shared_ptr<T_n_input_gatetype_AND>
 ,  std::shared_ptr<T_n_input_gatetype_NAND>
 ,  std::shared_ptr<T_n_input_gatetype_OR>
 ,  std::shared_ptr<T_n_input_gatetype_NOR>
 ,  std::shared_ptr<T_n_input_gatetype_XOR>
 ,  std::shared_ptr<T_n_input_gatetype_XNOR>
 > n_input_gatetype ; 
typedef boost::variant<
 std::shared_ptr<T_n_output_gatetype_BUF>
 ,  std::shared_ptr<T_n_output_gatetype_NOT>
 > n_output_gatetype ; 
typedef boost::variant<
 std::shared_ptr<T_pass_en_switchtype_TRANIF0>
 ,  std::shared_ptr<T_pass_en_switchtype_TRANIF1>
 ,  std::shared_ptr<T_pass_en_switchtype_RTRANIF1>
 ,  std::shared_ptr<T_pass_en_switchtype_RTRANIF0>
 > pass_en_switchtype ; 
typedef boost::variant<
 std::shared_ptr<T_pass_switchtype_TRAN>
 ,  std::shared_ptr<T_pass_switchtype_RTRAN>
 > pass_switchtype ; 
typedef boost::variant<
 std::shared_ptr<T_module_instantiation>
 > module_instantiation ; 
typedef boost::variant<
 std::shared_ptr<T_module_instance>
 > module_instance ; 
typedef boost::variant<
 std::shared_ptr<T_name_of_module_instance_NOSPEC>
 ,  std::shared_ptr<T_name_of_module_instance>
 > name_of_module_instance ; 
typedef boost::variant<
 std::shared_ptr<T_parameter_value_assignment_NOSPEC>
 ,  std::shared_ptr<T_parameter_value_assignment_order>
 ,  std::shared_ptr<T_parameter_value_assignment_named>
 > parameter_value_assignment ; 
typedef boost::variant<
 std::shared_ptr<T_named_parameter_assignment>
 > named_parameter_assignment ; 
typedef boost::variant<
 std::shared_ptr<T_list_of_port_connections_ordered>
 ,  std::shared_ptr<T_list_of_port_connections_named>
 > list_of_port_connections ; 
typedef boost::variant<
 std::shared_ptr<T_ordered_port_connection>
 > ordered_port_connection ; 
typedef boost::variant<
 std::shared_ptr<T_named_port_connection>
 > named_port_connection ; 
typedef boost::variant<
 std::shared_ptr<T_generate_region>
 > generate_region ; 
typedef boost::variant<
 std::shared_ptr<T_genvar_declaration>
 > genvar_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_loop_generate_construct>
 > loop_generate_construct ; 
typedef boost::variant<
 std::shared_ptr<T_genvar_initialization>
 > genvar_initialization ; 
typedef boost::variant<
 std::shared_ptr<T_genvar_iteration>
 > genvar_iteration ; 
typedef boost::variant<
 std::shared_ptr<T_conditional_generate_construct_if>
 ,  std::shared_ptr<T_conditional_generate_construct_case>
 > conditional_generate_construct ; 
typedef boost::variant<
 std::shared_ptr<T_case_generate_construct>
 > case_generate_construct ; 
typedef boost::variant<
 std::shared_ptr<T_case_generate_item_case>
 ,  std::shared_ptr<T_case_generate_item_default>
 > case_generate_item ; 
typedef boost::variant<
 std::shared_ptr<T_if_generate_construct>
 > if_generate_construct ; 
typedef boost::variant<
 std::shared_ptr<T_generate_block_NOSPEC>
 ,  std::shared_ptr<T_generate_block_mgi>
 ,  std::shared_ptr<T_generate_block_begin>
 > generate_block ; 
typedef boost::variant<
 std::shared_ptr<T_udp_declaration_1>
 ,  std::shared_ptr<T_udp_declaration_2>
 > udp_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_udp_port_list>
 > udp_port_list ; 
typedef boost::variant<
 std::shared_ptr<T_udp_declaration_port_list>
 > udp_declaration_port_list ; 
typedef boost::variant<
 std::shared_ptr<T_udp_port_declaration_out>
 ,  std::shared_ptr<T_udp_port_declaration_input>
 ,  std::shared_ptr<T_udp_port_declaration_reg>
 > udp_port_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_udp_output_declaration_output>
 ,  std::shared_ptr<T_udp_output_declaration_reg>
 > udp_output_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_udp_input_declaration_singular>
 > udp_input_declaration_sigular ; 
typedef boost::variant<
 std::shared_ptr<T_udp_input_declaration>
 > udp_input_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_udp_reg_declaration>
 > udp_reg_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_udp_body_comb>
 ,  std::shared_ptr<T_udp_body_seq>
 > udp_body ; 
typedef boost::variant<
 std::shared_ptr<T_combinational_entry>
 > combinational_entry ; 
typedef boost::variant<
 std::shared_ptr<T_sequential_body>
 > sequential_body ; 
typedef boost::variant<
 std::shared_ptr<T_udp_initial_statement_NOSPEC>
 ,  std::shared_ptr<T_udp_initial_statement>
 > udp_initial_statement ; 
typedef boost::variant<
 std::shared_ptr<T_init_val_bin>
 ,  std::shared_ptr<T_init_val_unsigned>
 > init_val ; 
typedef boost::variant<
 std::shared_ptr<T_sequential_entry>
 ,  std::shared_ptr<T_sequential_entry_comb>
 > sequential_entry ; 
typedef boost::variant<
 std::shared_ptr<T_seq_input_list_level>
 ,  std::shared_ptr<T_seq_input_list_edge>
 > seq_input_list ; 
typedef boost::variant<
 std::shared_ptr<T_edge_input_list>
 > edge_input_list ; 
typedef boost::variant<
 std::shared_ptr<T_edge_indicator_level>
 ,  std::shared_ptr<T_edge_indicator_edge>
 > edge_indicator ; 
typedef boost::variant<
 std::shared_ptr<T_udp_instantiation>
 > udp_instantiation ; 
typedef boost::variant<
 std::shared_ptr<T_udp_instance>
 > udp_instance ; 
typedef boost::variant<
 std::shared_ptr<T_name_of_udp_instance_NOSPEC>
 ,  std::shared_ptr<T_name_of_udp_instance>
 > name_of_udp_instance ; 
typedef boost::variant<
 std::shared_ptr<T_continuous_assign>
 > continuous_assign ; 
typedef boost::variant<
 std::shared_ptr<T_net_assignment>
 > net_assignment ; 
typedef boost::variant<
 std::shared_ptr<T_initial_construct>
 > initial_construct ; 
typedef boost::variant<
 std::shared_ptr<T_always_construct>
 > always_construct ; 
typedef boost::variant<
 std::shared_ptr<T_blocking_assignment>
 > blocking_assignment ; 
typedef boost::variant<
 std::shared_ptr<T_nonblocking_assignment>
 > nonblocking_assignment ; 
typedef boost::variant<
 std::shared_ptr<T_procedural_continuous_assignments_assign>
 ,  std::shared_ptr<T_procedural_continuous_assignments_deassign>
 ,  std::shared_ptr<T_procedural_continuous_assignments_force1>
 ,  std::shared_ptr<T_procedural_continuous_assignments_force2>
 ,  std::shared_ptr<T_procedural_continuous_assignments_release1>
 ,  std::shared_ptr<T_procedural_continuous_assignments_release2>
 > procedural_continuous_assignments ; 
typedef boost::variant<
 std::shared_ptr<T_par_block>
 > par_block ; 
typedef boost::variant<
 std::shared_ptr<T_colon_block_identifier_NOSPEC>
 ,  std::shared_ptr<T_colon_block_identifier>
 > colon_block_identifier ; 
typedef boost::variant<
 std::shared_ptr<T_seq_block>
 > seq_block ; 
typedef boost::variant<
 std::shared_ptr<T_statement_NOSPEC>
 ,  std::shared_ptr<T_statement_blocking_assignment>
 ,  std::shared_ptr<T_statement_case_statement>
 ,  std::shared_ptr<T_statement_conditional_statement>
 ,  std::shared_ptr<T_statement_disable_statement>
 ,  std::shared_ptr<T_statement_event_trigger>
 ,  std::shared_ptr<T_statement_loop_statement>
 ,  std::shared_ptr<T_statement_nonblocking_assignment>
 ,  std::shared_ptr<T_statement_par_block>
 ,  std::shared_ptr<T_statement_procedural_continuous_assignments>
 ,  std::shared_ptr<T_statement_procedural_timing_control_statement>
 ,  std::shared_ptr<T_statement_seq_block>
 ,  std::shared_ptr<T_statement_system_task_enable>
 ,  std::shared_ptr<T_statement_task_enable>
 ,  std::shared_ptr<T_statement_wait_statement>
 > statement ; 
typedef boost::variant<
 std::shared_ptr<T_delay_control_delay_value>
 ,  std::shared_ptr<T_delay_control_mintypmax_expression>
 > delay_control ; 
typedef boost::variant<
 std::shared_ptr<T_delay_or_event_control_NOSPEC>
 ,  std::shared_ptr<T_delay_or_event_control_delay_control>
 ,  std::shared_ptr<T_delay_or_event_control_event_control>
 ,  std::shared_ptr<T_delay_or_event_control_3>
 > delay_or_event_control ; 
typedef boost::variant<
 std::shared_ptr<T_disable_statement>
 > disable_statement ; 
typedef boost::variant<
 std::shared_ptr<T_event_control_eventid>
 ,  std::shared_ptr<T_event_control_event_exp>
 ,  std::shared_ptr<T_event_control_start>
 > event_control ; 
typedef boost::variant<
 std::shared_ptr<T_event_trigger>
 > event_trigger ; 
typedef boost::variant<
 std::shared_ptr<T_event_expression_exp>
 ,  std::shared_ptr<T_event_expression_pos>
 ,  std::shared_ptr<T_event_expression_neg>
 ,  std::shared_ptr<T_event_expression_or>
 > event_expression ; 
typedef boost::variant<
 std::shared_ptr<T_procedural_timing_control_delay>
 ,  std::shared_ptr<T_procedural_timing_control_event>
 > procedural_timing_control ; 
typedef boost::variant<
 std::shared_ptr<T_procedural_timing_control_statement>
 > procedural_timing_control_statement ; 
typedef boost::variant<
 std::shared_ptr<T_wait_statement>
 > wait_statement ; 
typedef boost::variant<
 std::shared_ptr<T_conditional_statement_ifelse>
 ,  std::shared_ptr<T_conditional_statement_ifelseif>
 > conditional_statement ; 
typedef boost::variant<
 std::shared_ptr<T_elseif>
 > else_if_lp_expression_rp_statement_or_null ; 
typedef boost::variant<
 std::shared_ptr<T_case_statement_case>
 ,  std::shared_ptr<T_case_statement_casez>
 ,  std::shared_ptr<T_case_statement_casex>
 > case_statement ; 
typedef boost::variant<
 std::shared_ptr<T_case_item>
 ,  std::shared_ptr<T_case_item_default>
 > case_item ; 
typedef boost::variant<
 std::shared_ptr<T_colon_opt_false>
 ,  std::shared_ptr<T_colon_opt_true>
 > colon_opt ; 
typedef boost::variant<
 std::shared_ptr<T_loop_statement_forever>
 ,  std::shared_ptr<T_loop_statement_repeat>
 ,  std::shared_ptr<T_loop_statement_while>
 ,  std::shared_ptr<T_loop_statement_for>
 > loop_statement ; 
typedef boost::variant<
 std::shared_ptr<T_system_task_enable>
 > system_task_enable ; 
typedef boost::variant<
 std::shared_ptr<T_task_enable>
 > task_enable ; 
typedef boost::variant<
 std::shared_ptr<T_specify_block>
 > specify_block ; 
typedef boost::variant<
 std::shared_ptr<T_specify_item_specparam>
 ,  std::shared_ptr<T_specify_item_pulsestyle>
 ,  std::shared_ptr<T_specify_item_showcancelled>
 ,  std::shared_ptr<T_specify_item_path>
 ,  std::shared_ptr<T_specify_item_system>
 > specify_item ; 
typedef boost::variant<
 std::shared_ptr<T_pulsestyle_declaration_oneevent>
 ,  std::shared_ptr<T_pulsestyle_declaration_onedetect>
 > pulsestyle_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_showcancelled_declaration_show>
 ,  std::shared_ptr<T_showcancelled_declaration_noshow>
 > showcancelled_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_path_declaration_simple>
 ,  std::shared_ptr<T_path_declaration_edge>
 ,  std::shared_ptr<T_path_declaration_state>
 > path_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_simple_path_declaration_parallel>
 ,  std::shared_ptr<T_simple_path_declaration_full>
 > simple_path_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_parallel_path_description>
 > parallel_path_description ; 
typedef boost::variant<
 std::shared_ptr<T_full_path_description>
 > full_path_description ; 
typedef boost::variant<
 std::shared_ptr<T_specify_input_terminal_descriptor>
 > specify_input_terminal_descriptor ; 
typedef boost::variant<
 std::shared_ptr<T_specify_output_terminal_descriptor>
 > specify_output_terminal_descriptor ; 
typedef boost::variant<
 std::shared_ptr<T_list_of_mintypmax_expressions_1>
 ,  std::shared_ptr<T_list_of_mintypmax_expressions_2>
 ,  std::shared_ptr<T_list_of_mintypmax_expressions_3>
 ,  std::shared_ptr<T_list_of_mintypmax_expressions_6>
 ,  std::shared_ptr<T_list_of_mintypmax_expressions_12>
 > list_of_path_delay_expressions ; 
typedef boost::variant<
 std::shared_ptr<T_edge_sensitive_path_declaration_parallel>
 ,  std::shared_ptr<T_edge_sensitive_path_declaration_full>
 > edge_sensitive_path_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_parallel_edge_sensitive_path_description>
 > parallel_edge_sensitive_path_description ; 
typedef boost::variant<
 std::shared_ptr<T_full_edge_sensitive_path_description>
 > full_edge_sensitive_path_description ; 
typedef boost::variant<
 std::shared_ptr<T_state_dependent_path_declaration_simple>
 ,  std::shared_ptr<T_state_dependent_path_declaration_edge>
 ,  std::shared_ptr<T_state_dependent_path_declaration_ifnone>
 > state_dependent_path_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_concatenation>
 > concatenation ; 
typedef boost::variant<
 std::shared_ptr<T_module_path_multiple_concatenation>
 > module_path_multiple_concatenation ; 
typedef boost::variant<
 std::shared_ptr<T_module_path_concatenation>
 > module_path_concatenation ; 
typedef boost::variant<
 std::shared_ptr<T_multiple_concatenation>
 > multiple_concatenation ; 
typedef boost::variant<
 std::shared_ptr<T_function_call>
 > function_call ; 
typedef boost::variant<
 std::shared_ptr<T_system_function_call>
 > system_function_call ; 
typedef boost::variant<
 std::shared_ptr<T_conditional_expression>
 > conditional_expression ; 
typedef boost::variant<
 std::shared_ptr<T_expression_NOSPEC>
 ,  std::shared_ptr<T_expression_prim>
 ,  std::shared_ptr<T_expression_op1>
 ,  std::shared_ptr<T_expression_op2>
 ,  std::shared_ptr<T_expression_condition>
 > expression ; 
typedef boost::variant<
 std::shared_ptr<T_mintypmax_expression_NOSPEC>
 ,  std::shared_ptr<T_mintypmax_expression_1>
 ,  std::shared_ptr<T_mintypmax_expression_3>
 > mintypmax_expression ; 
typedef boost::variant<
 std::shared_ptr<T_module_path_conditional_expression>
 > module_path_conditional_expression ; 
typedef boost::variant<
 std::shared_ptr<T_module_path_expression_prim>
 ,  std::shared_ptr<T_module_path_expression_op1>
 ,  std::shared_ptr<T_module_path_expression_op2>
 ,  std::shared_ptr<T_module_path_expression_sel>
 > module_path_expression ; 
typedef boost::variant<
 std::shared_ptr<T_module_path_mintypmax_expression_1>
 ,  std::shared_ptr<T_module_path_mintypmax_expression_3>
 > module_path_mintypmax_expression ; 
typedef boost::variant<
 std::shared_ptr<T_range_expression_NOSPEC>
 ,  std::shared_ptr<T_range_expression_1>
 ,  std::shared_ptr<T_range_expression_2>
 ,  std::shared_ptr<T_range_expression_addrange>
 ,  std::shared_ptr<T_range_expression_subrange>
 > range_expression ; 
typedef boost::variant<
 std::shared_ptr<T_module_path_primary_num>
 ,  std::shared_ptr<T_module_path_primary_id>
 ,  std::shared_ptr<T_module_path_primary_concat>
 ,  std::shared_ptr<T_module_path_primary_mul_concat>
 ,  std::shared_ptr<T_module_path_primary_func>
 ,  std::shared_ptr<T_module_path_primary_sysfunc>
 ,  std::shared_ptr<T_module_path_primary_mintypmax>
 > module_path_primary ; 
typedef boost::variant<
 std::shared_ptr<T_primary_num>
 ,  std::shared_ptr<T_primary_id>
 ,  std::shared_ptr<T_primary_concat>
 ,  std::shared_ptr<T_primary_mulcon>
 ,  std::shared_ptr<T_primary_func>
 ,  std::shared_ptr<T_primary_sysfunc>
 ,  std::shared_ptr<T_primary_mintypmax>
 ,  std::shared_ptr<T_primary_string>
 > primary ; 
typedef boost::variant<
 std::shared_ptr<T_net_lvalue_id>
 ,  std::shared_ptr<T_net_lvalue_idexp>
 ,  std::shared_ptr<T_net_lvalue_lvlist>
 > net_lvalue ; 
typedef boost::variant<
 std::shared_ptr<T_delay_value_UNSIGNED_NUMBER>
 ,  std::shared_ptr<T_delay_value_REAL_NUMBER>
 ,  std::shared_ptr<T_delay_value_id>
 > delay_value ; 
typedef boost::variant<
 std::shared_ptr<T_attribute_instance>
 > attribute_instance ; 
typedef boost::variant<
 std::shared_ptr<T_attr_spec>
 > attr_spec ; 
typedef boost::variant<
 std::shared_ptr<T_hierarchical_identifier>
 > hierarchical_identifier ; 
typedef boost::variant<
 std::shared_ptr<T_identifier_lsq_expression_rsq>
 > identifier_lsq_expression_rsq ; 
typedef boost::variant<
 std::shared_ptr<T_polarity_operator_NOSPEC>
 ,  std::shared_ptr<T_polarity_operator_ADD>
 ,  std::shared_ptr<T_polarity_operator_SUB>
 > polarity_operator ; 
typedef boost::variant<
 std::shared_ptr<T_system_timing_check_dollor_setup_timing_check>
 ,  std::shared_ptr<T_system_timing_check_dollor_hold_timing_check>
 ,  std::shared_ptr<T_system_timing_check_dollor_setuphold_timing_check>
 ,  std::shared_ptr<T_system_timing_check_dollor_recovery_timing_check>
 ,  std::shared_ptr<T_system_timing_check_dollor_removal_timing_check>
 ,  std::shared_ptr<T_system_timing_check_dollor_recrem_timing_check>
 ,  std::shared_ptr<T_system_timing_check_dollor_skew_timing_check>
 ,  std::shared_ptr<T_system_timing_check_dollor_timeskew_timing_check>
 ,  std::shared_ptr<T_system_timing_check_dollor_fullskew_timing_check>
 ,  std::shared_ptr<T_system_timing_check_dollor_period_timing_check>
 ,  std::shared_ptr<T_system_timing_check_dollor_width_timing_check>
 ,  std::shared_ptr<T_system_timing_check_dollor_nochange_timing_check>
 > system_timing_check ; 
typedef boost::variant<
 std::shared_ptr<T_dollor_setup_timing_check>
 > dollor_setup_timing_check ; 
typedef boost::variant<
 std::shared_ptr<T_dollor_hold_timing_check>
 > dollor_hold_timing_check ; 
typedef boost::variant<
 std::shared_ptr<T_dollor_setuphold_timing_check>
 > dollor_setuphold_timing_check ; 
typedef boost::variant<
 std::shared_ptr<T_dollor_recovery_timing_check>
 > dollor_recovery_timing_check ; 
typedef boost::variant<
 std::shared_ptr<T_dollor_removal_timing_check>
 > dollor_removal_timing_check ; 
typedef boost::variant<
 std::shared_ptr<T_dollor_recrem_timing_check>
 > dollor_recrem_timing_check ; 
typedef boost::variant<
 std::shared_ptr<T_dollor_skew_timing_check>
 > dollor_skew_timing_check ; 
typedef boost::variant<
 std::shared_ptr<T_dollor_timeskew_timing_check>
 > dollor_timeskew_timing_check ; 
typedef boost::variant<
 std::shared_ptr<T_dollor_fullskew_timing_check>
 > dollor_fullskew_timing_check ; 
typedef boost::variant<
 std::shared_ptr<T_dollor_period_timing_check>
 > dollor_period_timing_check ; 
typedef boost::variant<
 std::shared_ptr<T_dollor_width_timing_check>
 > dollor_width_timing_check ; 
typedef boost::variant<
 std::shared_ptr<T_dollor_nochange_timing_check>
 > dollor_nochange_timing_check ; 
typedef boost::variant<
 std::shared_ptr<T_checktime_condition_NOSPEC>
 ,  std::shared_ptr<T_checktime_condition>
 > checktime_condition ; 
typedef boost::variant<
 std::shared_ptr<T_controlled_reference_event>
 > controlled_reference_event ; 
typedef boost::variant<
 std::shared_ptr<T_data_event>
 > data_event ; 
typedef boost::variant<
 std::shared_ptr<T_delayed_reference_NOSPEC>
 ,  std::shared_ptr<T_delayed_reference_id>
 ,  std::shared_ptr<T_delayed_reference_idmtmexp>
 > delayed_reference ; 
typedef boost::variant<
 std::shared_ptr<T_end_edge_offset>
 > end_edge_offset ; 
typedef boost::variant<
 std::shared_ptr<T_event_based_flag>
 ,  std::shared_ptr<T_event_based_flag_NOSPEC>
 > event_based_flag ; 
typedef boost::variant<
 std::shared_ptr<T_notifier_NOSPEC>
 ,  std::shared_ptr<T_notifier>
 > notifier ; 
typedef boost::variant<
 std::shared_ptr<T_reference_event>
 > reference_event ; 
typedef boost::variant<
 std::shared_ptr<T_remain_active_flag>
 > remain_active_flag ; 
typedef boost::variant<
 std::shared_ptr<T_stamptime_condition>
 > stamptime_condition ; 
typedef boost::variant<
 std::shared_ptr<T_start_edge_offset>
 > start_edge_offset ; 
typedef boost::variant<
 std::shared_ptr<T_threshold>
 > threshold ; 
typedef boost::variant<
 std::shared_ptr<T_timing_check_limit>
 > timing_check_limit ; 
typedef boost::variant<
 std::shared_ptr<T_timing_check_event>
 > timing_check_event ; 
typedef boost::variant<
 std::shared_ptr<T_controlled_timing_check_event>
 > controlled_timing_check_event ; 
typedef boost::variant<
 std::shared_ptr<T_timing_check_event_control_NOSPEC>
 ,  std::shared_ptr<T_timing_check_event_control_POSEDGE>
 ,  std::shared_ptr<T_timing_check_event_control_NEGEDGE>
 ,  std::shared_ptr<T_timing_check_event_control_edge_control_specifier>
 > timing_check_event_control ; 
typedef boost::variant<
 std::shared_ptr<T_specify_terminal_descriptor_in>
 ,  std::shared_ptr<T_specify_terminal_descriptor_out>
 > specify_terminal_descriptor ; 
typedef boost::variant<
 std::shared_ptr<T_edge_control_specifier>
 > edge_control_specifier ; 
typedef boost::variant<
 std::shared_ptr<T_edge_descriptor_01>
 ,  std::shared_ptr<T_edge_descriptor_10>
 ,  std::shared_ptr<T_edge_descriptor_zx01>
 ,  std::shared_ptr<T_edge_descriptor_01zx>
 > edge_descriptor ; 
typedef boost::variant<
 std::shared_ptr<T_zero_or_one_0>
 ,  std::shared_ptr<T_zero_or_one_1>
 > zero_or_one ; 
typedef boost::variant<
 std::shared_ptr<T_z_or_x__x>
 ,  std::shared_ptr<T_z_or_x__X>
 ,  std::shared_ptr<T_z_or_x__z>
 ,  std::shared_ptr<T_z_or_x__Z>
 > z_or_x ; 
typedef boost::variant<
 std::shared_ptr<T_timing_check_condition_NOSPEC>
 ,  std::shared_ptr<T_timing_check_condition>
 > timing_check_condition ; 
typedef boost::variant<
 std::shared_ptr<T_scalar_timing_check_condition_exp>
 ,  std::shared_ptr<T_scalar_timing_check_condition_Negexp>
 ,  std::shared_ptr<T_scalar_timing_check_condition_eq2>
 ,  std::shared_ptr<T_scalar_timing_check_condition_eq3>
 ,  std::shared_ptr<T_scalar_timing_check_condition_neq2>
 ,  std::shared_ptr<T_scalar_timing_check_condition_neq3>
 > scalar_timing_check_condition ; 
typedef boost::variant<
 std::shared_ptr<T_scalar_constant_unsigned>
 ,  std::shared_ptr<T_scalar_constant_binary>
 > scalar_constant ; 
typedef boost::variant<
 std::shared_ptr<T_delayed_data_NOSPEC>
 ,  std::shared_ptr<T_delayed_data_id>
 ,  std::shared_ptr<T_delayed_data_idmtmexp>
 > delayed_data ; 
typedef boost::variant<
 std::shared_ptr<T_edge_identifier_NOSPEC>
 ,  std::shared_ptr<T_edge_identifier_POS>
 ,  std::shared_ptr<T_edge_identifier_NEG>
 > edge_identifier ; 
typedef boost::variant<
 std::shared_ptr<T_unary_operator_LOGIC_NEG>
 ,  std::shared_ptr<T_unary_operator_BITWISE_NEG>
 ,  std::shared_ptr<T_unary_operator_REDUCE_NOR>
 ,  std::shared_ptr<T_unary_operator_REDUCE_NAND>
 ,  std::shared_ptr<T_unary_operator_ADD>
 ,  std::shared_ptr<T_unary_operator_SUB>
 ,  std::shared_ptr<T_unary_operator_REDUCE_AND>
 ,  std::shared_ptr<T_unary_operator_REDUCE_OR>
 ,  std::shared_ptr<T_unary_operator_REDUCE_XOR>
 ,  std::shared_ptr<T_unary_operator_REDUCE_XNOR>
 > unary_operator ; 
typedef boost::variant<
 std::shared_ptr<T_binary_operator_MUL>
 ,  std::shared_ptr<T_binary_operator_DIV>
 ,  std::shared_ptr<T_binary_operator_MOD>
 ,  std::shared_ptr<T_binary_operator_EQU2>
 ,  std::shared_ptr<T_binary_operator_NEQ2>
 ,  std::shared_ptr<T_binary_operator_EQU3>
 ,  std::shared_ptr<T_binary_operator_NEQ3>
 ,  std::shared_ptr<T_binary_operator_POWER>
 ,  std::shared_ptr<T_binary_operator_LT>
 ,  std::shared_ptr<T_binary_operator_LE>
 ,  std::shared_ptr<T_binary_operator_GT>
 ,  std::shared_ptr<T_binary_operator_GE>
 > binary_operator1 ; 
typedef boost::variant<
 std::shared_ptr<T_binary_operator_LOGICAL_RIGHTSHIFT>
 ,  std::shared_ptr<T_binary_operator_LOGICAL_LEFTSHIFT>
 ,  std::shared_ptr<T_binary_operator_ARITHMETIC_RIGHTSHIFT>
 ,  std::shared_ptr<T_binary_operator_ARITHMETIC_LEFTSHIFT>
 ,  std::shared_ptr<T_binary_operator_ADD>
 ,  std::shared_ptr<T_binary_operator_SUB>
 ,  std::shared_ptr<T_binary_operator_AND>
 ,  std::shared_ptr<T_binary_operator_OR>
 ,  std::shared_ptr<T_binary_operator_AND2>
 ,  std::shared_ptr<T_binary_operator_OR2>
 ,  std::shared_ptr<T_binary_operator_XOR>
 ,  std::shared_ptr<T_binary_operator_XNOR>
 > binary_operator2 ; 
typedef boost::variant<
 std::shared_ptr<T_binary_operator_1>
 ,  std::shared_ptr<T_binary_operator_2>
 > binary_operator ; 
typedef boost::variant<
 std::shared_ptr<T_unary_module_path_operator_GANTANHAO>
 ,  std::shared_ptr<T_unary_module_path_operator_BOLANGHAO>
 ,  std::shared_ptr<T_unary_module_path_operator_AND>
 ,  std::shared_ptr<T_unary_module_path_operator_NAND>
 ,  std::shared_ptr<T_unary_module_path_operator_OR>
 ,  std::shared_ptr<T_unary_module_path_operator_NOR>
 ,  std::shared_ptr<T_unary_module_path_operator_XOR>
 ,  std::shared_ptr<T_unary_module_path_operator_XNOR>
 > unary_module_path_operator ; 
typedef boost::variant<
 std::shared_ptr<T_binary_module_path_operator_EQU2>
 ,  std::shared_ptr<T_binary_module_path_operator_NEQ2>
 ,  std::shared_ptr<T_binary_module_path_operator_AND2>
 ,  std::shared_ptr<T_binary_module_path_operator_OR2>
 ,  std::shared_ptr<T_binary_module_path_operator_AND1>
 ,  std::shared_ptr<T_binary_module_path_operator_OR1>
 ,  std::shared_ptr<T_binary_module_path_operator_XOR>
 ,  std::shared_ptr<T_binary_module_path_operator_XNOR>
 > binary_module_path_operator ; 
typedef boost::variant<
 std::shared_ptr<T_level_symbol_0>
 ,  std::shared_ptr<T_level_symbol_1>
 ,  std::shared_ptr<T_level_symbol_x>
 ,  std::shared_ptr<T_level_symbol_X>
 ,  std::shared_ptr<T_level_symbol_QUESTION>
 ,  std::shared_ptr<T_level_symbol_b>
 ,  std::shared_ptr<T_level_symbol_B>
 ,  std::shared_ptr<T_level_symbol_SUB>
 > level_symbol ; 
typedef boost::variant<
 std::shared_ptr<T_output_symbol_UNSIGNED_NUMBER>
 ,  std::shared_ptr<T_output_symbol_SIMID>
 > output_symbol ; 
typedef boost::variant<
 std::shared_ptr<T_number_UNSIGNED_NUMBER>
 ,  std::shared_ptr<T_number_UNSIGNED_NUMBER_size>
 ,  std::shared_ptr<T_number_OCTAL_NUMBER>
 ,  std::shared_ptr<T_number_BINARY_NUMBER>
 ,  std::shared_ptr<T_number_HEX_NUMBER>
 ,  std::shared_ptr<T_number_REAL_NUMBER>
 > number ; 
typedef boost::variant<
 std::shared_ptr<T_next_state_UNSIGNED_NUMBER>
 ,  std::shared_ptr<T_next_state_SIMID>
 ,  std::shared_ptr<T_next_state_SUB>
 > next_state ; 
typedef boost::variant<
 std::shared_ptr<T_edge_symbol_r>
 ,  std::shared_ptr<T_edge_symbol_R>
 ,  std::shared_ptr<T_edge_symbol_f>
 ,  std::shared_ptr<T_edge_symbol_F>
 ,  std::shared_ptr<T_edge_symbol_p>
 ,  std::shared_ptr<T_edge_symbol_P>
 ,  std::shared_ptr<T_edge_symbol_n>
 ,  std::shared_ptr<T_edge_symbol_N>
 > edge_symbol ; 
typedef boost::variant<
 std::shared_ptr<T_string>
 > string_typedef ; 
typedef boost::variant<
 std::shared_ptr<T_system_function_identifier>
 > system_function_identifier ; 
typedef boost::variant<
 std::shared_ptr<T_io_declaration_net>
 > io_declaration ; 
typedef boost::variant<
 std::shared_ptr<T_netreg_type__NOSPEC>
 ,  std::shared_ptr<T_netreg_type__KEY_SUPPLY0>
 ,  std::shared_ptr<T_netreg_type__KEY_SUPPLY1>
 ,  std::shared_ptr<T_netreg_type__KEY_TRI>
 ,  std::shared_ptr<T_netreg_type__KEY_TRIAND>
 ,  std::shared_ptr<T_netreg_type__KEY_TRIOR>
 ,  std::shared_ptr<T_netreg_type__KEY_TRI0>
 ,  std::shared_ptr<T_netreg_type__KEY_TRI1>
 ,  std::shared_ptr<T_netreg_type__KEY_UWIRE>
 ,  std::shared_ptr<T_netreg_type__KEY_WIRE>
 ,  std::shared_ptr<T_netreg_type__KEY_WAND>
 ,  std::shared_ptr<T_netreg_type__KEY_WOR>
 ,  std::shared_ptr<T_netreg_type__KEY_REG>
 ,  std::shared_ptr<T_netreg_type__KEY_INTEGER>
 ,  std::shared_ptr<T_netreg_type__KEY_TIME>
 > netreg_type ; 
typedef boost::variant<
 std::shared_ptr<T_statement_or_block_item_statement>
 ,  std::shared_ptr<T_statement_or_block_item_block>
 > statement_or_block_item ; 
typedef boost::variant<
 std::shared_ptr<T_tf_io_declaration_gen1>
 ,  std::shared_ptr<T_tf_io_declaration_gen2>
 > tf_io_declaration_gen ; 
typedef boost::variant<
 std::shared_ptr<T_io_type_NOSPEC>
 ,  std::shared_ptr<T_io_type_output>
 ,  std::shared_ptr<T_io_type_input>
 ,  std::shared_ptr<T_io_type_inout>
 > io_type ; 
typedef boost::variant<
 std::shared_ptr<T_reg_false>
 ,  std::shared_ptr<T_reg_true>
 > reg ; 
typedef boost::variant<
 std::shared_ptr<T_identifier_NOSPEC>
 ,  std::shared_ptr<T_identifier>
 > identifier ; 
typedef boost::variant<
 std::shared_ptr<T_colon_config_opt_FALSE>
 ,  std::shared_ptr<T_colon_config_opt_TRUE>
 > colon_config_opt ; 
typedef boost::variant<
 std::shared_ptr<T_signed_FALSE>
 ,  std::shared_ptr<T_signed_TRUE>
 > signedType ; 
class T_description__module_declaration : public ComponentBase {
  public :
    std::shared_ptr<module_declaration> mem1;

  T_description__module_declaration( 
       std::shared_ptr<module_declaration> i1
  ):
       mem1(i1)
  {}
};
class T_description__udp_declaration : public ComponentBase {
  public :
    std::shared_ptr<udp_declaration> mem1;

  T_description__udp_declaration( 
       std::shared_ptr<udp_declaration> i1
  ):
       mem1(i1)
  {}
};
class T_description__config_declaration : public ComponentBase {
  public :
    std::shared_ptr<config_declaration> mem1;

  T_description__config_declaration( 
       std::shared_ptr<config_declaration> i1
  ):
       mem1(i1)
  {}
};
class T_module_declaration__1 : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<identifier> mem2;
    std::shared_ptr<std::list<std::shared_ptr< parameter_declaration>>> mem3;
    std::shared_ptr<std::list<std::shared_ptr< port>>> mem4;
    std::shared_ptr<std::list<std::shared_ptr< module_item>>> mem5;

  T_module_declaration__1( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<identifier> i2
 ,     std::shared_ptr<std::list<std::shared_ptr< parameter_declaration>>> i3
 ,     std::shared_ptr<std::list<std::shared_ptr< port>>> i4
 ,     std::shared_ptr<std::list<std::shared_ptr< module_item>>> i5
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
 ,     mem5(i5)
  {}
};
class T_module_declaration__2 : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<identifier> mem2;
    std::shared_ptr<std::list<std::shared_ptr< parameter_declaration>>> mem3;
    std::shared_ptr<std::list<std::shared_ptr< port_declaration>>> mem4;
    std::shared_ptr<std::list<std::shared_ptr< module_item>>> mem5;

  T_module_declaration__2( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<identifier> i2
 ,     std::shared_ptr<std::list<std::shared_ptr< parameter_declaration>>> i3
 ,     std::shared_ptr<std::list<std::shared_ptr< port_declaration>>> i4
 ,     std::shared_ptr<std::list<std::shared_ptr< module_item>>> i5
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
 ,     mem5(i5)
  {}
};
class T_port_named : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<port_expression> mem2;

  T_port_named( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<port_expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_port_unnamed : public ComponentBase {
  public :
    std::shared_ptr<port_expression> mem1;

  T_port_unnamed( 
       std::shared_ptr<port_expression> i1
  ):
       mem1(i1)
  {}
};
class T_port_expression : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< port_reference>>> mem1;

  T_port_expression( 
       std::shared_ptr<std::list<std::shared_ptr< port_reference>>> i1
  ):
       mem1(i1)
  {}
};
class T_port_reference : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<range_expression> mem2;

  T_port_reference( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<range_expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_port_declaration__inout_declaration : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<inout_declaration> mem2;

  T_port_declaration__inout_declaration( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<inout_declaration> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_port_declaration__input_declaration : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<input_declaration> mem2;

  T_port_declaration__input_declaration( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<input_declaration> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_port_declaration__output_declaration : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<output_declaration> mem2;

  T_port_declaration__output_declaration( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<output_declaration> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_module_item__1 : public ComponentBase {
  public :
    std::shared_ptr<module_item1> mem1;

  T_module_item__1( 
       std::shared_ptr<module_item1> i1
  ):
       mem1(i1)
  {}
};
class T_module_item__2 : public ComponentBase {
  public :
    std::shared_ptr<module_item2> mem1;

  T_module_item__2( 
       std::shared_ptr<module_item2> i1
  ):
       mem1(i1)
  {}
};
class T_module_item__port_declaration : public ComponentBase {
  public :
    std::shared_ptr<port_declaration> mem1;

  T_module_item__port_declaration( 
       std::shared_ptr<port_declaration> i1
  ):
       mem1(i1)
  {}
};
class T_module_item__generate_region : public ComponentBase {
  public :
    std::shared_ptr<generate_region> mem1;

  T_module_item__generate_region( 
       std::shared_ptr<generate_region> i1
  ):
       mem1(i1)
  {}
};
class T_module_item__specify_block : public ComponentBase {
  public :
    std::shared_ptr<specify_block> mem1;

  T_module_item__specify_block( 
       std::shared_ptr<specify_block> i1
  ):
       mem1(i1)
  {}
};
class T_module_item__parameter_declaration : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<parameter_declaration> mem2;

  T_module_item__parameter_declaration( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<parameter_declaration> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_module_item__specparam_declaration : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<specparam_declaration> mem2;

  T_module_item__specparam_declaration( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<specparam_declaration> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_module_item__net_declaration : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<net_declaration> mem2;

  T_module_item__net_declaration( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<net_declaration> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_module_item__reg_declaration : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<reg_declaration> mem2;

  T_module_item__reg_declaration( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<reg_declaration> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_module_item__integer_declaration : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<integer_declaration> mem2;

  T_module_item__integer_declaration( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<integer_declaration> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_module_item__real_declaration : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<real_declaration> mem2;

  T_module_item__real_declaration( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<real_declaration> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_module_item__time_declaration : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<time_declaration> mem2;

  T_module_item__time_declaration( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<time_declaration> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_module_item__realtime_declaration : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<realtime_declaration> mem2;

  T_module_item__realtime_declaration( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<realtime_declaration> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_module_item__event_declaration : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<event_declaration> mem2;

  T_module_item__event_declaration( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<event_declaration> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_module_item__genvar_declaration : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<genvar_declaration> mem2;

  T_module_item__genvar_declaration( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<genvar_declaration> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_module_item__task_declaration : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<task_declaration> mem2;

  T_module_item__task_declaration( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<task_declaration> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_module_item__function_declaration : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<function_declaration> mem2;

  T_module_item__function_declaration( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<function_declaration> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_module_item__local_parameter_declaration : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<local_parameter_declaration> mem2;

  T_module_item__local_parameter_declaration( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<local_parameter_declaration> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_module_item__parameter_override : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<std::list<std::shared_ptr< defparam_assignment>>> mem2;

  T_module_item__parameter_override( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< defparam_assignment>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_module_item__continuous_assign : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<continuous_assign> mem2;

  T_module_item__continuous_assign( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<continuous_assign> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_module_item__gate_instantiation : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<gate_instantiation> mem2;

  T_module_item__gate_instantiation( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<gate_instantiation> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_module_item__udp_instantiation : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<udp_instantiation> mem2;

  T_module_item__udp_instantiation( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<udp_instantiation> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_module_item__module_instantiation : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<module_instantiation> mem2;

  T_module_item__module_instantiation( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<module_instantiation> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_module_item__initial_construct : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<initial_construct> mem2;

  T_module_item__initial_construct( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<initial_construct> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_module_item__always_construct : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<always_construct> mem2;

  T_module_item__always_construct( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<always_construct> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_module_item__loop_generate_construct : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<loop_generate_construct> mem2;

  T_module_item__loop_generate_construct( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<loop_generate_construct> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_module_item__conditional_generate_construct : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<conditional_generate_construct> mem2;

  T_module_item__conditional_generate_construct( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<conditional_generate_construct> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_config_declaration : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<design_statement> mem2;
    std::shared_ptr<std::list<std::shared_ptr< config_rule_statement>>> mem3;

  T_config_declaration( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<design_statement> i2
 ,     std::shared_ptr<std::list<std::shared_ptr< config_rule_statement>>> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_design_statement : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< library_identifier_period_opt_cell_identifier>>> mem1;

  T_design_statement( 
       std::shared_ptr<std::list<std::shared_ptr< library_identifier_period_opt_cell_identifier>>> i1
  ):
       mem1(i1)
  {}
};
class T_lib_cell_identifier : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<identifier> mem2;

  T_lib_cell_identifier( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<identifier> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_config_rule_statement__default : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< identifier>>> mem1;

  T_config_rule_statement__default( 
       std::shared_ptr<std::list<std::shared_ptr< identifier>>> i1
  ):
       mem1(i1)
  {}
};
class T_config_rule_statement__inst_lib : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< identifier>>> mem1;
    std::shared_ptr<std::list<std::shared_ptr< identifier>>> mem2;

  T_config_rule_statement__inst_lib( 
       std::shared_ptr<std::list<std::shared_ptr< identifier>>> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< identifier>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_config_rule_statement__inst_use : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< identifier>>> mem1;
    std::shared_ptr<use_clause> mem2;

  T_config_rule_statement__inst_use( 
       std::shared_ptr<std::list<std::shared_ptr< identifier>>> i1
 ,     std::shared_ptr<use_clause> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_config_rule_statement__cell_lib : public ComponentBase {
  public :
    std::shared_ptr<library_identifier_period_opt_cell_identifier> mem1;
    std::shared_ptr<std::list<std::shared_ptr< identifier>>> mem2;

  T_config_rule_statement__cell_lib( 
       std::shared_ptr<library_identifier_period_opt_cell_identifier> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< identifier>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_config_rule_statement__cell_use : public ComponentBase {
  public :
    std::shared_ptr<library_identifier_period_opt_cell_identifier> mem1;
    std::shared_ptr<use_clause> mem2;

  T_config_rule_statement__cell_use( 
       std::shared_ptr<library_identifier_period_opt_cell_identifier> i1
 ,     std::shared_ptr<use_clause> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_use_clause : public ComponentBase {
  public :
    std::shared_ptr<library_identifier_period_opt_cell_identifier> mem1;
    std::shared_ptr<colon_config_opt> mem2;

  T_use_clause( 
       std::shared_ptr<library_identifier_period_opt_cell_identifier> i1
 ,     std::shared_ptr<colon_config_opt> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_local_parameter_declaration_1 : public ComponentBase {
  public :
    std::shared_ptr<signedType> mem1;
    std::shared_ptr<range> mem2;
    std::shared_ptr<std::list<std::shared_ptr< param_assignment>>> mem3;

  T_local_parameter_declaration_1( 
       std::shared_ptr<signedType> i1
 ,     std::shared_ptr<range> i2
 ,     std::shared_ptr<std::list<std::shared_ptr< param_assignment>>> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_local_parameter_declaration_2 : public ComponentBase {
  public :
    std::shared_ptr<parameter_type> mem1;
    std::shared_ptr<std::list<std::shared_ptr< param_assignment>>> mem2;

  T_local_parameter_declaration_2( 
       std::shared_ptr<parameter_type> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< param_assignment>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_parameter_declaration_1 : public ComponentBase {
  public :
    std::shared_ptr<signedType> mem1;
    std::shared_ptr<range> mem2;
    std::shared_ptr<std::list<std::shared_ptr< param_assignment>>> mem3;

  T_parameter_declaration_1( 
       std::shared_ptr<signedType> i1
 ,     std::shared_ptr<range> i2
 ,     std::shared_ptr<std::list<std::shared_ptr< param_assignment>>> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_parameter_declaration_2 : public ComponentBase {
  public :
    std::shared_ptr<parameter_type> mem1;
    std::shared_ptr<std::list<std::shared_ptr< param_assignment>>> mem2;

  T_parameter_declaration_2( 
       std::shared_ptr<parameter_type> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< param_assignment>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_specparam_declaration : public ComponentBase {
  public :
    std::shared_ptr<range> mem1;
    std::shared_ptr<std::list<std::shared_ptr< specparam_assignment>>> mem2;

  T_specparam_declaration( 
       std::shared_ptr<range> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< specparam_assignment>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_parameter_type__NOSPEC : public ComponentBase {
  public :

  T_parameter_type__NOSPEC( 
  )
  {}
};
class T_parameter_type__INTEGER : public ComponentBase {
  public :

  T_parameter_type__INTEGER( 
  )
  {}
};
class T_parameter_type__REAL : public ComponentBase {
  public :

  T_parameter_type__REAL( 
  )
  {}
};
class T_parameter_type__REALTIME : public ComponentBase {
  public :

  T_parameter_type__REALTIME( 
  )
  {}
};
class T_parameter_type__TIME : public ComponentBase {
  public :

  T_parameter_type__TIME( 
  )
  {}
};
class T_inout_declaration : public ComponentBase {
  public :
    std::shared_ptr<net_type> mem1;
    std::shared_ptr<signedType> mem2;
    std::shared_ptr<range> mem3;
    std::shared_ptr<std::list<std::shared_ptr< identifier>>> mem4;

  T_inout_declaration( 
       std::shared_ptr<net_type> i1
 ,     std::shared_ptr<signedType> i2
 ,     std::shared_ptr<range> i3
 ,     std::shared_ptr<std::list<std::shared_ptr< identifier>>> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_input_declaration : public ComponentBase {
  public :
    std::shared_ptr<net_type> mem1;
    std::shared_ptr<signedType> mem2;
    std::shared_ptr<range> mem3;
    std::shared_ptr<std::list<std::shared_ptr< identifier>>> mem4;

  T_input_declaration( 
       std::shared_ptr<net_type> i1
 ,     std::shared_ptr<signedType> i2
 ,     std::shared_ptr<range> i3
 ,     std::shared_ptr<std::list<std::shared_ptr< identifier>>> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_output_declaration_net : public ComponentBase {
  public :
    std::shared_ptr<net_type> mem1;
    std::shared_ptr<signedType> mem2;
    std::shared_ptr<range> mem3;
    std::shared_ptr<std::list<std::shared_ptr< identifier>>> mem4;

  T_output_declaration_net( 
       std::shared_ptr<net_type> i1
 ,     std::shared_ptr<signedType> i2
 ,     std::shared_ptr<range> i3
 ,     std::shared_ptr<std::list<std::shared_ptr< identifier>>> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_output_declaration_reg : public ComponentBase {
  public :
    std::shared_ptr<signedType> mem1;
    std::shared_ptr<range> mem2;
    std::shared_ptr<std::list<std::shared_ptr< port_identifier_equ1_expression_opt>>> mem3;

  T_output_declaration_reg( 
       std::shared_ptr<signedType> i1
 ,     std::shared_ptr<range> i2
 ,     std::shared_ptr<std::list<std::shared_ptr< port_identifier_equ1_expression_opt>>> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_output_declaration_var : public ComponentBase {
  public :
    std::shared_ptr<output_variable_type> mem1;
    std::shared_ptr<std::list<std::shared_ptr< port_identifier_equ1_expression_opt>>> mem2;

  T_output_declaration_var( 
       std::shared_ptr<output_variable_type> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< port_identifier_equ1_expression_opt>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_output_variable_type_INTEGER : public ComponentBase {
  public :

  T_output_variable_type_INTEGER( 
  )
  {}
};
class T_output_variable_type_TIME : public ComponentBase {
  public :

  T_output_variable_type_TIME( 
  )
  {}
};
class T_event_declaration : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< event_identifier_dimension_list>>> mem1;

  T_event_declaration( 
       std::shared_ptr<std::list<std::shared_ptr< event_identifier_dimension_list>>> i1
  ):
       mem1(i1)
  {}
};
class T_integer_declaration : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< variable_type>>> mem1;

  T_integer_declaration( 
       std::shared_ptr<std::list<std::shared_ptr< variable_type>>> i1
  ):
       mem1(i1)
  {}
};
class T_net_declaration_net_type1 : public ComponentBase {
  public :
    std::shared_ptr<net_type> mem1;
    std::shared_ptr<signedType> mem2;
    std::shared_ptr<delay3> mem3;
    std::shared_ptr<std::list<std::shared_ptr< net_identifier_dimension_list>>> mem4;

  T_net_declaration_net_type1( 
       std::shared_ptr<net_type> i1
 ,     std::shared_ptr<signedType> i2
 ,     std::shared_ptr<delay3> i3
 ,     std::shared_ptr<std::list<std::shared_ptr< net_identifier_dimension_list>>> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_net_declaration_net_type2 : public ComponentBase {
  public :
    std::shared_ptr<net_type> mem1;
    std::shared_ptr<drive_strength> mem2;
    std::shared_ptr<signedType> mem3;
    std::shared_ptr<delay3> mem4;
    std::shared_ptr<std::list<std::shared_ptr< net_decl_assignment>>> mem5;

  T_net_declaration_net_type2( 
       std::shared_ptr<net_type> i1
 ,     std::shared_ptr<drive_strength> i2
 ,     std::shared_ptr<signedType> i3
 ,     std::shared_ptr<delay3> i4
 ,     std::shared_ptr<std::list<std::shared_ptr< net_decl_assignment>>> i5
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
 ,     mem5(i5)
  {}
};
class T_net_declaration_net_type3 : public ComponentBase {
  public :
    std::shared_ptr<net_type> mem1;
    std::shared_ptr<drive_strength> mem2;
    std::shared_ptr<vectored_scalared> mem3;
    std::shared_ptr<signedType> mem4;
    std::shared_ptr<range> mem5;
    std::shared_ptr<delay3> mem6;
    std::shared_ptr<std::list<std::shared_ptr< net_identifier_dimension_list>>> mem7;

  T_net_declaration_net_type3( 
       std::shared_ptr<net_type> i1
 ,     std::shared_ptr<drive_strength> i2
 ,     std::shared_ptr<vectored_scalared> i3
 ,     std::shared_ptr<signedType> i4
 ,     std::shared_ptr<range> i5
 ,     std::shared_ptr<delay3> i6
 ,     std::shared_ptr<std::list<std::shared_ptr< net_identifier_dimension_list>>> i7
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
 ,     mem5(i5)
 ,     mem6(i6)
 ,     mem7(i7)
  {}
};
class T_net_declaration_net_type4 : public ComponentBase {
  public :
    std::shared_ptr<net_type> mem1;
    std::shared_ptr<drive_strength> mem2;
    std::shared_ptr<vectored_scalared> mem3;
    std::shared_ptr<signedType> mem4;
    std::shared_ptr<range> mem5;
    std::shared_ptr<delay3> mem6;
    std::shared_ptr<std::list<std::shared_ptr< net_decl_assignment>>> mem7;

  T_net_declaration_net_type4( 
       std::shared_ptr<net_type> i1
 ,     std::shared_ptr<drive_strength> i2
 ,     std::shared_ptr<vectored_scalared> i3
 ,     std::shared_ptr<signedType> i4
 ,     std::shared_ptr<range> i5
 ,     std::shared_ptr<delay3> i6
 ,     std::shared_ptr<std::list<std::shared_ptr< net_decl_assignment>>> i7
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
 ,     mem5(i5)
 ,     mem6(i6)
 ,     mem7(i7)
  {}
};
class T_net_declaration_trireg_1 : public ComponentBase {
  public :
    std::shared_ptr<charge_strength> mem1;
    std::shared_ptr<signedType> mem2;
    std::shared_ptr<delay3> mem3;
    std::shared_ptr<std::list<std::shared_ptr< net_identifier_dimension_list>>> mem4;

  T_net_declaration_trireg_1( 
       std::shared_ptr<charge_strength> i1
 ,     std::shared_ptr<signedType> i2
 ,     std::shared_ptr<delay3> i3
 ,     std::shared_ptr<std::list<std::shared_ptr< net_identifier_dimension_list>>> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_net_declaration_trireg_2 : public ComponentBase {
  public :
    std::shared_ptr<drive_strength> mem1;
    std::shared_ptr<signedType> mem2;
    std::shared_ptr<delay3> mem3;
    std::shared_ptr<std::list<std::shared_ptr< net_decl_assignment>>> mem4;

  T_net_declaration_trireg_2( 
       std::shared_ptr<drive_strength> i1
 ,     std::shared_ptr<signedType> i2
 ,     std::shared_ptr<delay3> i3
 ,     std::shared_ptr<std::list<std::shared_ptr< net_decl_assignment>>> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_net_declaration_trireg_3 : public ComponentBase {
  public :
    std::shared_ptr<charge_strength> mem1;
    std::shared_ptr<vectored_scalared> mem2;
    std::shared_ptr<signedType> mem3;
    std::shared_ptr<range> mem4;
    std::shared_ptr<delay3> mem5;

  T_net_declaration_trireg_3( 
       std::shared_ptr<charge_strength> i1
 ,     std::shared_ptr<vectored_scalared> i2
 ,     std::shared_ptr<signedType> i3
 ,     std::shared_ptr<range> i4
 ,     std::shared_ptr<delay3> i5
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
 ,     mem5(i5)
  {}
};
class T_net_declaration_trireg_4 : public ComponentBase {
  public :
    std::shared_ptr<drive_strength> mem1;
    std::shared_ptr<vectored_scalared> mem2;
    std::shared_ptr<signedType> mem3;
    std::shared_ptr<range> mem4;
    std::shared_ptr<delay3> mem5;
    std::shared_ptr<std::list<std::shared_ptr< net_decl_assignment>>> mem6;

  T_net_declaration_trireg_4( 
       std::shared_ptr<drive_strength> i1
 ,     std::shared_ptr<vectored_scalared> i2
 ,     std::shared_ptr<signedType> i3
 ,     std::shared_ptr<range> i4
 ,     std::shared_ptr<delay3> i5
 ,     std::shared_ptr<std::list<std::shared_ptr< net_decl_assignment>>> i6
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
 ,     mem5(i5)
 ,     mem6(i6)
  {}
};
class T_vectored_scalared_NOSPEC : public ComponentBase {
  public :

  T_vectored_scalared_NOSPEC( 
  )
  {}
};
class T_vectored_scalared_vectored : public ComponentBase {
  public :

  T_vectored_scalared_vectored( 
  )
  {}
};
class T_vectored_scalared_scalared : public ComponentBase {
  public :

  T_vectored_scalared_scalared( 
  )
  {}
};
class T_real_declaration : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< real_type>>> mem1;

  T_real_declaration( 
       std::shared_ptr<std::list<std::shared_ptr< real_type>>> i1
  ):
       mem1(i1)
  {}
};
class T_realtime_declaration : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< real_type>>> mem1;

  T_realtime_declaration( 
       std::shared_ptr<std::list<std::shared_ptr< real_type>>> i1
  ):
       mem1(i1)
  {}
};
class T_reg_declaration : public ComponentBase {
  public :
    std::shared_ptr<signedType> mem1;
    std::shared_ptr<range> mem2;
    std::shared_ptr<std::list<std::shared_ptr< variable_type>>> mem3;

  T_reg_declaration( 
       std::shared_ptr<signedType> i1
 ,     std::shared_ptr<range> i2
 ,     std::shared_ptr<std::list<std::shared_ptr< variable_type>>> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_time_declaration : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< variable_type>>> mem1;

  T_time_declaration( 
       std::shared_ptr<std::list<std::shared_ptr< variable_type>>> i1
  ):
       mem1(i1)
  {}
};
class T_net_type_NOSPEC : public ComponentBase {
  public :

  T_net_type_NOSPEC( 
  )
  {}
};
class T_net_type__KEY_SUPPLY0 : public ComponentBase {
  public :

  T_net_type__KEY_SUPPLY0( 
  )
  {}
};
class T_net_type__KEY_SUPPLY1 : public ComponentBase {
  public :

  T_net_type__KEY_SUPPLY1( 
  )
  {}
};
class T_net_type__KEY_TRI : public ComponentBase {
  public :

  T_net_type__KEY_TRI( 
  )
  {}
};
class T_net_type__KEY_TRIAND : public ComponentBase {
  public :

  T_net_type__KEY_TRIAND( 
  )
  {}
};
class T_net_type__KEY_TRIOR : public ComponentBase {
  public :

  T_net_type__KEY_TRIOR( 
  )
  {}
};
class T_net_type__KEY_TRI0 : public ComponentBase {
  public :

  T_net_type__KEY_TRI0( 
  )
  {}
};
class T_net_type__KEY_TRI1 : public ComponentBase {
  public :

  T_net_type__KEY_TRI1( 
  )
  {}
};
class T_net_type__KEY_UWIRE : public ComponentBase {
  public :

  T_net_type__KEY_UWIRE( 
  )
  {}
};
class T_net_type__KEY_WIRE : public ComponentBase {
  public :

  T_net_type__KEY_WIRE( 
  )
  {}
};
class T_net_type__KEY_WAND : public ComponentBase {
  public :

  T_net_type__KEY_WAND( 
  )
  {}
};
class T_net_type__KEY_WOR : public ComponentBase {
  public :

  T_net_type__KEY_WOR( 
  )
  {}
};
class T_real_type_noass : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<std::list<std::shared_ptr< dimension>>> mem2;

  T_real_type_noass( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< dimension>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_real_type_ass : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<expression> mem2;

  T_real_type_ass( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_variable_type_noass : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<std::list<std::shared_ptr< dimension>>> mem2;

  T_variable_type_noass( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< dimension>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_variable_type_ass : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<expression> mem2;

  T_variable_type_ass( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class KEY_HIGHZ0 : public ComponentBase {
  public :

  KEY_HIGHZ0( 
  )
  {}
};
class KEY_HIGHZ1 : public ComponentBase {
  public :

  KEY_HIGHZ1( 
  )
  {}
};
class KEY_SUPPLY0 : public ComponentBase {
  public :

  KEY_SUPPLY0( 
  )
  {}
};
class KEY_STRONG0 : public ComponentBase {
  public :

  KEY_STRONG0( 
  )
  {}
};
class KEY_PULL0 : public ComponentBase {
  public :

  KEY_PULL0( 
  )
  {}
};
class KEY_WEAK0 : public ComponentBase {
  public :

  KEY_WEAK0( 
  )
  {}
};
class KEY_SUPPLY1 : public ComponentBase {
  public :

  KEY_SUPPLY1( 
  )
  {}
};
class KEY_STRONG1 : public ComponentBase {
  public :

  KEY_STRONG1( 
  )
  {}
};
class KEY_PULL1 : public ComponentBase {
  public :

  KEY_PULL1( 
  )
  {}
};
class KEY_WEAK1 : public ComponentBase {
  public :

  KEY_WEAK1( 
  )
  {}
};
class T_drive_strength_NOSPEC : public ComponentBase {
  public :

  T_drive_strength_NOSPEC( 
  )
  {}
};
class T_drive_strength : public ComponentBase {
  public :
    std::shared_ptr<strength> mem1;
    std::shared_ptr<strength> mem2;

  T_drive_strength( 
       std::shared_ptr<strength> i1
 ,     std::shared_ptr<strength> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_charge_strength_NOSPEC : public ComponentBase {
  public :

  T_charge_strength_NOSPEC( 
  )
  {}
};
class T_charge_strength__small : public ComponentBase {
  public :

  T_charge_strength__small( 
  )
  {}
};
class T_charge_strength__medium : public ComponentBase {
  public :

  T_charge_strength__medium( 
  )
  {}
};
class T_charge_strength__large : public ComponentBase {
  public :

  T_charge_strength__large( 
  )
  {}
};
class T_delay3_NOSPEC : public ComponentBase {
  public :

  T_delay3_NOSPEC( 
  )
  {}
};
class T_delay3_1 : public ComponentBase {
  public :
    std::shared_ptr<delay_value> mem1;

  T_delay3_1( 
       std::shared_ptr<delay_value> i1
  ):
       mem1(i1)
  {}
};
class T_delay3_minmax1 : public ComponentBase {
  public :
    std::shared_ptr<mintypmax_expression> mem1;

  T_delay3_minmax1( 
       std::shared_ptr<mintypmax_expression> i1
  ):
       mem1(i1)
  {}
};
class T_delay3_minmax2 : public ComponentBase {
  public :
    std::shared_ptr<mintypmax_expression> mem1;
    std::shared_ptr<mintypmax_expression> mem2;

  T_delay3_minmax2( 
       std::shared_ptr<mintypmax_expression> i1
 ,     std::shared_ptr<mintypmax_expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_delay3_minmax3 : public ComponentBase {
  public :
    std::shared_ptr<mintypmax_expression> mem1;
    std::shared_ptr<mintypmax_expression> mem2;
    std::shared_ptr<mintypmax_expression> mem3;

  T_delay3_minmax3( 
       std::shared_ptr<mintypmax_expression> i1
 ,     std::shared_ptr<mintypmax_expression> i2
 ,     std::shared_ptr<mintypmax_expression> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_delay2_NOSPEC : public ComponentBase {
  public :

  T_delay2_NOSPEC( 
  )
  {}
};
class T_delay2_1 : public ComponentBase {
  public :
    std::shared_ptr<delay_value> mem1;

  T_delay2_1( 
       std::shared_ptr<delay_value> i1
  ):
       mem1(i1)
  {}
};
class T_delay2_minmax1 : public ComponentBase {
  public :
    std::shared_ptr<mintypmax_expression> mem1;

  T_delay2_minmax1( 
       std::shared_ptr<mintypmax_expression> i1
  ):
       mem1(i1)
  {}
};
class T_delay2_minmax2 : public ComponentBase {
  public :
    std::shared_ptr<mintypmax_expression> mem1;
    std::shared_ptr<mintypmax_expression> mem2;

  T_delay2_minmax2( 
       std::shared_ptr<mintypmax_expression> i1
 ,     std::shared_ptr<mintypmax_expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_event_identifier_dimension_list : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<std::list<std::shared_ptr< dimension>>> mem2;

  T_event_identifier_dimension_list( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< dimension>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_net_identifier_dimension_list : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<std::list<std::shared_ptr< dimension>>> mem2;

  T_net_identifier_dimension_list( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< dimension>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_port_identifier_equ1_expression_opt : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<expression> mem2;

  T_port_identifier_equ1_expression_opt( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_defparam_assignment : public ComponentBase {
  public :
    std::shared_ptr<hierarchical_identifier> mem1;
    std::shared_ptr<mintypmax_expression> mem2;

  T_defparam_assignment( 
       std::shared_ptr<hierarchical_identifier> i1
 ,     std::shared_ptr<mintypmax_expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_net_decl_assignment : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<expression> mem2;

  T_net_decl_assignment( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_param_assignment : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<mintypmax_expression> mem2;

  T_param_assignment( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<mintypmax_expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_specparam_assignment : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<mintypmax_expression> mem2;

  T_specparam_assignment( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<mintypmax_expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_specparam_assignment_pulse1 : public ComponentBase {
  public :
    std::shared_ptr<mintypmax_expression> mem1;
    std::shared_ptr<mintypmax_expression> mem2;

  T_specparam_assignment_pulse1( 
       std::shared_ptr<mintypmax_expression> i1
 ,     std::shared_ptr<mintypmax_expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_specparam_assignment_pulse2 : public ComponentBase {
  public :
    std::shared_ptr<specify_input_terminal_descriptor> mem1;
    std::shared_ptr<specify_output_terminal_descriptor> mem2;
    std::shared_ptr<mintypmax_expression> mem3;
    std::shared_ptr<mintypmax_expression> mem4;

  T_specparam_assignment_pulse2( 
       std::shared_ptr<specify_input_terminal_descriptor> i1
 ,     std::shared_ptr<specify_output_terminal_descriptor> i2
 ,     std::shared_ptr<mintypmax_expression> i3
 ,     std::shared_ptr<mintypmax_expression> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_dimension : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;
    std::shared_ptr<expression> mem2;

  T_dimension( 
       std::shared_ptr<expression> i1
 ,     std::shared_ptr<expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_range_NOSPEC : public ComponentBase {
  public :

  T_range_NOSPEC( 
  )
  {}
};
class T_range : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;
    std::shared_ptr<expression> mem2;

  T_range( 
       std::shared_ptr<expression> i1
 ,     std::shared_ptr<expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_automatic_false : public ComponentBase {
  public :

  T_automatic_false( 
  )
  {}
};
class T_automatic_true : public ComponentBase {
  public :

  T_automatic_true( 
  )
  {}
};
class T_function_declaration_1 : public ComponentBase {
  public :
    std::shared_ptr<automatic> mem1;
    std::shared_ptr<function_range_or_type> mem2;
    std::shared_ptr<identifier> mem3;
    std::shared_ptr<std::list<std::shared_ptr< function_item_declaration>>> mem4;
    std::shared_ptr<statement> mem5;

  T_function_declaration_1( 
       std::shared_ptr<automatic> i1
 ,     std::shared_ptr<function_range_or_type> i2
 ,     std::shared_ptr<identifier> i3
 ,     std::shared_ptr<std::list<std::shared_ptr< function_item_declaration>>> i4
 ,     std::shared_ptr<statement> i5
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
 ,     mem5(i5)
  {}
};
class T_function_declaration_2 : public ComponentBase {
  public :
    std::shared_ptr<automatic> mem1;
    std::shared_ptr<function_range_or_type> mem2;
    std::shared_ptr<identifier> mem3;
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance_list_tf_input_declaration>>> mem4;
    std::shared_ptr<std::list<std::shared_ptr< function_item_declaration>>> mem5;
    std::shared_ptr<statement> mem6;

  T_function_declaration_2( 
       std::shared_ptr<automatic> i1
 ,     std::shared_ptr<function_range_or_type> i2
 ,     std::shared_ptr<identifier> i3
 ,     std::shared_ptr<std::list<std::shared_ptr< attribute_instance_list_tf_input_declaration>>> i4
 ,     std::shared_ptr<std::list<std::shared_ptr< function_item_declaration>>> i5
 ,     std::shared_ptr<statement> i6
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
 ,     mem5(i5)
 ,     mem6(i6)
  {}
};
class T_function_item_declaration_block : public ComponentBase {
  public :
    std::shared_ptr<block_item_declaration> mem1;

  T_function_item_declaration_block( 
       std::shared_ptr<block_item_declaration> i1
  ):
       mem1(i1)
  {}
};
class T_function_item_declaration_input : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<tf_input_declaration> mem2;

  T_function_item_declaration_input( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<tf_input_declaration> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_attribute_instance_list_tf_input_declaration : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<tf_io_declaration_gen> mem2;

  T_attribute_instance_list_tf_input_declaration( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<tf_io_declaration_gen> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_function_range_or_type_NOSPEC : public ComponentBase {
  public :

  T_function_range_or_type_NOSPEC( 
  )
  {}
};
class T_function_range_or_type : public ComponentBase {
  public :
    std::shared_ptr<signedType> mem1;
    std::shared_ptr<range> mem2;

  T_function_range_or_type( 
       std::shared_ptr<signedType> i1
 ,     std::shared_ptr<range> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_function_range_or_type_INTEGER : public ComponentBase {
  public :

  T_function_range_or_type_INTEGER( 
  )
  {}
};
class T_function_range_or_type_REAL : public ComponentBase {
  public :

  T_function_range_or_type_REAL( 
  )
  {}
};
class T_function_range_or_type_REALTIME : public ComponentBase {
  public :

  T_function_range_or_type_REALTIME( 
  )
  {}
};
class T_function_range_or_type_TIME : public ComponentBase {
  public :

  T_function_range_or_type_TIME( 
  )
  {}
};
class T_task_declaration1 : public ComponentBase {
  public :
    std::shared_ptr<automatic> mem1;
    std::shared_ptr<identifier> mem2;
    std::shared_ptr<std::list<std::shared_ptr< task_item_declaration>>> mem3;
    std::shared_ptr<statement> mem4;

  T_task_declaration1( 
       std::shared_ptr<automatic> i1
 ,     std::shared_ptr<identifier> i2
 ,     std::shared_ptr<std::list<std::shared_ptr< task_item_declaration>>> i3
 ,     std::shared_ptr<statement> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_task_declaration2 : public ComponentBase {
  public :
    std::shared_ptr<automatic> mem1;
    std::shared_ptr<identifier> mem2;
    std::shared_ptr<std::list<std::shared_ptr< task_port_item>>> mem3;
    std::shared_ptr<std::list<std::shared_ptr< task_item_declaration>>> mem4;
    std::shared_ptr<statement> mem5;

  T_task_declaration2( 
       std::shared_ptr<automatic> i1
 ,     std::shared_ptr<identifier> i2
 ,     std::shared_ptr<std::list<std::shared_ptr< task_port_item>>> i3
 ,     std::shared_ptr<std::list<std::shared_ptr< task_item_declaration>>> i4
 ,     std::shared_ptr<statement> i5
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
 ,     mem5(i5)
  {}
};
class T_task_item_declaration_block : public ComponentBase {
  public :
    std::shared_ptr<block_item_declaration> mem1;

  T_task_item_declaration_block( 
       std::shared_ptr<block_item_declaration> i1
  ):
       mem1(i1)
  {}
};
class T_task_item_declaration_input : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<tf_input_declaration> mem2;

  T_task_item_declaration_input( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<tf_input_declaration> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_task_item_declaration_output : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<tf_output_declaration> mem2;

  T_task_item_declaration_output( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<tf_output_declaration> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_task_item_declaration_inout : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<tf_inout_declaration> mem2;

  T_task_item_declaration_inout( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<tf_inout_declaration> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_task_port_item_input : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<tf_io_declaration_gen> mem2;

  T_task_port_item_input( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<tf_io_declaration_gen> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_tf_input_declaration_reg : public ComponentBase {
  public :
    std::shared_ptr<reg> mem1;
    std::shared_ptr<signedType> mem2;
    std::shared_ptr<range> mem3;
    std::shared_ptr<std::list<std::shared_ptr< identifier>>> mem4;

  T_tf_input_declaration_reg( 
       std::shared_ptr<reg> i1
 ,     std::shared_ptr<signedType> i2
 ,     std::shared_ptr<range> i3
 ,     std::shared_ptr<std::list<std::shared_ptr< identifier>>> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_tf_input_declaration_type : public ComponentBase {
  public :
    std::shared_ptr<task_port_type> mem1;
    std::shared_ptr<std::list<std::shared_ptr< identifier>>> mem2;

  T_tf_input_declaration_type( 
       std::shared_ptr<task_port_type> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< identifier>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_tf_output_declaration_reg : public ComponentBase {
  public :
    std::shared_ptr<reg> mem1;
    std::shared_ptr<signedType> mem2;
    std::shared_ptr<range> mem3;
    std::shared_ptr<std::list<std::shared_ptr< identifier>>> mem4;

  T_tf_output_declaration_reg( 
       std::shared_ptr<reg> i1
 ,     std::shared_ptr<signedType> i2
 ,     std::shared_ptr<range> i3
 ,     std::shared_ptr<std::list<std::shared_ptr< identifier>>> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_tf_output_declaration_type : public ComponentBase {
  public :
    std::shared_ptr<task_port_type> mem1;
    std::shared_ptr<std::list<std::shared_ptr< identifier>>> mem2;

  T_tf_output_declaration_type( 
       std::shared_ptr<task_port_type> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< identifier>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_tf_inout_declaration_reg : public ComponentBase {
  public :
    std::shared_ptr<reg> mem1;
    std::shared_ptr<signedType> mem2;
    std::shared_ptr<range> mem3;
    std::shared_ptr<std::list<std::shared_ptr< identifier>>> mem4;

  T_tf_inout_declaration_reg( 
       std::shared_ptr<reg> i1
 ,     std::shared_ptr<signedType> i2
 ,     std::shared_ptr<range> i3
 ,     std::shared_ptr<std::list<std::shared_ptr< identifier>>> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_tf_inout_declaration_type : public ComponentBase {
  public :
    std::shared_ptr<task_port_type> mem1;
    std::shared_ptr<std::list<std::shared_ptr< identifier>>> mem2;

  T_tf_inout_declaration_type( 
       std::shared_ptr<task_port_type> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< identifier>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_task_port_type_integer : public ComponentBase {
  public :

  T_task_port_type_integer( 
  )
  {}
};
class T_task_port_type_real : public ComponentBase {
  public :

  T_task_port_type_real( 
  )
  {}
};
class T_task_port_type_realtime : public ComponentBase {
  public :

  T_task_port_type_realtime( 
  )
  {}
};
class T_task_port_type_time : public ComponentBase {
  public :

  T_task_port_type_time( 
  )
  {}
};
class T_block_item_declaration_reg : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<signedType> mem2;
    std::shared_ptr<range> mem3;
    std::shared_ptr<std::list<std::shared_ptr< block_variable_type>>> mem4;

  T_block_item_declaration_reg( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<signedType> i2
 ,     std::shared_ptr<range> i3
 ,     std::shared_ptr<std::list<std::shared_ptr< block_variable_type>>> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_block_item_declaration_integer : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<std::list<std::shared_ptr< block_variable_type>>> mem2;

  T_block_item_declaration_integer( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< block_variable_type>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_block_item_declaration_time : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<std::list<std::shared_ptr< block_variable_type>>> mem2;

  T_block_item_declaration_time( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< block_variable_type>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_block_item_declaration_real : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<std::list<std::shared_ptr< block_real_type>>> mem2;

  T_block_item_declaration_real( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< block_real_type>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_block_item_declaration_realtime : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<std::list<std::shared_ptr< block_real_type>>> mem2;

  T_block_item_declaration_realtime( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< block_real_type>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_block_item_declaration_event : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<event_declaration> mem2;

  T_block_item_declaration_event( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<event_declaration> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_block_item_declaration_local_param : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<local_parameter_declaration> mem2;

  T_block_item_declaration_local_param( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<local_parameter_declaration> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_block_item_declaration_param : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<parameter_declaration> mem2;

  T_block_item_declaration_param( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<parameter_declaration> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_block_variable_type : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<std::list<std::shared_ptr< dimension>>> mem2;

  T_block_variable_type( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< dimension>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_block_real_type : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<std::list<std::shared_ptr< dimension>>> mem2;

  T_block_real_type( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< dimension>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_gate_instantiation_cmos : public ComponentBase {
  public :
    std::shared_ptr<cmos_switchtype> mem1;
    std::shared_ptr<delay3> mem2;
    std::shared_ptr<std::list<std::shared_ptr< cmos_switch_instance>>> mem3;

  T_gate_instantiation_cmos( 
       std::shared_ptr<cmos_switchtype> i1
 ,     std::shared_ptr<delay3> i2
 ,     std::shared_ptr<std::list<std::shared_ptr< cmos_switch_instance>>> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_gate_instantiation_enable : public ComponentBase {
  public :
    std::shared_ptr<enable_gatetype> mem1;
    std::shared_ptr<drive_strength> mem2;
    std::shared_ptr<delay3> mem3;
    std::shared_ptr<std::list<std::shared_ptr< enable_gate_instance>>> mem4;

  T_gate_instantiation_enable( 
       std::shared_ptr<enable_gatetype> i1
 ,     std::shared_ptr<drive_strength> i2
 ,     std::shared_ptr<delay3> i3
 ,     std::shared_ptr<std::list<std::shared_ptr< enable_gate_instance>>> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_gate_instantiation_mos : public ComponentBase {
  public :
    std::shared_ptr<mos_switchtype> mem1;
    std::shared_ptr<delay3> mem2;
    std::shared_ptr<std::list<std::shared_ptr< mos_switch_instance>>> mem3;

  T_gate_instantiation_mos( 
       std::shared_ptr<mos_switchtype> i1
 ,     std::shared_ptr<delay3> i2
 ,     std::shared_ptr<std::list<std::shared_ptr< mos_switch_instance>>> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_gate_instantiation_input : public ComponentBase {
  public :
    std::shared_ptr<n_input_gatetype> mem1;
    std::shared_ptr<drive_strength> mem2;
    std::shared_ptr<delay2> mem3;
    std::shared_ptr<std::list<std::shared_ptr< n_input_gate_instance>>> mem4;

  T_gate_instantiation_input( 
       std::shared_ptr<n_input_gatetype> i1
 ,     std::shared_ptr<drive_strength> i2
 ,     std::shared_ptr<delay2> i3
 ,     std::shared_ptr<std::list<std::shared_ptr< n_input_gate_instance>>> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_gate_instantiation_output : public ComponentBase {
  public :
    std::shared_ptr<n_output_gatetype> mem1;
    std::shared_ptr<drive_strength> mem2;
    std::shared_ptr<delay2> mem3;
    std::shared_ptr<std::list<std::shared_ptr< n_output_gate_instance>>> mem4;

  T_gate_instantiation_output( 
       std::shared_ptr<n_output_gatetype> i1
 ,     std::shared_ptr<drive_strength> i2
 ,     std::shared_ptr<delay2> i3
 ,     std::shared_ptr<std::list<std::shared_ptr< n_output_gate_instance>>> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_gate_instantiation_pass_en : public ComponentBase {
  public :
    std::shared_ptr<pass_en_switchtype> mem1;
    std::shared_ptr<delay2> mem2;
    std::shared_ptr<std::list<std::shared_ptr< pass_enable_switch_instance>>> mem3;

  T_gate_instantiation_pass_en( 
       std::shared_ptr<pass_en_switchtype> i1
 ,     std::shared_ptr<delay2> i2
 ,     std::shared_ptr<std::list<std::shared_ptr< pass_enable_switch_instance>>> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_gate_instantiation_pass : public ComponentBase {
  public :
    std::shared_ptr<pass_switchtype> mem1;
    std::shared_ptr<std::list<std::shared_ptr< pass_switch_instance>>> mem2;

  T_gate_instantiation_pass( 
       std::shared_ptr<pass_switchtype> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< pass_switch_instance>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_gate_instantiation_pulldown : public ComponentBase {
  public :
    std::shared_ptr<pulldown_strength> mem1;
    std::shared_ptr<std::list<std::shared_ptr< pull_gate_instance>>> mem2;

  T_gate_instantiation_pulldown( 
       std::shared_ptr<pulldown_strength> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< pull_gate_instance>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_gate_instantiation_pullup : public ComponentBase {
  public :
    std::shared_ptr<pullup_strength> mem1;
    std::shared_ptr<std::list<std::shared_ptr< pull_gate_instance>>> mem2;

  T_gate_instantiation_pullup( 
       std::shared_ptr<pullup_strength> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< pull_gate_instance>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_cmos_switch_instance : public ComponentBase {
  public :
    std::shared_ptr<name_of_gate_instance> mem1;
    std::shared_ptr<expression> mem2;
    std::shared_ptr<expression> mem3;
    std::shared_ptr<expression> mem4;
    std::shared_ptr<expression> mem5;

  T_cmos_switch_instance( 
       std::shared_ptr<name_of_gate_instance> i1
 ,     std::shared_ptr<expression> i2
 ,     std::shared_ptr<expression> i3
 ,     std::shared_ptr<expression> i4
 ,     std::shared_ptr<expression> i5
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
 ,     mem5(i5)
  {}
};
class T_enable_gate_instance : public ComponentBase {
  public :
    std::shared_ptr<name_of_gate_instance> mem1;
    std::shared_ptr<expression> mem2;
    std::shared_ptr<expression> mem3;
    std::shared_ptr<expression> mem4;

  T_enable_gate_instance( 
       std::shared_ptr<name_of_gate_instance> i1
 ,     std::shared_ptr<expression> i2
 ,     std::shared_ptr<expression> i3
 ,     std::shared_ptr<expression> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_mos_switch_instance : public ComponentBase {
  public :
    std::shared_ptr<name_of_gate_instance> mem1;
    std::shared_ptr<expression> mem2;
    std::shared_ptr<expression> mem3;
    std::shared_ptr<expression> mem4;

  T_mos_switch_instance( 
       std::shared_ptr<name_of_gate_instance> i1
 ,     std::shared_ptr<expression> i2
 ,     std::shared_ptr<expression> i3
 ,     std::shared_ptr<expression> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_n_input_gate_instance : public ComponentBase {
  public :
    std::shared_ptr<name_of_gate_instance> mem1;
    std::shared_ptr<expression> mem2;
    std::shared_ptr<expression> mem3;
    std::shared_ptr<std::list<std::shared_ptr< expression>>> mem4;

  T_n_input_gate_instance( 
       std::shared_ptr<name_of_gate_instance> i1
 ,     std::shared_ptr<expression> i2
 ,     std::shared_ptr<expression> i3
 ,     std::shared_ptr<std::list<std::shared_ptr< expression>>> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_n_output_gate_instance : public ComponentBase {
  public :
    std::shared_ptr<name_of_gate_instance> mem1;
    std::shared_ptr<expression> mem2;
    std::shared_ptr<std::list<std::shared_ptr< expression>>> mem3;
    std::shared_ptr<expression> mem4;

  T_n_output_gate_instance( 
       std::shared_ptr<name_of_gate_instance> i1
 ,     std::shared_ptr<expression> i2
 ,     std::shared_ptr<std::list<std::shared_ptr< expression>>> i3
 ,     std::shared_ptr<expression> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_pass_switch_instance : public ComponentBase {
  public :
    std::shared_ptr<name_of_gate_instance> mem1;
    std::shared_ptr<expression> mem2;
    std::shared_ptr<expression> mem3;

  T_pass_switch_instance( 
       std::shared_ptr<name_of_gate_instance> i1
 ,     std::shared_ptr<expression> i2
 ,     std::shared_ptr<expression> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_pass_enable_switch_instance : public ComponentBase {
  public :
    std::shared_ptr<name_of_gate_instance> mem1;
    std::shared_ptr<expression> mem2;
    std::shared_ptr<expression> mem3;
    std::shared_ptr<expression> mem4;

  T_pass_enable_switch_instance( 
       std::shared_ptr<name_of_gate_instance> i1
 ,     std::shared_ptr<expression> i2
 ,     std::shared_ptr<expression> i3
 ,     std::shared_ptr<expression> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_pull_gate_instance : public ComponentBase {
  public :
    std::shared_ptr<name_of_gate_instance> mem1;
    std::shared_ptr<expression> mem2;

  T_pull_gate_instance( 
       std::shared_ptr<name_of_gate_instance> i1
 ,     std::shared_ptr<expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_name_of_gate_instance_NOSPEC : public ComponentBase {
  public :

  T_name_of_gate_instance_NOSPEC( 
  )
  {}
};
class T_name_of_gate_instance : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<range> mem2;

  T_name_of_gate_instance( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<range> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_pulldown_strength_NOSPEC : public ComponentBase {
  public :

  T_pulldown_strength_NOSPEC( 
  )
  {}
};
class T_pulldown_strength01 : public ComponentBase {
  public :
    std::shared_ptr<strength> mem1;
    std::shared_ptr<strength> mem2;

  T_pulldown_strength01( 
       std::shared_ptr<strength> i1
 ,     std::shared_ptr<strength> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_pulldown_strength10 : public ComponentBase {
  public :
    std::shared_ptr<strength> mem1;
    std::shared_ptr<strength> mem2;

  T_pulldown_strength10( 
       std::shared_ptr<strength> i1
 ,     std::shared_ptr<strength> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_pulldown_strength0 : public ComponentBase {
  public :
    std::shared_ptr<strength> mem1;

  T_pulldown_strength0( 
       std::shared_ptr<strength> i1
  ):
       mem1(i1)
  {}
};
class T_pullup_strength_NOSPEC : public ComponentBase {
  public :

  T_pullup_strength_NOSPEC( 
  )
  {}
};
class T_pullup_strength01 : public ComponentBase {
  public :
    std::shared_ptr<strength> mem1;
    std::shared_ptr<strength> mem2;

  T_pullup_strength01( 
       std::shared_ptr<strength> i1
 ,     std::shared_ptr<strength> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_pullup_strength10 : public ComponentBase {
  public :
    std::shared_ptr<strength> mem1;
    std::shared_ptr<strength> mem2;

  T_pullup_strength10( 
       std::shared_ptr<strength> i1
 ,     std::shared_ptr<strength> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_pullup_strength1 : public ComponentBase {
  public :
    std::shared_ptr<strength> mem1;

  T_pullup_strength1( 
       std::shared_ptr<strength> i1
  ):
       mem1(i1)
  {}
};
class T_cmos_switchtype_CMOS : public ComponentBase {
  public :

  T_cmos_switchtype_CMOS( 
  )
  {}
};
class T_cmos_switchtype_RCMOS : public ComponentBase {
  public :

  T_cmos_switchtype_RCMOS( 
  )
  {}
};
class T_enable_gatetype__BUFIF0 : public ComponentBase {
  public :

  T_enable_gatetype__BUFIF0( 
  )
  {}
};
class T_enable_gatetype__BUFIF1 : public ComponentBase {
  public :

  T_enable_gatetype__BUFIF1( 
  )
  {}
};
class T_enable_gatetype__NOTIF0 : public ComponentBase {
  public :

  T_enable_gatetype__NOTIF0( 
  )
  {}
};
class T_enable_gatetype__NOTIF1 : public ComponentBase {
  public :

  T_enable_gatetype__NOTIF1( 
  )
  {}
};
class T_mos_switchtype_NMOS : public ComponentBase {
  public :

  T_mos_switchtype_NMOS( 
  )
  {}
};
class T_mos_switchtype_PMOS : public ComponentBase {
  public :

  T_mos_switchtype_PMOS( 
  )
  {}
};
class T_mos_switchtype_RNMOS : public ComponentBase {
  public :

  T_mos_switchtype_RNMOS( 
  )
  {}
};
class T_mos_switchtype_RPMOS : public ComponentBase {
  public :

  T_mos_switchtype_RPMOS( 
  )
  {}
};
class T_n_input_gatetype_AND : public ComponentBase {
  public :

  T_n_input_gatetype_AND( 
  )
  {}
};
class T_n_input_gatetype_NAND : public ComponentBase {
  public :

  T_n_input_gatetype_NAND( 
  )
  {}
};
class T_n_input_gatetype_OR : public ComponentBase {
  public :

  T_n_input_gatetype_OR( 
  )
  {}
};
class T_n_input_gatetype_NOR : public ComponentBase {
  public :

  T_n_input_gatetype_NOR( 
  )
  {}
};
class T_n_input_gatetype_XOR : public ComponentBase {
  public :

  T_n_input_gatetype_XOR( 
  )
  {}
};
class T_n_input_gatetype_XNOR : public ComponentBase {
  public :

  T_n_input_gatetype_XNOR( 
  )
  {}
};
class T_n_output_gatetype_BUF : public ComponentBase {
  public :

  T_n_output_gatetype_BUF( 
  )
  {}
};
class T_n_output_gatetype_NOT : public ComponentBase {
  public :

  T_n_output_gatetype_NOT( 
  )
  {}
};
class T_pass_en_switchtype_TRANIF0 : public ComponentBase {
  public :

  T_pass_en_switchtype_TRANIF0( 
  )
  {}
};
class T_pass_en_switchtype_TRANIF1 : public ComponentBase {
  public :

  T_pass_en_switchtype_TRANIF1( 
  )
  {}
};
class T_pass_en_switchtype_RTRANIF1 : public ComponentBase {
  public :

  T_pass_en_switchtype_RTRANIF1( 
  )
  {}
};
class T_pass_en_switchtype_RTRANIF0 : public ComponentBase {
  public :

  T_pass_en_switchtype_RTRANIF0( 
  )
  {}
};
class T_pass_switchtype_TRAN : public ComponentBase {
  public :

  T_pass_switchtype_TRAN( 
  )
  {}
};
class T_pass_switchtype_RTRAN : public ComponentBase {
  public :

  T_pass_switchtype_RTRAN( 
  )
  {}
};
class T_module_instantiation : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<drive_strength> mem2;
    std::shared_ptr<parameter_value_assignment> mem3;
    std::shared_ptr<std::list<std::shared_ptr< module_instance>>> mem4;

  T_module_instantiation( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<drive_strength> i2
 ,     std::shared_ptr<parameter_value_assignment> i3
 ,     std::shared_ptr<std::list<std::shared_ptr< module_instance>>> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_module_instance : public ComponentBase {
  public :
    std::shared_ptr<name_of_module_instance> mem1;
    std::shared_ptr<list_of_port_connections> mem2;

  T_module_instance( 
       std::shared_ptr<name_of_module_instance> i1
 ,     std::shared_ptr<list_of_port_connections> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_name_of_module_instance_NOSPEC : public ComponentBase {
  public :

  T_name_of_module_instance_NOSPEC( 
  )
  {}
};
class T_name_of_module_instance : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<range> mem2;

  T_name_of_module_instance( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<range> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_parameter_value_assignment_NOSPEC : public ComponentBase {
  public :

  T_parameter_value_assignment_NOSPEC( 
  )
  {}
};
class T_parameter_value_assignment_order : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< mintypmax_expression>>> mem1;

  T_parameter_value_assignment_order( 
       std::shared_ptr<std::list<std::shared_ptr< mintypmax_expression>>> i1
  ):
       mem1(i1)
  {}
};
class T_parameter_value_assignment_named : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< named_parameter_assignment>>> mem1;

  T_parameter_value_assignment_named( 
       std::shared_ptr<std::list<std::shared_ptr< named_parameter_assignment>>> i1
  ):
       mem1(i1)
  {}
};
class T_named_parameter_assignment : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<mintypmax_expression> mem2;

  T_named_parameter_assignment( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<mintypmax_expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_list_of_port_connections_ordered : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< ordered_port_connection>>> mem1;

  T_list_of_port_connections_ordered( 
       std::shared_ptr<std::list<std::shared_ptr< ordered_port_connection>>> i1
  ):
       mem1(i1)
  {}
};
class T_list_of_port_connections_named : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< named_port_connection>>> mem1;

  T_list_of_port_connections_named( 
       std::shared_ptr<std::list<std::shared_ptr< named_port_connection>>> i1
  ):
       mem1(i1)
  {}
};
class T_ordered_port_connection : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<expression> mem2;

  T_ordered_port_connection( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_named_port_connection : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<identifier> mem2;
    std::shared_ptr<expression> mem3;

  T_named_port_connection( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<identifier> i2
 ,     std::shared_ptr<expression> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_generate_region : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< module_item>>> mem1;

  T_generate_region( 
       std::shared_ptr<std::list<std::shared_ptr< module_item>>> i1
  ):
       mem1(i1)
  {}
};
class T_genvar_declaration : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< identifier>>> mem1;

  T_genvar_declaration( 
       std::shared_ptr<std::list<std::shared_ptr< identifier>>> i1
  ):
       mem1(i1)
  {}
};
class T_loop_generate_construct : public ComponentBase {
  public :
    std::shared_ptr<genvar_initialization> mem1;
    std::shared_ptr<expression> mem2;
    std::shared_ptr<genvar_iteration> mem3;
    std::shared_ptr<generate_block> mem4;

  T_loop_generate_construct( 
       std::shared_ptr<genvar_initialization> i1
 ,     std::shared_ptr<expression> i2
 ,     std::shared_ptr<genvar_iteration> i3
 ,     std::shared_ptr<generate_block> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_genvar_initialization : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<expression> mem2;

  T_genvar_initialization( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_genvar_iteration : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<expression> mem2;

  T_genvar_iteration( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_conditional_generate_construct_if : public ComponentBase {
  public :
    std::shared_ptr<if_generate_construct> mem1;

  T_conditional_generate_construct_if( 
       std::shared_ptr<if_generate_construct> i1
  ):
       mem1(i1)
  {}
};
class T_conditional_generate_construct_case : public ComponentBase {
  public :
    std::shared_ptr<case_generate_construct> mem1;

  T_conditional_generate_construct_case( 
       std::shared_ptr<case_generate_construct> i1
  ):
       mem1(i1)
  {}
};
class T_case_generate_construct : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;
    std::shared_ptr<std::list<std::shared_ptr< case_generate_item>>> mem2;

  T_case_generate_construct( 
       std::shared_ptr<expression> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< case_generate_item>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_case_generate_item_case : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< expression>>> mem1;
    std::shared_ptr<generate_block> mem2;

  T_case_generate_item_case( 
       std::shared_ptr<std::list<std::shared_ptr< expression>>> i1
 ,     std::shared_ptr<generate_block> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_case_generate_item_default : public ComponentBase {
  public :
    std::shared_ptr<generate_block> mem1;

  T_case_generate_item_default( 
       std::shared_ptr<generate_block> i1
  ):
       mem1(i1)
  {}
};
class T_if_generate_construct : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;
    std::shared_ptr<generate_block> mem2;
    std::shared_ptr<generate_block> mem3;

  T_if_generate_construct( 
       std::shared_ptr<expression> i1
 ,     std::shared_ptr<generate_block> i2
 ,     std::shared_ptr<generate_block> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_generate_block_NOSPEC : public ComponentBase {
  public :

  T_generate_block_NOSPEC( 
  )
  {}
};
class T_generate_block_mgi : public ComponentBase {
  public :
    std::shared_ptr<module_item> mem1;

  T_generate_block_mgi( 
       std::shared_ptr<module_item> i1
  ):
       mem1(i1)
  {}
};
class T_generate_block_begin : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<std::list<std::shared_ptr< module_item>>> mem2;

  T_generate_block_begin( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< module_item>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_udp_declaration_1 : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<identifier> mem2;
    std::shared_ptr<udp_port_list> mem3;
    std::shared_ptr<std::list<std::shared_ptr< udp_port_declaration>>> mem4;
    std::shared_ptr<udp_body> mem5;

  T_udp_declaration_1( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<identifier> i2
 ,     std::shared_ptr<udp_port_list> i3
 ,     std::shared_ptr<std::list<std::shared_ptr< udp_port_declaration>>> i4
 ,     std::shared_ptr<udp_body> i5
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
 ,     mem5(i5)
  {}
};
class T_udp_declaration_2 : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<identifier> mem2;
    std::shared_ptr<udp_declaration_port_list> mem3;
    std::shared_ptr<udp_body> mem4;

  T_udp_declaration_2( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<identifier> i2
 ,     std::shared_ptr<udp_declaration_port_list> i3
 ,     std::shared_ptr<udp_body> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_udp_port_list : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<std::list<std::shared_ptr< identifier>>> mem2;

  T_udp_port_list( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< identifier>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_udp_declaration_port_list : public ComponentBase {
  public :
    std::shared_ptr<udp_output_declaration> mem1;
    std::shared_ptr<std::list<std::shared_ptr< udp_input_declaration_sigular>>> mem2;

  T_udp_declaration_port_list( 
       std::shared_ptr<udp_output_declaration> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< udp_input_declaration_sigular>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_udp_port_declaration_out : public ComponentBase {
  public :
    std::shared_ptr<udp_output_declaration> mem1;

  T_udp_port_declaration_out( 
       std::shared_ptr<udp_output_declaration> i1
  ):
       mem1(i1)
  {}
};
class T_udp_port_declaration_input : public ComponentBase {
  public :
    std::shared_ptr<udp_input_declaration> mem1;

  T_udp_port_declaration_input( 
       std::shared_ptr<udp_input_declaration> i1
  ):
       mem1(i1)
  {}
};
class T_udp_port_declaration_reg : public ComponentBase {
  public :
    std::shared_ptr<udp_reg_declaration> mem1;

  T_udp_port_declaration_reg( 
       std::shared_ptr<udp_reg_declaration> i1
  ):
       mem1(i1)
  {}
};
class T_udp_output_declaration_output : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<identifier> mem2;

  T_udp_output_declaration_output( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<identifier> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_udp_output_declaration_reg : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<identifier> mem2;
    std::shared_ptr<expression> mem3;

  T_udp_output_declaration_reg( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<identifier> i2
 ,     std::shared_ptr<expression> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_udp_input_declaration_singular : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    int mem2;
    std::shared_ptr<identifier> mem3;

  T_udp_input_declaration_singular( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     int i2
 ,     std::shared_ptr<identifier> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_udp_input_declaration : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<std::list<std::shared_ptr< identifier>>> mem2;

  T_udp_input_declaration( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< identifier>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_udp_reg_declaration : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<identifier> mem2;

  T_udp_reg_declaration( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<identifier> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_udp_body_comb : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< combinational_entry>>> mem1;

  T_udp_body_comb( 
       std::shared_ptr<std::list<std::shared_ptr< combinational_entry>>> i1
  ):
       mem1(i1)
  {}
};
class T_udp_body_seq : public ComponentBase {
  public :
    std::shared_ptr<sequential_body> mem1;

  T_udp_body_seq( 
       std::shared_ptr<sequential_body> i1
  ):
       mem1(i1)
  {}
};
class T_combinational_entry : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< level_symbol>>> mem1;
    std::shared_ptr<output_symbol> mem2;

  T_combinational_entry( 
       std::shared_ptr<std::list<std::shared_ptr< level_symbol>>> i1
 ,     std::shared_ptr<output_symbol> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_sequential_body : public ComponentBase {
  public :
    std::shared_ptr<udp_initial_statement> mem1;
    std::shared_ptr<std::list<std::shared_ptr< sequential_entry>>> mem2;

  T_sequential_body( 
       std::shared_ptr<udp_initial_statement> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< sequential_entry>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_udp_initial_statement_NOSPEC : public ComponentBase {
  public :

  T_udp_initial_statement_NOSPEC( 
  )
  {}
};
class T_udp_initial_statement : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<init_val> mem2;

  T_udp_initial_statement( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<init_val> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_init_val_bin : public ComponentBase {
  public :
    int mem1;
    std::string mem2;

  T_init_val_bin( 
       int i1
 ,     std::string i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_init_val_unsigned : public ComponentBase {
  public :
    int mem1;

  T_init_val_unsigned( 
       int i1
  ):
       mem1(i1)
  {}
};
class T_sequential_entry : public ComponentBase {
  public :
    std::shared_ptr<seq_input_list> mem1;
    std::shared_ptr<level_symbol> mem2;
    std::shared_ptr<level_symbol> mem3;

  T_sequential_entry( 
       std::shared_ptr<seq_input_list> i1
 ,     std::shared_ptr<level_symbol> i2
 ,     std::shared_ptr<level_symbol> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_sequential_entry_comb : public ComponentBase {
  public :
    std::shared_ptr<seq_input_list> mem1;
    std::shared_ptr<level_symbol> mem2;

  T_sequential_entry_comb( 
       std::shared_ptr<seq_input_list> i1
 ,     std::shared_ptr<level_symbol> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_seq_input_list_level : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< level_symbol>>> mem1;

  T_seq_input_list_level( 
       std::shared_ptr<std::list<std::shared_ptr< level_symbol>>> i1
  ):
       mem1(i1)
  {}
};
class T_seq_input_list_edge : public ComponentBase {
  public :
    std::shared_ptr<edge_input_list> mem1;

  T_seq_input_list_edge( 
       std::shared_ptr<edge_input_list> i1
  ):
       mem1(i1)
  {}
};
class T_edge_input_list : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< level_symbol>>> mem1;
    std::shared_ptr<edge_indicator> mem2;
    std::shared_ptr<std::list<std::shared_ptr< level_symbol>>> mem3;

  T_edge_input_list( 
       std::shared_ptr<std::list<std::shared_ptr< level_symbol>>> i1
 ,     std::shared_ptr<edge_indicator> i2
 ,     std::shared_ptr<std::list<std::shared_ptr< level_symbol>>> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_edge_indicator_level : public ComponentBase {
  public :
    std::shared_ptr<level_symbol> mem1;
    std::shared_ptr<level_symbol> mem2;

  T_edge_indicator_level( 
       std::shared_ptr<level_symbol> i1
 ,     std::shared_ptr<level_symbol> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_edge_indicator_edge : public ComponentBase {
  public :
    std::shared_ptr<edge_symbol> mem1;

  T_edge_indicator_edge( 
       std::shared_ptr<edge_symbol> i1
  ):
       mem1(i1)
  {}
};
class T_udp_instantiation : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<drive_strength> mem2;
    std::shared_ptr<delay2> mem3;
    std::shared_ptr<std::list<std::shared_ptr< udp_instance>>> mem4;

  T_udp_instantiation( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<drive_strength> i2
 ,     std::shared_ptr<delay2> i3
 ,     std::shared_ptr<std::list<std::shared_ptr< udp_instance>>> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_udp_instance : public ComponentBase {
  public :
    std::shared_ptr<name_of_udp_instance> mem1;
    std::shared_ptr<expression> mem2;
    std::shared_ptr<std::list<std::shared_ptr< expression>>> mem3;

  T_udp_instance( 
       std::shared_ptr<name_of_udp_instance> i1
 ,     std::shared_ptr<expression> i2
 ,     std::shared_ptr<std::list<std::shared_ptr< expression>>> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_name_of_udp_instance_NOSPEC : public ComponentBase {
  public :

  T_name_of_udp_instance_NOSPEC( 
  )
  {}
};
class T_name_of_udp_instance : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<range> mem2;

  T_name_of_udp_instance( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<range> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_continuous_assign : public ComponentBase {
  public :
    std::shared_ptr<drive_strength> mem1;
    std::shared_ptr<delay3> mem2;
    std::shared_ptr<std::list<std::shared_ptr< net_assignment>>> mem3;

  T_continuous_assign( 
       std::shared_ptr<drive_strength> i1
 ,     std::shared_ptr<delay3> i2
 ,     std::shared_ptr<std::list<std::shared_ptr< net_assignment>>> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_net_assignment : public ComponentBase {
  public :
    std::shared_ptr<net_lvalue> mem1;
    std::shared_ptr<expression> mem2;

  T_net_assignment( 
       std::shared_ptr<net_lvalue> i1
 ,     std::shared_ptr<expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_initial_construct : public ComponentBase {
  public :
    std::shared_ptr<statement> mem1;

  T_initial_construct( 
       std::shared_ptr<statement> i1
  ):
       mem1(i1)
  {}
};
class T_always_construct : public ComponentBase {
  public :
    std::shared_ptr<statement> mem1;

  T_always_construct( 
       std::shared_ptr<statement> i1
  ):
       mem1(i1)
  {}
};
class T_blocking_assignment : public ComponentBase {
  public :
    std::shared_ptr<net_lvalue> mem1;
    std::shared_ptr<delay_or_event_control> mem2;
    std::shared_ptr<expression> mem3;

  T_blocking_assignment( 
       std::shared_ptr<net_lvalue> i1
 ,     std::shared_ptr<delay_or_event_control> i2
 ,     std::shared_ptr<expression> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_nonblocking_assignment : public ComponentBase {
  public :
    std::shared_ptr<net_lvalue> mem1;
    std::shared_ptr<delay_or_event_control> mem2;
    std::shared_ptr<expression> mem3;

  T_nonblocking_assignment( 
       std::shared_ptr<net_lvalue> i1
 ,     std::shared_ptr<delay_or_event_control> i2
 ,     std::shared_ptr<expression> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_procedural_continuous_assignments_assign : public ComponentBase {
  public :
    std::shared_ptr<net_assignment> mem1;

  T_procedural_continuous_assignments_assign( 
       std::shared_ptr<net_assignment> i1
  ):
       mem1(i1)
  {}
};
class T_procedural_continuous_assignments_deassign : public ComponentBase {
  public :
    std::shared_ptr<net_lvalue> mem1;

  T_procedural_continuous_assignments_deassign( 
       std::shared_ptr<net_lvalue> i1
  ):
       mem1(i1)
  {}
};
class T_procedural_continuous_assignments_force1 : public ComponentBase {
  public :
    std::shared_ptr<net_assignment> mem1;

  T_procedural_continuous_assignments_force1( 
       std::shared_ptr<net_assignment> i1
  ):
       mem1(i1)
  {}
};
class T_procedural_continuous_assignments_force2 : public ComponentBase {
  public :
    std::shared_ptr<net_assignment> mem1;

  T_procedural_continuous_assignments_force2( 
       std::shared_ptr<net_assignment> i1
  ):
       mem1(i1)
  {}
};
class T_procedural_continuous_assignments_release1 : public ComponentBase {
  public :
    std::shared_ptr<net_lvalue> mem1;

  T_procedural_continuous_assignments_release1( 
       std::shared_ptr<net_lvalue> i1
  ):
       mem1(i1)
  {}
};
class T_procedural_continuous_assignments_release2 : public ComponentBase {
  public :
    std::shared_ptr<net_lvalue> mem1;

  T_procedural_continuous_assignments_release2( 
       std::shared_ptr<net_lvalue> i1
  ):
       mem1(i1)
  {}
};
class T_par_block : public ComponentBase {
  public :
    std::shared_ptr<colon_block_identifier> mem1;
    std::shared_ptr<std::list<std::shared_ptr< statement_or_block_item>>> mem2;

  T_par_block( 
       std::shared_ptr<colon_block_identifier> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< statement_or_block_item>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_colon_block_identifier_NOSPEC : public ComponentBase {
  public :

  T_colon_block_identifier_NOSPEC( 
  )
  {}
};
class T_colon_block_identifier : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;

  T_colon_block_identifier( 
       std::shared_ptr<identifier> i1
  ):
       mem1(i1)
  {}
};
class T_seq_block : public ComponentBase {
  public :
    std::shared_ptr<colon_block_identifier> mem1;
    std::shared_ptr<std::list<std::shared_ptr< statement_or_block_item>>> mem2;

  T_seq_block( 
       std::shared_ptr<colon_block_identifier> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< statement_or_block_item>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_statement_NOSPEC : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;

  T_statement_NOSPEC( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
  ):
       mem1(i1)
  {}
};
class T_statement_blocking_assignment : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<blocking_assignment> mem2;

  T_statement_blocking_assignment( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<blocking_assignment> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_statement_case_statement : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<case_statement> mem2;

  T_statement_case_statement( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<case_statement> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_statement_conditional_statement : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<conditional_statement> mem2;

  T_statement_conditional_statement( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<conditional_statement> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_statement_disable_statement : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<disable_statement> mem2;

  T_statement_disable_statement( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<disable_statement> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_statement_event_trigger : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<event_trigger> mem2;

  T_statement_event_trigger( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<event_trigger> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_statement_loop_statement : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<loop_statement> mem2;

  T_statement_loop_statement( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<loop_statement> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_statement_nonblocking_assignment : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<nonblocking_assignment> mem2;

  T_statement_nonblocking_assignment( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<nonblocking_assignment> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_statement_par_block : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<par_block> mem2;

  T_statement_par_block( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<par_block> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_statement_procedural_continuous_assignments : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<procedural_continuous_assignments> mem2;

  T_statement_procedural_continuous_assignments( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<procedural_continuous_assignments> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_statement_procedural_timing_control_statement : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<procedural_timing_control_statement> mem2;

  T_statement_procedural_timing_control_statement( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<procedural_timing_control_statement> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_statement_seq_block : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<seq_block> mem2;

  T_statement_seq_block( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<seq_block> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_statement_system_task_enable : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<system_task_enable> mem2;

  T_statement_system_task_enable( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<system_task_enable> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_statement_task_enable : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<task_enable> mem2;

  T_statement_task_enable( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<task_enable> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_statement_wait_statement : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem1;
    std::shared_ptr<wait_statement> mem2;

  T_statement_wait_statement( 
       std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i1
 ,     std::shared_ptr<wait_statement> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_delay_control_delay_value : public ComponentBase {
  public :
    std::shared_ptr<delay_value> mem1;

  T_delay_control_delay_value( 
       std::shared_ptr<delay_value> i1
  ):
       mem1(i1)
  {}
};
class T_delay_control_mintypmax_expression : public ComponentBase {
  public :
    std::shared_ptr<mintypmax_expression> mem1;

  T_delay_control_mintypmax_expression( 
       std::shared_ptr<mintypmax_expression> i1
  ):
       mem1(i1)
  {}
};
class T_delay_or_event_control_NOSPEC : public ComponentBase {
  public :

  T_delay_or_event_control_NOSPEC( 
  )
  {}
};
class T_delay_or_event_control_delay_control : public ComponentBase {
  public :
    std::shared_ptr<delay_control> mem1;

  T_delay_or_event_control_delay_control( 
       std::shared_ptr<delay_control> i1
  ):
       mem1(i1)
  {}
};
class T_delay_or_event_control_event_control : public ComponentBase {
  public :
    std::shared_ptr<event_control> mem1;

  T_delay_or_event_control_event_control( 
       std::shared_ptr<event_control> i1
  ):
       mem1(i1)
  {}
};
class T_delay_or_event_control_3 : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;
    std::shared_ptr<event_control> mem2;

  T_delay_or_event_control_3( 
       std::shared_ptr<expression> i1
 ,     std::shared_ptr<event_control> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_disable_statement : public ComponentBase {
  public :
    std::shared_ptr<hierarchical_identifier> mem1;

  T_disable_statement( 
       std::shared_ptr<hierarchical_identifier> i1
  ):
       mem1(i1)
  {}
};
class T_event_control_eventid : public ComponentBase {
  public :
    std::shared_ptr<hierarchical_identifier> mem1;

  T_event_control_eventid( 
       std::shared_ptr<hierarchical_identifier> i1
  ):
       mem1(i1)
  {}
};
class T_event_control_event_exp : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< event_expression>>> mem1;

  T_event_control_event_exp( 
       std::shared_ptr<std::list<std::shared_ptr< event_expression>>> i1
  ):
       mem1(i1)
  {}
};
class T_event_control_start : public ComponentBase {
  public :

  T_event_control_start( 
  )
  {}
};
class T_event_trigger : public ComponentBase {
  public :
    std::shared_ptr<hierarchical_identifier> mem1;

  T_event_trigger( 
       std::shared_ptr<hierarchical_identifier> i1
  ):
       mem1(i1)
  {}
};
class T_event_expression_exp : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;

  T_event_expression_exp( 
       std::shared_ptr<expression> i1
  ):
       mem1(i1)
  {}
};
class T_event_expression_pos : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;

  T_event_expression_pos( 
       std::shared_ptr<expression> i1
  ):
       mem1(i1)
  {}
};
class T_event_expression_neg : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;

  T_event_expression_neg( 
       std::shared_ptr<expression> i1
  ):
       mem1(i1)
  {}
};
class T_event_expression_or : public ComponentBase {
  public :
    std::shared_ptr<event_expression> mem1;
    std::shared_ptr<event_expression> mem2;

  T_event_expression_or( 
       std::shared_ptr<event_expression> i1
 ,     std::shared_ptr<event_expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_procedural_timing_control_delay : public ComponentBase {
  public :
    std::shared_ptr<delay_control> mem1;

  T_procedural_timing_control_delay( 
       std::shared_ptr<delay_control> i1
  ):
       mem1(i1)
  {}
};
class T_procedural_timing_control_event : public ComponentBase {
  public :
    std::shared_ptr<event_control> mem1;

  T_procedural_timing_control_event( 
       std::shared_ptr<event_control> i1
  ):
       mem1(i1)
  {}
};
class T_procedural_timing_control_statement : public ComponentBase {
  public :
    std::shared_ptr<procedural_timing_control> mem1;
    std::shared_ptr<statement> mem2;

  T_procedural_timing_control_statement( 
       std::shared_ptr<procedural_timing_control> i1
 ,     std::shared_ptr<statement> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_wait_statement : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;
    std::shared_ptr<statement> mem2;

  T_wait_statement( 
       std::shared_ptr<expression> i1
 ,     std::shared_ptr<statement> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_conditional_statement_ifelse : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;
    std::shared_ptr<statement> mem2;
    std::shared_ptr<statement> mem3;

  T_conditional_statement_ifelse( 
       std::shared_ptr<expression> i1
 ,     std::shared_ptr<statement> i2
 ,     std::shared_ptr<statement> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_conditional_statement_ifelseif : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;
    std::shared_ptr<statement> mem2;
    std::shared_ptr<std::list<std::shared_ptr< else_if_lp_expression_rp_statement_or_null>>> mem3;
    std::shared_ptr<statement> mem4;

  T_conditional_statement_ifelseif( 
       std::shared_ptr<expression> i1
 ,     std::shared_ptr<statement> i2
 ,     std::shared_ptr<std::list<std::shared_ptr< else_if_lp_expression_rp_statement_or_null>>> i3
 ,     std::shared_ptr<statement> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_elseif : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;
    std::shared_ptr<statement> mem2;

  T_elseif( 
       std::shared_ptr<expression> i1
 ,     std::shared_ptr<statement> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_case_statement_case : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;
    std::shared_ptr<std::list<std::shared_ptr< case_item>>> mem2;

  T_case_statement_case( 
       std::shared_ptr<expression> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< case_item>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_case_statement_casez : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;
    std::shared_ptr<std::list<std::shared_ptr< case_item>>> mem2;

  T_case_statement_casez( 
       std::shared_ptr<expression> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< case_item>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_case_statement_casex : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;
    std::shared_ptr<std::list<std::shared_ptr< case_item>>> mem2;

  T_case_statement_casex( 
       std::shared_ptr<expression> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< case_item>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_case_item : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< expression>>> mem1;
    std::shared_ptr<statement> mem2;

  T_case_item( 
       std::shared_ptr<std::list<std::shared_ptr< expression>>> i1
 ,     std::shared_ptr<statement> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_case_item_default : public ComponentBase {
  public :
    std::shared_ptr<colon_opt> mem1;
    std::shared_ptr<statement> mem2;

  T_case_item_default( 
       std::shared_ptr<colon_opt> i1
 ,     std::shared_ptr<statement> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_colon_opt_false : public ComponentBase {
  public :

  T_colon_opt_false( 
  )
  {}
};
class T_colon_opt_true : public ComponentBase {
  public :

  T_colon_opt_true( 
  )
  {}
};
class T_loop_statement_forever : public ComponentBase {
  public :
    std::shared_ptr<statement> mem1;

  T_loop_statement_forever( 
       std::shared_ptr<statement> i1
  ):
       mem1(i1)
  {}
};
class T_loop_statement_repeat : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;
    std::shared_ptr<statement> mem2;

  T_loop_statement_repeat( 
       std::shared_ptr<expression> i1
 ,     std::shared_ptr<statement> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_loop_statement_while : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;
    std::shared_ptr<statement> mem2;

  T_loop_statement_while( 
       std::shared_ptr<expression> i1
 ,     std::shared_ptr<statement> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_loop_statement_for : public ComponentBase {
  public :
    std::shared_ptr<net_assignment> mem1;
    std::shared_ptr<expression> mem2;
    std::shared_ptr<net_assignment> mem3;
    std::shared_ptr<statement> mem4;

  T_loop_statement_for( 
       std::shared_ptr<net_assignment> i1
 ,     std::shared_ptr<expression> i2
 ,     std::shared_ptr<net_assignment> i3
 ,     std::shared_ptr<statement> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_system_task_enable : public ComponentBase {
  public :
    std::shared_ptr<system_function_identifier> mem1;
    std::shared_ptr<std::list<std::shared_ptr< expression>>> mem2;

  T_system_task_enable( 
       std::shared_ptr<system_function_identifier> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< expression>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_task_enable : public ComponentBase {
  public :
    std::shared_ptr<hierarchical_identifier> mem1;
    std::shared_ptr<std::list<std::shared_ptr< expression>>> mem2;

  T_task_enable( 
       std::shared_ptr<hierarchical_identifier> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< expression>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_specify_block : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< specify_item>>> mem1;

  T_specify_block( 
       std::shared_ptr<std::list<std::shared_ptr< specify_item>>> i1
  ):
       mem1(i1)
  {}
};
class T_specify_item_specparam : public ComponentBase {
  public :
    std::shared_ptr<specparam_declaration> mem1;

  T_specify_item_specparam( 
       std::shared_ptr<specparam_declaration> i1
  ):
       mem1(i1)
  {}
};
class T_specify_item_pulsestyle : public ComponentBase {
  public :
    std::shared_ptr<pulsestyle_declaration> mem1;

  T_specify_item_pulsestyle( 
       std::shared_ptr<pulsestyle_declaration> i1
  ):
       mem1(i1)
  {}
};
class T_specify_item_showcancelled : public ComponentBase {
  public :
    std::shared_ptr<showcancelled_declaration> mem1;

  T_specify_item_showcancelled( 
       std::shared_ptr<showcancelled_declaration> i1
  ):
       mem1(i1)
  {}
};
class T_specify_item_path : public ComponentBase {
  public :
    std::shared_ptr<path_declaration> mem1;

  T_specify_item_path( 
       std::shared_ptr<path_declaration> i1
  ):
       mem1(i1)
  {}
};
class T_specify_item_system : public ComponentBase {
  public :
    std::shared_ptr<system_timing_check> mem1;

  T_specify_item_system( 
       std::shared_ptr<system_timing_check> i1
  ):
       mem1(i1)
  {}
};
class T_pulsestyle_declaration_oneevent : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< specify_output_terminal_descriptor>>> mem1;

  T_pulsestyle_declaration_oneevent( 
       std::shared_ptr<std::list<std::shared_ptr< specify_output_terminal_descriptor>>> i1
  ):
       mem1(i1)
  {}
};
class T_pulsestyle_declaration_onedetect : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< specify_output_terminal_descriptor>>> mem1;

  T_pulsestyle_declaration_onedetect( 
       std::shared_ptr<std::list<std::shared_ptr< specify_output_terminal_descriptor>>> i1
  ):
       mem1(i1)
  {}
};
class T_showcancelled_declaration_show : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< specify_output_terminal_descriptor>>> mem1;

  T_showcancelled_declaration_show( 
       std::shared_ptr<std::list<std::shared_ptr< specify_output_terminal_descriptor>>> i1
  ):
       mem1(i1)
  {}
};
class T_showcancelled_declaration_noshow : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< specify_output_terminal_descriptor>>> mem1;

  T_showcancelled_declaration_noshow( 
       std::shared_ptr<std::list<std::shared_ptr< specify_output_terminal_descriptor>>> i1
  ):
       mem1(i1)
  {}
};
class T_path_declaration_simple : public ComponentBase {
  public :
    std::shared_ptr<simple_path_declaration> mem1;

  T_path_declaration_simple( 
       std::shared_ptr<simple_path_declaration> i1
  ):
       mem1(i1)
  {}
};
class T_path_declaration_edge : public ComponentBase {
  public :
    std::shared_ptr<edge_sensitive_path_declaration> mem1;

  T_path_declaration_edge( 
       std::shared_ptr<edge_sensitive_path_declaration> i1
  ):
       mem1(i1)
  {}
};
class T_path_declaration_state : public ComponentBase {
  public :
    std::shared_ptr<state_dependent_path_declaration> mem1;

  T_path_declaration_state( 
       std::shared_ptr<state_dependent_path_declaration> i1
  ):
       mem1(i1)
  {}
};
class T_simple_path_declaration_parallel : public ComponentBase {
  public :
    std::shared_ptr<parallel_path_description> mem1;
    std::shared_ptr<list_of_path_delay_expressions> mem2;

  T_simple_path_declaration_parallel( 
       std::shared_ptr<parallel_path_description> i1
 ,     std::shared_ptr<list_of_path_delay_expressions> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_simple_path_declaration_full : public ComponentBase {
  public :
    std::shared_ptr<full_path_description> mem1;
    std::shared_ptr<list_of_path_delay_expressions> mem2;

  T_simple_path_declaration_full( 
       std::shared_ptr<full_path_description> i1
 ,     std::shared_ptr<list_of_path_delay_expressions> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_parallel_path_description : public ComponentBase {
  public :
    std::shared_ptr<edge_identifier> mem1;
    std::shared_ptr<std::list<std::shared_ptr< specify_input_terminal_descriptor>>> mem2;
    std::shared_ptr<polarity_operator> mem3;
    std::shared_ptr<specify_output_terminal_descriptor> mem4;

  T_parallel_path_description( 
       std::shared_ptr<edge_identifier> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< specify_input_terminal_descriptor>>> i2
 ,     std::shared_ptr<polarity_operator> i3
 ,     std::shared_ptr<specify_output_terminal_descriptor> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_full_path_description : public ComponentBase {
  public :
    std::shared_ptr<edge_identifier> mem1;
    std::shared_ptr<std::list<std::shared_ptr< specify_input_terminal_descriptor>>> mem2;
    std::shared_ptr<polarity_operator> mem3;
    std::shared_ptr<std::list<std::shared_ptr< specify_output_terminal_descriptor>>> mem4;

  T_full_path_description( 
       std::shared_ptr<edge_identifier> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< specify_input_terminal_descriptor>>> i2
 ,     std::shared_ptr<polarity_operator> i3
 ,     std::shared_ptr<std::list<std::shared_ptr< specify_output_terminal_descriptor>>> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_specify_input_terminal_descriptor : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<range_expression> mem2;

  T_specify_input_terminal_descriptor( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<range_expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_specify_output_terminal_descriptor : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<range_expression> mem2;

  T_specify_output_terminal_descriptor( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<range_expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_list_of_mintypmax_expressions_1 : public ComponentBase {
  public :
    std::shared_ptr<mintypmax_expression> mem1;

  T_list_of_mintypmax_expressions_1( 
       std::shared_ptr<mintypmax_expression> i1
  ):
       mem1(i1)
  {}
};
class T_list_of_mintypmax_expressions_2 : public ComponentBase {
  public :
    std::shared_ptr<mintypmax_expression> mem1;
    std::shared_ptr<mintypmax_expression> mem2;

  T_list_of_mintypmax_expressions_2( 
       std::shared_ptr<mintypmax_expression> i1
 ,     std::shared_ptr<mintypmax_expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_list_of_mintypmax_expressions_3 : public ComponentBase {
  public :
    std::shared_ptr<mintypmax_expression> mem1;
    std::shared_ptr<mintypmax_expression> mem2;
    std::shared_ptr<mintypmax_expression> mem3;

  T_list_of_mintypmax_expressions_3( 
       std::shared_ptr<mintypmax_expression> i1
 ,     std::shared_ptr<mintypmax_expression> i2
 ,     std::shared_ptr<mintypmax_expression> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_list_of_mintypmax_expressions_6 : public ComponentBase {
  public :
    std::shared_ptr<mintypmax_expression> mem1;
    std::shared_ptr<mintypmax_expression> mem2;
    std::shared_ptr<mintypmax_expression> mem3;
    std::shared_ptr<mintypmax_expression> mem4;
    std::shared_ptr<mintypmax_expression> mem5;
    std::shared_ptr<mintypmax_expression> mem6;

  T_list_of_mintypmax_expressions_6( 
       std::shared_ptr<mintypmax_expression> i1
 ,     std::shared_ptr<mintypmax_expression> i2
 ,     std::shared_ptr<mintypmax_expression> i3
 ,     std::shared_ptr<mintypmax_expression> i4
 ,     std::shared_ptr<mintypmax_expression> i5
 ,     std::shared_ptr<mintypmax_expression> i6
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
 ,     mem5(i5)
 ,     mem6(i6)
  {}
};
class T_list_of_mintypmax_expressions_12 : public ComponentBase {
  public :
    std::shared_ptr<mintypmax_expression> mem1;
    std::shared_ptr<mintypmax_expression> mem2;
    std::shared_ptr<mintypmax_expression> mem3;
    std::shared_ptr<mintypmax_expression> mem4;
    std::shared_ptr<mintypmax_expression> mem5;
    std::shared_ptr<mintypmax_expression> mem6;
    std::shared_ptr<mintypmax_expression> mem7;
    std::shared_ptr<mintypmax_expression> mem8;
    std::shared_ptr<mintypmax_expression> mem9;
    std::shared_ptr<mintypmax_expression> mem10;
    std::shared_ptr<mintypmax_expression> mem11;
    std::shared_ptr<mintypmax_expression> mem12;

  T_list_of_mintypmax_expressions_12( 
       std::shared_ptr<mintypmax_expression> i1
 ,     std::shared_ptr<mintypmax_expression> i2
 ,     std::shared_ptr<mintypmax_expression> i3
 ,     std::shared_ptr<mintypmax_expression> i4
 ,     std::shared_ptr<mintypmax_expression> i5
 ,     std::shared_ptr<mintypmax_expression> i6
 ,     std::shared_ptr<mintypmax_expression> i7
 ,     std::shared_ptr<mintypmax_expression> i8
 ,     std::shared_ptr<mintypmax_expression> i9
 ,     std::shared_ptr<mintypmax_expression> i10
 ,     std::shared_ptr<mintypmax_expression> i11
 ,     std::shared_ptr<mintypmax_expression> i12
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
 ,     mem5(i5)
 ,     mem6(i6)
 ,     mem7(i7)
 ,     mem8(i8)
 ,     mem9(i9)
 ,     mem10(i10)
 ,     mem11(i11)
 ,     mem12(i12)
  {}
};
class T_edge_sensitive_path_declaration_parallel : public ComponentBase {
  public :
    std::shared_ptr<parallel_edge_sensitive_path_description> mem1;
    std::shared_ptr<list_of_path_delay_expressions> mem2;

  T_edge_sensitive_path_declaration_parallel( 
       std::shared_ptr<parallel_edge_sensitive_path_description> i1
 ,     std::shared_ptr<list_of_path_delay_expressions> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_edge_sensitive_path_declaration_full : public ComponentBase {
  public :
    std::shared_ptr<full_edge_sensitive_path_description> mem1;
    std::shared_ptr<list_of_path_delay_expressions> mem2;

  T_edge_sensitive_path_declaration_full( 
       std::shared_ptr<full_edge_sensitive_path_description> i1
 ,     std::shared_ptr<list_of_path_delay_expressions> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_parallel_edge_sensitive_path_description : public ComponentBase {
  public :
    std::shared_ptr<edge_identifier> mem1;
    std::shared_ptr<std::list<std::shared_ptr< specify_input_terminal_descriptor>>> mem2;
    std::shared_ptr<polarity_operator> mem3;
    std::shared_ptr<specify_output_terminal_descriptor> mem4;
    std::shared_ptr<polarity_operator> mem5;
    std::shared_ptr<expression> mem6;

  T_parallel_edge_sensitive_path_description( 
       std::shared_ptr<edge_identifier> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< specify_input_terminal_descriptor>>> i2
 ,     std::shared_ptr<polarity_operator> i3
 ,     std::shared_ptr<specify_output_terminal_descriptor> i4
 ,     std::shared_ptr<polarity_operator> i5
 ,     std::shared_ptr<expression> i6
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
 ,     mem5(i5)
 ,     mem6(i6)
  {}
};
class T_full_edge_sensitive_path_description : public ComponentBase {
  public :
    std::shared_ptr<edge_identifier> mem1;
    std::shared_ptr<std::list<std::shared_ptr< specify_input_terminal_descriptor>>> mem2;
    std::shared_ptr<polarity_operator> mem3;
    std::shared_ptr<std::list<std::shared_ptr< specify_output_terminal_descriptor>>> mem4;
    std::shared_ptr<polarity_operator> mem5;
    std::shared_ptr<expression> mem6;

  T_full_edge_sensitive_path_description( 
       std::shared_ptr<edge_identifier> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< specify_input_terminal_descriptor>>> i2
 ,     std::shared_ptr<polarity_operator> i3
 ,     std::shared_ptr<std::list<std::shared_ptr< specify_output_terminal_descriptor>>> i4
 ,     std::shared_ptr<polarity_operator> i5
 ,     std::shared_ptr<expression> i6
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
 ,     mem5(i5)
 ,     mem6(i6)
  {}
};
class T_state_dependent_path_declaration_simple : public ComponentBase {
  public :
    std::shared_ptr<module_path_expression> mem1;
    std::shared_ptr<simple_path_declaration> mem2;

  T_state_dependent_path_declaration_simple( 
       std::shared_ptr<module_path_expression> i1
 ,     std::shared_ptr<simple_path_declaration> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_state_dependent_path_declaration_edge : public ComponentBase {
  public :
    std::shared_ptr<module_path_expression> mem1;
    std::shared_ptr<edge_sensitive_path_declaration> mem2;

  T_state_dependent_path_declaration_edge( 
       std::shared_ptr<module_path_expression> i1
 ,     std::shared_ptr<edge_sensitive_path_declaration> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_state_dependent_path_declaration_ifnone : public ComponentBase {
  public :
    std::shared_ptr<simple_path_declaration> mem1;

  T_state_dependent_path_declaration_ifnone( 
       std::shared_ptr<simple_path_declaration> i1
  ):
       mem1(i1)
  {}
};
class T_concatenation : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< expression>>> mem1;

  T_concatenation( 
       std::shared_ptr<std::list<std::shared_ptr< expression>>> i1
  ):
       mem1(i1)
  {}
};
class T_module_path_multiple_concatenation : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;
    std::shared_ptr<module_path_concatenation> mem2;

  T_module_path_multiple_concatenation( 
       std::shared_ptr<expression> i1
 ,     std::shared_ptr<module_path_concatenation> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_module_path_concatenation : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< module_path_expression>>> mem1;

  T_module_path_concatenation( 
       std::shared_ptr<std::list<std::shared_ptr< module_path_expression>>> i1
  ):
       mem1(i1)
  {}
};
class T_multiple_concatenation : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;
    std::shared_ptr<concatenation> mem2;

  T_multiple_concatenation( 
       std::shared_ptr<expression> i1
 ,     std::shared_ptr<concatenation> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_function_call : public ComponentBase {
  public :
    std::shared_ptr<hierarchical_identifier> mem1;
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem2;
    std::shared_ptr<std::list<std::shared_ptr< expression>>> mem3;

  T_function_call( 
       std::shared_ptr<hierarchical_identifier> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i2
 ,     std::shared_ptr<std::list<std::shared_ptr< expression>>> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_system_function_call : public ComponentBase {
  public :
    std::shared_ptr<system_function_identifier> mem1;
    std::shared_ptr<std::list<std::shared_ptr< expression>>> mem2;

  T_system_function_call( 
       std::shared_ptr<system_function_identifier> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< expression>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_conditional_expression : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem2;
    std::shared_ptr<expression> mem3;
    std::shared_ptr<expression> mem4;

  T_conditional_expression( 
       std::shared_ptr<expression> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i2
 ,     std::shared_ptr<expression> i3
 ,     std::shared_ptr<expression> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_expression_NOSPEC : public ComponentBase {
  public :

  T_expression_NOSPEC( 
  )
  {}
};
class T_expression_prim : public ComponentBase {
  public :
    std::shared_ptr<primary> mem1;

  T_expression_prim( 
       std::shared_ptr<primary> i1
  ):
       mem1(i1)
  {}
};
class T_expression_op1 : public ComponentBase {
  public :
    std::shared_ptr<unary_operator> mem1;
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem2;
    std::shared_ptr<primary> mem3;

  T_expression_op1( 
       std::shared_ptr<unary_operator> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i2
 ,     std::shared_ptr<primary> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_expression_op2 : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;
    std::shared_ptr<binary_operator> mem2;
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem3;
    std::shared_ptr<expression> mem4;

  T_expression_op2( 
       std::shared_ptr<expression> i1
 ,     std::shared_ptr<binary_operator> i2
 ,     std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i3
 ,     std::shared_ptr<expression> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_expression_condition : public ComponentBase {
  public :
    std::shared_ptr<conditional_expression> mem1;

  T_expression_condition( 
       std::shared_ptr<conditional_expression> i1
  ):
       mem1(i1)
  {}
};
class T_mintypmax_expression_NOSPEC : public ComponentBase {
  public :

  T_mintypmax_expression_NOSPEC( 
  )
  {}
};
class T_mintypmax_expression_1 : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;

  T_mintypmax_expression_1( 
       std::shared_ptr<expression> i1
  ):
       mem1(i1)
  {}
};
class T_mintypmax_expression_3 : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;
    std::shared_ptr<expression> mem2;
    std::shared_ptr<expression> mem3;

  T_mintypmax_expression_3( 
       std::shared_ptr<expression> i1
 ,     std::shared_ptr<expression> i2
 ,     std::shared_ptr<expression> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_module_path_conditional_expression : public ComponentBase {
  public :
    std::shared_ptr<module_path_expression> mem1;
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem2;
    std::shared_ptr<module_path_expression> mem3;
    std::shared_ptr<module_path_expression> mem4;

  T_module_path_conditional_expression( 
       std::shared_ptr<module_path_expression> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i2
 ,     std::shared_ptr<module_path_expression> i3
 ,     std::shared_ptr<module_path_expression> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_module_path_expression_prim : public ComponentBase {
  public :
    std::shared_ptr<module_path_primary> mem1;

  T_module_path_expression_prim( 
       std::shared_ptr<module_path_primary> i1
  ):
       mem1(i1)
  {}
};
class T_module_path_expression_op1 : public ComponentBase {
  public :
    std::shared_ptr<unary_operator> mem1;
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem2;
    std::shared_ptr<module_path_primary> mem3;

  T_module_path_expression_op1( 
       std::shared_ptr<unary_operator> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i2
 ,     std::shared_ptr<module_path_primary> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_module_path_expression_op2 : public ComponentBase {
  public :
    std::shared_ptr<module_path_expression> mem1;
    std::shared_ptr<binary_module_path_operator> mem2;
    std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> mem3;
    std::shared_ptr<module_path_expression> mem4;

  T_module_path_expression_op2( 
       std::shared_ptr<module_path_expression> i1
 ,     std::shared_ptr<binary_module_path_operator> i2
 ,     std::shared_ptr<std::list<std::shared_ptr< attribute_instance>>> i3
 ,     std::shared_ptr<module_path_expression> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_module_path_expression_sel : public ComponentBase {
  public :
    std::shared_ptr<module_path_conditional_expression> mem1;

  T_module_path_expression_sel( 
       std::shared_ptr<module_path_conditional_expression> i1
  ):
       mem1(i1)
  {}
};
class T_module_path_mintypmax_expression_1 : public ComponentBase {
  public :
    std::shared_ptr<module_path_expression> mem1;

  T_module_path_mintypmax_expression_1( 
       std::shared_ptr<module_path_expression> i1
  ):
       mem1(i1)
  {}
};
class T_module_path_mintypmax_expression_3 : public ComponentBase {
  public :
    std::shared_ptr<module_path_expression> mem1;
    std::shared_ptr<module_path_expression> mem2;
    std::shared_ptr<module_path_expression> mem3;

  T_module_path_mintypmax_expression_3( 
       std::shared_ptr<module_path_expression> i1
 ,     std::shared_ptr<module_path_expression> i2
 ,     std::shared_ptr<module_path_expression> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_range_expression_NOSPEC : public ComponentBase {
  public :

  T_range_expression_NOSPEC( 
  )
  {}
};
class T_range_expression_1 : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;

  T_range_expression_1( 
       std::shared_ptr<expression> i1
  ):
       mem1(i1)
  {}
};
class T_range_expression_2 : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;
    std::shared_ptr<expression> mem2;

  T_range_expression_2( 
       std::shared_ptr<expression> i1
 ,     std::shared_ptr<expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_range_expression_addrange : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;
    std::shared_ptr<expression> mem2;

  T_range_expression_addrange( 
       std::shared_ptr<expression> i1
 ,     std::shared_ptr<expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_range_expression_subrange : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;
    std::shared_ptr<expression> mem2;

  T_range_expression_subrange( 
       std::shared_ptr<expression> i1
 ,     std::shared_ptr<expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_module_path_primary_num : public ComponentBase {
  public :
    std::shared_ptr<number> mem1;

  T_module_path_primary_num( 
       std::shared_ptr<number> i1
  ):
       mem1(i1)
  {}
};
class T_module_path_primary_id : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;

  T_module_path_primary_id( 
       std::shared_ptr<identifier> i1
  ):
       mem1(i1)
  {}
};
class T_module_path_primary_concat : public ComponentBase {
  public :
    std::shared_ptr<module_path_concatenation> mem1;

  T_module_path_primary_concat( 
       std::shared_ptr<module_path_concatenation> i1
  ):
       mem1(i1)
  {}
};
class T_module_path_primary_mul_concat : public ComponentBase {
  public :
    std::shared_ptr<module_path_multiple_concatenation> mem1;

  T_module_path_primary_mul_concat( 
       std::shared_ptr<module_path_multiple_concatenation> i1
  ):
       mem1(i1)
  {}
};
class T_module_path_primary_func : public ComponentBase {
  public :
    std::shared_ptr<function_call> mem1;

  T_module_path_primary_func( 
       std::shared_ptr<function_call> i1
  ):
       mem1(i1)
  {}
};
class T_module_path_primary_sysfunc : public ComponentBase {
  public :
    std::shared_ptr<system_function_call> mem1;

  T_module_path_primary_sysfunc( 
       std::shared_ptr<system_function_call> i1
  ):
       mem1(i1)
  {}
};
class T_module_path_primary_mintypmax : public ComponentBase {
  public :
    std::shared_ptr<module_path_mintypmax_expression> mem1;

  T_module_path_primary_mintypmax( 
       std::shared_ptr<module_path_mintypmax_expression> i1
  ):
       mem1(i1)
  {}
};
class T_primary_num : public ComponentBase {
  public :
    std::shared_ptr<number> mem1;

  T_primary_num( 
       std::shared_ptr<number> i1
  ):
       mem1(i1)
  {}
};
class T_primary_id : public ComponentBase {
  public :
    std::shared_ptr<hierarchical_identifier> mem1;

  T_primary_id( 
       std::shared_ptr<hierarchical_identifier> i1
  ):
       mem1(i1)
  {}
};
class T_primary_concat : public ComponentBase {
  public :
    std::shared_ptr<concatenation> mem1;

  T_primary_concat( 
       std::shared_ptr<concatenation> i1
  ):
       mem1(i1)
  {}
};
class T_primary_mulcon : public ComponentBase {
  public :
    std::shared_ptr<multiple_concatenation> mem1;

  T_primary_mulcon( 
       std::shared_ptr<multiple_concatenation> i1
  ):
       mem1(i1)
  {}
};
class T_primary_func : public ComponentBase {
  public :
    std::shared_ptr<function_call> mem1;

  T_primary_func( 
       std::shared_ptr<function_call> i1
  ):
       mem1(i1)
  {}
};
class T_primary_sysfunc : public ComponentBase {
  public :
    std::shared_ptr<system_function_call> mem1;

  T_primary_sysfunc( 
       std::shared_ptr<system_function_call> i1
  ):
       mem1(i1)
  {}
};
class T_primary_mintypmax : public ComponentBase {
  public :
    std::shared_ptr<mintypmax_expression> mem1;

  T_primary_mintypmax( 
       std::shared_ptr<mintypmax_expression> i1
  ):
       mem1(i1)
  {}
};
class T_primary_string : public ComponentBase {
  public :
    std::shared_ptr<string_typedef> mem1;

  T_primary_string( 
       std::shared_ptr<string_typedef> i1
  ):
       mem1(i1)
  {}
};
class T_net_lvalue_id : public ComponentBase {
  public :
    std::shared_ptr<hierarchical_identifier> mem1;

  T_net_lvalue_id( 
       std::shared_ptr<hierarchical_identifier> i1
  ):
       mem1(i1)
  {}
};
class T_net_lvalue_idexp : public ComponentBase {
  public :
    std::shared_ptr<hierarchical_identifier> mem1;
    std::shared_ptr<std::list<std::shared_ptr< expression>>> mem2;
    std::shared_ptr<range_expression> mem3;

  T_net_lvalue_idexp( 
       std::shared_ptr<hierarchical_identifier> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< expression>>> i2
 ,     std::shared_ptr<range_expression> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_net_lvalue_lvlist : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< net_lvalue>>> mem1;

  T_net_lvalue_lvlist( 
       std::shared_ptr<std::list<std::shared_ptr< net_lvalue>>> i1
  ):
       mem1(i1)
  {}
};
class T_delay_value_UNSIGNED_NUMBER : public ComponentBase {
  public :
    int mem1;

  T_delay_value_UNSIGNED_NUMBER( 
       int i1
  ):
       mem1(i1)
  {}
};
class T_delay_value_REAL_NUMBER : public ComponentBase {
  public :
    std::string mem1;

  T_delay_value_REAL_NUMBER( 
       std::string i1
  ):
       mem1(i1)
  {}
};
class T_delay_value_id : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;

  T_delay_value_id( 
       std::shared_ptr<identifier> i1
  ):
       mem1(i1)
  {}
};
class T_attribute_instance : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< attr_spec>>> mem1;

  T_attribute_instance( 
       std::shared_ptr<std::list<std::shared_ptr< attr_spec>>> i1
  ):
       mem1(i1)
  {}
};
class T_attr_spec : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<expression> mem2;

  T_attr_spec( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_hierarchical_identifier : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< identifier_lsq_expression_rsq>>> mem1;

  T_hierarchical_identifier( 
       std::shared_ptr<std::list<std::shared_ptr< identifier_lsq_expression_rsq>>> i1
  ):
       mem1(i1)
  {}
};
class T_identifier_lsq_expression_rsq : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<std::list<std::shared_ptr< range_expression>>> mem2;

  T_identifier_lsq_expression_rsq( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<std::list<std::shared_ptr< range_expression>>> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_polarity_operator_NOSPEC : public ComponentBase {
  public :

  T_polarity_operator_NOSPEC( 
  )
  {}
};
class T_polarity_operator_ADD : public ComponentBase {
  public :

  T_polarity_operator_ADD( 
  )
  {}
};
class T_polarity_operator_SUB : public ComponentBase {
  public :

  T_polarity_operator_SUB( 
  )
  {}
};
class T_system_timing_check_dollor_setup_timing_check : public ComponentBase {
  public :
    std::shared_ptr<dollor_setup_timing_check> mem1;

  T_system_timing_check_dollor_setup_timing_check( 
       std::shared_ptr<dollor_setup_timing_check> i1
  ):
       mem1(i1)
  {}
};
class T_system_timing_check_dollor_hold_timing_check : public ComponentBase {
  public :
    std::shared_ptr<dollor_hold_timing_check> mem1;

  T_system_timing_check_dollor_hold_timing_check( 
       std::shared_ptr<dollor_hold_timing_check> i1
  ):
       mem1(i1)
  {}
};
class T_system_timing_check_dollor_setuphold_timing_check : public ComponentBase {
  public :
    std::shared_ptr<dollor_setuphold_timing_check> mem1;

  T_system_timing_check_dollor_setuphold_timing_check( 
       std::shared_ptr<dollor_setuphold_timing_check> i1
  ):
       mem1(i1)
  {}
};
class T_system_timing_check_dollor_recovery_timing_check : public ComponentBase {
  public :
    std::shared_ptr<dollor_recovery_timing_check> mem1;

  T_system_timing_check_dollor_recovery_timing_check( 
       std::shared_ptr<dollor_recovery_timing_check> i1
  ):
       mem1(i1)
  {}
};
class T_system_timing_check_dollor_removal_timing_check : public ComponentBase {
  public :
    std::shared_ptr<dollor_removal_timing_check> mem1;

  T_system_timing_check_dollor_removal_timing_check( 
       std::shared_ptr<dollor_removal_timing_check> i1
  ):
       mem1(i1)
  {}
};
class T_system_timing_check_dollor_recrem_timing_check : public ComponentBase {
  public :
    std::shared_ptr<dollor_recrem_timing_check> mem1;

  T_system_timing_check_dollor_recrem_timing_check( 
       std::shared_ptr<dollor_recrem_timing_check> i1
  ):
       mem1(i1)
  {}
};
class T_system_timing_check_dollor_skew_timing_check : public ComponentBase {
  public :
    std::shared_ptr<dollor_skew_timing_check> mem1;

  T_system_timing_check_dollor_skew_timing_check( 
       std::shared_ptr<dollor_skew_timing_check> i1
  ):
       mem1(i1)
  {}
};
class T_system_timing_check_dollor_timeskew_timing_check : public ComponentBase {
  public :
    std::shared_ptr<dollor_timeskew_timing_check> mem1;

  T_system_timing_check_dollor_timeskew_timing_check( 
       std::shared_ptr<dollor_timeskew_timing_check> i1
  ):
       mem1(i1)
  {}
};
class T_system_timing_check_dollor_fullskew_timing_check : public ComponentBase {
  public :
    std::shared_ptr<dollor_fullskew_timing_check> mem1;

  T_system_timing_check_dollor_fullskew_timing_check( 
       std::shared_ptr<dollor_fullskew_timing_check> i1
  ):
       mem1(i1)
  {}
};
class T_system_timing_check_dollor_period_timing_check : public ComponentBase {
  public :
    std::shared_ptr<dollor_period_timing_check> mem1;

  T_system_timing_check_dollor_period_timing_check( 
       std::shared_ptr<dollor_period_timing_check> i1
  ):
       mem1(i1)
  {}
};
class T_system_timing_check_dollor_width_timing_check : public ComponentBase {
  public :
    std::shared_ptr<dollor_width_timing_check> mem1;

  T_system_timing_check_dollor_width_timing_check( 
       std::shared_ptr<dollor_width_timing_check> i1
  ):
       mem1(i1)
  {}
};
class T_system_timing_check_dollor_nochange_timing_check : public ComponentBase {
  public :
    std::shared_ptr<dollor_nochange_timing_check> mem1;

  T_system_timing_check_dollor_nochange_timing_check( 
       std::shared_ptr<dollor_nochange_timing_check> i1
  ):
       mem1(i1)
  {}
};
class T_dollor_setup_timing_check : public ComponentBase {
  public :
    std::shared_ptr<data_event> mem1;
    std::shared_ptr<reference_event> mem2;
    std::shared_ptr<timing_check_limit> mem3;
    std::shared_ptr<notifier> mem4;

  T_dollor_setup_timing_check( 
       std::shared_ptr<data_event> i1
 ,     std::shared_ptr<reference_event> i2
 ,     std::shared_ptr<timing_check_limit> i3
 ,     std::shared_ptr<notifier> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_dollor_hold_timing_check : public ComponentBase {
  public :
    std::shared_ptr<reference_event> mem1;
    std::shared_ptr<data_event> mem2;
    std::shared_ptr<timing_check_limit> mem3;
    std::shared_ptr<notifier> mem4;

  T_dollor_hold_timing_check( 
       std::shared_ptr<reference_event> i1
 ,     std::shared_ptr<data_event> i2
 ,     std::shared_ptr<timing_check_limit> i3
 ,     std::shared_ptr<notifier> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_dollor_setuphold_timing_check : public ComponentBase {
  public :
    std::shared_ptr<reference_event> mem1;
    std::shared_ptr<data_event> mem2;
    std::shared_ptr<timing_check_limit> mem3;
    std::shared_ptr<timing_check_limit> mem4;
    std::shared_ptr<notifier> mem5;
    std::shared_ptr<stamptime_condition> mem6;
    std::shared_ptr<checktime_condition> mem7;
    std::shared_ptr<delayed_reference> mem8;
    std::shared_ptr<delayed_data> mem9;

  T_dollor_setuphold_timing_check( 
       std::shared_ptr<reference_event> i1
 ,     std::shared_ptr<data_event> i2
 ,     std::shared_ptr<timing_check_limit> i3
 ,     std::shared_ptr<timing_check_limit> i4
 ,     std::shared_ptr<notifier> i5
 ,     std::shared_ptr<stamptime_condition> i6
 ,     std::shared_ptr<checktime_condition> i7
 ,     std::shared_ptr<delayed_reference> i8
 ,     std::shared_ptr<delayed_data> i9
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
 ,     mem5(i5)
 ,     mem6(i6)
 ,     mem7(i7)
 ,     mem8(i8)
 ,     mem9(i9)
  {}
};
class T_dollor_recovery_timing_check : public ComponentBase {
  public :
    std::shared_ptr<reference_event> mem1;
    std::shared_ptr<data_event> mem2;
    std::shared_ptr<timing_check_limit> mem3;
    std::shared_ptr<notifier> mem4;

  T_dollor_recovery_timing_check( 
       std::shared_ptr<reference_event> i1
 ,     std::shared_ptr<data_event> i2
 ,     std::shared_ptr<timing_check_limit> i3
 ,     std::shared_ptr<notifier> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_dollor_removal_timing_check : public ComponentBase {
  public :
    std::shared_ptr<reference_event> mem1;
    std::shared_ptr<data_event> mem2;
    std::shared_ptr<timing_check_limit> mem3;
    std::shared_ptr<notifier> mem4;

  T_dollor_removal_timing_check( 
       std::shared_ptr<reference_event> i1
 ,     std::shared_ptr<data_event> i2
 ,     std::shared_ptr<timing_check_limit> i3
 ,     std::shared_ptr<notifier> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_dollor_recrem_timing_check : public ComponentBase {
  public :
    std::shared_ptr<reference_event> mem1;
    std::shared_ptr<data_event> mem2;
    std::shared_ptr<timing_check_limit> mem3;
    std::shared_ptr<timing_check_limit> mem4;
    std::shared_ptr<notifier> mem5;
    std::shared_ptr<stamptime_condition> mem6;
    std::shared_ptr<checktime_condition> mem7;
    std::shared_ptr<delayed_reference> mem8;
    std::shared_ptr<delayed_data> mem9;

  T_dollor_recrem_timing_check( 
       std::shared_ptr<reference_event> i1
 ,     std::shared_ptr<data_event> i2
 ,     std::shared_ptr<timing_check_limit> i3
 ,     std::shared_ptr<timing_check_limit> i4
 ,     std::shared_ptr<notifier> i5
 ,     std::shared_ptr<stamptime_condition> i6
 ,     std::shared_ptr<checktime_condition> i7
 ,     std::shared_ptr<delayed_reference> i8
 ,     std::shared_ptr<delayed_data> i9
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
 ,     mem5(i5)
 ,     mem6(i6)
 ,     mem7(i7)
 ,     mem8(i8)
 ,     mem9(i9)
  {}
};
class T_dollor_skew_timing_check : public ComponentBase {
  public :
    std::shared_ptr<reference_event> mem1;
    std::shared_ptr<data_event> mem2;
    std::shared_ptr<timing_check_limit> mem3;
    std::shared_ptr<notifier> mem4;

  T_dollor_skew_timing_check( 
       std::shared_ptr<reference_event> i1
 ,     std::shared_ptr<data_event> i2
 ,     std::shared_ptr<timing_check_limit> i3
 ,     std::shared_ptr<notifier> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_dollor_timeskew_timing_check : public ComponentBase {
  public :
    std::shared_ptr<reference_event> mem1;
    std::shared_ptr<data_event> mem2;
    std::shared_ptr<timing_check_limit> mem3;
    std::shared_ptr<notifier> mem4;
    std::shared_ptr<event_based_flag> mem5;
    std::shared_ptr<remain_active_flag> mem6;

  T_dollor_timeskew_timing_check( 
       std::shared_ptr<reference_event> i1
 ,     std::shared_ptr<data_event> i2
 ,     std::shared_ptr<timing_check_limit> i3
 ,     std::shared_ptr<notifier> i4
 ,     std::shared_ptr<event_based_flag> i5
 ,     std::shared_ptr<remain_active_flag> i6
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
 ,     mem5(i5)
 ,     mem6(i6)
  {}
};
class T_dollor_fullskew_timing_check : public ComponentBase {
  public :
    std::shared_ptr<reference_event> mem1;
    std::shared_ptr<data_event> mem2;
    std::shared_ptr<timing_check_limit> mem3;
    std::shared_ptr<timing_check_limit> mem4;
    std::shared_ptr<notifier> mem5;
    std::shared_ptr<event_based_flag> mem6;
    std::shared_ptr<remain_active_flag> mem7;

  T_dollor_fullskew_timing_check( 
       std::shared_ptr<reference_event> i1
 ,     std::shared_ptr<data_event> i2
 ,     std::shared_ptr<timing_check_limit> i3
 ,     std::shared_ptr<timing_check_limit> i4
 ,     std::shared_ptr<notifier> i5
 ,     std::shared_ptr<event_based_flag> i6
 ,     std::shared_ptr<remain_active_flag> i7
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
 ,     mem5(i5)
 ,     mem6(i6)
 ,     mem7(i7)
  {}
};
class T_dollor_period_timing_check : public ComponentBase {
  public :
    std::shared_ptr<reference_event> mem1;
    std::shared_ptr<data_event> mem2;
    std::shared_ptr<timing_check_limit> mem3;
    std::shared_ptr<timing_check_limit> mem4;
    std::shared_ptr<notifier> mem5;
    std::shared_ptr<event_based_flag> mem6;
    std::shared_ptr<remain_active_flag> mem7;

  T_dollor_period_timing_check( 
       std::shared_ptr<reference_event> i1
 ,     std::shared_ptr<data_event> i2
 ,     std::shared_ptr<timing_check_limit> i3
 ,     std::shared_ptr<timing_check_limit> i4
 ,     std::shared_ptr<notifier> i5
 ,     std::shared_ptr<event_based_flag> i6
 ,     std::shared_ptr<remain_active_flag> i7
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
 ,     mem5(i5)
 ,     mem6(i6)
 ,     mem7(i7)
  {}
};
class T_dollor_width_timing_check : public ComponentBase {
  public :
    std::shared_ptr<controlled_reference_event> mem1;
    std::shared_ptr<timing_check_limit> mem2;
    std::shared_ptr<threshold> mem3;
    std::shared_ptr<notifier> mem4;

  T_dollor_width_timing_check( 
       std::shared_ptr<controlled_reference_event> i1
 ,     std::shared_ptr<timing_check_limit> i2
 ,     std::shared_ptr<threshold> i3
 ,     std::shared_ptr<notifier> i4
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
  {}
};
class T_dollor_nochange_timing_check : public ComponentBase {
  public :
    std::shared_ptr<reference_event> mem1;
    std::shared_ptr<data_event> mem2;
    std::shared_ptr<start_edge_offset> mem3;
    std::shared_ptr<end_edge_offset> mem4;
    std::shared_ptr<notifier> mem5;

  T_dollor_nochange_timing_check( 
       std::shared_ptr<reference_event> i1
 ,     std::shared_ptr<data_event> i2
 ,     std::shared_ptr<start_edge_offset> i3
 ,     std::shared_ptr<end_edge_offset> i4
 ,     std::shared_ptr<notifier> i5
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
 ,     mem5(i5)
  {}
};
class T_checktime_condition_NOSPEC : public ComponentBase {
  public :

  T_checktime_condition_NOSPEC( 
  )
  {}
};
class T_checktime_condition : public ComponentBase {
  public :
    std::shared_ptr<mintypmax_expression> mem1;

  T_checktime_condition( 
       std::shared_ptr<mintypmax_expression> i1
  ):
       mem1(i1)
  {}
};
class T_controlled_reference_event : public ComponentBase {
  public :
    std::shared_ptr<controlled_timing_check_event> mem1;

  T_controlled_reference_event( 
       std::shared_ptr<controlled_timing_check_event> i1
  ):
       mem1(i1)
  {}
};
class T_data_event : public ComponentBase {
  public :
    std::shared_ptr<timing_check_event> mem1;

  T_data_event( 
       std::shared_ptr<timing_check_event> i1
  ):
       mem1(i1)
  {}
};
class T_delayed_reference_NOSPEC : public ComponentBase {
  public :

  T_delayed_reference_NOSPEC( 
  )
  {}
};
class T_delayed_reference_id : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;

  T_delayed_reference_id( 
       std::shared_ptr<identifier> i1
  ):
       mem1(i1)
  {}
};
class T_delayed_reference_idmtmexp : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<mintypmax_expression> mem2;

  T_delayed_reference_idmtmexp( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<mintypmax_expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_end_edge_offset : public ComponentBase {
  public :
    std::shared_ptr<mintypmax_expression> mem1;

  T_end_edge_offset( 
       std::shared_ptr<mintypmax_expression> i1
  ):
       mem1(i1)
  {}
};
class T_event_based_flag : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;

  T_event_based_flag( 
       std::shared_ptr<expression> i1
  ):
       mem1(i1)
  {}
};
class T_event_based_flag_NOSPEC : public ComponentBase {
  public :

  T_event_based_flag_NOSPEC( 
  )
  {}
};
class T_notifier_NOSPEC : public ComponentBase {
  public :

  T_notifier_NOSPEC( 
  )
  {}
};
class T_notifier : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;

  T_notifier( 
       std::shared_ptr<identifier> i1
  ):
       mem1(i1)
  {}
};
class T_reference_event : public ComponentBase {
  public :
    std::shared_ptr<timing_check_event> mem1;

  T_reference_event( 
       std::shared_ptr<timing_check_event> i1
  ):
       mem1(i1)
  {}
};
class T_remain_active_flag : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;

  T_remain_active_flag( 
       std::shared_ptr<expression> i1
  ):
       mem1(i1)
  {}
};
class T_stamptime_condition : public ComponentBase {
  public :
    std::shared_ptr<mintypmax_expression> mem1;

  T_stamptime_condition( 
       std::shared_ptr<mintypmax_expression> i1
  ):
       mem1(i1)
  {}
};
class T_start_edge_offset : public ComponentBase {
  public :
    std::shared_ptr<mintypmax_expression> mem1;

  T_start_edge_offset( 
       std::shared_ptr<mintypmax_expression> i1
  ):
       mem1(i1)
  {}
};
class T_threshold : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;

  T_threshold( 
       std::shared_ptr<expression> i1
  ):
       mem1(i1)
  {}
};
class T_timing_check_limit : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;

  T_timing_check_limit( 
       std::shared_ptr<expression> i1
  ):
       mem1(i1)
  {}
};
class T_timing_check_event : public ComponentBase {
  public :
    std::shared_ptr<timing_check_event_control> mem1;
    std::shared_ptr<specify_terminal_descriptor> mem2;
    std::shared_ptr<timing_check_condition> mem3;

  T_timing_check_event( 
       std::shared_ptr<timing_check_event_control> i1
 ,     std::shared_ptr<specify_terminal_descriptor> i2
 ,     std::shared_ptr<timing_check_condition> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_controlled_timing_check_event : public ComponentBase {
  public :
    std::shared_ptr<timing_check_event_control> mem1;
    std::shared_ptr<specify_terminal_descriptor> mem2;
    std::shared_ptr<timing_check_condition> mem3;

  T_controlled_timing_check_event( 
       std::shared_ptr<timing_check_event_control> i1
 ,     std::shared_ptr<specify_terminal_descriptor> i2
 ,     std::shared_ptr<timing_check_condition> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_timing_check_event_control_NOSPEC : public ComponentBase {
  public :

  T_timing_check_event_control_NOSPEC( 
  )
  {}
};
class T_timing_check_event_control_POSEDGE : public ComponentBase {
  public :

  T_timing_check_event_control_POSEDGE( 
  )
  {}
};
class T_timing_check_event_control_NEGEDGE : public ComponentBase {
  public :

  T_timing_check_event_control_NEGEDGE( 
  )
  {}
};
class T_timing_check_event_control_edge_control_specifier : public ComponentBase {
  public :
    std::shared_ptr<edge_control_specifier> mem1;

  T_timing_check_event_control_edge_control_specifier( 
       std::shared_ptr<edge_control_specifier> i1
  ):
       mem1(i1)
  {}
};
class T_specify_terminal_descriptor_in : public ComponentBase {
  public :
    std::shared_ptr<specify_input_terminal_descriptor> mem1;

  T_specify_terminal_descriptor_in( 
       std::shared_ptr<specify_input_terminal_descriptor> i1
  ):
       mem1(i1)
  {}
};
class T_specify_terminal_descriptor_out : public ComponentBase {
  public :
    std::shared_ptr<specify_output_terminal_descriptor> mem1;

  T_specify_terminal_descriptor_out( 
       std::shared_ptr<specify_output_terminal_descriptor> i1
  ):
       mem1(i1)
  {}
};
class T_edge_control_specifier : public ComponentBase {
  public :
    std::shared_ptr<std::list<std::shared_ptr< edge_descriptor>>> mem1;

  T_edge_control_specifier( 
       std::shared_ptr<std::list<std::shared_ptr< edge_descriptor>>> i1
  ):
       mem1(i1)
  {}
};
class T_edge_descriptor_01 : public ComponentBase {
  public :

  T_edge_descriptor_01( 
  )
  {}
};
class T_edge_descriptor_10 : public ComponentBase {
  public :

  T_edge_descriptor_10( 
  )
  {}
};
class T_edge_descriptor_zx01 : public ComponentBase {
  public :
    std::shared_ptr<z_or_x> mem1;
    std::shared_ptr<zero_or_one> mem2;

  T_edge_descriptor_zx01( 
       std::shared_ptr<z_or_x> i1
 ,     std::shared_ptr<zero_or_one> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_edge_descriptor_01zx : public ComponentBase {
  public :
    std::shared_ptr<zero_or_one> mem1;
    std::shared_ptr<z_or_x> mem2;

  T_edge_descriptor_01zx( 
       std::shared_ptr<zero_or_one> i1
 ,     std::shared_ptr<z_or_x> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_zero_or_one_0 : public ComponentBase {
  public :

  T_zero_or_one_0( 
  )
  {}
};
class T_zero_or_one_1 : public ComponentBase {
  public :

  T_zero_or_one_1( 
  )
  {}
};
class T_z_or_x__x : public ComponentBase {
  public :

  T_z_or_x__x( 
  )
  {}
};
class T_z_or_x__X : public ComponentBase {
  public :

  T_z_or_x__X( 
  )
  {}
};
class T_z_or_x__z : public ComponentBase {
  public :

  T_z_or_x__z( 
  )
  {}
};
class T_z_or_x__Z : public ComponentBase {
  public :

  T_z_or_x__Z( 
  )
  {}
};
class T_timing_check_condition_NOSPEC : public ComponentBase {
  public :

  T_timing_check_condition_NOSPEC( 
  )
  {}
};
class T_timing_check_condition : public ComponentBase {
  public :
    std::shared_ptr<scalar_timing_check_condition> mem1;

  T_timing_check_condition( 
       std::shared_ptr<scalar_timing_check_condition> i1
  ):
       mem1(i1)
  {}
};
class T_scalar_timing_check_condition_exp : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;

  T_scalar_timing_check_condition_exp( 
       std::shared_ptr<expression> i1
  ):
       mem1(i1)
  {}
};
class T_scalar_timing_check_condition_Negexp : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;

  T_scalar_timing_check_condition_Negexp( 
       std::shared_ptr<expression> i1
  ):
       mem1(i1)
  {}
};
class T_scalar_timing_check_condition_eq2 : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;
    std::shared_ptr<expression> mem2;

  T_scalar_timing_check_condition_eq2( 
       std::shared_ptr<expression> i1
 ,     std::shared_ptr<expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_scalar_timing_check_condition_eq3 : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;
    std::shared_ptr<expression> mem2;

  T_scalar_timing_check_condition_eq3( 
       std::shared_ptr<expression> i1
 ,     std::shared_ptr<expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_scalar_timing_check_condition_neq2 : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;
    std::shared_ptr<expression> mem2;

  T_scalar_timing_check_condition_neq2( 
       std::shared_ptr<expression> i1
 ,     std::shared_ptr<expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_scalar_timing_check_condition_neq3 : public ComponentBase {
  public :
    std::shared_ptr<expression> mem1;
    std::shared_ptr<expression> mem2;

  T_scalar_timing_check_condition_neq3( 
       std::shared_ptr<expression> i1
 ,     std::shared_ptr<expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_scalar_constant_unsigned : public ComponentBase {
  public :
    int mem1;

  T_scalar_constant_unsigned( 
       int i1
  ):
       mem1(i1)
  {}
};
class T_scalar_constant_binary : public ComponentBase {
  public :
    int mem1;
    std::string mem2;
    std::string mem3;

  T_scalar_constant_binary( 
       int i1
 ,     std::string i2
 ,     std::string i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_delayed_data_NOSPEC : public ComponentBase {
  public :

  T_delayed_data_NOSPEC( 
  )
  {}
};
class T_delayed_data_id : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;

  T_delayed_data_id( 
       std::shared_ptr<identifier> i1
  ):
       mem1(i1)
  {}
};
class T_delayed_data_idmtmexp : public ComponentBase {
  public :
    std::shared_ptr<identifier> mem1;
    std::shared_ptr<mintypmax_expression> mem2;

  T_delayed_data_idmtmexp( 
       std::shared_ptr<identifier> i1
 ,     std::shared_ptr<mintypmax_expression> i2
  ):
       mem1(i1)
 ,     mem2(i2)
  {}
};
class T_edge_identifier_NOSPEC : public ComponentBase {
  public :

  T_edge_identifier_NOSPEC( 
  )
  {}
};
class T_edge_identifier_POS : public ComponentBase {
  public :

  T_edge_identifier_POS( 
  )
  {}
};
class T_edge_identifier_NEG : public ComponentBase {
  public :

  T_edge_identifier_NEG( 
  )
  {}
};
class T_unary_operator_LOGIC_NEG : public ComponentBase {
  public :

  T_unary_operator_LOGIC_NEG( 
  )
  {}
};
class T_unary_operator_BITWISE_NEG : public ComponentBase {
  public :

  T_unary_operator_BITWISE_NEG( 
  )
  {}
};
class T_unary_operator_REDUCE_NOR : public ComponentBase {
  public :

  T_unary_operator_REDUCE_NOR( 
  )
  {}
};
class T_unary_operator_REDUCE_NAND : public ComponentBase {
  public :

  T_unary_operator_REDUCE_NAND( 
  )
  {}
};
class T_unary_operator_ADD : public ComponentBase {
  public :

  T_unary_operator_ADD( 
  )
  {}
};
class T_unary_operator_SUB : public ComponentBase {
  public :

  T_unary_operator_SUB( 
  )
  {}
};
class T_unary_operator_REDUCE_AND : public ComponentBase {
  public :

  T_unary_operator_REDUCE_AND( 
  )
  {}
};
class T_unary_operator_REDUCE_OR : public ComponentBase {
  public :

  T_unary_operator_REDUCE_OR( 
  )
  {}
};
class T_unary_operator_REDUCE_XOR : public ComponentBase {
  public :

  T_unary_operator_REDUCE_XOR( 
  )
  {}
};
class T_unary_operator_REDUCE_XNOR : public ComponentBase {
  public :

  T_unary_operator_REDUCE_XNOR( 
  )
  {}
};
class T_binary_operator_MUL : public ComponentBase {
  public :

  T_binary_operator_MUL( 
  )
  {}
};
class T_binary_operator_DIV : public ComponentBase {
  public :

  T_binary_operator_DIV( 
  )
  {}
};
class T_binary_operator_MOD : public ComponentBase {
  public :

  T_binary_operator_MOD( 
  )
  {}
};
class T_binary_operator_EQU2 : public ComponentBase {
  public :

  T_binary_operator_EQU2( 
  )
  {}
};
class T_binary_operator_NEQ2 : public ComponentBase {
  public :

  T_binary_operator_NEQ2( 
  )
  {}
};
class T_binary_operator_EQU3 : public ComponentBase {
  public :

  T_binary_operator_EQU3( 
  )
  {}
};
class T_binary_operator_NEQ3 : public ComponentBase {
  public :

  T_binary_operator_NEQ3( 
  )
  {}
};
class T_binary_operator_POWER : public ComponentBase {
  public :

  T_binary_operator_POWER( 
  )
  {}
};
class T_binary_operator_LT : public ComponentBase {
  public :

  T_binary_operator_LT( 
  )
  {}
};
class T_binary_operator_LE : public ComponentBase {
  public :

  T_binary_operator_LE( 
  )
  {}
};
class T_binary_operator_GT : public ComponentBase {
  public :

  T_binary_operator_GT( 
  )
  {}
};
class T_binary_operator_GE : public ComponentBase {
  public :

  T_binary_operator_GE( 
  )
  {}
};
class T_binary_operator_LOGICAL_RIGHTSHIFT : public ComponentBase {
  public :

  T_binary_operator_LOGICAL_RIGHTSHIFT( 
  )
  {}
};
class T_binary_operator_LOGICAL_LEFTSHIFT : public ComponentBase {
  public :

  T_binary_operator_LOGICAL_LEFTSHIFT( 
  )
  {}
};
class T_binary_operator_ARITHMETIC_RIGHTSHIFT : public ComponentBase {
  public :

  T_binary_operator_ARITHMETIC_RIGHTSHIFT( 
  )
  {}
};
class T_binary_operator_ARITHMETIC_LEFTSHIFT : public ComponentBase {
  public :

  T_binary_operator_ARITHMETIC_LEFTSHIFT( 
  )
  {}
};
class T_binary_operator_ADD : public ComponentBase {
  public :

  T_binary_operator_ADD( 
  )
  {}
};
class T_binary_operator_SUB : public ComponentBase {
  public :

  T_binary_operator_SUB( 
  )
  {}
};
class T_binary_operator_AND : public ComponentBase {
  public :

  T_binary_operator_AND( 
  )
  {}
};
class T_binary_operator_OR : public ComponentBase {
  public :

  T_binary_operator_OR( 
  )
  {}
};
class T_binary_operator_AND2 : public ComponentBase {
  public :

  T_binary_operator_AND2( 
  )
  {}
};
class T_binary_operator_OR2 : public ComponentBase {
  public :

  T_binary_operator_OR2( 
  )
  {}
};
class T_binary_operator_XOR : public ComponentBase {
  public :

  T_binary_operator_XOR( 
  )
  {}
};
class T_binary_operator_XNOR : public ComponentBase {
  public :

  T_binary_operator_XNOR( 
  )
  {}
};
class T_binary_operator_1 : public ComponentBase {
  public :
    std::shared_ptr<binary_operator1> mem1;

  T_binary_operator_1( 
       std::shared_ptr<binary_operator1> i1
  ):
       mem1(i1)
  {}
};
class T_binary_operator_2 : public ComponentBase {
  public :
    std::shared_ptr<binary_operator2> mem1;

  T_binary_operator_2( 
       std::shared_ptr<binary_operator2> i1
  ):
       mem1(i1)
  {}
};
class T_unary_module_path_operator_GANTANHAO : public ComponentBase {
  public :

  T_unary_module_path_operator_GANTANHAO( 
  )
  {}
};
class T_unary_module_path_operator_BOLANGHAO : public ComponentBase {
  public :

  T_unary_module_path_operator_BOLANGHAO( 
  )
  {}
};
class T_unary_module_path_operator_AND : public ComponentBase {
  public :

  T_unary_module_path_operator_AND( 
  )
  {}
};
class T_unary_module_path_operator_NAND : public ComponentBase {
  public :

  T_unary_module_path_operator_NAND( 
  )
  {}
};
class T_unary_module_path_operator_OR : public ComponentBase {
  public :

  T_unary_module_path_operator_OR( 
  )
  {}
};
class T_unary_module_path_operator_NOR : public ComponentBase {
  public :

  T_unary_module_path_operator_NOR( 
  )
  {}
};
class T_unary_module_path_operator_XOR : public ComponentBase {
  public :

  T_unary_module_path_operator_XOR( 
  )
  {}
};
class T_unary_module_path_operator_XNOR : public ComponentBase {
  public :

  T_unary_module_path_operator_XNOR( 
  )
  {}
};
class T_binary_module_path_operator_EQU2 : public ComponentBase {
  public :

  T_binary_module_path_operator_EQU2( 
  )
  {}
};
class T_binary_module_path_operator_NEQ2 : public ComponentBase {
  public :

  T_binary_module_path_operator_NEQ2( 
  )
  {}
};
class T_binary_module_path_operator_AND2 : public ComponentBase {
  public :

  T_binary_module_path_operator_AND2( 
  )
  {}
};
class T_binary_module_path_operator_OR2 : public ComponentBase {
  public :

  T_binary_module_path_operator_OR2( 
  )
  {}
};
class T_binary_module_path_operator_AND1 : public ComponentBase {
  public :

  T_binary_module_path_operator_AND1( 
  )
  {}
};
class T_binary_module_path_operator_OR1 : public ComponentBase {
  public :

  T_binary_module_path_operator_OR1( 
  )
  {}
};
class T_binary_module_path_operator_XOR : public ComponentBase {
  public :

  T_binary_module_path_operator_XOR( 
  )
  {}
};
class T_binary_module_path_operator_XNOR : public ComponentBase {
  public :

  T_binary_module_path_operator_XNOR( 
  )
  {}
};
class T_level_symbol_0 : public ComponentBase {
  public :

  T_level_symbol_0( 
  )
  {}
};
class T_level_symbol_1 : public ComponentBase {
  public :

  T_level_symbol_1( 
  )
  {}
};
class T_level_symbol_x : public ComponentBase {
  public :

  T_level_symbol_x( 
  )
  {}
};
class T_level_symbol_X : public ComponentBase {
  public :

  T_level_symbol_X( 
  )
  {}
};
class T_level_symbol_QUESTION : public ComponentBase {
  public :

  T_level_symbol_QUESTION( 
  )
  {}
};
class T_level_symbol_b : public ComponentBase {
  public :

  T_level_symbol_b( 
  )
  {}
};
class T_level_symbol_B : public ComponentBase {
  public :

  T_level_symbol_B( 
  )
  {}
};
class T_level_symbol_SUB : public ComponentBase {
  public :

  T_level_symbol_SUB( 
  )
  {}
};
class T_output_symbol_UNSIGNED_NUMBER : public ComponentBase {
  public :
    int mem1;

  T_output_symbol_UNSIGNED_NUMBER( 
       int i1
  ):
       mem1(i1)
  {}
};
class T_output_symbol_SIMID : public ComponentBase {
  public :
    std::string mem1;

  T_output_symbol_SIMID( 
       std::string i1
  ):
       mem1(i1)
  {}
};
class T_number_UNSIGNED_NUMBER : public ComponentBase {
  public :
    int mem1;

  T_number_UNSIGNED_NUMBER( 
       int i1
  ):
       mem1(i1)
  {}
};
class T_number_UNSIGNED_NUMBER_size : public ComponentBase {
  public :
    int mem1;
    std::string mem2;
    std::string mem3;

  T_number_UNSIGNED_NUMBER_size( 
       int i1
 ,     std::string i2
 ,     std::string i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_number_OCTAL_NUMBER : public ComponentBase {
  public :
    int mem1;
    std::string mem2;
    std::string mem3;

  T_number_OCTAL_NUMBER( 
       int i1
 ,     std::string i2
 ,     std::string i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_number_BINARY_NUMBER : public ComponentBase {
  public :
    int mem1;
    std::string mem2;
    std::string mem3;

  T_number_BINARY_NUMBER( 
       int i1
 ,     std::string i2
 ,     std::string i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_number_HEX_NUMBER : public ComponentBase {
  public :
    int mem1;
    std::string mem2;
    std::string mem3;

  T_number_HEX_NUMBER( 
       int i1
 ,     std::string i2
 ,     std::string i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_number_REAL_NUMBER : public ComponentBase {
  public :
    std::string mem1;

  T_number_REAL_NUMBER( 
       std::string i1
  ):
       mem1(i1)
  {}
};
class T_next_state_UNSIGNED_NUMBER : public ComponentBase {
  public :
    int mem1;

  T_next_state_UNSIGNED_NUMBER( 
       int i1
  ):
       mem1(i1)
  {}
};
class T_next_state_SIMID : public ComponentBase {
  public :
    std::string mem1;

  T_next_state_SIMID( 
       std::string i1
  ):
       mem1(i1)
  {}
};
class T_next_state_SUB : public ComponentBase {
  public :

  T_next_state_SUB( 
  )
  {}
};
class T_edge_symbol_r : public ComponentBase {
  public :

  T_edge_symbol_r( 
  )
  {}
};
class T_edge_symbol_R : public ComponentBase {
  public :

  T_edge_symbol_R( 
  )
  {}
};
class T_edge_symbol_f : public ComponentBase {
  public :

  T_edge_symbol_f( 
  )
  {}
};
class T_edge_symbol_F : public ComponentBase {
  public :

  T_edge_symbol_F( 
  )
  {}
};
class T_edge_symbol_p : public ComponentBase {
  public :

  T_edge_symbol_p( 
  )
  {}
};
class T_edge_symbol_P : public ComponentBase {
  public :

  T_edge_symbol_P( 
  )
  {}
};
class T_edge_symbol_n : public ComponentBase {
  public :

  T_edge_symbol_n( 
  )
  {}
};
class T_edge_symbol_N : public ComponentBase {
  public :

  T_edge_symbol_N( 
  )
  {}
};
class T_string : public ComponentBase {
  public :
    std::string mem1;

  T_string( 
       std::string i1
  ):
       mem1(i1)
  {}
};
class T_system_function_identifier : public ComponentBase {
  public :
    std::string mem1;

  T_system_function_identifier( 
       std::string i1
  ):
       mem1(i1)
  {}
};
class T_io_declaration_net : public ComponentBase {
  public :
    std::shared_ptr<io_type> mem1;
    std::shared_ptr<netreg_type> mem2;
    std::shared_ptr<signedType> mem3;
    std::shared_ptr<range> mem4;
    std::shared_ptr<port_identifier_equ1_expression_opt> mem5;

  T_io_declaration_net( 
       std::shared_ptr<io_type> i1
 ,     std::shared_ptr<netreg_type> i2
 ,     std::shared_ptr<signedType> i3
 ,     std::shared_ptr<range> i4
 ,     std::shared_ptr<port_identifier_equ1_expression_opt> i5
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
 ,     mem5(i5)
  {}
};
class T_netreg_type__NOSPEC : public ComponentBase {
  public :

  T_netreg_type__NOSPEC( 
  )
  {}
};
class T_netreg_type__KEY_SUPPLY0 : public ComponentBase {
  public :

  T_netreg_type__KEY_SUPPLY0( 
  )
  {}
};
class T_netreg_type__KEY_SUPPLY1 : public ComponentBase {
  public :

  T_netreg_type__KEY_SUPPLY1( 
  )
  {}
};
class T_netreg_type__KEY_TRI : public ComponentBase {
  public :

  T_netreg_type__KEY_TRI( 
  )
  {}
};
class T_netreg_type__KEY_TRIAND : public ComponentBase {
  public :

  T_netreg_type__KEY_TRIAND( 
  )
  {}
};
class T_netreg_type__KEY_TRIOR : public ComponentBase {
  public :

  T_netreg_type__KEY_TRIOR( 
  )
  {}
};
class T_netreg_type__KEY_TRI0 : public ComponentBase {
  public :

  T_netreg_type__KEY_TRI0( 
  )
  {}
};
class T_netreg_type__KEY_TRI1 : public ComponentBase {
  public :

  T_netreg_type__KEY_TRI1( 
  )
  {}
};
class T_netreg_type__KEY_UWIRE : public ComponentBase {
  public :

  T_netreg_type__KEY_UWIRE( 
  )
  {}
};
class T_netreg_type__KEY_WIRE : public ComponentBase {
  public :

  T_netreg_type__KEY_WIRE( 
  )
  {}
};
class T_netreg_type__KEY_WAND : public ComponentBase {
  public :

  T_netreg_type__KEY_WAND( 
  )
  {}
};
class T_netreg_type__KEY_WOR : public ComponentBase {
  public :

  T_netreg_type__KEY_WOR( 
  )
  {}
};
class T_netreg_type__KEY_REG : public ComponentBase {
  public :

  T_netreg_type__KEY_REG( 
  )
  {}
};
class T_netreg_type__KEY_INTEGER : public ComponentBase {
  public :

  T_netreg_type__KEY_INTEGER( 
  )
  {}
};
class T_netreg_type__KEY_TIME : public ComponentBase {
  public :

  T_netreg_type__KEY_TIME( 
  )
  {}
};
class T_statement_or_block_item_statement : public ComponentBase {
  public :
    std::shared_ptr<statement> mem1;

  T_statement_or_block_item_statement( 
       std::shared_ptr<statement> i1
  ):
       mem1(i1)
  {}
};
class T_statement_or_block_item_block : public ComponentBase {
  public :
    std::shared_ptr<block_item_declaration> mem1;

  T_statement_or_block_item_block( 
       std::shared_ptr<block_item_declaration> i1
  ):
       mem1(i1)
  {}
};
class T_tf_io_declaration_gen1 : public ComponentBase {
  public :
    std::shared_ptr<io_type> mem1;
    std::shared_ptr<reg> mem2;
    std::shared_ptr<signedType> mem3;
    std::shared_ptr<range> mem4;
    std::shared_ptr<identifier> mem5;

  T_tf_io_declaration_gen1( 
       std::shared_ptr<io_type> i1
 ,     std::shared_ptr<reg> i2
 ,     std::shared_ptr<signedType> i3
 ,     std::shared_ptr<range> i4
 ,     std::shared_ptr<identifier> i5
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
 ,     mem4(i4)
 ,     mem5(i5)
  {}
};
class T_tf_io_declaration_gen2 : public ComponentBase {
  public :
    std::shared_ptr<io_type> mem1;
    std::shared_ptr<task_port_type> mem2;
    std::shared_ptr<identifier> mem3;

  T_tf_io_declaration_gen2( 
       std::shared_ptr<io_type> i1
 ,     std::shared_ptr<task_port_type> i2
 ,     std::shared_ptr<identifier> i3
  ):
       mem1(i1)
 ,     mem2(i2)
 ,     mem3(i3)
  {}
};
class T_io_type_NOSPEC : public ComponentBase {
  public :

  T_io_type_NOSPEC( 
  )
  {}
};
class T_io_type_output : public ComponentBase {
  public :

  T_io_type_output( 
  )
  {}
};
class T_io_type_input : public ComponentBase {
  public :

  T_io_type_input( 
  )
  {}
};
class T_io_type_inout : public ComponentBase {
  public :

  T_io_type_inout( 
  )
  {}
};
class T_reg_false : public ComponentBase {
  public :

  T_reg_false( 
  )
  {}
};
class T_reg_true : public ComponentBase {
  public :

  T_reg_true( 
  )
  {}
};
class T_identifier_NOSPEC : public ComponentBase {
  public :

  T_identifier_NOSPEC( 
  )
  {}
};
class T_identifier : public ComponentBase {
  public :
    std::string mem1;

  T_identifier( 
       std::string i1
  ):
       mem1(i1)
  {}
};
class T_colon_config_opt_FALSE : public ComponentBase {
  public :

  T_colon_config_opt_FALSE( 
  )
  {}
};
class T_colon_config_opt_TRUE : public ComponentBase {
  public :

  T_colon_config_opt_TRUE( 
  )
  {}
};
class T_signed_FALSE : public ComponentBase {
  public :

  T_signed_FALSE( 
  )
  {}
};
class T_signed_TRUE : public ComponentBase {
  public :

  T_signed_TRUE( 
  )
  {}
};
}
