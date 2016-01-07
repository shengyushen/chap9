
typedef std::tuple<T_tf_io_declaration_gen1 ,  io_type , reg , signed , range , identifier > tf_io_declaration_gen1 ;
typedef std::tuple<T_tf_io_declaration_gen2 ,  io_type , task_port_type , identifier > tf_io_declaration_gen2 ;
typedef std::tuple< tf_io_declaration_gen1 , tf_io_declaration_gen2 > tf_io_declaration_gen ;


typedef std::tuple<T_statement_or_block_item_statement ,  statement > statement_or_block_item1 ;
typedef std::tuple<T_statement_or_block_item_block ,  block_item_declaration > statement_or_block_item2 ;
typedef std::tuple< statement_or_block_item1 , statement_or_block_item2 > statement_or_block_item ;


typedef std::tuple<T_netreg_type__NOSPEC > netreg_type1 ;
typedef std::tuple<T_netreg_type__KEY_SUPPLY0 > netreg_type2 ;
typedef std::tuple<T_netreg_type__KEY_SUPPLY1 > netreg_type3 ;
typedef std::tuple<T_netreg_type__KEY_TRI > netreg_type4 ;
typedef std::tuple<T_netreg_type__KEY_TRIAND > netreg_type5 ;
typedef std::tuple<T_netreg_type__KEY_TRIOR > netreg_type6 ;
typedef std::tuple<T_netreg_type__KEY_TRI0 > netreg_type7 ;
typedef std::tuple<T_netreg_type__KEY_TRI1 > netreg_type8 ;
typedef std::tuple<T_netreg_type__KEY_UWIRE > netreg_type9 ;
typedef std::tuple<T_netreg_type__KEY_WIRE > netreg_type10 ;
typedef std::tuple<T_netreg_type__KEY_WAND > netreg_type11 ;
typedef std::tuple<T_netreg_type__KEY_WOR > netreg_type12 ;
typedef std::tuple<T_netreg_type__KEY_REG > netreg_type13 ;
typedef std::tuple<T_netreg_type__KEY_INTEGER > netreg_type14 ;
typedef std::tuple<T_netreg_type__KEY_TIME > netreg_type15 ;
typedef std::tuple< netreg_type1 , netreg_type2 , netreg_type3 , netreg_type4 , netreg_type5 , netreg_type6 , netreg_type7 , netreg_type8 , netreg_type9 , netreg_type10 , netreg_type11 , netreg_type12 , netreg_type13 , netreg_type14 , netreg_type15 > netreg_type ;


typedef std::tuple<T_io_declaration_net ,  io_type , netreg_type , signed , range , port_identifier_equ1_expression_opt > io_declaration1 ;
typedef std::tuple< io_declaration1 > io_declaration ;


typedef std::tuple<T_io_type_NOSPEC > io_type1 ;
typedef std::tuple<T_io_type_output > io_type2 ;
typedef std::tuple<T_io_type_input > io_type3 ;
typedef std::tuple<T_io_type_inout > io_type4 ;
typedef std::tuple< io_type1 , io_type2 , io_type3 , io_type4 > io_type ;


typedef std::tuple<T_system_function_identifier ,  Lexing.position , Lexing.position , string > system_function_identifier1 ;
typedef std::tuple< system_function_identifier1 > system_function_identifier ;


typedef std::tuple<T_string ,  Lexing.position , Lexing.position , string > string_typedef1 ;
typedef std::tuple< string_typedef1 > string_typedef ;


typedef std::tuple<T_identifier_NOSPEC > identifier1 ;
typedef std::tuple<T_identifier ,  Lexing.position , Lexing.position , string > identifier2 ;
typedef std::tuple< identifier1 , identifier2 > identifier ;


typedef std::tuple<T_edge_symbol_SIMID ,  Lexing.position , Lexing.position , string > edge_symbol1 ;
typedef std::tuple<T_edge_symbol_MUL ,  Lexing.position , Lexing.position > edge_symbol2 ;
typedef std::tuple< edge_symbol1 , edge_symbol2 > edge_symbol ;


typedef std::tuple<T_next_state_UNSIGNED_NUMBER ,  Lexing.position , Lexing.position , int > next_state1 ;
typedef std::tuple<T_next_state_SIMID ,  Lexing.position , Lexing.position , string > next_state2 ;
typedef std::tuple<T_next_state_SUB ,  Lexing.position , Lexing.position > next_state3 ;
typedef std::tuple< next_state1 , next_state2 , next_state3 > next_state ;


typedef std::tuple<T_current_state_UNSIGNED_NUMBER ,  Lexing.position , Lexing.position , int > current_state1 ;
typedef std::tuple<T_current_state_SIMID ,  Lexing.position , Lexing.position , string > current_state2 ;
typedef std::tuple<T_current_state_OP2_QUESTION ,  Lexing.position , Lexing.position > current_state3 ;
typedef std::tuple< current_state1 , current_state2 , current_state3 > current_state ;


typedef std::tuple<T_number_UNSIGNED_NUMBER ,  Lexing.position , Lexing.position , int > number1 ;
typedef std::tuple<T_number_UNSIGNED_NUMBER_size ,  Lexing.position , Lexing.position , (int , int) > number2 ;
typedef std::tuple<T_number_OCTAL_NUMBER ,  Lexing.position , Lexing.position , (int , string) > number3 ;
typedef std::tuple<T_number_BINARY_NUMBER ,  Lexing.position , Lexing.position , (int , string) > number4 ;
typedef std::tuple<T_number_HEX_NUMBER ,  Lexing.position , Lexing.position , (int , string) > number5 ;
typedef std::tuple<T_number_REAL_NUMBER ,  Lexing.position , Lexing.position , string > number6 ;
typedef std::tuple< number1 , number2 , number3 , number4 , number5 , number6 > number ;


typedef std::tuple<T_output_symbol_UNSIGNED_NUMBER ,  Lexing.position , Lexing.position , int > output_symbol1 ;
typedef std::tuple<T_output_symbol_SIMID ,  Lexing.position , Lexing.position , string > output_symbol2 ;
typedef std::tuple< output_symbol1 , output_symbol2 > output_symbol ;


typedef std::tuple<T_level_symbol_UNSIGNED_NUMBER ,  Lexing.position , Lexing.position , int > level_symbol1 ;
typedef std::tuple<T_level_symbol_SIMID ,  Lexing.position , Lexing.position , string > level_symbol2 ;
typedef std::tuple<T_level_symbol_QUESTION ,  Lexing.position , Lexing.position > level_symbol3 ;
typedef std::tuple< level_symbol1 , level_symbol2 , level_symbol3 > level_symbol ;


typedef std::tuple<T_binary_module_path_operator_EQU2 > binary_module_path_operator1 ;
typedef std::tuple<T_binary_module_path_operator_NEQ2 > binary_module_path_operator2 ;
typedef std::tuple<T_binary_module_path_operator_AND2 > binary_module_path_operator3 ;
typedef std::tuple<T_binary_module_path_operator_OR2 > binary_module_path_operator4 ;
typedef std::tuple<T_binary_module_path_operator_AND1 > binary_module_path_operator5 ;
typedef std::tuple<T_binary_module_path_operator_OR1 > binary_module_path_operator6 ;
typedef std::tuple<T_binary_module_path_operator_XOR > binary_module_path_operator7 ;
typedef std::tuple<T_binary_module_path_operator_XNOR > binary_module_path_operator8 ;
typedef std::tuple< binary_module_path_operator1 , binary_module_path_operator2 , binary_module_path_operator3 , binary_module_path_operator4 , binary_module_path_operator5 , binary_module_path_operator6 , binary_module_path_operator7 , binary_module_path_operator8 > binary_module_path_operator ;


typedef std::tuple<T_unary_module_path_operator_GANTANHAO > unary_module_path_operator1 ;
typedef std::tuple<T_unary_module_path_operator_BOLANGHAO > unary_module_path_operator2 ;
typedef std::tuple<T_unary_module_path_operator_AND > unary_module_path_operator3 ;
typedef std::tuple<T_unary_module_path_operator_NAND > unary_module_path_operator4 ;
typedef std::tuple<T_unary_module_path_operator_OR > unary_module_path_operator5 ;
typedef std::tuple<T_unary_module_path_operator_NOR > unary_module_path_operator6 ;
typedef std::tuple<T_unary_module_path_operator_XOR > unary_module_path_operator7 ;
typedef std::tuple<T_unary_module_path_operator_XNOR > unary_module_path_operator8 ;
typedef std::tuple< unary_module_path_operator1 , unary_module_path_operator2 , unary_module_path_operator3 , unary_module_path_operator4 , unary_module_path_operator5 , unary_module_path_operator6 , unary_module_path_operator7 , unary_module_path_operator8 > unary_module_path_operator ;


typedef std::tuple<T_binary_operator_MUL > binary_operator1 ;
typedef std::tuple<T_binary_operator_DIV > binary_operator2 ;
typedef std::tuple<T_binary_operator_MOD > binary_operator3 ;
typedef std::tuple<T_binary_operator_EQU2 > binary_operator4 ;
typedef std::tuple<T_binary_operator_NEQ2 > binary_operator5 ;
typedef std::tuple<T_binary_operator_EQU3 > binary_operator6 ;
typedef std::tuple<T_binary_operator_NEQ3 > binary_operator7 ;
typedef std::tuple<T_binary_operator_POWER > binary_operator8 ;
typedef std::tuple<T_binary_operator_LT > binary_operator9 ;
typedef std::tuple<T_binary_operator_LE > binary_operator10 ;
typedef std::tuple<T_binary_operator_GT > binary_operator11 ;
typedef std::tuple<T_binary_operator_GE > binary_operator12 ;
typedef std::tuple<T_binary_operator_LOGICAL_RIGHTSHIFT > binary_operator13 ;
typedef std::tuple<T_binary_operator_LOGICAL_LEFTSHIFT > binary_operator14 ;
typedef std::tuple<T_binary_operator_ARITHMETIC_RIGHTSHIFT > binary_operator15 ;
typedef std::tuple<T_binary_operator_ARITHMETIC_LEFTSHIFT > binary_operator16 ;
typedef std::tuple<T_binary_operator_ADD > binary_operator17 ;
typedef std::tuple<T_binary_operator_SUB > binary_operator18 ;
typedef std::tuple<T_binary_operator_AND > binary_operator19 ;
typedef std::tuple<T_binary_operator_OR > binary_operator20 ;
typedef std::tuple<T_binary_operator_AND2 > binary_operator21 ;
typedef std::tuple<T_binary_operator_OR2 > binary_operator22 ;
typedef std::tuple<T_binary_operator_XOR > binary_operator23 ;
typedef std::tuple<T_binary_operator_XNOR > binary_operator24 ;
typedef std::tuple< binary_operator1 , binary_operator2 , binary_operator3 , binary_operator4 , binary_operator5 , binary_operator6 , binary_operator7 , binary_operator8 , binary_operator9 , binary_operator10 , binary_operator11 , binary_operator12 , binary_operator13 , binary_operator14 , binary_operator15 , binary_operator16 , binary_operator17 , binary_operator18 , binary_operator19 , binary_operator20 , binary_operator21 , binary_operator22 , binary_operator23 , binary_operator24 > binary_operator ;


