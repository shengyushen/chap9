type description =
	T_description__module_declaration of module_declaration
	| T_description__udp_declaration of udp_declaration
	| T_description__config_declaration of config_declaration
and module_declaration =
	T_module_declaration__1 of (attribute_instance list)*identifier*(parameter_declaration list)*(port list)*(module_item list)
	T_module_declaration__2 of (attribute_instance list)*identifier*(parameter_declaration list)*(port_declaration list)*(module_item list)
and port =
	T_port_named of identifier*port_expression
	| T_port_unnamed of port_expression
and port_expression =
	T_port_expression of (port_reference list)
and	port_reference =
	T_port_reference of identifier*range_expression
and port_declaration =
	T_port_declaration__inout_declaration of (attribute_instance list)*inout_declaration
	| T_port_declaration__input_declaration of (attribute_instance list)*input_declaration
	| T_port_declaration__output_declaration of (attribute_instance list)*output_declaration
and module_item = 
	T_module_item__1 of module_item1
	| T_module_item__2 of module_item2
and module_item1 =
	T_module_item__port_declaration of port_declaration
	| T_module_item__generate_region of generate_region
	| T_module_item__specify_block of specify_block
	| T_module_item__parameter_declaration of (attribute_instance list)*parameter_declaration
	| T_module_item__specparam_declaration of (attribute_instance list)*specparam_declaration
	| T_module_item__net_declaration of (attribute_instance list)*net_declaration
	| T_module_item__reg_declaration of (attribute_instance list)*reg_declaration
	| T_module_item__integer_declaration of (attribute_instance list)*integer_declaration
	| T_module_item__real_declaration of (attribute_instance list)*real_declaration
	| T_module_item__time_declaration of (attribute_instance list)*time_declaration
	| T_module_item__realtime_declaration of (attribute_instance list)*realtime_declaration
	| T_module_item__event_declaration of (attribute_instance list)*event_declaration
and module_item2 =
	T_module_item__genvar_declaration of (attribute_instance list)*genvar_declaration
	| T_module_item__task_declaration of (attribute_instance list)*task_declaration
	| T_module_item__function_declaration of (attribute_instance list)*function_declaration
	| T_module_item__local_parameter_declaration of (attribute_instance list)*local_parameter_declaration
	| T_module_item__parameter_override of (attribute_instance list)*(defparam_assignment list)
	| T_module_item__continuous_assign of (attribute_instance list)*continuous_assign
	| T_module_item__gate_instantiation of (attribute_instance list)*gate_instantiation
	| T_module_item__udp_instantiation of (attribute_instance list)*udp_instantiation
	| T_module_item__module_instantiation of (attribute_instance list)*module_instantiation
	| T_module_item__initial_construct of (attribute_instance list)*initial_construct
	| T_module_item__always_construct of (attribute_instance list)*always_construct
	| T_module_item__loop_generate_construct of (attribute_instance list)*loop_generate_construct
	| T_module_item__conditional_generate_construct of (attribute_instance list)*conditional_generate_construct
and config_declaration =
	T_config_declaration of identifier*design_statement*(config_rule_statement list)
and design_statement =
	T_design_statement of (library_identifier_period_opt_cell_identifier list)
and library_identifier_period_opt_cell_identifier =
	T_lib_cell_identifier of identifier*identifier
and config_rule_statement =
	T_config_rule_statement__default of (identifier list) 
	| T_config_rule_statement__inst_lib of (identifier list)*(identifier list)
	| T_config_rule_statement__inst_use of (identifier list)*use_clause
	| T_config_rule_statement__cell_lib of library_identifier_period_opt_cell_identifier*(identifier list)
	| T_config_rule_statement__cell_use of library_identifier_period_opt_cell_identifier*use_clause
and use_clause =
	T_use_clause of library_identifier_period_opt_cell_identifier*colon_config_opt
and local_parameter_declaration =
	T_local_parameter_declaration_1 of signedType*range*(param_assignment list)
	| T_local_parameter_declaration_2 of parameter_type*(param_assignment list)
and parameter_declaration =
	T_parameter_declaration_1 of signedType*range*(param_assignment list)
	| T_parameter_declaration_2 of parameter_type*(param_assignment list)
and specparam_declaration =
	T_specparam_declaration of range*(specparam_assignment list)
and parameter_type =
	T_parameter_type__NOSPEC
	| T_parameter_type__INTEGER
	| T_parameter_type__REAL
	| T_parameter_type__REALTIME
	| T_parameter_type__TIME
and inout_declaration =
	T_inout_declaration of net_type*signedType*range*(identifier list)
and input_declaration =
	T_input_declaration of net_type*signedType*range*(identifier list)
and output_declaration =
	T_output_declaration_net of net_type*signedType*range*(identifier list)
	| T_output_declaration_reg of signedType*range*(port_identifier_equ1_expression_opt list)
	| T_output_declaration_var of output_variable_type*(port_identifier_equ1_expression_opt list)
and	output_variable_type =
	T_output_variable_type_INTEGER
	| T_output_variable_type_TIME
and event_declaration =
	T_event_declaration of (event_identifier_dimension_list list)
and integer_declaration =
	T_integer_declaration of (variable_type list)
