enum colon_config_opt { 
   T_colon_config_opt_FALSE
 , T_colon_config_opt_TRUE
};
enum signedType { 
   T_signed_FALSE
 , T_signed_TRUE
};
enum parameter_type { 
   T_parameter_type__NOSPEC
 , T_parameter_type__INTEGER
 , T_parameter_type__REAL
 , T_parameter_type__REALTIME
 , T_parameter_type__TIME
};
enum output_variable_type { 
   T_output_variable_type_INTEGER
 , T_output_variable_type_TIME
};
enum vectored_scalared { 
   T_vectored_scalared_NOSPEC
 , T_vectored_scalared_vectored
 , T_vectored_scalared_scalared
};
enum net_type { 
   T_net_type_NOSPEC
 , T_net_type__KEY_SUPPLY0
 , T_net_type__KEY_SUPPLY1
 , T_net_type__KEY_TRI
 , T_net_type__KEY_TRIAND
 , T_net_type__KEY_TRIOR
 , T_net_type__KEY_TRI0
 , T_net_type__KEY_TRI1
 , T_net_type__KEY_UWIRE
 , T_net_type__KEY_WIRE
 , T_net_type__KEY_WAND
 , T_net_type__KEY_WOR
};
enum strength { 
   KEY_HIGHZ0
 , KEY_HIGHZ1
 , KEY_SUPPLY0
 , KEY_STRONG0
 , KEY_PULL0
 , KEY_WEAK0
 , KEY_SUPPLY1
 , KEY_STRONG1
 , KEY_PULL1
 , KEY_WEAK1
};
enum charge_strength { 
   T_charge_strength_NOSPEC
 , T_charge_strength__small
 , T_charge_strength__medium
 , T_charge_strength__large
};
enum automatic { 
   T_automatic_false
 , T_automatic_true
};
enum task_port_type { 
   T_task_port_type_integer
 , T_task_port_type_real
 , T_task_port_type_realtime
 , T_task_port_type_time
};
enum cmos_switchtype { 
   T_cmos_switchtype_CMOS
 , T_cmos_switchtype_RCMOS
};
enum enable_gatetype { 
   T_enable_gatetype__BUFIF0
 , T_enable_gatetype__BUFIF1
 , T_enable_gatetype__NOTIF0
 , T_enable_gatetype__NOTIF1
};
enum mos_switchtype { 
   T_mos_switchtype_NMOS
 , T_mos_switchtype_PMOS
 , T_mos_switchtype_RNMOS
 , T_mos_switchtype_RPMOS
};
enum n_input_gatetype { 
   T_n_input_gatetype_AND
 , T_n_input_gatetype_NAND
 , T_n_input_gatetype_OR
 , T_n_input_gatetype_NOR
 , T_n_input_gatetype_XOR
 , T_n_input_gatetype_XNOR
};
enum n_output_gatetype { 
   T_n_output_gatetype_BUF
 , T_n_output_gatetype_NOT
};
enum pass_en_switchtype { 
   T_pass_en_switchtype_TRANIF0
 , T_pass_en_switchtype_TRANIF1
 , T_pass_en_switchtype_RTRANIF1
 , T_pass_en_switchtype_RTRANIF0
};
enum pass_switchtype { 
   T_pass_switchtype_TRAN
 , T_pass_switchtype_RTRAN
};
enum polarity_operator { 
   T_polarity_operator_NOSPEC
 , T_polarity_operator_ADD
 , T_polarity_operator_SUB
};
enum zero_or_one { 
   T_zero_or_one_0
 , T_zero_or_one_1
};
enum z_or_x { 
   T_z_or_x__x
 , T_z_or_x__X
 , T_z_or_x__z
 , T_z_or_x__Z
};
enum edge_identifier { 
   T_edge_identifier_NOSPEC
 , T_edge_identifier_POS
 , T_edge_identifier_NEG
};
enum unary_operator { 
   T_unary_operator_LOGIC_NEG
 , T_unary_operator_BITWISE_NEG
 , T_unary_operator_REDUCE_NOR
 , T_unary_operator_REDUCE_NAND
 , T_unary_operator_ADD
 , T_unary_operator_SUB
 , T_unary_operator_REDUCE_AND
 , T_unary_operator_REDUCE_OR
 , T_unary_operator_REDUCE_XOR
 , T_unary_operator_REDUCE_XNOR
};
enum unary_module_path_operator { 
   T_unary_module_path_operator_GANTANHAO
 , T_unary_module_path_operator_BOLANGHAO
 , T_unary_module_path_operator_AND
 , T_unary_module_path_operator_NAND
 , T_unary_module_path_operator_OR
 , T_unary_module_path_operator_NOR
 , T_unary_module_path_operator_XOR
 , T_unary_module_path_operator_XNOR
};
enum binary_module_path_operator { 
   T_binary_module_path_operator_EQU2
 , T_binary_module_path_operator_NEQ2
 , T_binary_module_path_operator_AND2
 , T_binary_module_path_operator_OR2
 , T_binary_module_path_operator_AND1
 , T_binary_module_path_operator_OR1
 , T_binary_module_path_operator_XOR
 , T_binary_module_path_operator_XNOR
};
enum level_symbol { 
   T_level_symbol_0
 , T_level_symbol_1
 , T_level_symbol_x
 , T_level_symbol_X
 , T_level_symbol_QUESTION
 , T_level_symbol_b
 , T_level_symbol_B
 , T_level_symbol_SUB
};
enum edge_symbol { 
   T_edge_symbol_r
 , T_edge_symbol_R
 , T_edge_symbol_f
 , T_edge_symbol_F
 , T_edge_symbol_p
 , T_edge_symbol_P
 , T_edge_symbol_n
 , T_edge_symbol_N
 , T_edge_symbol_MUL
};
enum netreg_type { 
   T_netreg_type__NOSPEC
 , T_netreg_type__KEY_SUPPLY0
 , T_netreg_type__KEY_SUPPLY1
 , T_netreg_type__KEY_TRI
 , T_netreg_type__KEY_TRIAND
 , T_netreg_type__KEY_TRIOR
 , T_netreg_type__KEY_TRI0
 , T_netreg_type__KEY_TRI1
 , T_netreg_type__KEY_UWIRE
 , T_netreg_type__KEY_WIRE
 , T_netreg_type__KEY_WAND
 , T_netreg_type__KEY_WOR
 , T_netreg_type__KEY_REG
 , T_netreg_type__KEY_INTEGER
 , T_netreg_type__KEY_TIME
};
enum io_type { 
   T_io_type_NOSPEC
 , T_io_type_output
 , T_io_type_input
 , T_io_type_inout
};
enum reg { 
   T_reg_false
 , T_reg_true
};
enum binary_operator { 
   T_binary_operator_MUL
 , T_binary_operator_DIV
 , T_binary_operator_MOD
 , T_binary_operator_EQU2
 , T_binary_operator_NEQ2
 , T_binary_operator_EQU3
 , T_binary_operator_NEQ3
 , T_binary_operator_POWER
 , T_binary_operator_LT
 , T_binary_operator_LE
 , T_binary_operator_GT
 , T_binary_operator_GE
 , T_binary_operator_LOGICAL_RIGHTSHIFT
 , T_binary_operator_LOGICAL_LEFTSHIFT
 , T_binary_operator_ARITHMETIC_RIGHTSHIFT
 , T_binary_operator_ARITHMETIC_LEFTSHIFT
 , T_binary_operator_ADD
 , T_binary_operator_SUB
 , T_binary_operator_AND
 , T_binary_operator_OR
 , T_binary_operator_AND2
 , T_binary_operator_OR2
 , T_binary_operator_XOR
 , T_binary_operator_XNOR
};