typedef std::tuple<T_unary_operator_LOGIC_NEG > unary_operator1 ;
typedef std::tuple<T_unary_operator_BITWISE_NEG > unary_operator2 ;
typedef std::tuple<T_unary_operator_REDUCE_NOR > unary_operator3 ;
typedef std::tuple<T_unary_operator_REDUCE_NAND > unary_operator4 ;
typedef std::tuple<T_unary_operator_ADD > unary_operator5 ;
typedef std::tuple<T_unary_operator_SUB > unary_operator6 ;
typedef std::tuple<T_unary_operator_REDUCE_AND > unary_operator7 ;
typedef std::tuple<T_unary_operator_REDUCE_OR > unary_operator8 ;
typedef std::tuple<T_unary_operator_REDUCE_XOR > unary_operator9 ;
typedef std::tuple<T_unary_operator_REDUCE_XNOR > unary_operator10 ;
typedef std::tuple< unary_operator1 , unary_operator2 , unary_operator3 , unary_operator4 , unary_operator5 , unary_operator6 , unary_operator7 , unary_operator8 , unary_operator9 , unary_operator10 > unary_operator ;


typedef std::tuple<T_edge_identifier_NOSPEC > edge_identifier1 ;
typedef std::tuple<T_edge_identifier_POS > edge_identifier2 ;
typedef std::tuple<T_edge_identifier_NEG > edge_identifier3 ;
typedef std::tuple< edge_identifier1 , edge_identifier2 , edge_identifier3 > edge_identifier ;


typedef std::tuple<T_polarity_operator_NOSPEC > polarity_operator1 ;
typedef std::tuple<T_polarity_operator_ADD > polarity_operator2 ;
typedef std::tuple<T_polarity_operator_SUB > polarity_operator3 ;
typedef std::tuple< polarity_operator1 , polarity_operator2 , polarity_operator3 > polarity_operator ;


typedef std::tuple<T_identifier_lsq_expression_rsq ,  identifier , std::list< range_expression> > identifier_lsq_expression_rsq1 ;
typedef std::tuple< identifier_lsq_expression_rsq1 > identifier_lsq_expression_rsq ;


typedef std::tuple<T_hierarchical_identifier , std::list< identifier_lsq_expression_rsq> > hierarchical_identifier1 ;
typedef std::tuple< hierarchical_identifier1 > hierarchical_identifier ;


typedef std::tuple<T_attr_spec ,  identifier , expression > attr_spec1 ;
typedef std::tuple< attr_spec1 > attr_spec ;


typedef std::tuple<T_attribute_instance , std::list< attr_spec> > attribute_instance1 ;
typedef std::tuple< attribute_instance1 > attribute_instance ;


typedef std::tuple<T_delay_value_UNSIGNED_NUMBER ,  Lexing.position , Lexing.position , int > delay_value1 ;
typedef std::tuple<T_delay_value_REAL_NUMBER ,  Lexing.position , Lexing.position , string > delay_value2 ;
typedef std::tuple<T_delay_value_id ,  identifier > delay_value3 ;
typedef std::tuple< delay_value1 , delay_value2 , delay_value3 > delay_value ;


typedef std::tuple<T_net_lvalue_id ,  hierarchical_identifier > net_lvalue1 ;
typedef std::tuple<T_net_lvalue_idexp ,  hierarchical_identifier , std::list< expression> , range_expression > net_lvalue2 ;
typedef std::tuple<T_net_lvalue_lvlist , std::list< net_lvalue> > net_lvalue3 ;
typedef std::tuple< net_lvalue1 , net_lvalue2 , net_lvalue3 > net_lvalue ;


typedef std::tuple<T_primary_num ,  number > primary1 ;
typedef std::tuple<T_primary_id ,  hierarchical_identifier > primary2 ;
typedef std::tuple<T_primary_concat ,  concatenation > primary3 ;
typedef std::tuple<T_primary_mulcon ,  multiple_concatenation > primary4 ;
typedef std::tuple<T_primary_func ,  function_call > primary5 ;
typedef std::tuple<T_primary_sysfunc ,  system_function_call > primary6 ;
typedef std::tuple<T_primary_mintypmax ,  mintypmax_expression > primary7 ;
typedef std::tuple<T_primary_string ,  string > primary8 ;
typedef std::tuple< primary1 , primary2 , primary3 , primary4 , primary5 , primary6 , primary7 , primary8 > primary ;


typedef std::tuple<T_module_path_primary_num ,  number > module_path_primary1 ;
typedef std::tuple<T_module_path_primary_id ,  identifier > module_path_primary2 ;
typedef std::tuple<T_module_path_primary_concat ,  module_path_concatenation > module_path_primary3 ;
typedef std::tuple<T_module_path_primary_mul_concat ,  module_path_multiple_concatenation > module_path_primary4 ;
typedef std::tuple<T_module_path_primary_func ,  function_call > module_path_primary5 ;
typedef std::tuple<T_module_path_primary_sysfunc ,  system_function_call > module_path_primary6 ;
typedef std::tuple<T_module_path_primary_mintypmax ,  module_path_mintypmax_expression > module_path_primary7 ;
typedef std::tuple< module_path_primary1 , module_path_primary2 , module_path_primary3 , module_path_primary4 , module_path_primary5 , module_path_primary6 , module_path_primary7 > module_path_primary ;


typedef std::tuple<expression > base_expression1 ;
typedef std::tuple< base_expression1 > base_expression ;


typedef std::tuple<T_range_expression_NOSPEC > range_expression1 ;
typedef std::tuple<T_range_expression_1 ,  expression > range_expression2 ;
typedef std::tuple<T_range_expression_2 ,  msb_expression , lsb_expression > range_expression3 ;
typedef std::tuple<T_range_expression_addrange ,  base_expression , width_expression > range_expression4 ;
typedef std::tuple<T_range_expression_subrange ,  base_expression , width_expression > range_expression5 ;
typedef std::tuple< range_expression1 , range_expression2 , range_expression3 , range_expression4 , range_expression5 > range_expression ;


typedef std::tuple<T_module_path_mintypmax_expression_1 ,  module_path_expression > module_path_mintypmax_expression1 ;
typedef std::tuple<T_module_path_mintypmax_expression_3 ,  module_path_expression , module_path_expression , module_path_expression > module_path_mintypmax_expression2 ;
typedef std::tuple< module_path_mintypmax_expression1 , module_path_mintypmax_expression2 > module_path_mintypmax_expression ;


typedef std::tuple<T_module_path_expression_prim ,  module_path_primary > module_path_expression1 ;
typedef std::tuple<T_module_path_expression_op1 ,  unary_operator , std::list< attribute_instance> , module_path_primary > module_path_expression2 ;
typedef std::tuple<T_module_path_expression_op2 ,  module_path_expression , binary_module_path_operator , std::list< attribute_instance> , module_path_expression > module_path_expression3 ;
typedef std::tuple<T_module_path_expression_sel ,  module_path_conditional_expression > module_path_expression4 ;
typedef std::tuple< module_path_expression1 , module_path_expression2 , module_path_expression3 , module_path_expression4 > module_path_expression ;


typedef std::tuple<T_module_path_conditional_expression ,  module_path_expression , std::list< attribute_instance> , module_path_expression , module_path_expression > module_path_conditional_expression1 ;
typedef std::tuple< module_path_conditional_expression1 > module_path_conditional_expression ;


typedef std::tuple<T_mintypmax_expression_NOSPEC > mintypmax_expression1 ;
typedef std::tuple<T_mintypmax_expression_1 ,  expression > mintypmax_expression2 ;
typedef std::tuple<T_mintypmax_expression_3 ,  expression , expression , expression > mintypmax_expression3 ;
typedef std::tuple< mintypmax_expression1 , mintypmax_expression2 , mintypmax_expression3 > mintypmax_expression ;


typedef std::tuple<T_expression_NOSPEC > expression1 ;
typedef std::tuple<T_expression_prim ,  primary > expression2 ;
typedef std::tuple<T_expression_op1 ,  unary_operator , std::list< attribute_instance> , primary > expression3 ;
typedef std::tuple<T_expression_op2 ,  expression , binary_operator , std::list< attribute_instance> , expression > expression4 ;
typedef std::tuple<T_expression_condition ,  conditional_expression > expression5 ;
typedef std::tuple< expression1 , expression2 , expression3 , expression4 , expression5 > expression ;


typedef std::tuple<expression > width_expression1 ;
typedef std::tuple< width_expression1 > width_expression ;


typedef std::tuple<expression > lsb_expression1 ;
typedef std::tuple< lsb_expression1 > lsb_expression ;


typedef std::tuple<expression > msb_expression1 ;
typedef std::tuple< msb_expression1 > msb_expression ;


typedef std::tuple<T_conditional_expression ,  expression , std::list< attribute_instance> , expression , expression > conditional_expression1 ;
typedef std::tuple< conditional_expression1 > conditional_expression ;