and net_declaration =
	T_net_declaration_net_type1 of net_type*signedType*delay3*(net_identifier_dimension_list list)
	| T_net_declaration_net_type2 of net_type*drive_strength*signedType*delay3*(net_decl_assignment list)
	| T_net_declaration_net_type3 of net_type*drive_strength*vectored_scalared*signedType*range*delay3*(net_identifier_dimension_list list)
	| T_net_declaration_net_type4 of net_type*drive_strength*vectored_scalared*signedType*range*delay3*(net_decl_assignment list)
	| T_net_declaration_trireg_1 of charge_strength*signedType*delay3*(net_identifier_dimension_list list)
	| T_net_declaration_trireg_2 of drive_strength*signedType*delay3*(net_decl_assignment list)
	| T_net_declaration_trireg_3 of charge_strength*vectored_scalared*signedType*range*delay3
	| T_net_declaration_trireg_4 of drive_strength*vectored_scalared*signedType*range*delay3*(net_decl_assignment list)
and vectored_scalared =
	T_vectored_scalared_NOSPEC
	| T_vectored_scalared_vectored
	| T_vectored_scalared_scalared
and real_declaration =
	T_real_declaration of (real_type list)
and realtime_declaration =
	T_realtime_declaration of (real_type list)
and reg_declaration =
	T_reg_declaration of signedType*range*(variable_type list)
and time_declaration =
	T_time_declaration of (variable_type list)
and net_type =
	T_net_type_NOSPEC
	| T_net_type__KEY_SUPPLY0
	| T_net_type__KEY_SUPPLY1
	| T_net_type__KEY_TRI
	| T_net_type__KEY_TRIAND
	| T_net_type__KEY_TRIOR
	| T_net_type__KEY_TRI0
	| T_net_type__KEY_TRI1
	| T_net_type__KEY_UWIRE
	| T_net_type__KEY_WIRE
	| T_net_type__KEY_WAND
	| T_net_type__KEY_WOR
and real_type =
	T_real_type_noass of identifier*(dimension list)
	| T_real_type_ass of identifier*expression
and	variable_type =
	T_variable_type_noass of identifier*(dimension list)
	| T_variable_type_ass of identifier*expression
and strength =
	KEY_HIGHZ0
	| KEY_HIGHZ1
	| KEY_SUPPLY0	
	| KEY_STRONG0	
	| KEY_PULL0		
	| KEY_WEAK0 
	|	KEY_SUPPLY1	
	| KEY_STRONG1	
	| KEY_PULL1		
	| KEY_WEAK1 
and drive_strength =
	T_drive_strength_NOSPEC
	| T_drive_strength of strength*strength
and charge_strength =
	T_charge_strength_NOSPEC
	| T_charge_strength__small
	| T_charge_strength__medium
	| T_charge_strength__large
and delay3 =
	T_delay3_NOSPEC
	| T_delay3_1 of delay_value
	| T_delay3_minmax1 of mintypmax_expression
	| T_delay3_minmax2 of mintypmax_expression*mintypmax_expression
	| T_delay3_minmax3 of mintypmax_expression*mintypmax_expression*mintypmax_expression
and delay2 =
	T_delay2_NOSPEC
	| T_delay2_1 of delay_value
	| T_delay2_minmax1 of mintypmax_expression
	| T_delay2_minmax2 of mintypmax_expression*mintypmax_expression
and event_identifier_dimension_list =
	T_event_identifier_dimension_list of identifier*(dimension list)
and net_identifier_dimension_list =
	T_net_identifier_dimension_list of identifier*(dimension list)
and port_identifier_equ1_expression_opt =
	T_port_identifier_equ1_expression_opt of identifier*expression
and defparam_assignment =
	T_defparam_assignment of hierarchical_identifier*mintypmax_expression
and net_decl_assignment =
	T_net_decl_assignment of identifier*expression
and param_assignment =
	T_param_assignment of identifier*mintypmax_expression
and specparam_assignment =
	T_specparam_assignment of identifier*mintypmax_expression
	| T_specparam_assignment_pulse1 of mintypmax_expression*mintypmax_expression
	| T_specparam_assignment_pulse2 of specify_inout_terminal_descriptor*specify_inout_terminal_descriptor*mintypmax_expression*mintypmax_expression
and  dimension =
	T_dimension of expression*expression
and range =
	T_range_NOSPEC
	| T_range of expression*expression
and automatic =
	T_automatic_false
	| T_automatic_true
and function_declaration =
	T_function_declaration_1 of automatic*function_range_or_type*identifier*(function_item_declaration list)*statement
	| T_function_declaration_2 of automatic*function_range_or_type*identifier*(attribute_instance_list_tf_input_declaration list)*(function_item_declaration list)*statement
and function_item_declaration =
	T_function_item_declaration_block of block_item_declaration
	| T_function_item_declaration_input of (attribute_instance list)*tf_input_declaration
and attribute_instance_list_tf_input_declaration =
	T_attribute_instance_list_tf_input_declaration of (attribute_instance list)*tf_io_declaration_gen
and function_range_or_type =
	T_function_range_or_type_NOSPEC
	| T_function_range_or_type of signedType*range
	| T_function_range_or_type_INTEGER
	| T_function_range_or_type_REAL
	| T_function_range_or_type_REALTIME
	| T_function_range_or_type_TIME
and task_declaration =
	T_task_declaration1 of automatic*identifier*(task_item_declaration list)*statement
	| T_task_declaration2 of automatic*identifier*(task_port_item list)*(task_item_declaration list)*statement
and task_item_declaration =
	T_task_item_declaration_block of block_item_declaration
	| T_task_item_declaration_input of  (attribute_instance list)*tf_input_declaration
	| T_task_item_declaration_output of (attribute_instance list)*tf_output_declaration
	| T_task_item_declaration_inout of  (attribute_instance list)*tf_inout_declaration