typedef std::tuple<T_system_function_call ,  system_function_identifier , std::list< expression> > system_function_call1 ;
typedef std::tuple< system_function_call1 > system_function_call ;


typedef std::tuple<T_function_call ,  hierarchical_identifier , std::list< attribute_instance> , std::list< expression> > function_call1 ;
typedef std::tuple< function_call1 > function_call ;


typedef std::tuple<T_multiple_concatenation ,  expression , concatenation > multiple_concatenation1 ;
typedef std::tuple< multiple_concatenation1 > multiple_concatenation ;


typedef std::tuple<T_module_path_concatenation , std::list< module_path_expression> > module_path_concatenation1 ;
typedef std::tuple< module_path_concatenation1 > module_path_concatenation ;


typedef std::tuple<T_module_path_multiple_concatenation ,  expression , module_path_concatenation > module_path_multiple_concatenation1 ;
typedef std::tuple< module_path_multiple_concatenation1 > module_path_multiple_concatenation ;


typedef std::tuple<T_concatenation , std::list< expression> > concatenation1 ;
typedef std::tuple< concatenation1 > concatenation ;


typedef std::tuple<T_state_dependent_path_declaration_simple ,  module_path_expression , simple_path_declaration > state_dependent_path_declaration1 ;
typedef std::tuple<T_state_dependent_path_declaration_edge ,  module_path_expression , edge_sensitive_path_declaration > state_dependent_path_declaration2 ;
typedef std::tuple<T_state_dependent_path_declaration_ifnone ,  simple_path_declaration > state_dependent_path_declaration3 ;
typedef std::tuple< state_dependent_path_declaration1 , state_dependent_path_declaration2 , state_dependent_path_declaration3 > state_dependent_path_declaration ;


typedef std::tuple<T_full_edge_sensitive_path_description ,  edge_identifier , std::list< specify_input_terminal_descriptor> , std::list< specify_output_terminal_descriptor> , polarity_operator , expression > full_edge_sensitive_path_description1 ;
typedef std::tuple< full_edge_sensitive_path_description1 > full_edge_sensitive_path_description ;


typedef std::tuple<T_parallel_edge_sensitive_path_description ,  edge_identifier , specify_input_terminal_descriptor , specify_output_terminal_descriptor , polarity_operator , expression > parallel_edge_sensitive_path_description1 ;
typedef std::tuple< parallel_edge_sensitive_path_description1 > parallel_edge_sensitive_path_description ;


typedef std::tuple<T_edge_sensitive_path_declaration_parallel ,  parallel_edge_sensitive_path_description , list_of_path_delay_expressions > edge_sensitive_path_declaration1 ;
typedef std::tuple<T_edge_sensitive_path_declaration_full ,  full_edge_sensitive_path_description , list_of_path_delay_expressions > edge_sensitive_path_declaration2 ;
typedef std::tuple< edge_sensitive_path_declaration1 , edge_sensitive_path_declaration2 > edge_sensitive_path_declaration ;


typedef std::tuple<T_list_of_mintypmax_expressions_1 ,  mintypmax_expression > list_of_path_delay_expressions1 ;
typedef std::tuple<T_list_of_mintypmax_expressions_2 ,  mintypmax_expression , mintypmax_expression > list_of_path_delay_expressions2 ;
typedef std::tuple<T_list_of_mintypmax_expressions_3 ,  mintypmax_expression , mintypmax_expression , mintypmax_expression > list_of_path_delay_expressions3 ;
typedef std::tuple<T_list_of_mintypmax_expressions_6 ,  mintypmax_expression , mintypmax_expression , mintypmax_expression , mintypmax_expression , mintypmax_expression , mintypmax_expression > list_of_path_delay_expressions4 ;
typedef std::tuple<T_list_of_mintypmax_expressions_12 ,  mintypmax_expression , mintypmax_expression , mintypmax_expression , mintypmax_expression , mintypmax_expression , mintypmax_expression , mintypmax_expression , mintypmax_expression , mintypmax_expression , mintypmax_expression , mintypmax_expression , mintypmax_expression > list_of_path_delay_expressions5 ;
typedef std::tuple< list_of_path_delay_expressions1 , list_of_path_delay_expressions2 , list_of_path_delay_expressions3 , list_of_path_delay_expressions4 , list_of_path_delay_expressions5 > list_of_path_delay_expressions ;


typedef std::tuple<T_specify_output_terminal_descriptor ,  identifier , range_expression > specify_output_terminal_descriptor1 ;
typedef std::tuple< specify_output_terminal_descriptor1 > specify_output_terminal_descriptor ;


typedef std::tuple<T_specify_input_terminal_descriptor ,  identifier , range_expression > specify_input_terminal_descriptor1 ;
typedef std::tuple< specify_input_terminal_descriptor1 > specify_input_terminal_descriptor ;


typedef std::tuple<T_full_path_description , std::list< specify_input_terminal_descriptor> , polarity_operator , std::list< specify_output_terminal_descriptor> > full_path_description1 ;
typedef std::tuple< full_path_description1 > full_path_description ;


typedef std::tuple<T_parallel_path_description ,  specify_input_terminal_descriptor , polarity_operator , specify_output_terminal_descriptor > parallel_path_description1 ;
typedef std::tuple< parallel_path_description1 > parallel_path_description ;


typedef std::tuple<T_simple_path_declaration_parallel ,  parallel_path_description , list_of_path_delay_expressions > simple_path_declaration1 ;
typedef std::tuple<T_simple_path_declaration_full ,  full_path_description , list_of_path_delay_expressions > simple_path_declaration2 ;
typedef std::tuple< simple_path_declaration1 , simple_path_declaration2 > simple_path_declaration ;


typedef std::tuple<T_path_declaration_simple ,  simple_path_declaration > path_declaration1 ;
typedef std::tuple<T_path_declaration_edge ,  edge_sensitive_path_declaration > path_declaration2 ;
typedef std::tuple<T_path_declaration_state ,  state_dependent_path_declaration > path_declaration3 ;
typedef std::tuple< path_declaration1 , path_declaration2 , path_declaration3 > path_declaration ;


typedef std::tuple<T_showcancelled_declaration_show , std::list< specify_output_terminal_descriptor> > showcancelled_declaration1 ;
typedef std::tuple<T_showcancelled_declaration_noshow , std::list< specify_output_terminal_descriptor> > showcancelled_declaration2 ;
typedef std::tuple< showcancelled_declaration1 , showcancelled_declaration2 > showcancelled_declaration ;


typedef std::tuple<T_pulsestyle_declaration_oneevent , std::list< specify_output_terminal_descriptor> > pulsestyle_declaration1 ;
typedef std::tuple<T_pulsestyle_declaration_onedetect , std::list< specify_output_terminal_descriptor> > pulsestyle_declaration2 ;
typedef std::tuple< pulsestyle_declaration1 , pulsestyle_declaration2 > pulsestyle_declaration ;


typedef std::tuple<T_specify_item_specparam ,  specparam_declaration > specify_item1 ;
typedef std::tuple<T_specify_item_pulsestyle ,  pulsestyle_declaration > specify_item2 ;
typedef std::tuple<T_specify_item_showcancelled ,  showcancelled_declaration > specify_item3 ;
typedef std::tuple<T_specify_item_path ,  path_declaration > specify_item4 ;
typedef std::tuple< specify_item1 , specify_item2 , specify_item3 , specify_item4 > specify_item ;


typedef std::tuple<T_specify_block , std::list< specify_item> > specify_block1 ;
typedef std::tuple< specify_block1 > specify_block ;


typedef std::tuple<T_task_enable ,  hierarchical_identifier , std::list< expression> > task_enable1 ;
typedef std::tuple< task_enable1 > task_enable ;


typedef std::tuple<T_system_task_enable ,  system_function_identifier , std::list< expression> > system_task_enable1 ;
typedef std::tuple< system_task_enable1 > system_task_enable ;


typedef std::tuple<T_loop_statement_forever ,  statement > loop_statement1 ;
typedef std::tuple<T_loop_statement_repeat ,  expression , statement > loop_statement2 ;
typedef std::tuple<T_loop_statement_while ,  expression , statement > loop_statement3 ;
typedef std::tuple<T_loop_statement_for ,  net_assignment , expression , net_assignment , statement > loop_statement4 ;
typedef std::tuple< loop_statement1 , loop_statement2 , loop_statement3 , loop_statement4 > loop_statement ;


typedef std::tuple<T_colon_opt_false > colon_opt1 ;
typedef std::tuple<T_colon_opt_true > colon_opt2 ;
typedef std::tuple< colon_opt1 , colon_opt2 > colon_opt ;


typedef std::tuple<T_case_item , std::list< expression> , statement > case_item1 ;
typedef std::tuple<T_case_item_default ,  colon_opt , statement > case_item2 ;
typedef std::tuple< case_item1 , case_item2 > case_item ;


typedef std::tuple<T_case_statement_case ,  expression , std::list< case_item> > case_statement1 ;
typedef std::tuple<T_case_statement_casez ,  expression , std::list< case_item> > case_statement2 ;
typedef std::tuple<T_case_statement_casex ,  expression , std::list< case_item> > case_statement3 ;
typedef std::tuple< case_statement1 , case_statement2 , case_statement3 > case_statement ;


typedef std::tuple<T_elseif ,  expression , statement > else_if_lp_expression_rp_statement_or_null1 ;
typedef std::tuple< else_if_lp_expression_rp_statement_or_null1 > else_if_lp_expression_rp_statement_or_null ;


typedef std::tuple<T_conditional_statement_ifelse ,  expression , statement , statement > conditional_statement1 ;
typedef std::tuple<T_conditional_statement_ifelseif ,  expression , statement , std::list< else_if_lp_expression_rp_statement_or_null> , statement > conditional_statement2 ;
typedef std::tuple< conditional_statement1 , conditional_statement2 > conditional_statement ;


typedef std::tuple<T_wait_statement ,  expression , statement > wait_statement1 ;
typedef std::tuple< wait_statement1 > wait_statement ;


typedef std::tuple<T_procedural_timing_control_statement ,  procedural_timing_control , statement > procedural_timing_control_statement1 ;
typedef std::tuple< procedural_timing_control_statement1 > procedural_timing_control_statement ;


typedef std::tuple<T_procedural_timing_control_delay ,  delay_control > procedural_timing_control1 ;
typedef std::tuple<T_procedural_timing_control_event ,  event_control > procedural_timing_control2 ;
typedef std::tuple< procedural_timing_control1 , procedural_timing_control2 > procedural_timing_control ;


typedef std::tuple<T_event_expression_exp ,  expression > event_expression1 ;
typedef std::tuple<T_event_expression_pos ,  expression > event_expression2 ;
typedef std::tuple<T_event_expression_neg ,  expression > event_expression3 ;
typedef std::tuple<T_event_expression_or ,  event_expression , event_expression > event_expression4 ;
typedef std::tuple< event_expression1 , event_expression2 , event_expression3 , event_expression4 > event_expression ;


typedef std::tuple<T_event_trigger ,  hierarchical_identifier > event_trigger1 ;
typedef std::tuple< event_trigger1 > event_trigger ;


typedef std::tuple<T_event_control_eventid ,  hierarchical_identifier > event_control1 ;
typedef std::tuple<T_event_control_event_exp , std::list< event_expression> > event_control2 ;
typedef std::tuple<T_event_control_start > event_control3 ;
typedef std::tuple< event_control1 , event_control2 , event_control3 > event_control ;


typedef std::tuple<T_disable_statement ,  hierarchical_identifier > disable_statement1 ;
typedef std::tuple< disable_statement1 > disable_statement ;


typedef std::tuple<T_delay_or_event_control_NOSPEC > delay_or_event_control1 ;
typedef std::tuple<T_delay_or_event_control_delay_control ,  delay_control > delay_or_event_control2 ;
typedef std::tuple<T_delay_or_event_control_event_control ,  event_control > delay_or_event_control3 ;
typedef std::tuple<T_delay_or_event_control_3 ,  expression , event_control > delay_or_event_control4 ;
typedef std::tuple< delay_or_event_control1 , delay_or_event_control2 , delay_or_event_control3 , delay_or_event_control4 > delay_or_event_control ;


typedef std::tuple<T_delay_control_delay_value ,  delay_value > delay_control1 ;
typedef std::tuple<T_delay_control_mintypmax_expression ,  mintypmax_expression > delay_control2 ;
typedef std::tuple< delay_control1 , delay_control2 > delay_control ;


typedef std::tuple<T_statement_NOSPEC , std::list< attribute_instance> > statement1 ;
typedef std::tuple<T_statement_blocking_assignment , std::list< attribute_instance> , blocking_assignment > statement2 ;
typedef std::tuple<T_statement_case_statement , std::list< attribute_instance> , case_statement > statement3 ;
typedef std::tuple<T_statement_conditional_statement , std::list< attribute_instance> , conditional_statement > statement4 ;
typedef std::tuple<T_statement_disable_statement , std::list< attribute_instance> , disable_statement > statement5 ;
typedef std::tuple<T_statement_event_trigger , std::list< attribute_instance> , event_trigger > statement6 ;
typedef std::tuple<T_statement_loop_statement , std::list< attribute_instance> , loop_statement > statement7 ;
typedef std::tuple<T_statement_nonblocking_assignment , std::list< attribute_instance> , nonblocking_assignment > statement8 ;
typedef std::tuple<T_statement_par_block , std::list< attribute_instance> , par_block > statement9 ;
typedef std::tuple<T_statement_procedural_continuous_assignments , std::list< attribute_instance> , procedural_continuous_assignments > statement10 ;
typedef std::tuple<T_statement_procedural_timing_control_statement , std::list< attribute_instance> , procedural_timing_control_statement > statement11 ;
typedef std::tuple<T_statement_seq_block , std::list< attribute_instance> , seq_block > statement12 ;
typedef std::tuple<T_statement_system_task_enable , std::list< attribute_instance> , system_task_enable > statement13 ;
typedef std::tuple<T_statement_task_enable , std::list< attribute_instance> , task_enable > statement14 ;
typedef std::tuple<T_statement_wait_statement , std::list< attribute_instance> , wait_statement > statement15 ;
typedef std::tuple< statement1 , statement2 , statement3 , statement4 , statement5 , statement6 , statement7 , statement8 , statement9 , statement10 , statement11 , statement12 , statement13 , statement14 , statement15 > statement ;


typedef std::tuple<T_seq_block ,  colon_block_identifier , std::list< statement_or_block_item> > seq_block1 ;
typedef std::tuple< seq_block1 > seq_block ;


typedef std::tuple<T_colon_block_identifier_NOSPEC > colon_block_identifier1 ;
typedef std::tuple<T_colon_block_identifier ,  identifier > colon_block_identifier2 ;
typedef std::tuple< colon_block_identifier1 , colon_block_identifier2 > colon_block_identifier ;


typedef std::tuple<T_par_block ,  colon_block_identifier , std::list< statement_or_block_item> > par_block1 ;
typedef std::tuple< par_block1 > par_block ;


typedef std::tuple<T_procedural_continuous_assignments_assign ,  net_assignment > procedural_continuous_assignments1 ;
typedef std::tuple<T_procedural_continuous_assignments_deassign ,  net_lvalue > procedural_continuous_assignments2 ;
typedef std::tuple<T_procedural_continuous_assignments_force1 ,  net_assignment > procedural_continuous_assignments3 ;
typedef std::tuple<T_procedural_continuous_assignments_force2 ,  net_assignment > procedural_continuous_assignments4 ;
typedef std::tuple<T_procedural_continuous_assignments_release1 ,  net_lvalue > procedural_continuous_assignments5 ;
typedef std::tuple<T_procedural_continuous_assignments_release2 ,  net_lvalue > procedural_continuous_assignments6 ;
typedef std::tuple< procedural_continuous_assignments1 , procedural_continuous_assignments2 , procedural_continuous_assignments3 , procedural_continuous_assignments4 , procedural_continuous_assignments5 , procedural_continuous_assignments6 > procedural_continuous_assignments ;


typedef std::tuple<T_nonblocking_assignment ,  net_lvalue , delay_or_event_control , expression > nonblocking_assignment1 ;
typedef std::tuple< nonblocking_assignment1 > nonblocking_assignment ;


typedef std::tuple<T_blocking_assignment ,  net_lvalue , delay_or_event_control , expression > blocking_assignment1 ;
typedef std::tuple< blocking_assignment1 > blocking_assignment ;


typedef std::tuple<T_always_construct ,  statement > always_construct1 ;
typedef std::tuple< always_construct1 > always_construct ;


typedef std::tuple<T_initial_construct ,  statement > initial_construct1 ;
typedef std::tuple< initial_construct1 > initial_construct ;


typedef std::tuple<T_net_assignment ,  net_lvalue , expression > net_assignment1 ;
typedef std::tuple< net_assignment1 > net_assignment ;


typedef std::tuple<T_continuous_assign ,  drive_strength , delay3 , std::list< net_assignment> > continuous_assign1 ;
typedef std::tuple< continuous_assign1 > continuous_assign ;


typedef std::tuple<T_name_of_udp_instance_NOSPEC > name_of_udp_instance1 ;
typedef std::tuple<T_name_of_udp_instance ,  identifier , range > name_of_udp_instance2 ;
typedef std::tuple< name_of_udp_instance1 , name_of_udp_instance2 > name_of_udp_instance ;


typedef std::tuple<T_udp_instance ,  name_of_udp_instance , net_lvalue , std::list< expression> > udp_instance1 ;
typedef std::tuple< udp_instance1 > udp_instance ;


typedef std::tuple<T_udp_instantiation ,  identifier , drive_strength , delay2 , std::list< udp_instance> > udp_instantiation1 ;
typedef std::tuple< udp_instantiation1 > udp_instantiation ;


typedef std::tuple<T_edge_indicator_level ,  level_symbol , level_symbol > edge_indicator1 ;
typedef std::tuple<T_edge_indicator_edge ,  edge_symbol > edge_indicator2 ;
typedef std::tuple< edge_indicator1 , edge_indicator2 > edge_indicator ;


typedef std::tuple<T_edge_input_list , std::list< level_symbol> , edge_indicator , std::list< level_symbol> > edge_input_list1 ;
typedef std::tuple< edge_input_list1 > edge_input_list ;


typedef std::tuple<T_seq_input_list_level , std::list< level_symbol> > seq_input_list1 ;
typedef std::tuple<T_seq_input_list_edge ,  edge_input_list > seq_input_list2 ;
typedef std::tuple< seq_input_list1 , seq_input_list2 > seq_input_list ;


typedef std::tuple<T_sequential_entry ,  seq_input_list , current_state , next_state > sequential_entry1 ;
typedef std::tuple< sequential_entry1 > sequential_entry ;


typedef std::tuple<T_init_val_bin ,  Lexing.position , Lexing.position , (int , string) > init_val1 ;
typedef std::tuple<T_init_val_unsigned ,  Lexing.position , Lexing.position , int > init_val2 ;
typedef std::tuple< init_val1 , init_val2 > init_val ;


typedef std::tuple<T_udp_initial_statement_NOSPEC > udp_initial_statement1 ;
typedef std::tuple<T_udp_initial_statement ,  identifier , init_val > udp_initial_statement2 ;
typedef std::tuple< udp_initial_statement1 , udp_initial_statement2 > udp_initial_statement ;


typedef std::tuple<T_sequential_body ,  udp_initial_statement , std::list< sequential_entry> > sequential_body1 ;
typedef std::tuple< sequential_body1 > sequential_body ;


typedef std::tuple<T_combinational_entry , std::list< level_symbol> , output_symbol > combinational_entry1 ;
typedef std::tuple< combinational_entry1 > combinational_entry ;


typedef std::tuple<T_udp_body_comb , std::list< combinational_entry> > udp_body1 ;
typedef std::tuple<T_udp_body_seq ,  sequential_body > udp_body2 ;
typedef std::tuple< udp_body1 , udp_body2 > udp_body ;


typedef std::tuple<T_udp_reg_declaration , std::list< attribute_instance> , identifier > udp_reg_declaration1 ;
typedef std::tuple< udp_reg_declaration1 > udp_reg_declaration ;