and task_port_item =
	T_task_port_item_input of (attribute_instance list)*tf_io_declaration_gen
and tf_input_declaration =
	T_tf_input_declaration_reg of reg*signedType*range*(identifier list)
	| T_tf_input_declaration_type of task_port_type*(identifier list)
and tf_output_declaration =
	T_tf_output_declaration_reg of reg*signedType*range*(identifier list)
	| T_tf_output_declaration_type of task_port_type*(identifier list)
and tf_inout_declaration =
	T_tf_inout_declaration_reg of reg*signedType*range*(identifier list)
	| T_tf_inout_declaration_type of task_port_type*(identifier list)
and task_port_type =
	T_task_port_type_integer
	| T_task_port_type_real
	| T_task_port_type_realtime
	| T_task_port_type_time
and block_item_declaration =
	T_block_item_declaration_reg of (attribute_instance list)*signedType*range*(block_variable_type list)
	| T_block_item_declaration_integer of (attribute_instance list)*(block_variable_type list)
	| T_block_item_declaration_time of (attribute_instance list)*(block_variable_type list)
	| T_block_item_declaration_real of (attribute_instance list)*(block_real_type list)
	| T_block_item_declaration_realtime of (attribute_instance list)*(block_real_type list)
	| T_block_item_declaration_event of (attribute_instance list)*event_declaration
	| T_block_item_declaration_local_param of (attribute_instance list)*local_parameter_declaration
	| T_block_item_declaration_param of (attribute_instance list)*parameter_declaration
and block_variable_type =
	T_block_variable_type of identifier*(dimension list)
and block_real_type =
	T_block_real_type of identifier*(dimension list)
and gate_instantiation =
	T_gate_instantiation_cmos of cmos_switchtype*delay3*(cmos_switch_instance list)
	| T_gate_instantiation_enable of enable_gatetype*drive_strength*delay3*(enable_gate_instance list)
	| T_gate_instantiation_mos of mos_switchtype*delay3*(mos_switch_instance list)
	| T_gate_instantiation_input of n_input_gatetype*drive_strength*delay2*(n_input_gate_instance list)
	| T_gate_instantiation_output of n_output_gatetype*drive_strength*delay2*(n_output_gate_instance list)
	| T_gate_instantiation_pass_en of pass_en_switchtype*delay2*(pass_enable_switch_instance list)
	| T_gate_instantiation_pass of pass_switchtype*(pass_switch_instance list)
	| T_gate_instantiation_pulldown of pulldown_strength*(pull_gate_instance list)
	| T_gate_instantiation_pullup of pullup_strength*(pull_gate_instance list)
and cmos_switch_instance =
	T_cmos_switch_instance of name_of_gate_instance*expression*expression*expression*expression
and enable_gate_instance =
	T_enable_gate_instance of name_of_gate_instance*expression*expression*expression
and mos_switch_instance =
	T_mos_switch_instance of name_of_gate_instance*expression*expression*expression
and n_input_gate_instance =
	T_n_input_gate_instance of name_of_gate_instance*expression*expression*(expression list)
and n_output_gate_instance =
	T_n_output_gate_instance of name_of_gate_instance*expression*(expression list)*expression
and pass_switch_instance =
	T_pass_switch_instance of name_of_gate_instance*expression*expression
and pass_enable_switch_instance =
	T_pass_enable_switch_instance of name_of_gate_instance*expression*expression*expression
and pull_gate_instance =
	T_pull_gate_instance of name_of_gate_instance*expression
and name_of_gate_instance =
	T_name_of_gate_instance_NOSPEC
	| T_name_of_gate_instance of identifier*range
and pulldown_strength =
	T_pulldown_strength_NOSPEC
	| T_pulldown_strength01 of strength*strength
	| T_pulldown_strength10 of strength*strength
	| T_pulldown_strength0 of strength
and pullup_strength =
	T_pullup_strength_NOSPEC
	| T_pullup_strength01 of strength*strength
	| T_pullup_strength10 of strength*strength
	| T_pullup_strength1 of strength
and cmos_switchtype =
	T_cmos_switchtype_CMOS
	| T_cmos_switchtype_RCMOS
and enable_gatetype =
		T_enable_gatetype__BUFIF0
	| T_enable_gatetype__BUFIF1
	| T_enable_gatetype__NOTIF0
	| T_enable_gatetype__NOTIF1
and mos_switchtype =
		T_mos_switchtype_NMOS 	
	| T_mos_switchtype_PMOS 
	| T_mos_switchtype_RNMOS 
	| T_mos_switchtype_RPMOS
and n_input_gatetype =
   	T_n_input_gatetype_AND   
	| T_n_input_gatetype_NAND
	| T_n_input_gatetype_OR  
	| T_n_input_gatetype_NOR 
	| T_n_input_gatetype_XOR 
	| T_n_input_gatetype_XNOR 
and n_output_gatetype =
	T_n_output_gatetype_BUF
	| T_n_output_gatetype_NOT
and pass_en_switchtype =
	  T_pass_en_switchtype_TRANIF0  
	| T_pass_en_switchtype_TRANIF1    
	| T_pass_en_switchtype_RTRANIF1  
	| T_pass_en_switchtype_RTRANIF0 
and pass_switchtype =
	  T_pass_switchtype_TRAN  
	| T_pass_switchtype_RTRAN 
and module_instantiation =
	T_module_instantiation of identifier*drive_strength*parameter_value_assignment*(module_instance list)
and	module_instance =
	T_module_instance of name_of_module_instance*list_of_port_connections
and name_of_module_instance =
	T_name_of_module_instance_NOSPEC
	| T_name_of_module_instance of identifier*range