typedef std::tuple<T_udp_input_declaration , std::list< attribute_instance> , std::list< identifier> > udp_input_declaration1 ;
typedef std::tuple< udp_input_declaration1 > udp_input_declaration ;


typedef std::tuple<T_udp_output_declaration_output , std::list< attribute_instance> , identifier > udp_output_declaration1 ;
typedef std::tuple<T_udp_output_declaration_reg , std::list< attribute_instance> , identifier , expression > udp_output_declaration2 ;
typedef std::tuple< udp_output_declaration1 , udp_output_declaration2 > udp_output_declaration ;


typedef std::tuple<T_udp_port_declaration_out ,  udp_output_declaration > udp_port_declaration1 ;
typedef std::tuple<T_udp_port_declaration_input ,  udp_input_declaration > udp_port_declaration2 ;
typedef std::tuple<T_udp_port_declaration_reg ,  udp_reg_declaration > udp_port_declaration3 ;
typedef std::tuple< udp_port_declaration1 , udp_port_declaration2 , udp_port_declaration3 > udp_port_declaration ;


typedef std::tuple<T_udp_declaration_port_list ,  udp_output_declaration , std::list< udp_input_declaration> > udp_declaration_port_list1 ;
typedef std::tuple< udp_declaration_port_list1 > udp_declaration_port_list ;


typedef std::tuple<T_udp_port_list ,  identifier , std::list< identifier> > udp_port_list1 ;
typedef std::tuple< udp_port_list1 > udp_port_list ;


typedef std::tuple<T_udp_declaration_1 , std::list< attribute_instance> , identifier , udp_port_list , std::list< udp_port_declaration> , udp_body > udp_declaration1 ;
typedef std::tuple<T_udp_declaration_2 , std::list< attribute_instance> , identifier , udp_declaration_port_list , udp_body > udp_declaration2 ;
typedef std::tuple< udp_declaration1 , udp_declaration2 > udp_declaration ;


typedef std::tuple<T_generate_block_NOSPEC > generate_block1 ;
typedef std::tuple<T_generate_block_mgi ,  module_item > generate_block2 ;
typedef std::tuple<T_generate_block_begin ,  identifier , std::list< module_item> > generate_block3 ;
typedef std::tuple< generate_block1 , generate_block2 , generate_block3 > generate_block ;


typedef std::tuple<T_if_generate_construct ,  expression , generate_block , generate_block > if_generate_construct1 ;
typedef std::tuple< if_generate_construct1 > if_generate_construct ;


typedef std::tuple<T_case_generate_item_case , std::list< expression> , generate_block > case_generate_item1 ;
typedef std::tuple<T_case_generate_item_default ,  generate_block > case_generate_item2 ;
typedef std::tuple< case_generate_item1 , case_generate_item2 > case_generate_item ;


typedef std::tuple<T_case_generate_construct ,  expression , std::list< case_generate_item> > case_generate_construct1 ;
typedef std::tuple< case_generate_construct1 > case_generate_construct ;


typedef std::tuple<T_conditional_generate_construct_if ,  if_generate_construct > conditional_generate_construct1 ;
typedef std::tuple<T_conditional_generate_construct_case ,  case_generate_construct > conditional_generate_construct2 ;
typedef std::tuple< conditional_generate_construct1 , conditional_generate_construct2 > conditional_generate_construct ;


typedef std::tuple<T_genvar_iteration ,  identifier , expression > genvar_iteration1 ;
typedef std::tuple< genvar_iteration1 > genvar_iteration ;


typedef std::tuple<T_genvar_initialization ,  identifier , expression > genvar_initialization1 ;
typedef std::tuple< genvar_initialization1 > genvar_initialization ;


typedef std::tuple<T_loop_generate_construct ,  genvar_initialization , expression , genvar_iteration , generate_block > loop_generate_construct1 ;
typedef std::tuple< loop_generate_construct1 > loop_generate_construct ;


typedef std::tuple<T_genvar_declaration , std::list< identifier> > genvar_declaration1 ;
typedef std::tuple< genvar_declaration1 > genvar_declaration ;


typedef std::tuple<T_generate_region , std::list< module_item> > generate_region1 ;
typedef std::tuple< generate_region1 > generate_region ;


typedef std::tuple<T_named_port_connection , std::list< attribute_instance> , identifier , expression > named_port_connection1 ;
typedef std::tuple< named_port_connection1 > named_port_connection ;


typedef std::tuple<T_ordered_port_connection , std::list< attribute_instance> , expression > ordered_port_connection1 ;
typedef std::tuple< ordered_port_connection1 > ordered_port_connection ;


typedef std::tuple<T_list_of_port_connections_ordered , std::list< ordered_port_connection> > list_of_port_connections1 ;
typedef std::tuple<T_list_of_port_connections_named , std::list< named_port_connection> > list_of_port_connections2 ;
typedef std::tuple< list_of_port_connections1 , list_of_port_connections2 > list_of_port_connections ;


typedef std::tuple<T_named_parameter_assignment ,  identifier , mintypmax_expression > named_parameter_assignment1 ;
typedef std::tuple< named_parameter_assignment1 > named_parameter_assignment ;


typedef std::tuple<T_parameter_value_assignment_NOSPEC > parameter_value_assignment1 ;
typedef std::tuple<T_parameter_value_assignment_order , std::list< expression> > parameter_value_assignment2 ;
typedef std::tuple<T_parameter_value_assignment_named , std::list< named_parameter_assignment> > parameter_value_assignment3 ;
typedef std::tuple< parameter_value_assignment1 , parameter_value_assignment2 , parameter_value_assignment3 > parameter_value_assignment ;


typedef std::tuple<T_name_of_module_instance ,  identifier , range > name_of_module_instance1 ;
typedef std::tuple< name_of_module_instance1 > name_of_module_instance ;


typedef std::tuple<T_module_instance ,  name_of_module_instance , list_of_port_connections > module_instance1 ;
typedef std::tuple< module_instance1 > module_instance ;


typedef std::tuple<T_module_instantiation ,  identifier , parameter_value_assignment , std::list< module_instance> > module_instantiation1 ;
typedef std::tuple< module_instantiation1 > module_instantiation ;


typedef std::tuple<T_pass_switchtype_TRAN > pass_switchtype1 ;
typedef std::tuple<T_pass_switchtype_RTRAN > pass_switchtype2 ;
typedef std::tuple< pass_switchtype1 , pass_switchtype2 > pass_switchtype ;


typedef std::tuple<T_pass_en_switchtype_TRANIF0 > pass_en_switchtype1 ;
typedef std::tuple<T_pass_en_switchtype_TRANIF1 > pass_en_switchtype2 ;
typedef std::tuple<T_pass_en_switchtype_RTRANIF1 > pass_en_switchtype3 ;
typedef std::tuple<T_pass_en_switchtype_RTRANIF0 > pass_en_switchtype4 ;
typedef std::tuple< pass_en_switchtype1 , pass_en_switchtype2 , pass_en_switchtype3 , pass_en_switchtype4 > pass_en_switchtype ;


typedef std::tuple<T_n_output_gatetype_BUF > n_output_gatetype1 ;
typedef std::tuple<T_n_output_gatetype_NOT > n_output_gatetype2 ;
typedef std::tuple< n_output_gatetype1 , n_output_gatetype2 > n_output_gatetype ;


typedef std::tuple<T_n_input_gatetype_AND > n_input_gatetype1 ;
typedef std::tuple<T_n_input_gatetype_NAND > n_input_gatetype2 ;
typedef std::tuple<T_n_input_gatetype_OR > n_input_gatetype3 ;
typedef std::tuple<T_n_input_gatetype_NOR > n_input_gatetype4 ;
typedef std::tuple<T_n_input_gatetype_XOR > n_input_gatetype5 ;
typedef std::tuple<T_n_input_gatetype_XNOR > n_input_gatetype6 ;
typedef std::tuple< n_input_gatetype1 , n_input_gatetype2 , n_input_gatetype3 , n_input_gatetype4 , n_input_gatetype5 , n_input_gatetype6 > n_input_gatetype ;


typedef std::tuple<T_mos_switchtype_NMOS > mos_switchtype1 ;
typedef std::tuple<T_mos_switchtype_PMOS > mos_switchtype2 ;
typedef std::tuple<T_mos_switchtype_RNMOS > mos_switchtype3 ;
typedef std::tuple<T_mos_switchtype_RPMOS > mos_switchtype4 ;
typedef std::tuple< mos_switchtype1 , mos_switchtype2 , mos_switchtype3 , mos_switchtype4 > mos_switchtype ;


typedef std::tuple<T_enable_gatetype__BUFIF0 > enable_gatetype1 ;
typedef std::tuple<T_enable_gatetype__BUFIF1 > enable_gatetype2 ;
typedef std::tuple<T_enable_gatetype__NOTIF0 > enable_gatetype3 ;
typedef std::tuple<T_enable_gatetype__NOTIF1 > enable_gatetype4 ;
typedef std::tuple< enable_gatetype1 , enable_gatetype2 , enable_gatetype3 , enable_gatetype4 > enable_gatetype ;


typedef std::tuple<T_cmos_switchtype_CMOS > cmos_switchtype1 ;
typedef std::tuple<T_cmos_switchtype_RCMOS > cmos_switchtype2 ;
typedef std::tuple< cmos_switchtype1 , cmos_switchtype2 > cmos_switchtype ;


typedef std::tuple<T_pullup_strength_NOSPEC > pullup_strength1 ;
typedef std::tuple<T_pullup_strength01 ,  strength , strength > pullup_strength2 ;
typedef std::tuple<T_pullup_strength10 ,  strength , strength > pullup_strength3 ;
typedef std::tuple<T_pullup_strength1 ,  strength > pullup_strength4 ;
typedef std::tuple< pullup_strength1 , pullup_strength2 , pullup_strength3 , pullup_strength4 > pullup_strength ;


typedef std::tuple<T_pulldown_strength_NOSPEC > pulldown_strength1 ;
typedef std::tuple<T_pulldown_strength01 ,  strength , strength > pulldown_strength2 ;
typedef std::tuple<T_pulldown_strength10 ,  strength , strength > pulldown_strength3 ;
typedef std::tuple<T_pulldown_strength0 ,  strength > pulldown_strength4 ;
typedef std::tuple< pulldown_strength1 , pulldown_strength2 , pulldown_strength3 , pulldown_strength4 > pulldown_strength ;


typedef std::tuple<T_name_of_gate_instance_NOSPEC > name_of_gate_instance1 ;
typedef std::tuple<T_name_of_gate_instance ,  identifier , range > name_of_gate_instance2 ;
typedef std::tuple< name_of_gate_instance1 , name_of_gate_instance2 > name_of_gate_instance ;


typedef std::tuple<T_pull_gate_instance ,  name_of_gate_instance , net_lvalue > pull_gate_instance1 ;
typedef std::tuple< pull_gate_instance1 > pull_gate_instance ;


typedef std::tuple<T_pass_enable_switch_instance ,  name_of_gate_instance , net_lvalue , net_lvalue , expression > pass_enable_switch_instance1 ;
typedef std::tuple< pass_enable_switch_instance1 > pass_enable_switch_instance ;


typedef std::tuple<T_pass_switch_instance ,  name_of_gate_instance , net_lvalue , net_lvalue > pass_switch_instance1 ;
typedef std::tuple< pass_switch_instance1 > pass_switch_instance ;


typedef std::tuple<T_n_output_gate_instance ,  name_of_gate_instance , net_lvalue , std::list< net_lvalue> , expression > n_output_gate_instance1 ;
typedef std::tuple< n_output_gate_instance1 > n_output_gate_instance ;


typedef std::tuple<T_n_input_gate_instance ,  name_of_gate_instance , net_lvalue , expression , std::list< expression> > n_input_gate_instance1 ;
typedef std::tuple< n_input_gate_instance1 > n_input_gate_instance ;


typedef std::tuple<T_mos_switch_instance ,  name_of_gate_instance , net_lvalue , expression , expression > mos_switch_instance1 ;
typedef std::tuple< mos_switch_instance1 > mos_switch_instance ;


typedef std::tuple<T_enable_gate_instance ,  name_of_gate_instance , net_lvalue , expression , expression > enable_gate_instance1 ;
typedef std::tuple< enable_gate_instance1 > enable_gate_instance ;


typedef std::tuple<T_cmos_switch_instance ,  name_of_gate_instance , net_lvalue , expression , expression , expression > cmos_switch_instance1 ;
typedef std::tuple< cmos_switch_instance1 > cmos_switch_instance ;


typedef std::tuple<T_gate_instantiation_cmos ,  cmos_switchtype , delay3 , std::list< cmos_switch_instance> > gate_instantiation1 ;
typedef std::tuple<T_gate_instantiation_enable ,  enable_gatetype , drive_strength , delay3 , std::list< enable_gate_instance> > gate_instantiation2 ;
typedef std::tuple<T_gate_instantiation_mos ,  mos_switchtype , delay3 , std::list< mos_switch_instance> > gate_instantiation3 ;
typedef std::tuple<T_gate_instantiation_input ,  n_input_gatetype , drive_strength , delay2 , std::list< n_input_gate_instance> > gate_instantiation4 ;
typedef std::tuple<T_gate_instantiation_output ,  n_output_gatetype , drive_strength , delay2 , std::list< n_output_gate_instance> > gate_instantiation5 ;
typedef std::tuple<T_gate_instantiation_pass_en ,  pass_en_switchtype , delay2 , std::list< pass_enable_switch_instance> > gate_instantiation6 ;
typedef std::tuple<T_gate_instantiation_pass ,  pass_switchtype , std::list< pass_switch_instance> > gate_instantiation7 ;
typedef std::tuple<T_gate_instantiation_pulldown ,  pulldown_strength , std::list< pull_gate_instance> > gate_instantiation8 ;
typedef std::tuple<T_gate_instantiation_pullup ,  pullup_strength , std::list< pull_gate_instance> > gate_instantiation9 ;
typedef std::tuple< gate_instantiation1 , gate_instantiation2 , gate_instantiation3 , gate_instantiation4 , gate_instantiation5 , gate_instantiation6 , gate_instantiation7 , gate_instantiation8 , gate_instantiation9 > gate_instantiation ;


typedef std::tuple<T_block_real_type ,  identifier , std::list< dimension> > block_real_type1 ;
typedef std::tuple< block_real_type1 > block_real_type ;


typedef std::tuple<T_block_variable_type ,  identifier , std::list< dimension> > block_variable_type1 ;
typedef std::tuple< block_variable_type1 > block_variable_type ;


typedef std::tuple<T_block_item_declaration_reg , std::list< attribute_instance> , signed , range , std::list< block_variable_type> > block_item_declaration1 ;
typedef std::tuple<T_block_item_declaration_integer , std::list< attribute_instance> , std::list< block_variable_type> > block_item_declaration2 ;
typedef std::tuple<T_block_item_declaration_time , std::list< attribute_instance> , std::list< block_variable_type> > block_item_declaration3 ;
typedef std::tuple<T_block_item_declaration_real , std::list< attribute_instance> , std::list< block_real_type> > block_item_declaration4 ;
typedef std::tuple<T_block_item_declaration_realtime , std::list< attribute_instance> , std::list< block_real_type> > block_item_declaration5 ;
typedef std::tuple<T_block_item_declaration_event , std::list< attribute_instance> , event_declaration > block_item_declaration6 ;
typedef std::tuple<T_block_item_declaration_local_param , std::list< attribute_instance> , local_parameter_declaration > block_item_declaration7 ;
typedef std::tuple<T_block_item_declaration_param , std::list< attribute_instance> , parameter_declaration > block_item_declaration8 ;
typedef std::tuple< block_item_declaration1 , block_item_declaration2 , block_item_declaration3 , block_item_declaration4 , block_item_declaration5 , block_item_declaration6 , block_item_declaration7 , block_item_declaration8 > block_item_declaration ;


typedef std::tuple<T_task_port_type_integer > task_port_type1 ;
typedef std::tuple<T_task_port_type_real > task_port_type2 ;
typedef std::tuple<T_task_port_type_realtime > task_port_type3 ;
typedef std::tuple<T_task_port_type_time > task_port_type4 ;
typedef std::tuple< task_port_type1 , task_port_type2 , task_port_type3 , task_port_type4 > task_port_type ;


typedef std::tuple<T_tf_inout_declaration_reg ,  reg , signed , range , std::list< identifier> > tf_inout_declaration1 ;
typedef std::tuple<T_tf_inout_declaration_type ,  task_port_type , std::list< identifier> > tf_inout_declaration2 ;
typedef std::tuple< tf_inout_declaration1 , tf_inout_declaration2 > tf_inout_declaration ;


typedef std::tuple<T_tf_output_declaration_reg ,  reg , signed , range , std::list< identifier> > tf_output_declaration1 ;
typedef std::tuple<T_tf_output_declaration_type ,  task_port_type , std::list< identifier> > tf_output_declaration2 ;
typedef std::tuple< tf_output_declaration1 , tf_output_declaration2 > tf_output_declaration ;


typedef std::tuple<T_tf_input_declaration_reg ,  reg , signed , range , std::list< identifier> > tf_input_declaration1 ;
typedef std::tuple<T_tf_input_declaration_type ,  task_port_type , std::list< identifier> > tf_input_declaration2 ;
typedef std::tuple< tf_input_declaration1 , tf_input_declaration2 > tf_input_declaration ;


typedef std::tuple<T_reg_false > reg1 ;
typedef std::tuple<T_reg_true > reg2 ;
typedef std::tuple< reg1 , reg2 > reg ;


typedef std::tuple<T_task_port_item_input , std::list< attribute_instance> , tf_io_declaration_gen > task_port_item1 ;
typedef std::tuple< task_port_item1 > task_port_item ;


typedef std::tuple<T_task_item_declaration_block ,  block_item_declaration > task_item_declaration1 ;
typedef std::tuple<T_task_item_declaration_input , std::list< attribute_instance> , tf_input_declaration > task_item_declaration2 ;
typedef std::tuple<T_task_item_declaration_output , std::list< attribute_instance> , tf_output_declaration > task_item_declaration3 ;
typedef std::tuple<T_task_item_declaration_inout , std::list< attribute_instance> , tf_inout_declaration > task_item_declaration4 ;
typedef std::tuple< task_item_declaration1 , task_item_declaration2 , task_item_declaration3 , task_item_declaration4 > task_item_declaration ;


typedef std::tuple<T_task_declaration1 ,  automatic , identifier , std::list< task_item_declaration> , statement > task_declaration1 ;
typedef std::tuple<T_task_declaration2 ,  automatic , identifier , std::list< task_port_item> , std::list< task_item_declaration> , statement > task_declaration2 ;
typedef std::tuple< task_declaration1 , task_declaration2 > task_declaration ;


typedef std::tuple<T_function_range_or_type_NOSPEC > function_range_or_type1 ;
typedef std::tuple<T_function_range_or_type ,  signed , range > function_range_or_type2 ;
typedef std::tuple<T_function_range_or_type_INTEGER > function_range_or_type3 ;
typedef std::tuple<T_function_range_or_type_REAL > function_range_or_type4 ;
typedef std::tuple<T_function_range_or_type_REALTIME > function_range_or_type5 ;
typedef std::tuple<T_function_range_or_type_TIME > function_range_or_type6 ;
typedef std::tuple< function_range_or_type1 , function_range_or_type2 , function_range_or_type3 , function_range_or_type4 , function_range_or_type5 , function_range_or_type6 > function_range_or_type ;


typedef std::tuple<T_attribute_instance_list_tf_input_declaration , std::list< attribute_instance> , tf_io_declaration_gen > attribute_instance_list_tf_input_declaration1 ;
typedef std::tuple< attribute_instance_list_tf_input_declaration1 > attribute_instance_list_tf_input_declaration ;