and parameter_value_assignment =
	T_parameter_value_assignment_NOSPEC
	| T_parameter_value_assignment_order of (mintypmax_expression list)
	| T_parameter_value_assignment_named of (named_parameter_assignment list)
and named_parameter_assignment =
	T_named_parameter_assignment of identifier*mintypmax_expression
and list_of_port_connections =
	T_list_of_port_connections_ordered of (ordered_port_connection list)
	| T_list_of_port_connections_named of (named_port_connection list)
and ordered_port_connection =
	T_ordered_port_connection of (attribute_instance list)*expression
and named_port_connection =
	T_named_port_connection of (attribute_instance list)*identifier*expression
and generate_region =
	T_generate_region of (module_item list)
and genvar_declaration =
	T_genvar_declaration of (identifier list)
and loop_generate_construct =
	T_loop_generate_construct of genvar_initialization*expression*genvar_iteration*generate_block
and	genvar_initialization =
	T_genvar_initialization of identifier*expression
and	genvar_iteration =
	T_genvar_iteration of identifier*expression
and conditional_generate_construct =
	T_conditional_generate_construct_if of if_generate_construct
	| T_conditional_generate_construct_case of case_generate_construct
and case_generate_construct =
	T_case_generate_construct of expression*(case_generate_item list)
and	case_generate_item =
	T_case_generate_item_case of (expression list)*generate_block
	| T_case_generate_item_default of generate_block
and	if_generate_construct =
	T_if_generate_construct of expression*generate_block*generate_block
and	generate_block =
	T_generate_block_NOSPEC
	| T_generate_block_mgi of module_item 
	| T_generate_block_begin of identifier*(module_item list)
and	udp_declaration =
	T_udp_declaration_1 of (attribute_instance list)*identifier*udp_port_list*(udp_port_declaration list)*udp_body
	| T_udp_declaration_2 of (attribute_instance list)*identifier*udp_declaration_port_list*udp_body
and	udp_port_list =
	T_udp_port_list of identifier*(identifier list)
and	udp_declaration_port_list =
	T_udp_declaration_port_list of udp_output_declaration*(udp_input_declaration_sigular list)
and	udp_port_declaration =
	T_udp_port_declaration_out of udp_output_declaration
	| T_udp_port_declaration_input of udp_input_declaration
	| T_udp_port_declaration_reg of udp_reg_declaration
and	udp_output_declaration =
	T_udp_output_declaration_output of (attribute_instance list)*identifier
	| T_udp_output_declaration_reg of (attribute_instance list)*identifier*expression
and udp_input_declaration_sigular = 
	T_udp_input_declaration_singular of (attribute_instance list)*int*identifier
and	udp_input_declaration =
	T_udp_input_declaration of (attribute_instance list)*(identifier list)
and	udp_reg_declaration =
	T_udp_reg_declaration of (attribute_instance list)*identifier
and	udp_body =
	T_udp_body_comb of (combinational_entry list)
	| T_udp_body_seq of sequential_body
and	combinational_entry =
	T_combinational_entry of (level_symbol list)*output_symbol
and sequential_body =
	T_sequential_body of udp_initial_statement*(sequential_entry list)
and	udp_initial_statement =
	T_udp_initial_statement_NOSPEC
	| T_udp_initial_statement of identifier*init_val
and init_val =
	T_init_val_bin of int*string
	| T_init_val_unsigned of int
and	sequential_entry =
	T_sequential_entry of seq_input_list*level_symbol*level_symbol
	| T_sequential_entry_comb of seq_input_list*level_symbol
and	seq_input_list =
	T_seq_input_list_level of level_symbol list
	| T_seq_input_list_edge of edge_input_list
and	edge_input_list =
	T_edge_input_list of (level_symbol list)*edge_indicator*(level_symbol list)
and	edge_indicator =
	T_edge_indicator_level of level_symbol*level_symbol
	| T_edge_indicator_edge of edge_symbol
and	udp_instantiation =
	T_udp_instantiation of identifier*drive_strength*delay2*(udp_instance list)
and udp_instance =
	T_udp_instance of name_of_udp_instance*expression*(expression list)
and	name_of_udp_instance =
	T_name_of_udp_instance_NOSPEC
	| T_name_of_udp_instance of identifier*range
and continuous_assign =
	T_continuous_assign of drive_strength*delay3*(net_assignment list)
and	net_assignment =
	T_net_assignment of net_lvalue*expression
and	initial_construct =
	T_initial_construct of statement
and	always_construct =
	T_always_construct of statement
and blocking_assignment =
	T_blocking_assignment of net_lvalue*delay_or_event_control*expression
and	nonblocking_assignment =
	T_nonblocking_assignment of net_lvalue*delay_or_event_control*expression
and	procedural_continuous_assignments =
	T_procedural_continuous_assignments_assign of net_assignment
	| T_procedural_continuous_assignments_deassign of net_lvalue
	| T_procedural_continuous_assignments_force1 of net_assignment
	| T_procedural_continuous_assignments_force2 of net_assignment
	| T_procedural_continuous_assignments_release1 of net_lvalue
	| T_procedural_continuous_assignments_release2 of net_lvalue
and	par_block =
	T_par_block of colon_block_identifier*(statement_or_block_item list)
and colon_block_identifier =
	T_colon_block_identifier_NOSPEC
	| T_colon_block_identifier of identifier
and	seq_block =
	T_seq_block of colon_block_identifier*(statement_or_block_item list)
and statement =
	T_statement_NOSPEC of (attribute_instance list)
	| T_statement_blocking_assignment of (attribute_instance list)*blocking_assignment
	| T_statement_case_statement of (attribute_instance list)*case_statement
	| T_statement_conditional_statement of  (attribute_instance list)*conditional_statement
	| T_statement_disable_statement of (attribute_instance list)*disable_statement
	| T_statement_event_trigger of (attribute_instance list)*event_trigger
	| T_statement_loop_statement of (attribute_instance list)*loop_statement
	| T_statement_nonblocking_assignment of (attribute_instance list)*nonblocking_assignment
	| T_statement_par_block of (attribute_instance list)*par_block
	| T_statement_procedural_continuous_assignments of  (attribute_instance list)*procedural_continuous_assignments
	| T_statement_procedural_timing_control_statement of (attribute_instance list)*procedural_timing_control_statement
	| T_statement_seq_block of (attribute_instance list)*seq_block
	| T_statement_system_task_enable of  (attribute_instance list)*system_task_enable
	| T_statement_task_enable of (attribute_instance list)*task_enable
	| T_statement_wait_statement of (attribute_instance list)*wait_statement
and	delay_control =
	T_delay_control_delay_value of delay_value
	| T_delay_control_mintypmax_expression of mintypmax_expression
and	delay_or_event_control =
	T_delay_or_event_control_NOSPEC
	| T_delay_or_event_control_delay_control of delay_control
	| T_delay_or_event_control_event_control of event_control
	| T_delay_or_event_control_3 of expression*event_control
and disable_statement =
	T_disable_statement of hierarchical_identifier
and	event_control =
	T_event_control_eventid of hierarchical_identifier
	| T_event_control_event_exp of (event_expression list)
	| T_event_control_start
and	event_trigger =
	T_event_trigger of hierarchical_identifier
and	event_expression =
	T_event_expression_exp of expression
	| T_event_expression_pos of expression
	| T_event_expression_neg of expression
	| T_event_expression_or of event_expression*event_expression
and	procedural_timing_control =
	T_procedural_timing_control_delay of delay_control
	| T_procedural_timing_control_event of event_control
and	procedural_timing_control_statement =
	T_procedural_timing_control_statement of procedural_timing_control*statement
and wait_statement =
	T_wait_statement of expression*statement
and	conditional_statement =
	T_conditional_statement_ifelse of expression*statement*statement
	| T_conditional_statement_ifelseif of expression*statement*(else_if_lp_expression_rp_statement_or_null list)*statement
and	else_if_lp_expression_rp_statement_or_null =
	T_elseif of expression*statement
and case_statement =
	T_case_statement_case of expression*(case_item list)
	| T_case_statement_casez of expression*(case_item list)
	| T_case_statement_casex of expression*(case_item list)
and case_item =
	T_case_item of (expression list)*statement
	| T_case_item_default of colon_opt*statement
and colon_opt = 
	T_colon_opt_false
	| T_colon_opt_true
and	loop_statement =
	T_loop_statement_forever of statement
	| T_loop_statement_repeat of expression*statement
	| T_loop_statement_while of expression*statement
	| T_loop_statement_for of net_assignment*expression*net_assignment*statement
and	system_task_enable =
	T_system_task_enable of  system_function_identifier*(expression list)
and	task_enable =
	T_task_enable of hierarchical_identifier*(expression list)
and specify_block =
	T_specify_block of (specify_item list)
and	specify_item =
	T_specify_item_specparam of specparam_declaration
	| T_specify_item_pulsestyle of pulsestyle_declaration
	| T_specify_item_showcancelled of showcancelled_declaration
	| T_specify_item_path of path_declaration
	| T_specify_item_system of system_timing_check
and pulsestyle_declaration =
	T_pulsestyle_declaration_oneevent of (specify_inout_terminal_descriptor list)
	| T_pulsestyle_declaration_onedetect of (specify_inout_terminal_descriptor list)
and	showcancelled_declaration =
	T_showcancelled_declaration_show of (specify_inout_terminal_descriptor list)
	| T_showcancelled_declaration_noshow of (specify_inout_terminal_descriptor list)
and	path_declaration =
	T_path_declaration_simple of simple_path_declaration
	| T_path_declaration_edge of edge_sensitive_path_declaration 
	| T_path_declaration_state of state_dependent_path_declaration
and	simple_path_declaration =
	T_simple_path_declaration_parallel of parallel_path_description*list_of_path_delay_expressions
	| T_simple_path_declaration_full of full_path_description*list_of_path_delay_expressions
and	parallel_path_description =
	T_parallel_path_description of edge_identifier*(specify_inout_terminal_descriptor list)*polarity_operator*specify_inout_terminal_descriptor
and	full_path_description =
	T_full_path_description of edge_identifier*(specify_inout_terminal_descriptor list)*polarity_operator*(specify_inout_terminal_descriptor list)
and	specify_inout_terminal_descriptor =
	T_specify_inout_terminal_descriptor of identifier*range_expression
and	list_of_path_delay_expressions =
	T_list_of_mintypmax_expressions_1 of mintypmax_expression
	| T_list_of_mintypmax_expressions_2 of mintypmax_expression*mintypmax_expression
	| T_list_of_mintypmax_expressions_3 of mintypmax_expression*mintypmax_expression*mintypmax_expression
	| T_list_of_mintypmax_expressions_6 of mintypmax_expression*mintypmax_expression*mintypmax_expression*mintypmax_expression*mintypmax_expression*mintypmax_expression
	| T_list_of_mintypmax_expressions_12 of mintypmax_expression*mintypmax_expression*mintypmax_expression*mintypmax_expression*mintypmax_expression*mintypmax_expression*mintypmax_expression*mintypmax_expression*mintypmax_expression*mintypmax_expression*mintypmax_expression*mintypmax_expression