typedef std::tuple<T_function_item_declaration_block ,  block_item_declaration > function_item_declaration1 ;
typedef std::tuple<T_function_item_declaration_input , std::list< attribute_instance> , tf_input_declaration > function_item_declaration2 ;
typedef std::tuple< function_item_declaration1 , function_item_declaration2 > function_item_declaration ;


typedef std::tuple<T_function_declaration_1 ,  automatic , function_range_or_type , identifier , std::list< function_item_declaration> , statement > function_declaration1 ;
typedef std::tuple<T_function_declaration_2 ,  automatic , function_range_or_type , identifier , std::list< attribute_instance_list_tf_input_declaration> , std::list< function_item_declaration> , statement > function_declaration2 ;
typedef std::tuple< function_declaration1 , function_declaration2 > function_declaration ;


typedef std::tuple<T_automatic_false > automatic1 ;
typedef std::tuple<T_automatic_true > automatic2 ;
typedef std::tuple< automatic1 , automatic2 > automatic ;


typedef std::tuple<T_range_NOSPEC > range1 ;
typedef std::tuple<T_range ,  expression , expression > range2 ;
typedef std::tuple< range1 , range2 > range ;


typedef std::tuple<T_dimension ,  expression , expression > dimension1 ;
typedef std::tuple< dimension1 > dimension ;


typedef std::tuple<T_specparam_assignment ,  identifier , mintypmax_expression > specparam_assignment1 ;
typedef std::tuple<T_specparam_assignment_pulse1 ,  mintypmax_expression , mintypmax_expression > specparam_assignment2 ;
typedef std::tuple<T_specparam_assignment_pulse2 ,  specify_input_terminal_descriptor , specify_output_terminal_descriptor , mintypmax_expression , mintypmax_expression > specparam_assignment3 ;
typedef std::tuple< specparam_assignment1 , specparam_assignment2 , specparam_assignment3 > specparam_assignment ;


typedef std::tuple<T_param_assignment ,  identifier , mintypmax_expression > param_assignment1 ;
typedef std::tuple< param_assignment1 > param_assignment ;


typedef std::tuple<T_net_decl_assignment ,  identifier , expression > net_decl_assignment1 ;
typedef std::tuple< net_decl_assignment1 > net_decl_assignment ;


typedef std::tuple<T_defparam_assignment ,  hierarchical_identifier , mintypmax_expression > defparam_assignment1 ;
typedef std::tuple< defparam_assignment1 > defparam_assignment ;


typedef std::tuple<T_port_identifier_equ1_expression_opt ,  identifier , expression > port_identifier_equ1_expression_opt1 ;
typedef std::tuple< port_identifier_equ1_expression_opt1 > port_identifier_equ1_expression_opt ;


typedef std::tuple<T_net_identifier_dimension_list ,  identifier , std::list< dimension> > net_identifier_dimension_list1 ;
typedef std::tuple< net_identifier_dimension_list1 > net_identifier_dimension_list ;


typedef std::tuple<T_event_identifier_dimension_list ,  identifier , std::list< dimension> > event_identifier_dimension_list1 ;
typedef std::tuple< event_identifier_dimension_list1 > event_identifier_dimension_list ;


typedef std::tuple<T_delay2_NOSPEC > delay21 ;
typedef std::tuple<T_delay2_1 ,  delay_value > delay22 ;
typedef std::tuple<T_delay2_minmax1 ,  mintypmax_expression > delay23 ;
typedef std::tuple<T_delay2_minmax2 ,  mintypmax_expression , mintypmax_expression > delay24 ;
typedef std::tuple< delay21 , delay22 , delay23 , delay24 > delay2 ;


typedef std::tuple<T_delay3_NOSPEC > delay31 ;
typedef std::tuple<T_delay3_1 ,  delay_value > delay32 ;
typedef std::tuple<T_delay3_minmax1 ,  mintypmax_expression > delay33 ;
typedef std::tuple<T_delay3_minmax2 ,  mintypmax_expression , mintypmax_expression > delay34 ;
typedef std::tuple<T_delay3_minmax3 ,  mintypmax_expression , mintypmax_expression , mintypmax_expression > delay35 ;
typedef std::tuple< delay31 , delay32 , delay33 , delay34 , delay35 > delay3 ;


typedef std::tuple<T_charge_strength_NOSPEC > charge_strength1 ;
typedef std::tuple<T_charge_strength__small > charge_strength2 ;
typedef std::tuple<T_charge_strength__medium > charge_strength3 ;
typedef std::tuple<T_charge_strength__large > charge_strength4 ;
typedef std::tuple< charge_strength1 , charge_strength2 , charge_strength3 , charge_strength4 > charge_strength ;


typedef std::tuple<T_drive_strength_NOSPEC > drive_strength1 ;
typedef std::tuple<T_drive_strength ,  strength , strength > drive_strength2 ;
typedef std::tuple< drive_strength1 , drive_strength2 > drive_strength ;


typedef std::tuple<KEY_HIGHZ0 > strength1 ;
typedef std::tuple<KEY_HIGHZ1 > strength2 ;
typedef std::tuple<KEY_SUPPLY0 > strength3 ;
typedef std::tuple<KEY_STRONG0 > strength4 ;
typedef std::tuple<KEY_PULL0 > strength5 ;
typedef std::tuple<KEY_WEAK0 > strength6 ;
typedef std::tuple<KEY_SUPPLY1 > strength7 ;
typedef std::tuple<KEY_STRONG1 > strength8 ;
typedef std::tuple<KEY_PULL1 > strength9 ;
typedef std::tuple<KEY_WEAK1 > strength10 ;
typedef std::tuple< strength1 , strength2 , strength3 , strength4 , strength5 , strength6 , strength7 , strength8 , strength9 , strength10 > strength ;


typedef std::tuple<T_variable_type_noass ,  identifier , std::list< dimension> > variable_type1 ;
typedef std::tuple<T_variable_type_ass ,  identifier , expression > variable_type2 ;
typedef std::tuple< variable_type1 , variable_type2 > variable_type ;


typedef std::tuple<T_real_type_noass ,  identifier , std::list< dimension> > real_type1 ;
typedef std::tuple<T_real_type_ass ,  identifier , expression > real_type2 ;
typedef std::tuple< real_type1 , real_type2 > real_type ;


typedef std::tuple<T_net_type_NOSPEC > net_type1 ;
typedef std::tuple<T_net_type__KEY_SUPPLY0 > net_type2 ;
typedef std::tuple<T_net_type__KEY_SUPPLY1 > net_type3 ;
typedef std::tuple<T_net_type__KEY_TRI > net_type4 ;
typedef std::tuple<T_net_type__KEY_TRIAND > net_type5 ;
typedef std::tuple<T_net_type__KEY_TRIOR > net_type6 ;
typedef std::tuple<T_net_type__KEY_TRI0 > net_type7 ;
typedef std::tuple<T_net_type__KEY_TRI1 > net_type8 ;
typedef std::tuple<T_net_type__KEY_UWIRE > net_type9 ;
typedef std::tuple<T_net_type__KEY_WIRE > net_type10 ;
typedef std::tuple<T_net_type__KEY_WAND > net_type11 ;
typedef std::tuple<T_net_type__KEY_WOR > net_type12 ;
typedef std::tuple< net_type1 , net_type2 , net_type3 , net_type4 , net_type5 , net_type6 , net_type7 , net_type8 , net_type9 , net_type10 , net_type11 , net_type12 > net_type ;


typedef std::tuple<T_time_declaration , std::list< variable_type> > time_declaration1 ;
typedef std::tuple< time_declaration1 > time_declaration ;


typedef std::tuple<T_reg_declaration ,  signed , range , std::list< variable_type> > reg_declaration1 ;
typedef std::tuple< reg_declaration1 > reg_declaration ;


typedef std::tuple<T_realtime_declaration , std::list< real_type> > realtime_declaration1 ;
typedef std::tuple< realtime_declaration1 > realtime_declaration ;


typedef std::tuple<T_real_declaration , std::list< real_type> > real_declaration1 ;
typedef std::tuple< real_declaration1 > real_declaration ;


typedef std::tuple<T_vectored_scalared_NOSPEC > vectored_scalared1 ;
typedef std::tuple<|T_vectored_scalared_vectored > vectored_scalared2 ;
typedef std::tuple<|T_vectored_scalared_scalared > vectored_scalared3 ;
typedef std::tuple< vectored_scalared1 , vectored_scalared2 , vectored_scalared3 > vectored_scalared ;


typedef std::tuple<T_net_declaration_net_type1 ,  net_type , signed , delay3 , std::list< net_identifier_dimension_list> > net_declaration1 ;
typedef std::tuple<T_net_declaration_net_type2 ,  net_type , drive_strength , signed , delay3 , std::list< net_decl_assignment> > net_declaration2 ;
typedef std::tuple<T_net_declaration_net_type3 ,  net_type , drive_strength , vectored_scalared , signed , range , delay3 , std::list< net_identifier_dimension_list> > net_declaration3 ;
typedef std::tuple<T_net_declaration_net_type4 ,  net_type , drive_strength , vectored_scalared , signed , range , delay3 , std::list< net_decl_assignment> > net_declaration4 ;
typedef std::tuple<T_net_declaration_trireg_1 ,  charge_strength , signed , delay3 , std::list< net_identifier_dimension_list> > net_declaration5 ;
typedef std::tuple<T_net_declaration_trireg_2 ,  drive_strength , signed , delay3 , std::list< net_decl_assignment> > net_declaration6 ;
typedef std::tuple<T_net_declaration_trireg_3 ,  charge_strength , vectored_scalared , signed , range , delay3 > net_declaration7 ;
typedef std::tuple<T_net_declaration_trireg_4 ,  drive_strength , vectored_scalared , signed , range , delay3 , std::list< net_decl_assignment> > net_declaration8 ;
typedef std::tuple< net_declaration1 , net_declaration2 , net_declaration3 , net_declaration4 , net_declaration5 , net_declaration6 , net_declaration7 , net_declaration8 > net_declaration ;


typedef std::tuple<T_integer_declaration , std::list< variable_type> > integer_declaration1 ;
typedef std::tuple< integer_declaration1 > integer_declaration ;