and	edge_sensitive_path_declaration =
	T_edge_sensitive_path_declaration_parallel of parallel_edge_sensitive_path_description*list_of_path_delay_expressions
	| T_edge_sensitive_path_declaration_full of full_edge_sensitive_path_description*list_of_path_delay_expressions
and	parallel_edge_sensitive_path_description =
	T_parallel_edge_sensitive_path_description of edge_identifier*(specify_inout_terminal_descriptor list)*polarity_operator*specify_inout_terminal_descriptor*polarity_operator*expression
and	full_edge_sensitive_path_description =
	T_full_edge_sensitive_path_description of edge_identifier*(specify_inout_terminal_descriptor list)*polarity_operator*(specify_inout_terminal_descriptor list)*polarity_operator*expression
and	state_dependent_path_declaration =
	T_state_dependent_path_declaration_simple of module_path_expression*simple_path_declaration
	| T_state_dependent_path_declaration_edge of module_path_expression*edge_sensitive_path_declaration
	| T_state_dependent_path_declaration_ifnone of simple_path_declaration
and	concatenation =
	T_concatenation of expression list
and	module_path_multiple_concatenation =
	T_module_path_multiple_concatenation of expression*module_path_concatenation
and module_path_concatenation =
	T_module_path_concatenation of module_path_expression list
and	multiple_concatenation =
	T_multiple_concatenation of expression*concatenation
and	function_call =
	T_function_call of hierarchical_identifier*(attribute_instance list)*(expression list)
and	system_function_call =
	T_system_function_call of system_function_identifier*(expression list)
and	conditional_expression =
	T_conditional_expression of expression*(attribute_instance list)*expression*expression
and	expression =
	T_expression_NOSPEC
	| T_expression_prim of primary
	| T_expression_op1 of unary_operator*(attribute_instance list)*primary
	| T_expression_op2 of expression*binary_operator*(attribute_instance list)*expression
	|	T_expression_condition of conditional_expression
and	mintypmax_expression =
	T_mintypmax_expression_NOSPEC
	| T_mintypmax_expression_1 of expression
	| T_mintypmax_expression_3 of expression*expression*expression
and	module_path_conditional_expression =
	T_module_path_conditional_expression of module_path_expression*(attribute_instance list)*module_path_expression*module_path_expression
and	module_path_expression =
	T_module_path_expression_prim of module_path_primary
	| T_module_path_expression_op1 of unary_operator*(attribute_instance list)*module_path_primary
	|	T_module_path_expression_op2 of module_path_expression*binary_module_path_operator*(attribute_instance list)*module_path_expression
	|	T_module_path_expression_sel of module_path_conditional_expression
and	module_path_mintypmax_expression =
	T_module_path_mintypmax_expression_1 of module_path_expression
	| T_module_path_mintypmax_expression_3 of module_path_expression*module_path_expression*module_path_expression
and	range_expression =
	T_range_expression_NOSPEC
	| T_range_expression_1 of expression
	| T_range_expression_2 of expression*expression
	|	T_range_expression_addrange of expression*expression
	| T_range_expression_subrange of expression*expression
and	module_path_primary =
	T_module_path_primary_num of number
	| T_module_path_primary_id of identifier
	| T_module_path_primary_concat of module_path_concatenation
	| T_module_path_primary_mul_concat of module_path_multiple_concatenation
	| T_module_path_primary_func of function_call
	| T_module_path_primary_sysfunc of system_function_call
	| T_module_path_primary_mintypmax of module_path_mintypmax_expression
and	primary =
	T_primary_num of number
	| T_primary_id of hierarchical_identifier
	| T_primary_concat of concatenation
	| T_primary_mulcon of multiple_concatenation
	| T_primary_func of function_call
	| T_primary_sysfunc of system_function_call
	| T_primary_mintypmax of mintypmax_expression
	| T_primary_string of string_typedef
and	net_lvalue =
	T_net_lvalue_id of hierarchical_identifier
	| T_net_lvalue_idexp of hierarchical_identifier*(expression list)*range_expression
	| T_net_lvalue_lvlist of (net_lvalue list)
and	delay_value =
	T_delay_value_UNSIGNED_NUMBER of int
	| T_delay_value_REAL_NUMBER of  string
	| T_delay_value_id of identifier
and	attribute_instance =
	T_attribute_instance of (attr_spec list)
and	attr_spec =
	T_attr_spec of identifier*expression
and	hierarchical_identifier =
	T_hierarchical_identifier of (identifier_lsq_expression_rsq list)
and	identifier_lsq_expression_rsq =
	T_identifier_lsq_expression_rsq of identifier*(range_expression list)
and polarity_operator =
	T_polarity_operator_NOSPEC
	| T_polarity_operator_ADD
	| T_polarity_operator_SUB
and system_timing_check =
	  T_system_timing_check_dollor_setup_timing_check      of dollor_setup_timing_check   
	| T_system_timing_check_dollor_hold_timing_check       of dollor_hold_timing_check
	| T_system_timing_check_dollor_setuphold_timing_check  of dollor_setuphold_timing_check
	| T_system_timing_check_dollor_recovery_timing_check   of dollor_recovery_timing_check
	| T_system_timing_check_dollor_removal_timing_check    of dollor_removal_timing_check
	| T_system_timing_check_dollor_recrem_timing_check     of dollor_recrem_timing_check
	| T_system_timing_check_dollor_skew_timing_check       of dollor_skew_timing_check
	| T_system_timing_check_dollor_timeskew_timing_check   of dollor_timeskew_timing_check
	| T_system_timing_check_dollor_fullskew_timing_check   of dollor_fullskew_timing_check
	| T_system_timing_check_dollor_period_timing_check     of dollor_period_timing_check
	| T_system_timing_check_dollor_width_timing_check      of dollor_width_timing_check
	| T_system_timing_check_dollor_nochange_timing_check   of dollor_nochange_timing_check
and dollor_setup_timing_check =
	T_dollor_setup_timing_check of data_event*reference_event*timing_check_limit*notifier
and dollor_hold_timing_check =
	T_dollor_hold_timing_check of reference_event*data_event*timing_check_limit*notifier
and dollor_setuphold_timing_check =
	T_dollor_setuphold_timing_check of reference_event*data_event*timing_check_limit*timing_check_limit*notifier*stamptime_condition*checktime_condition*delayed_reference*delayed_data
and dollor_recovery_timing_check =
	T_dollor_recovery_timing_check of reference_event*data_event*timing_check_limit*notifier
and dollor_removal_timing_check =
	T_dollor_removal_timing_check of reference_event*data_event*timing_check_limit*notifier
and dollor_recrem_timing_check =
	T_dollor_recrem_timing_check of reference_event*data_event*timing_check_limit*timing_check_limit*notifier*stamptime_condition*checktime_condition*delayed_reference*delayed_data
and dollor_skew_timing_check =
	T_dollor_skew_timing_check of reference_event*data_event*timing_check_limit*notifier
and dollor_timeskew_timing_check =
	T_dollor_timeskew_timing_check of reference_event*data_event*timing_check_limit*notifier*event_based_flag*remain_active_flag
and dollor_fullskew_timing_check =
	T_dollor_fullskew_timing_check of reference_event*data_event*timing_check_limit*timing_check_limit*notifier*event_based_flag*remain_active_flag
and dollor_period_timing_check =
	T_dollor_period_timing_check of reference_event*data_event*timing_check_limit*timing_check_limit*notifier*event_based_flag*remain_active_flag
and dollor_width_timing_check =
	T_dollor_width_timing_check of controlled_reference_event*timing_check_limit*threshold*notifier
and dollor_nochange_timing_check =
	T_dollor_nochange_timing_check of reference_event*data_event*start_edge_offset*end_edge_offset*notifier
and checktime_condition =
	T_checktime_condition_NOSPEC
	| T_checktime_condition of mintypmax_expression
and	controlled_reference_event =
	T_controlled_reference_event of controlled_timing_check_event
and data_event =
	T_data_event of timing_check_event
and delayed_reference =
	T_delayed_reference_NOSPEC
	| T_delayed_reference_id of identifier
	| T_delayed_reference_idmtmexp of identifier*mintypmax_expression
and end_edge_offset =
	T_end_edge_offset of mintypmax_expression
and event_based_flag =
	T_event_based_flag of expression
	| T_event_based_flag_NOSPEC
and notifier =
	T_notifier_NOSPEC 
	| T_notifier of identifier
and reference_event = 
	T_reference_event of timing_check_event
and remain_active_flag =
	T_remain_active_flag of expression
and stamptime_condition =
	T_stamptime_condition of mintypmax_expression
and start_edge_offset =
	T_start_edge_offset of mintypmax_expression
and threshold =
	T_threshold of expression
and timing_check_limit =
	T_timing_check_limit of expression
and timing_check_event =
	T_timing_check_event of timing_check_event_control*specify_terminal_descriptor*expression
and controlled_timing_check_event =
	T_controlled_timing_check_event of timing_check_event_control*specify_terminal_descriptor*expression
and timing_check_event_control =
	T_timing_check_event_control_NOSPEC
	| T_timing_check_event_control_POSEDGE
	| T_timing_check_event_control_NEGEDGE
	| T_timing_check_event_control_edge_control_specifier of edge_control_specifier
and specify_terminal_descriptor =
	T_specify_terminal_descriptor_in of specify_inout_terminal_descriptor
and edge_control_specifier =
	T_edge_control_specifier of (edge_descriptor list)
and edge_descriptor =
	T_edge_descriptor_01
	| T_edge_descriptor_10
	| T_edge_descriptor_zx01 of z_or_x*zero_or_one
	| T_edge_descriptor_01zx of zero_or_one*z_or_x
and zero_or_one =
	T_zero_or_one_0
	| T_zero_or_one_1
and z_or_x =
	T_z_or_x__x
	| T_z_or_x__X
	| T_z_or_x__z
	| T_z_or_x__Z
and timing_check_condition =
	T_timing_check_condition_NOSPEC
	| T_timing_check_condition of scalar_timing_check_condition
and scalar_timing_check_condition =
	T_scalar_timing_check_condition_exp of expression
	| T_scalar_timing_check_condition_Negexp of expression
	| T_scalar_timing_check_condition_eq2 of expression*expression
	| T_scalar_timing_check_condition_eq3 of expression*expression
	| T_scalar_timing_check_condition_neq2 of expression*expression
	| T_scalar_timing_check_condition_neq3 of expression*expression
and scalar_constant =
	T_scalar_constant_unsigned of int
	| T_scalar_constant_binary of int*string*string
and delayed_data =
	T_delayed_data_NOSPEC 
	| T_delayed_data_id of identifier
	| T_delayed_data_idmtmexp of identifier*mintypmax_expression