typedef std::tuple<T_event_declaration , std::list< event_identifier_dimension_list> > event_declaration1 ;
typedef std::tuple< event_declaration1 > event_declaration ;


typedef std::tuple<T_output_variable_type_INTEGER > output_variable_type1 ;
typedef std::tuple<T_output_variable_type_TIME > output_variable_type2 ;
typedef std::tuple< output_variable_type1 , output_variable_type2 > output_variable_type ;


typedef std::tuple<T_output_declaration_net ,  net_type , signed , range , std::list< identifier> > output_declaration1 ;
typedef std::tuple<|T_output_declaration_reg ,  signed , range , std::list< port_identifier_equ1_expression_opt> > output_declaration2 ;
typedef std::tuple<|T_output_declaration_var ,  output_variable_type , std::list< port_identifier_equ1_expression_opt> > output_declaration3 ;
typedef std::tuple< output_declaration1 , output_declaration2 , output_declaration3 > output_declaration ;


typedef std::tuple<T_input_declaration ,  net_type , signed , range , std::list< identifier> > input_declaration1 ;
typedef std::tuple< input_declaration1 > input_declaration ;


typedef std::tuple<T_inout_declaration ,  net_type , signed , range , std::list< identifier> > inout_declaration1 ;
typedef std::tuple< inout_declaration1 > inout_declaration ;


typedef std::tuple<T_parameter_type__NOSPEC > parameter_type1 ;
typedef std::tuple<T_parameter_type__INTEGER > parameter_type2 ;
typedef std::tuple<T_parameter_type__REAL > parameter_type3 ;
typedef std::tuple<T_parameter_type__REALTIME > parameter_type4 ;
typedef std::tuple<T_parameter_type__TIME > parameter_type5 ;
typedef std::tuple< parameter_type1 , parameter_type2 , parameter_type3 , parameter_type4 , parameter_type5 > parameter_type ;


typedef std::tuple<T_specparam_declaration ,  range , std::list< specparam_assignment> > specparam_declaration1 ;
typedef std::tuple< specparam_declaration1 > specparam_declaration ;


typedef std::tuple<T_parameter_declaration_1 ,  signed , range , std::list< param_assignment> > parameter_declaration1 ;
typedef std::tuple<T_parameter_declaration_2 ,  parameter_type , std::list< param_assignment> > parameter_declaration2 ;
typedef std::tuple< parameter_declaration1 , parameter_declaration2 > parameter_declaration ;


typedef std::tuple<T_parameter_declaration_gen_1 ,  parameter_type , signed , range , param_assignment > parameter_declaration_gen1 ;
typedef std::tuple< parameter_declaration_gen1 > parameter_declaration_gen ;


typedef std::tuple<T_local_parameter_declaration_1 ,  signed , range , std::list< param_assignment> > local_parameter_declaration1 ;
typedef std::tuple<T_local_parameter_declaration_2 ,  parameter_type , std::list< param_assignment> > local_parameter_declaration2 ;
typedef std::tuple< local_parameter_declaration1 , local_parameter_declaration2 > local_parameter_declaration ;


typedef std::tuple<T_signed_FALSE > signed1 ;
typedef std::tuple<T_signed_TRUE > signed2 ;
typedef std::tuple< signed1 , signed2 > signed ;


typedef std::tuple<T_colon_config_opt_FALSE > colon_config_opt1 ;
typedef std::tuple<T_colon_config_opt_TRUE > colon_config_opt2 ;
typedef std::tuple< colon_config_opt1 , colon_config_opt2 > colon_config_opt ;


typedef std::tuple<T_use_clause ,  library_identifier_period_opt_cell_identifier , colon_config_opt > use_clause1 ;
typedef std::tuple< use_clause1 > use_clause ;


typedef std::tuple<T_config_rule_statement__default , std::list< identifier> > config_rule_statement1 ;
typedef std::tuple<T_config_rule_statement__inst_lib , std::list< identifier> , std::list< identifier> > config_rule_statement2 ;
typedef std::tuple<T_config_rule_statement__inst_use , std::list< identifier> , use_clause > config_rule_statement3 ;
typedef std::tuple<T_config_rule_statement__cell_lib ,  library_identifier_period_opt_cell_identifier , std::list< identifier> > config_rule_statement4 ;
typedef std::tuple<T_config_rule_statement__cell_use ,  library_identifier_period_opt_cell_identifier , use_clause > config_rule_statement5 ;
typedef std::tuple< config_rule_statement1 , config_rule_statement2 , config_rule_statement3 , config_rule_statement4 , config_rule_statement5 > config_rule_statement ;


typedef std::tuple<T_lib_cell_identifier ,  identifier , identifier > library_identifier_period_opt_cell_identifier1 ;
typedef std::tuple< library_identifier_period_opt_cell_identifier1 > library_identifier_period_opt_cell_identifier ;


typedef std::tuple<T_design_statement , std::list< library_identifier_period_opt_cell_identifier> > design_statement1 ;
typedef std::tuple< design_statement1 > design_statement ;


typedef std::tuple<T_config_declaration ,  identifier , design_statement , std::list< config_rule_statement> > config_declaration1 ;
typedef std::tuple< config_declaration1 > config_declaration ;


typedef std::tuple<T_module_item__port_declaration ,  port_declaration > module_item1 ;
typedef std::tuple<T_module_item__generate_region ,  generate_region > module_item2 ;
typedef std::tuple<T_module_item__specify_block ,  specify_block > module_item3 ;
typedef std::tuple<T_module_item__parameter_declaration , std::list< attribute_instance> , parameter_declaration > module_item4 ;
typedef std::tuple<T_module_item__specparam_declaration , std::list< attribute_instance> , specparam_declaration > module_item5 ;
typedef std::tuple<T_module_item__net_declaration , std::list< attribute_instance> , net_declaration > module_item6 ;
typedef std::tuple<T_module_item__reg_declaration , std::list< attribute_instance> , reg_declaration > module_item7 ;
typedef std::tuple<T_module_item__integer_declaration , std::list< attribute_instance> , integer_declaration > module_item8 ;
typedef std::tuple<T_module_item__real_declaration , std::list< attribute_instance> , real_declaration > module_item9 ;
typedef std::tuple<T_module_item__time_declaration , std::list< attribute_instance> , time_declaration > module_item10 ;
typedef std::tuple<T_module_item__realtime_declaration , std::list< attribute_instance> , realtime_declaration > module_item11 ;
typedef std::tuple<T_module_item__event_declaration , std::list< attribute_instance> , event_declaration > module_item12 ;
typedef std::tuple<T_module_item__genvar_declaration , std::list< attribute_instance> , genvar_declaration > module_item13 ;
typedef std::tuple<T_module_item__task_declaration , std::list< attribute_instance> , task_declaration > module_item14 ;
typedef std::tuple<T_module_item__function_declaration , std::list< attribute_instance> , function_declaration > module_item15 ;
typedef std::tuple<T_module_item__local_parameter_declaration , std::list< attribute_instance> , local_parameter_declaration > module_item16 ;
typedef std::tuple<T_module_item__parameter_override , std::list< attribute_instance> , std::list< defparam_assignment> > module_item17 ;
typedef std::tuple<T_module_item__continuous_assign , std::list< attribute_instance> , continuous_assign > module_item18 ;
typedef std::tuple<T_module_item__gate_instantiation , std::list< attribute_instance> , gate_instantiation > module_item19 ;
typedef std::tuple<T_module_item__udp_instantiation , std::list< attribute_instance> , udp_instantiation > module_item20 ;
typedef std::tuple<T_module_item__module_instantiation , std::list< attribute_instance> , module_instantiation > module_item21 ;
typedef std::tuple<T_module_item__initial_construct , std::list< attribute_instance> , initial_construct > module_item22 ;
typedef std::tuple<T_module_item__always_construct , std::list< attribute_instance> , always_construct > module_item23 ;
typedef std::tuple<T_module_item__loop_generate_construct , std::list< attribute_instance> , loop_generate_construct > module_item24 ;
typedef std::tuple<T_module_item__conditional_generate_construct , std::list< attribute_instance> , conditional_generate_construct > module_item25 ;
typedef std::tuple< module_item1 , module_item2 , module_item3 , module_item4 , module_item5 , module_item6 , module_item7 , module_item8 , module_item9 , module_item10 , module_item11 , module_item12 , module_item13 , module_item14 , module_item15 , module_item16 , module_item17 , module_item18 , module_item19 , module_item20 , module_item21 , module_item22 , module_item23 , module_item24 , module_item25 > module_item ;


typedef std::tuple<T_port_declaration__inout_declaration , std::list< attribute_instance> , inout_declaration > port_declaration1 ;
typedef std::tuple<T_port_declaration__input_declaration , std::list< attribute_instance> , input_declaration > port_declaration2 ;
typedef std::tuple<T_port_declaration__output_declaration , std::list< attribute_instance> , output_declaration > port_declaration3 ;
typedef std::tuple< port_declaration1 , port_declaration2 , port_declaration3 > port_declaration ;


typedef std::tuple<T_port_reference ,  identifier , range_expression > port_reference1 ;
typedef std::tuple< port_reference1 > port_reference ;


typedef std::tuple<T_port_expression , std::list< port_reference> > port_expression1 ;
typedef std::tuple< port_expression1 > port_expression ;


typedef std::tuple<T_port_exp ,  identifier , port_expression > port1 ;
typedef std::tuple<T_port_net ,  io_type , netreg_type , signed , range , port_expression , expression > port2 ;
typedef std::tuple< port1 , port2 > port ;


typedef std::tuple<T_module_declaration__1 , std::list< attribute_instance> , identifier , std::list< parameter_declaration_gen> , std::list< port> , std::list< module_item> > module_declaration1 ;
typedef std::tuple< module_declaration1 > module_declaration ;


typedef std::tuple<T_description__module_declaration ,  module_declaration > description1 ;
typedef std::tuple<T_description__udp_declaration ,  udp_declaration > description2 ;
typedef std::tuple<T_description__config_declaration ,  config_declaration > description3 ;
typedef std::tuple< description1 , description2 , description3 > description ;