and edge_identifier =
	T_edge_identifier_NOSPEC
	| T_edge_identifier_POS
	| T_edge_identifier_NEG
and unary_operator =
	 T_unary_operator_LOGIC_NEG
	| T_unary_operator_BITWISE_NEG
	| T_unary_operator_REDUCE_NOR
	| T_unary_operator_REDUCE_NAND
	| T_unary_operator_ADD
	| T_unary_operator_SUB
	| T_unary_operator_REDUCE_AND
	| T_unary_operator_REDUCE_OR
	| T_unary_operator_REDUCE_XOR
	| T_unary_operator_REDUCE_XNOR
and binary_operator1 =
|	T_binary_operator_MUL
|	T_binary_operator_DIV
|	T_binary_operator_MOD
|	T_binary_operator_EQU2
|	T_binary_operator_NEQ2
|	T_binary_operator_EQU3
|	T_binary_operator_NEQ3
|	T_binary_operator_POWER
|	T_binary_operator_LT
|	T_binary_operator_LE
|	T_binary_operator_GT
|	T_binary_operator_GE
and binary_operator2 =
	T_binary_operator_LOGICAL_RIGHTSHIFT
|	T_binary_operator_LOGICAL_LEFTSHIFT
|	T_binary_operator_ARITHMETIC_RIGHTSHIFT
|	T_binary_operator_ARITHMETIC_LEFTSHIFT
|	T_binary_operator_ADD
|	T_binary_operator_SUB
|	T_binary_operator_AND
|	T_binary_operator_OR
|	T_binary_operator_AND2
|	T_binary_operator_OR2
|	T_binary_operator_XOR
|	T_binary_operator_XNOR
and binary_operator =
	T_binary_operator_1 of binary_operator1
	| T_binary_operator_2 of binary_operator2
and unary_module_path_operator =
	T_unary_module_path_operator_GANTANHAO
	| T_unary_module_path_operator_BOLANGHAO
	| T_unary_module_path_operator_AND
	| T_unary_module_path_operator_NAND
	| T_unary_module_path_operator_OR
	| T_unary_module_path_operator_NOR
	| T_unary_module_path_operator_XOR
	| T_unary_module_path_operator_XNOR
and binary_module_path_operator =
	T_binary_module_path_operator_EQU2
	| T_binary_module_path_operator_NEQ2
  | T_binary_module_path_operator_AND2
  | T_binary_module_path_operator_OR2
  | T_binary_module_path_operator_AND1
  | T_binary_module_path_operator_OR1
  | T_binary_module_path_operator_XOR
  | T_binary_module_path_operator_XNOR
and level_symbol =
	 T_level_symbol_0
	 | T_level_symbol_1
	 | T_level_symbol_x
	 | T_level_symbol_X
	 | T_level_symbol_QUESTION
	 | T_level_symbol_b
	 | T_level_symbol_B
	 | T_level_symbol_SUB
and output_symbol =
	T_output_symbol_UNSIGNED_NUMBER of int
	| T_output_symbol_SIMID of string
and number =
	T_number_UNSIGNED_NUMBER of int
	| T_number_UNSIGNED_NUMBER_size of int*string*string
	| T_number_OCTAL_NUMBER of int*string*string
	| T_number_BINARY_NUMBER of int*string*string
	| T_number_HEX_NUMBER of int*string*string
	| T_number_REAL_NUMBER of string
and next_state =
	T_next_state_UNSIGNED_NUMBER of int
	| T_next_state_SIMID of  string
	| T_next_state_SUB
and edge_symbol =
	T_edge_symbol_r
	| T_edge_symbol_R
	| T_edge_symbol_f
	| T_edge_symbol_F
	| T_edge_symbol_p
	| T_edge_symbol_P
	| T_edge_symbol_n
	| T_edge_symbol_N
and	string_typedef =
	T_string of string
and	system_function_identifier =
	T_system_function_identifier of  string
and	io_declaration =
	T_io_declaration_net of io_type*netreg_type*signedType*range*port_identifier_equ1_expression_opt
and netreg_type =
	T_netreg_type__NOSPEC
	| T_netreg_type__KEY_SUPPLY0
	| T_netreg_type__KEY_SUPPLY1
	| T_netreg_type__KEY_TRI
	| T_netreg_type__KEY_TRIAND
	| T_netreg_type__KEY_TRIOR
	| T_netreg_type__KEY_TRI0
	| T_netreg_type__KEY_TRI1
	| T_netreg_type__KEY_UWIRE
	| T_netreg_type__KEY_WIRE
	| T_netreg_type__KEY_WAND
	| T_netreg_type__KEY_WOR
	| T_netreg_type__KEY_REG
	| T_netreg_type__KEY_INTEGER
	| T_netreg_type__KEY_TIME
and	statement_or_block_item =
	T_statement_or_block_item_statement of statement
	| T_statement_or_block_item_block of block_item_declaration
and	tf_io_declaration_gen =
	T_tf_io_declaration_gen1 of io_type*reg*signedType*range*identifier
	| T_tf_io_declaration_gen2 of io_type*task_port_type*identifier
and	io_type =
	T_io_type_NOSPEC
	| T_io_type_output
	| T_io_type_input
	| T_io_type_inout
and reg =
	T_reg_false
	| T_reg_true
and identifier =
	T_identifier_NOSPEC
	| T_identifier of string
and colon_config_opt =
	T_colon_config_opt_FALSE
	| T_colon_config_opt_TRUE
and signedType =
	T_signed_FALSE 
	| T_signed_TRUE
;;

