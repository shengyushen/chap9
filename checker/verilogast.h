namespace Verilogast {

typedef std::tuple < headtype_T_tf_io_declaration_gen1 ,  io_type , reg , signed , range , identifier > tailtype_tf_io_declaration_gen1 ;
tailtype_tf_io_declaration_gen1
T_tf_io_declaration_gen1 ( 
 io_type  i1 ,
 reg  i2 ,
 signed  i3 ,
 range  i4 ,
 identifier i5
) { 
  return std::make_tuple ( headtype_T_tf_io_declaration_gen1  i1 ,  i2 ,  i3 ,  i4 ,  i5 ) ; 
} 
typedef std::tuple < headtype_T_tf_io_declaration_gen2 ,  io_type , task_port_type , identifier > tailtype_tf_io_declaration_gen2 ;
tailtype_tf_io_declaration_gen2
T_tf_io_declaration_gen2 ( 
 io_type  i1 ,
 task_port_type  i2 ,
 identifier i3
) { 
  return std::make_tuple ( headtype_T_tf_io_declaration_gen2  i1 ,  i2 ,  i3 ) ; 
} 
typedef boost::variant < tailtype_tf_io_declaration_gen1 , tailtype_tf_io_declaration_gen2 > tf_io_declaration_gen ;


typedef std::tuple < headtype_T_statement_or_block_item_statement ,  statement > tailtype_statement_or_block_item1 ;
tailtype_statement_or_block_item1
T_statement_or_block_item_statement ( 
 statement i1
) { 
  return std::make_tuple ( headtype_T_statement_or_block_item_statement  i1 ) ; 
} 
typedef std::tuple < headtype_T_statement_or_block_item_block ,  block_item_declaration > tailtype_statement_or_block_item2 ;
tailtype_statement_or_block_item2
T_statement_or_block_item_block ( 
 block_item_declaration i1
) { 
  return std::make_tuple ( headtype_T_statement_or_block_item_block  i1 ) ; 
} 
typedef boost::variant < tailtype_statement_or_block_item1 , tailtype_statement_or_block_item2 > statement_or_block_item ;


typedef std::tuple < headtype_T_netreg_type__NOSPEC > tailtype_netreg_type1 ;
tailtype_netreg_type1
T_netreg_type__NOSPEC (  ) { 
 return std::make_tuple ( headtype_T_netreg_type__NOSPEC  ) ; 
} 
typedef std::tuple < headtype_T_netreg_type__KEY_SUPPLY0 > tailtype_netreg_type2 ;
tailtype_netreg_type2
T_netreg_type__KEY_SUPPLY0 (  ) { 
 return std::make_tuple ( headtype_T_netreg_type__KEY_SUPPLY0  ) ; 
} 
typedef std::tuple < headtype_T_netreg_type__KEY_SUPPLY1 > tailtype_netreg_type3 ;
tailtype_netreg_type3
T_netreg_type__KEY_SUPPLY1 (  ) { 
 return std::make_tuple ( headtype_T_netreg_type__KEY_SUPPLY1  ) ; 
} 
typedef std::tuple < headtype_T_netreg_type__KEY_TRI > tailtype_netreg_type4 ;
tailtype_netreg_type4
T_netreg_type__KEY_TRI (  ) { 
 return std::make_tuple ( headtype_T_netreg_type__KEY_TRI  ) ; 
} 
typedef std::tuple < headtype_T_netreg_type__KEY_TRIAND > tailtype_netreg_type5 ;
tailtype_netreg_type5
T_netreg_type__KEY_TRIAND (  ) { 
 return std::make_tuple ( headtype_T_netreg_type__KEY_TRIAND  ) ; 
} 
typedef std::tuple < headtype_T_netreg_type__KEY_TRIOR > tailtype_netreg_type6 ;
tailtype_netreg_type6
T_netreg_type__KEY_TRIOR (  ) { 
 return std::make_tuple ( headtype_T_netreg_type__KEY_TRIOR  ) ; 
} 
typedef std::tuple < headtype_T_netreg_type__KEY_TRI0 > tailtype_netreg_type7 ;
tailtype_netreg_type7
T_netreg_type__KEY_TRI0 (  ) { 
 return std::make_tuple ( headtype_T_netreg_type__KEY_TRI0  ) ; 
} 
typedef std::tuple < headtype_T_netreg_type__KEY_TRI1 > tailtype_netreg_type8 ;
tailtype_netreg_type8
T_netreg_type__KEY_TRI1 (  ) { 
 return std::make_tuple ( headtype_T_netreg_type__KEY_TRI1  ) ; 
} 
typedef std::tuple < headtype_T_netreg_type__KEY_UWIRE > tailtype_netreg_type9 ;
tailtype_netreg_type9
T_netreg_type__KEY_UWIRE (  ) { 
 return std::make_tuple ( headtype_T_netreg_type__KEY_UWIRE  ) ; 
} 
typedef std::tuple < headtype_T_netreg_type__KEY_WIRE > tailtype_netreg_type10 ;
tailtype_netreg_type10
T_netreg_type__KEY_WIRE (  ) { 
 return std::make_tuple ( headtype_T_netreg_type__KEY_WIRE  ) ; 
} 
typedef std::tuple < headtype_T_netreg_type__KEY_WAND > tailtype_netreg_type11 ;
tailtype_netreg_type11
T_netreg_type__KEY_WAND (  ) { 
 return std::make_tuple ( headtype_T_netreg_type__KEY_WAND  ) ; 
} 
typedef std::tuple < headtype_T_netreg_type__KEY_WOR > tailtype_netreg_type12 ;
tailtype_netreg_type12
T_netreg_type__KEY_WOR (  ) { 
 return std::make_tuple ( headtype_T_netreg_type__KEY_WOR  ) ; 
} 
typedef std::tuple < headtype_T_netreg_type__KEY_REG > tailtype_netreg_type13 ;
tailtype_netreg_type13
T_netreg_type__KEY_REG (  ) { 
 return std::make_tuple ( headtype_T_netreg_type__KEY_REG  ) ; 
} 
typedef std::tuple < headtype_T_netreg_type__KEY_INTEGER > tailtype_netreg_type14 ;
tailtype_netreg_type14
T_netreg_type__KEY_INTEGER (  ) { 
 return std::make_tuple ( headtype_T_netreg_type__KEY_INTEGER  ) ; 
} 
typedef std::tuple < headtype_T_netreg_type__KEY_TIME > tailtype_netreg_type15 ;
tailtype_netreg_type15
T_netreg_type__KEY_TIME (  ) { 
 return std::make_tuple ( headtype_T_netreg_type__KEY_TIME  ) ; 
} 
typedef boost::variant < tailtype_netreg_type1 , tailtype_netreg_type2 , tailtype_netreg_type3 , tailtype_netreg_type4 , tailtype_netreg_type5 , tailtype_netreg_type6 , tailtype_netreg_type7 , tailtype_netreg_type8 , tailtype_netreg_type9 , tailtype_netreg_type10 , tailtype_netreg_type11 , tailtype_netreg_type12 , tailtype_netreg_type13 , tailtype_netreg_type14 , tailtype_netreg_type15 > netreg_type ;


typedef std::tuple < headtype_T_io_declaration_net ,  io_type , netreg_type , signed , range , port_identifier_equ1_expression_opt > tailtype_io_declaration1 ;
tailtype_io_declaration1
T_io_declaration_net ( 
 io_type  i1 ,
 netreg_type  i2 ,
 signed  i3 ,
 range  i4 ,
 port_identifier_equ1_expression_opt i5
) { 
  return std::make_tuple ( headtype_T_io_declaration_net  i1 ,  i2 ,  i3 ,  i4 ,  i5 ) ; 
} 
typedef boost::variant < tailtype_io_declaration1 > io_declaration ;


typedef std::tuple < headtype_T_io_type_NOSPEC > tailtype_io_type1 ;
tailtype_io_type1
T_io_type_NOSPEC (  ) { 
 return std::make_tuple ( headtype_T_io_type_NOSPEC  ) ; 
} 
typedef std::tuple < headtype_T_io_type_output > tailtype_io_type2 ;
tailtype_io_type2
T_io_type_output (  ) { 
 return std::make_tuple ( headtype_T_io_type_output  ) ; 
} 
typedef std::tuple < headtype_T_io_type_input > tailtype_io_type3 ;
tailtype_io_type3
T_io_type_input (  ) { 
 return std::make_tuple ( headtype_T_io_type_input  ) ; 
} 
typedef std::tuple < headtype_T_io_type_inout > tailtype_io_type4 ;
tailtype_io_type4
T_io_type_inout (  ) { 
 return std::make_tuple ( headtype_T_io_type_inout  ) ; 
} 
typedef boost::variant < tailtype_io_type1 , tailtype_io_type2 , tailtype_io_type3 , tailtype_io_type4 > io_type ;


typedef std::tuple < headtype_T_system_function_identifier ,  string > tailtype_system_function_identifier1 ;
tailtype_system_function_identifier1
T_system_function_identifier ( 
 string i1
) { 
  return std::make_tuple ( headtype_T_system_function_identifier  i1 ) ; 
} 
typedef boost::variant < tailtype_system_function_identifier1 > system_function_identifier ;


typedef std::tuple < headtype_T_string ,  string > tailtype_string_typedef1 ;
tailtype_string_typedef1
T_string ( 
 string i1
) { 
  return std::make_tuple ( headtype_T_string  i1 ) ; 
} 
typedef boost::variant < tailtype_string_typedef1 > string_typedef ;


typedef std::tuple < headtype_T_identifier_NOSPEC > tailtype_identifier1 ;
tailtype_identifier1
T_identifier_NOSPEC (  ) { 
 return std::make_tuple ( headtype_T_identifier_NOSPEC  ) ; 
} 
typedef std::tuple < headtype_T_identifier ,  string > tailtype_identifier2 ;
tailtype_identifier2
T_identifier ( 
 string i1
) { 
  return std::make_tuple ( headtype_T_identifier  i1 ) ; 
} 
typedef boost::variant < tailtype_identifier1 , tailtype_identifier2 > identifier ;


typedef std::tuple < headtype_T_edge_symbol_SIMID ,  string > tailtype_edge_symbol1 ;
tailtype_edge_symbol1
T_edge_symbol_SIMID ( 
 string i1
) { 
  return std::make_tuple ( headtype_T_edge_symbol_SIMID  i1 ) ; 
} 
typedef std::tuple < headtype_T_edge_symbol_MUL > tailtype_edge_symbol2 ;
tailtype_edge_symbol2
T_edge_symbol_MUL (  ) { 
 return std::make_tuple ( headtype_T_edge_symbol_MUL  ) ; 
} 
typedef boost::variant < tailtype_edge_symbol1 , tailtype_edge_symbol2 > edge_symbol ;


typedef std::tuple < headtype_T_next_state_UNSIGNED_NUMBER ,  int > tailtype_next_state1 ;
tailtype_next_state1
T_next_state_UNSIGNED_NUMBER ( 
 int i1
) { 
  return std::make_tuple ( headtype_T_next_state_UNSIGNED_NUMBER  i1 ) ; 
} 
typedef std::tuple < headtype_T_next_state_SIMID ,  string > tailtype_next_state2 ;
tailtype_next_state2
T_next_state_SIMID ( 
 string i1
) { 
  return std::make_tuple ( headtype_T_next_state_SIMID  i1 ) ; 
} 
typedef std::tuple < headtype_T_next_state_SUB > tailtype_next_state3 ;
tailtype_next_state3
T_next_state_SUB (  ) { 
 return std::make_tuple ( headtype_T_next_state_SUB  ) ; 
} 
typedef boost::variant < tailtype_next_state1 , tailtype_next_state2 , tailtype_next_state3 > next_state ;


typedef std::tuple < headtype_T_current_state_UNSIGNED_NUMBER ,  int > tailtype_current_state1 ;
tailtype_current_state1
T_current_state_UNSIGNED_NUMBER ( 
 int i1
) { 
  return std::make_tuple ( headtype_T_current_state_UNSIGNED_NUMBER  i1 ) ; 
} 
typedef std::tuple < headtype_T_current_state_SIMID ,  string > tailtype_current_state2 ;
tailtype_current_state2
T_current_state_SIMID ( 
 string i1
) { 
  return std::make_tuple ( headtype_T_current_state_SIMID  i1 ) ; 
} 
typedef std::tuple < headtype_T_current_state_OP2_QUESTION > tailtype_current_state3 ;
tailtype_current_state3
T_current_state_OP2_QUESTION (  ) { 
 return std::make_tuple ( headtype_T_current_state_OP2_QUESTION  ) ; 
} 
typedef boost::variant < tailtype_current_state1 , tailtype_current_state2 , tailtype_current_state3 > current_state ;


typedef std::tuple < headtype_T_number_UNSIGNED_NUMBER ,  int > tailtype_number1 ;
tailtype_number1
T_number_UNSIGNED_NUMBER ( 
 int i1
) { 
  return std::make_tuple ( headtype_T_number_UNSIGNED_NUMBER  i1 ) ; 
} 
typedef std::tuple < headtype_T_number_UNSIGNED_NUMBER_size ,  (int , int) > tailtype_number2 ;
tailtype_number2
T_number_UNSIGNED_NUMBER_size ( 
 (int  i1 ,
 int) i2
) { 
  return std::make_tuple ( headtype_T_number_UNSIGNED_NUMBER_size  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_number_OCTAL_NUMBER ,  (int , string) > tailtype_number3 ;
tailtype_number3
T_number_OCTAL_NUMBER ( 
 (int  i1 ,
 string) i2
) { 
  return std::make_tuple ( headtype_T_number_OCTAL_NUMBER  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_number_BINARY_NUMBER ,  (int , string) > tailtype_number4 ;
tailtype_number4
T_number_BINARY_NUMBER ( 
 (int  i1 ,
 string) i2
) { 
  return std::make_tuple ( headtype_T_number_BINARY_NUMBER  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_number_HEX_NUMBER ,  (int , string) > tailtype_number5 ;
tailtype_number5
T_number_HEX_NUMBER ( 
 (int  i1 ,
 string) i2
) { 
  return std::make_tuple ( headtype_T_number_HEX_NUMBER  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_number_REAL_NUMBER ,  string > tailtype_number6 ;
tailtype_number6
T_number_REAL_NUMBER ( 
 string i1
) { 
  return std::make_tuple ( headtype_T_number_REAL_NUMBER  i1 ) ; 
} 
typedef boost::variant < tailtype_number1 , tailtype_number2 , tailtype_number3 , tailtype_number4 , tailtype_number5 , tailtype_number6 > number ;


typedef std::tuple < headtype_T_output_symbol_UNSIGNED_NUMBER ,  int > tailtype_output_symbol1 ;
tailtype_output_symbol1
T_output_symbol_UNSIGNED_NUMBER ( 
 int i1
) { 
  return std::make_tuple ( headtype_T_output_symbol_UNSIGNED_NUMBER  i1 ) ; 
} 
typedef std::tuple < headtype_T_output_symbol_SIMID ,  string > tailtype_output_symbol2 ;
tailtype_output_symbol2
T_output_symbol_SIMID ( 
 string i1
) { 
  return std::make_tuple ( headtype_T_output_symbol_SIMID  i1 ) ; 
} 
typedef boost::variant < tailtype_output_symbol1 , tailtype_output_symbol2 > output_symbol ;


typedef std::tuple < headtype_T_level_symbol_UNSIGNED_NUMBER ,  int > tailtype_level_symbol1 ;
tailtype_level_symbol1
T_level_symbol_UNSIGNED_NUMBER ( 
 int i1
) { 
  return std::make_tuple ( headtype_T_level_symbol_UNSIGNED_NUMBER  i1 ) ; 
} 
typedef std::tuple < headtype_T_level_symbol_SIMID ,  string > tailtype_level_symbol2 ;
tailtype_level_symbol2
T_level_symbol_SIMID ( 
 string i1
) { 
  return std::make_tuple ( headtype_T_level_symbol_SIMID  i1 ) ; 
} 
typedef std::tuple < headtype_T_level_symbol_QUESTION > tailtype_level_symbol3 ;
tailtype_level_symbol3
T_level_symbol_QUESTION (  ) { 
 return std::make_tuple ( headtype_T_level_symbol_QUESTION  ) ; 
} 
typedef boost::variant < tailtype_level_symbol1 , tailtype_level_symbol2 , tailtype_level_symbol3 > level_symbol ;


typedef std::tuple < headtype_T_binary_module_path_operator_EQU2 > tailtype_binary_module_path_operator1 ;
tailtype_binary_module_path_operator1
T_binary_module_path_operator_EQU2 (  ) { 
 return std::make_tuple ( headtype_T_binary_module_path_operator_EQU2  ) ; 
} 
typedef std::tuple < headtype_T_binary_module_path_operator_NEQ2 > tailtype_binary_module_path_operator2 ;
tailtype_binary_module_path_operator2
T_binary_module_path_operator_NEQ2 (  ) { 
 return std::make_tuple ( headtype_T_binary_module_path_operator_NEQ2  ) ; 
} 
typedef std::tuple < headtype_T_binary_module_path_operator_AND2 > tailtype_binary_module_path_operator3 ;
tailtype_binary_module_path_operator3
T_binary_module_path_operator_AND2 (  ) { 
 return std::make_tuple ( headtype_T_binary_module_path_operator_AND2  ) ; 
} 
typedef std::tuple < headtype_T_binary_module_path_operator_OR2 > tailtype_binary_module_path_operator4 ;
tailtype_binary_module_path_operator4
T_binary_module_path_operator_OR2 (  ) { 
 return std::make_tuple ( headtype_T_binary_module_path_operator_OR2  ) ; 
} 
typedef std::tuple < headtype_T_binary_module_path_operator_AND1 > tailtype_binary_module_path_operator5 ;
tailtype_binary_module_path_operator5
T_binary_module_path_operator_AND1 (  ) { 
 return std::make_tuple ( headtype_T_binary_module_path_operator_AND1  ) ; 
} 
typedef std::tuple < headtype_T_binary_module_path_operator_OR1 > tailtype_binary_module_path_operator6 ;
tailtype_binary_module_path_operator6
T_binary_module_path_operator_OR1 (  ) { 
 return std::make_tuple ( headtype_T_binary_module_path_operator_OR1  ) ; 
} 
typedef std::tuple < headtype_T_binary_module_path_operator_XOR > tailtype_binary_module_path_operator7 ;
tailtype_binary_module_path_operator7
T_binary_module_path_operator_XOR (  ) { 
 return std::make_tuple ( headtype_T_binary_module_path_operator_XOR  ) ; 
} 
typedef std::tuple < headtype_T_binary_module_path_operator_XNOR > tailtype_binary_module_path_operator8 ;
tailtype_binary_module_path_operator8
T_binary_module_path_operator_XNOR (  ) { 
 return std::make_tuple ( headtype_T_binary_module_path_operator_XNOR  ) ; 
} 
typedef boost::variant < tailtype_binary_module_path_operator1 , tailtype_binary_module_path_operator2 , tailtype_binary_module_path_operator3 , tailtype_binary_module_path_operator4 , tailtype_binary_module_path_operator5 , tailtype_binary_module_path_operator6 , tailtype_binary_module_path_operator7 , tailtype_binary_module_path_operator8 > binary_module_path_operator ;


typedef std::tuple < headtype_T_unary_module_path_operator_GANTANHAO > tailtype_unary_module_path_operator1 ;
tailtype_unary_module_path_operator1
T_unary_module_path_operator_GANTANHAO (  ) { 
 return std::make_tuple ( headtype_T_unary_module_path_operator_GANTANHAO  ) ; 
} 
typedef std::tuple < headtype_T_unary_module_path_operator_BOLANGHAO > tailtype_unary_module_path_operator2 ;
tailtype_unary_module_path_operator2
T_unary_module_path_operator_BOLANGHAO (  ) { 
 return std::make_tuple ( headtype_T_unary_module_path_operator_BOLANGHAO  ) ; 
} 
typedef std::tuple < headtype_T_unary_module_path_operator_AND > tailtype_unary_module_path_operator3 ;
tailtype_unary_module_path_operator3
T_unary_module_path_operator_AND (  ) { 
 return std::make_tuple ( headtype_T_unary_module_path_operator_AND  ) ; 
} 
typedef std::tuple < headtype_T_unary_module_path_operator_NAND > tailtype_unary_module_path_operator4 ;
tailtype_unary_module_path_operator4
T_unary_module_path_operator_NAND (  ) { 
 return std::make_tuple ( headtype_T_unary_module_path_operator_NAND  ) ; 
} 
typedef std::tuple < headtype_T_unary_module_path_operator_OR > tailtype_unary_module_path_operator5 ;
tailtype_unary_module_path_operator5
T_unary_module_path_operator_OR (  ) { 
 return std::make_tuple ( headtype_T_unary_module_path_operator_OR  ) ; 
} 
typedef std::tuple < headtype_T_unary_module_path_operator_NOR > tailtype_unary_module_path_operator6 ;
tailtype_unary_module_path_operator6
T_unary_module_path_operator_NOR (  ) { 
 return std::make_tuple ( headtype_T_unary_module_path_operator_NOR  ) ; 
} 
typedef std::tuple < headtype_T_unary_module_path_operator_XOR > tailtype_unary_module_path_operator7 ;
tailtype_unary_module_path_operator7
T_unary_module_path_operator_XOR (  ) { 
 return std::make_tuple ( headtype_T_unary_module_path_operator_XOR  ) ; 
} 
typedef std::tuple < headtype_T_unary_module_path_operator_XNOR > tailtype_unary_module_path_operator8 ;
tailtype_unary_module_path_operator8
T_unary_module_path_operator_XNOR (  ) { 
 return std::make_tuple ( headtype_T_unary_module_path_operator_XNOR  ) ; 
} 
typedef boost::variant < tailtype_unary_module_path_operator1 , tailtype_unary_module_path_operator2 , tailtype_unary_module_path_operator3 , tailtype_unary_module_path_operator4 , tailtype_unary_module_path_operator5 , tailtype_unary_module_path_operator6 , tailtype_unary_module_path_operator7 , tailtype_unary_module_path_operator8 > unary_module_path_operator ;


typedef std::tuple < headtype_T_binary_operator_MUL > tailtype_binary_operator1 ;
tailtype_binary_operator1
T_binary_operator_MUL (  ) { 
 return std::make_tuple ( headtype_T_binary_operator_MUL  ) ; 
} 
typedef std::tuple < headtype_T_binary_operator_DIV > tailtype_binary_operator2 ;
tailtype_binary_operator2
T_binary_operator_DIV (  ) { 
 return std::make_tuple ( headtype_T_binary_operator_DIV  ) ; 
} 
typedef std::tuple < headtype_T_binary_operator_MOD > tailtype_binary_operator3 ;
tailtype_binary_operator3
T_binary_operator_MOD (  ) { 
 return std::make_tuple ( headtype_T_binary_operator_MOD  ) ; 
} 
typedef std::tuple < headtype_T_binary_operator_EQU2 > tailtype_binary_operator4 ;
tailtype_binary_operator4
T_binary_operator_EQU2 (  ) { 
 return std::make_tuple ( headtype_T_binary_operator_EQU2  ) ; 
} 
typedef std::tuple < headtype_T_binary_operator_NEQ2 > tailtype_binary_operator5 ;
tailtype_binary_operator5
T_binary_operator_NEQ2 (  ) { 
 return std::make_tuple ( headtype_T_binary_operator_NEQ2  ) ; 
} 
typedef std::tuple < headtype_T_binary_operator_EQU3 > tailtype_binary_operator6 ;
tailtype_binary_operator6
T_binary_operator_EQU3 (  ) { 
 return std::make_tuple ( headtype_T_binary_operator_EQU3  ) ; 
} 
typedef std::tuple < headtype_T_binary_operator_NEQ3 > tailtype_binary_operator7 ;
tailtype_binary_operator7
T_binary_operator_NEQ3 (  ) { 
 return std::make_tuple ( headtype_T_binary_operator_NEQ3  ) ; 
} 
typedef std::tuple < headtype_T_binary_operator_POWER > tailtype_binary_operator8 ;
tailtype_binary_operator8
T_binary_operator_POWER (  ) { 
 return std::make_tuple ( headtype_T_binary_operator_POWER  ) ; 
} 
typedef std::tuple < headtype_T_binary_operator_LT > tailtype_binary_operator9 ;
tailtype_binary_operator9
T_binary_operator_LT (  ) { 
 return std::make_tuple ( headtype_T_binary_operator_LT  ) ; 
} 
typedef std::tuple < headtype_T_binary_operator_LE > tailtype_binary_operator10 ;
tailtype_binary_operator10
T_binary_operator_LE (  ) { 
 return std::make_tuple ( headtype_T_binary_operator_LE  ) ; 
} 
typedef std::tuple < headtype_T_binary_operator_GT > tailtype_binary_operator11 ;
tailtype_binary_operator11
T_binary_operator_GT (  ) { 
 return std::make_tuple ( headtype_T_binary_operator_GT  ) ; 
} 
typedef std::tuple < headtype_T_binary_operator_GE > tailtype_binary_operator12 ;
tailtype_binary_operator12
T_binary_operator_GE (  ) { 
 return std::make_tuple ( headtype_T_binary_operator_GE  ) ; 
} 
typedef std::tuple < headtype_T_binary_operator_LOGICAL_RIGHTSHIFT > tailtype_binary_operator13 ;
tailtype_binary_operator13
T_binary_operator_LOGICAL_RIGHTSHIFT (  ) { 
 return std::make_tuple ( headtype_T_binary_operator_LOGICAL_RIGHTSHIFT  ) ; 
} 
typedef std::tuple < headtype_T_binary_operator_LOGICAL_LEFTSHIFT > tailtype_binary_operator14 ;
tailtype_binary_operator14
T_binary_operator_LOGICAL_LEFTSHIFT (  ) { 
 return std::make_tuple ( headtype_T_binary_operator_LOGICAL_LEFTSHIFT  ) ; 
} 
typedef std::tuple < headtype_T_binary_operator_ARITHMETIC_RIGHTSHIFT > tailtype_binary_operator15 ;
tailtype_binary_operator15
T_binary_operator_ARITHMETIC_RIGHTSHIFT (  ) { 
 return std::make_tuple ( headtype_T_binary_operator_ARITHMETIC_RIGHTSHIFT  ) ; 
} 
typedef std::tuple < headtype_T_binary_operator_ARITHMETIC_LEFTSHIFT > tailtype_binary_operator16 ;
tailtype_binary_operator16
T_binary_operator_ARITHMETIC_LEFTSHIFT (  ) { 
 return std::make_tuple ( headtype_T_binary_operator_ARITHMETIC_LEFTSHIFT  ) ; 
} 
typedef std::tuple < headtype_T_binary_operator_ADD > tailtype_binary_operator17 ;
tailtype_binary_operator17
T_binary_operator_ADD (  ) { 
 return std::make_tuple ( headtype_T_binary_operator_ADD  ) ; 
} 
typedef std::tuple < headtype_T_binary_operator_SUB > tailtype_binary_operator18 ;
tailtype_binary_operator18
T_binary_operator_SUB (  ) { 
 return std::make_tuple ( headtype_T_binary_operator_SUB  ) ; 
} 
typedef std::tuple < headtype_T_binary_operator_AND > tailtype_binary_operator19 ;
tailtype_binary_operator19
T_binary_operator_AND (  ) { 
 return std::make_tuple ( headtype_T_binary_operator_AND  ) ; 
} 
typedef std::tuple < headtype_T_binary_operator_OR > tailtype_binary_operator20 ;
tailtype_binary_operator20
T_binary_operator_OR (  ) { 
 return std::make_tuple ( headtype_T_binary_operator_OR  ) ; 
} 
typedef std::tuple < headtype_T_binary_operator_AND2 > tailtype_binary_operator21 ;
tailtype_binary_operator21
T_binary_operator_AND2 (  ) { 
 return std::make_tuple ( headtype_T_binary_operator_AND2  ) ; 
} 
typedef std::tuple < headtype_T_binary_operator_OR2 > tailtype_binary_operator22 ;
tailtype_binary_operator22
T_binary_operator_OR2 (  ) { 
 return std::make_tuple ( headtype_T_binary_operator_OR2  ) ; 
} 
typedef std::tuple < headtype_T_binary_operator_XOR > tailtype_binary_operator23 ;
tailtype_binary_operator23
T_binary_operator_XOR (  ) { 
 return std::make_tuple ( headtype_T_binary_operator_XOR  ) ; 
} 
typedef std::tuple < headtype_T_binary_operator_XNOR > tailtype_binary_operator24 ;
tailtype_binary_operator24
T_binary_operator_XNOR (  ) { 
 return std::make_tuple ( headtype_T_binary_operator_XNOR  ) ; 
} 
typedef boost::variant < tailtype_binary_operator1 , tailtype_binary_operator2 , tailtype_binary_operator3 , tailtype_binary_operator4 , tailtype_binary_operator5 , tailtype_binary_operator6 , tailtype_binary_operator7 , tailtype_binary_operator8 , tailtype_binary_operator9 , tailtype_binary_operator10 , tailtype_binary_operator11 , tailtype_binary_operator12 , tailtype_binary_operator13 , tailtype_binary_operator14 , tailtype_binary_operator15 , tailtype_binary_operator16 , tailtype_binary_operator17 , tailtype_binary_operator18 , tailtype_binary_operator19 , tailtype_binary_operator20 , tailtype_binary_operator21 , tailtype_binary_operator22 , tailtype_binary_operator23 , tailtype_binary_operator24 > binary_operator ;


typedef std::tuple < headtype_T_unary_operator_LOGIC_NEG > tailtype_unary_operator1 ;
tailtype_unary_operator1
T_unary_operator_LOGIC_NEG (  ) { 
 return std::make_tuple ( headtype_T_unary_operator_LOGIC_NEG  ) ; 
} 
typedef std::tuple < headtype_T_unary_operator_BITWISE_NEG > tailtype_unary_operator2 ;
tailtype_unary_operator2
T_unary_operator_BITWISE_NEG (  ) { 
 return std::make_tuple ( headtype_T_unary_operator_BITWISE_NEG  ) ; 
} 
typedef std::tuple < headtype_T_unary_operator_REDUCE_NOR > tailtype_unary_operator3 ;
tailtype_unary_operator3
T_unary_operator_REDUCE_NOR (  ) { 
 return std::make_tuple ( headtype_T_unary_operator_REDUCE_NOR  ) ; 
} 
typedef std::tuple < headtype_T_unary_operator_REDUCE_NAND > tailtype_unary_operator4 ;
tailtype_unary_operator4
T_unary_operator_REDUCE_NAND (  ) { 
 return std::make_tuple ( headtype_T_unary_operator_REDUCE_NAND  ) ; 
} 
typedef std::tuple < headtype_T_unary_operator_ADD > tailtype_unary_operator5 ;
tailtype_unary_operator5
T_unary_operator_ADD (  ) { 
 return std::make_tuple ( headtype_T_unary_operator_ADD  ) ; 
} 
typedef std::tuple < headtype_T_unary_operator_SUB > tailtype_unary_operator6 ;
tailtype_unary_operator6
T_unary_operator_SUB (  ) { 
 return std::make_tuple ( headtype_T_unary_operator_SUB  ) ; 
} 
typedef std::tuple < headtype_T_unary_operator_REDUCE_AND > tailtype_unary_operator7 ;
tailtype_unary_operator7
T_unary_operator_REDUCE_AND (  ) { 
 return std::make_tuple ( headtype_T_unary_operator_REDUCE_AND  ) ; 
} 
typedef std::tuple < headtype_T_unary_operator_REDUCE_OR > tailtype_unary_operator8 ;
tailtype_unary_operator8
T_unary_operator_REDUCE_OR (  ) { 
 return std::make_tuple ( headtype_T_unary_operator_REDUCE_OR  ) ; 
} 
typedef std::tuple < headtype_T_unary_operator_REDUCE_XOR > tailtype_unary_operator9 ;
tailtype_unary_operator9
T_unary_operator_REDUCE_XOR (  ) { 
 return std::make_tuple ( headtype_T_unary_operator_REDUCE_XOR  ) ; 
} 
typedef std::tuple < headtype_T_unary_operator_REDUCE_XNOR > tailtype_unary_operator10 ;
tailtype_unary_operator10
T_unary_operator_REDUCE_XNOR (  ) { 
 return std::make_tuple ( headtype_T_unary_operator_REDUCE_XNOR  ) ; 
} 
typedef boost::variant < tailtype_unary_operator1 , tailtype_unary_operator2 , tailtype_unary_operator3 , tailtype_unary_operator4 , tailtype_unary_operator5 , tailtype_unary_operator6 , tailtype_unary_operator7 , tailtype_unary_operator8 , tailtype_unary_operator9 , tailtype_unary_operator10 > unary_operator ;


typedef std::tuple < headtype_T_edge_identifier_NOSPEC > tailtype_edge_identifier1 ;
tailtype_edge_identifier1
T_edge_identifier_NOSPEC (  ) { 
 return std::make_tuple ( headtype_T_edge_identifier_NOSPEC  ) ; 
} 
typedef std::tuple < headtype_T_edge_identifier_POS > tailtype_edge_identifier2 ;
tailtype_edge_identifier2
T_edge_identifier_POS (  ) { 
 return std::make_tuple ( headtype_T_edge_identifier_POS  ) ; 
} 
typedef std::tuple < headtype_T_edge_identifier_NEG > tailtype_edge_identifier3 ;
tailtype_edge_identifier3
T_edge_identifier_NEG (  ) { 
 return std::make_tuple ( headtype_T_edge_identifier_NEG  ) ; 
} 
typedef boost::variant < tailtype_edge_identifier1 , tailtype_edge_identifier2 , tailtype_edge_identifier3 > edge_identifier ;


typedef std::tuple < headtype_T_polarity_operator_NOSPEC > tailtype_polarity_operator1 ;
tailtype_polarity_operator1
T_polarity_operator_NOSPEC (  ) { 
 return std::make_tuple ( headtype_T_polarity_operator_NOSPEC  ) ; 
} 
typedef std::tuple < headtype_T_polarity_operator_ADD > tailtype_polarity_operator2 ;
tailtype_polarity_operator2
T_polarity_operator_ADD (  ) { 
 return std::make_tuple ( headtype_T_polarity_operator_ADD  ) ; 
} 
typedef std::tuple < headtype_T_polarity_operator_SUB > tailtype_polarity_operator3 ;
tailtype_polarity_operator3
T_polarity_operator_SUB (  ) { 
 return std::make_tuple ( headtype_T_polarity_operator_SUB  ) ; 
} 
typedef boost::variant < tailtype_polarity_operator1 , tailtype_polarity_operator2 , tailtype_polarity_operator3 > polarity_operator ;


typedef std::tuple < headtype_T_identifier_lsq_expression_rsq ,  identifier , std::list< range_expression> > tailtype_identifier_lsq_expression_rsq1 ;
tailtype_identifier_lsq_expression_rsq1
T_identifier_lsq_expression_rsq ( 
 identifier  i1 ,
 std::list< range_expression> i2
) { 
  return std::make_tuple ( headtype_T_identifier_lsq_expression_rsq  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_identifier_lsq_expression_rsq1 > identifier_lsq_expression_rsq ;


typedef std::tuple < headtype_T_hierarchical_identifier , std::list< identifier_lsq_expression_rsq> > tailtype_hierarchical_identifier1 ;
tailtype_hierarchical_identifier1
T_hierarchical_identifier ( 
 std::list< identifier_lsq_expression_rsq> i1
) { 
  return std::make_tuple ( headtype_T_hierarchical_identifier  i1 ) ; 
} 
typedef boost::variant < tailtype_hierarchical_identifier1 > hierarchical_identifier ;


typedef std::tuple < headtype_T_attr_spec ,  identifier , expression > tailtype_attr_spec1 ;
tailtype_attr_spec1
T_attr_spec ( 
 identifier  i1 ,
 expression i2
) { 
  return std::make_tuple ( headtype_T_attr_spec  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_attr_spec1 > attr_spec ;


typedef std::tuple < headtype_T_attribute_instance , std::list< attr_spec> > tailtype_attribute_instance1 ;
tailtype_attribute_instance1
T_attribute_instance ( 
 std::list< attr_spec> i1
) { 
  return std::make_tuple ( headtype_T_attribute_instance  i1 ) ; 
} 
typedef boost::variant < tailtype_attribute_instance1 > attribute_instance ;


typedef std::tuple < headtype_T_delay_value_UNSIGNED_NUMBER ,  int > tailtype_delay_value1 ;
tailtype_delay_value1
T_delay_value_UNSIGNED_NUMBER ( 
 int i1
) { 
  return std::make_tuple ( headtype_T_delay_value_UNSIGNED_NUMBER  i1 ) ; 
} 
typedef std::tuple < headtype_T_delay_value_REAL_NUMBER ,  string > tailtype_delay_value2 ;
tailtype_delay_value2
T_delay_value_REAL_NUMBER ( 
 string i1
) { 
  return std::make_tuple ( headtype_T_delay_value_REAL_NUMBER  i1 ) ; 
} 
typedef std::tuple < headtype_T_delay_value_id ,  identifier > tailtype_delay_value3 ;
tailtype_delay_value3
T_delay_value_id ( 
 identifier i1
) { 
  return std::make_tuple ( headtype_T_delay_value_id  i1 ) ; 
} 
typedef boost::variant < tailtype_delay_value1 , tailtype_delay_value2 , tailtype_delay_value3 > delay_value ;


typedef std::tuple < headtype_T_net_lvalue_id ,  hierarchical_identifier > tailtype_net_lvalue1 ;
tailtype_net_lvalue1
T_net_lvalue_id ( 
 hierarchical_identifier i1
) { 
  return std::make_tuple ( headtype_T_net_lvalue_id  i1 ) ; 
} 
typedef std::tuple < headtype_T_net_lvalue_idexp ,  hierarchical_identifier , std::list< expression> , range_expression > tailtype_net_lvalue2 ;
tailtype_net_lvalue2
T_net_lvalue_idexp ( 
 hierarchical_identifier  i1 ,
 std::list< expression>  i2 ,
 range_expression i3
) { 
  return std::make_tuple ( headtype_T_net_lvalue_idexp  i1 ,  i2 ,  i3 ) ; 
} 
typedef std::tuple < headtype_T_net_lvalue_lvlist , std::list< net_lvalue> > tailtype_net_lvalue3 ;
tailtype_net_lvalue3
T_net_lvalue_lvlist ( 
 std::list< net_lvalue> i1
) { 
  return std::make_tuple ( headtype_T_net_lvalue_lvlist  i1 ) ; 
} 
typedef boost::variant < tailtype_net_lvalue1 , tailtype_net_lvalue2 , tailtype_net_lvalue3 > net_lvalue ;


typedef std::tuple < headtype_T_primary_num ,  number > tailtype_primary1 ;
tailtype_primary1
T_primary_num ( 
 number i1
) { 
  return std::make_tuple ( headtype_T_primary_num  i1 ) ; 
} 
typedef std::tuple < headtype_T_primary_id ,  hierarchical_identifier > tailtype_primary2 ;
tailtype_primary2
T_primary_id ( 
 hierarchical_identifier i1
) { 
  return std::make_tuple ( headtype_T_primary_id  i1 ) ; 
} 
typedef std::tuple < headtype_T_primary_concat ,  concatenation > tailtype_primary3 ;
tailtype_primary3
T_primary_concat ( 
 concatenation i1
) { 
  return std::make_tuple ( headtype_T_primary_concat  i1 ) ; 
} 
typedef std::tuple < headtype_T_primary_mulcon ,  multiple_concatenation > tailtype_primary4 ;
tailtype_primary4
T_primary_mulcon ( 
 multiple_concatenation i1
) { 
  return std::make_tuple ( headtype_T_primary_mulcon  i1 ) ; 
} 
typedef std::tuple < headtype_T_primary_func ,  function_call > tailtype_primary5 ;
tailtype_primary5
T_primary_func ( 
 function_call i1
) { 
  return std::make_tuple ( headtype_T_primary_func  i1 ) ; 
} 
typedef std::tuple < headtype_T_primary_sysfunc ,  system_function_call > tailtype_primary6 ;
tailtype_primary6
T_primary_sysfunc ( 
 system_function_call i1
) { 
  return std::make_tuple ( headtype_T_primary_sysfunc  i1 ) ; 
} 
typedef std::tuple < headtype_T_primary_mintypmax ,  mintypmax_expression > tailtype_primary7 ;
tailtype_primary7
T_primary_mintypmax ( 
 mintypmax_expression i1
) { 
  return std::make_tuple ( headtype_T_primary_mintypmax  i1 ) ; 
} 
typedef std::tuple < headtype_T_primary_string ,  string > tailtype_primary8 ;
tailtype_primary8
T_primary_string ( 
 string i1
) { 
  return std::make_tuple ( headtype_T_primary_string  i1 ) ; 
} 
typedef boost::variant < tailtype_primary1 , tailtype_primary2 , tailtype_primary3 , tailtype_primary4 , tailtype_primary5 , tailtype_primary6 , tailtype_primary7 , tailtype_primary8 > primary ;


typedef std::tuple < headtype_T_module_path_primary_num ,  number > tailtype_module_path_primary1 ;
tailtype_module_path_primary1
T_module_path_primary_num ( 
 number i1
) { 
  return std::make_tuple ( headtype_T_module_path_primary_num  i1 ) ; 
} 
typedef std::tuple < headtype_T_module_path_primary_id ,  identifier > tailtype_module_path_primary2 ;
tailtype_module_path_primary2
T_module_path_primary_id ( 
 identifier i1
) { 
  return std::make_tuple ( headtype_T_module_path_primary_id  i1 ) ; 
} 
typedef std::tuple < headtype_T_module_path_primary_concat ,  module_path_concatenation > tailtype_module_path_primary3 ;
tailtype_module_path_primary3
T_module_path_primary_concat ( 
 module_path_concatenation i1
) { 
  return std::make_tuple ( headtype_T_module_path_primary_concat  i1 ) ; 
} 
typedef std::tuple < headtype_T_module_path_primary_mul_concat ,  module_path_multiple_concatenation > tailtype_module_path_primary4 ;
tailtype_module_path_primary4
T_module_path_primary_mul_concat ( 
 module_path_multiple_concatenation i1
) { 
  return std::make_tuple ( headtype_T_module_path_primary_mul_concat  i1 ) ; 
} 
typedef std::tuple < headtype_T_module_path_primary_func ,  function_call > tailtype_module_path_primary5 ;
tailtype_module_path_primary5
T_module_path_primary_func ( 
 function_call i1
) { 
  return std::make_tuple ( headtype_T_module_path_primary_func  i1 ) ; 
} 
typedef std::tuple < headtype_T_module_path_primary_sysfunc ,  system_function_call > tailtype_module_path_primary6 ;
tailtype_module_path_primary6
T_module_path_primary_sysfunc ( 
 system_function_call i1
) { 
  return std::make_tuple ( headtype_T_module_path_primary_sysfunc  i1 ) ; 
} 
typedef std::tuple < headtype_T_module_path_primary_mintypmax ,  module_path_mintypmax_expression > tailtype_module_path_primary7 ;
tailtype_module_path_primary7
T_module_path_primary_mintypmax ( 
 module_path_mintypmax_expression i1
) { 
  return std::make_tuple ( headtype_T_module_path_primary_mintypmax  i1 ) ; 
} 
typedef boost::variant < tailtype_module_path_primary1 , tailtype_module_path_primary2 , tailtype_module_path_primary3 , tailtype_module_path_primary4 , tailtype_module_path_primary5 , tailtype_module_path_primary6 , tailtype_module_path_primary7 > module_path_primary ;


typedef std::tuple < headtype_expression > tailtype_base_expression1 ;
tailtype_base_expression1
expression (  ) { 
 return std::make_tuple ( headtype_expression  ) ; 
} 
typedef boost::variant < tailtype_base_expression1 > base_expression ;


typedef std::tuple < headtype_T_range_expression_NOSPEC > tailtype_range_expression1 ;
tailtype_range_expression1
T_range_expression_NOSPEC (  ) { 
 return std::make_tuple ( headtype_T_range_expression_NOSPEC  ) ; 
} 
typedef std::tuple < headtype_T_range_expression_1 ,  expression > tailtype_range_expression2 ;
tailtype_range_expression2
T_range_expression_1 ( 
 expression i1
) { 
  return std::make_tuple ( headtype_T_range_expression_1  i1 ) ; 
} 
typedef std::tuple < headtype_T_range_expression_2 ,  msb_expression , lsb_expression > tailtype_range_expression3 ;
tailtype_range_expression3
T_range_expression_2 ( 
 msb_expression  i1 ,
 lsb_expression i2
) { 
  return std::make_tuple ( headtype_T_range_expression_2  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_range_expression_addrange ,  base_expression , width_expression > tailtype_range_expression4 ;
tailtype_range_expression4
T_range_expression_addrange ( 
 base_expression  i1 ,
 width_expression i2
) { 
  return std::make_tuple ( headtype_T_range_expression_addrange  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_range_expression_subrange ,  base_expression , width_expression > tailtype_range_expression5 ;
tailtype_range_expression5
T_range_expression_subrange ( 
 base_expression  i1 ,
 width_expression i2
) { 
  return std::make_tuple ( headtype_T_range_expression_subrange  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_range_expression1 , tailtype_range_expression2 , tailtype_range_expression3 , tailtype_range_expression4 , tailtype_range_expression5 > range_expression ;


typedef std::tuple < headtype_T_module_path_mintypmax_expression_1 ,  module_path_expression > tailtype_module_path_mintypmax_expression1 ;
tailtype_module_path_mintypmax_expression1
T_module_path_mintypmax_expression_1 ( 
 module_path_expression i1
) { 
  return std::make_tuple ( headtype_T_module_path_mintypmax_expression_1  i1 ) ; 
} 
typedef std::tuple < headtype_T_module_path_mintypmax_expression_3 ,  module_path_expression , module_path_expression , module_path_expression > tailtype_module_path_mintypmax_expression2 ;
tailtype_module_path_mintypmax_expression2
T_module_path_mintypmax_expression_3 ( 
 module_path_expression  i1 ,
 module_path_expression  i2 ,
 module_path_expression i3
) { 
  return std::make_tuple ( headtype_T_module_path_mintypmax_expression_3  i1 ,  i2 ,  i3 ) ; 
} 
typedef boost::variant < tailtype_module_path_mintypmax_expression1 , tailtype_module_path_mintypmax_expression2 > module_path_mintypmax_expression ;


typedef std::tuple < headtype_T_module_path_expression_prim ,  module_path_primary > tailtype_module_path_expression1 ;
tailtype_module_path_expression1
T_module_path_expression_prim ( 
 module_path_primary i1
) { 
  return std::make_tuple ( headtype_T_module_path_expression_prim  i1 ) ; 
} 
typedef std::tuple < headtype_T_module_path_expression_op1 ,  unary_operator , std::list< attribute_instance> , module_path_primary > tailtype_module_path_expression2 ;
tailtype_module_path_expression2
T_module_path_expression_op1 ( 
 unary_operator  i1 ,
 std::list< attribute_instance>  i2 ,
 module_path_primary i3
) { 
  return std::make_tuple ( headtype_T_module_path_expression_op1  i1 ,  i2 ,  i3 ) ; 
} 
typedef std::tuple < headtype_T_module_path_expression_op2 ,  module_path_expression , binary_module_path_operator , std::list< attribute_instance> , module_path_expression > tailtype_module_path_expression3 ;
tailtype_module_path_expression3
T_module_path_expression_op2 ( 
 module_path_expression  i1 ,
 binary_module_path_operator  i2 ,
 std::list< attribute_instance>  i3 ,
 module_path_expression i4
) { 
  return std::make_tuple ( headtype_T_module_path_expression_op2  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef std::tuple < headtype_T_module_path_expression_sel ,  module_path_conditional_expression > tailtype_module_path_expression4 ;
tailtype_module_path_expression4
T_module_path_expression_sel ( 
 module_path_conditional_expression i1
) { 
  return std::make_tuple ( headtype_T_module_path_expression_sel  i1 ) ; 
} 
typedef boost::variant < tailtype_module_path_expression1 , tailtype_module_path_expression2 , tailtype_module_path_expression3 , tailtype_module_path_expression4 > module_path_expression ;


typedef std::tuple < headtype_T_module_path_conditional_expression ,  module_path_expression , std::list< attribute_instance> , module_path_expression , module_path_expression > tailtype_module_path_conditional_expression1 ;
tailtype_module_path_conditional_expression1
T_module_path_conditional_expression ( 
 module_path_expression  i1 ,
 std::list< attribute_instance>  i2 ,
 module_path_expression  i3 ,
 module_path_expression i4
) { 
  return std::make_tuple ( headtype_T_module_path_conditional_expression  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef boost::variant < tailtype_module_path_conditional_expression1 > module_path_conditional_expression ;


typedef std::tuple < headtype_T_mintypmax_expression_NOSPEC > tailtype_mintypmax_expression1 ;
tailtype_mintypmax_expression1
T_mintypmax_expression_NOSPEC (  ) { 
 return std::make_tuple ( headtype_T_mintypmax_expression_NOSPEC  ) ; 
} 
typedef std::tuple < headtype_T_mintypmax_expression_1 ,  expression > tailtype_mintypmax_expression2 ;
tailtype_mintypmax_expression2
T_mintypmax_expression_1 ( 
 expression i1
) { 
  return std::make_tuple ( headtype_T_mintypmax_expression_1  i1 ) ; 
} 
typedef std::tuple < headtype_T_mintypmax_expression_3 ,  expression , expression , expression > tailtype_mintypmax_expression3 ;
tailtype_mintypmax_expression3
T_mintypmax_expression_3 ( 
 expression  i1 ,
 expression  i2 ,
 expression i3
) { 
  return std::make_tuple ( headtype_T_mintypmax_expression_3  i1 ,  i2 ,  i3 ) ; 
} 
typedef boost::variant < tailtype_mintypmax_expression1 , tailtype_mintypmax_expression2 , tailtype_mintypmax_expression3 > mintypmax_expression ;


typedef std::tuple < headtype_T_expression_NOSPEC > tailtype_expression1 ;
tailtype_expression1
T_expression_NOSPEC (  ) { 
 return std::make_tuple ( headtype_T_expression_NOSPEC  ) ; 
} 
typedef std::tuple < headtype_T_expression_prim ,  primary > tailtype_expression2 ;
tailtype_expression2
T_expression_prim ( 
 primary i1
) { 
  return std::make_tuple ( headtype_T_expression_prim  i1 ) ; 
} 
typedef std::tuple < headtype_T_expression_op1 ,  unary_operator , std::list< attribute_instance> , primary > tailtype_expression3 ;
tailtype_expression3
T_expression_op1 ( 
 unary_operator  i1 ,
 std::list< attribute_instance>  i2 ,
 primary i3
) { 
  return std::make_tuple ( headtype_T_expression_op1  i1 ,  i2 ,  i3 ) ; 
} 
typedef std::tuple < headtype_T_expression_op2 ,  expression , binary_operator , std::list< attribute_instance> , expression > tailtype_expression4 ;
tailtype_expression4
T_expression_op2 ( 
 expression  i1 ,
 binary_operator  i2 ,
 std::list< attribute_instance>  i3 ,
 expression i4
) { 
  return std::make_tuple ( headtype_T_expression_op2  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef std::tuple < headtype_T_expression_condition ,  conditional_expression > tailtype_expression5 ;
tailtype_expression5
T_expression_condition ( 
 conditional_expression i1
) { 
  return std::make_tuple ( headtype_T_expression_condition  i1 ) ; 
} 
typedef boost::variant < tailtype_expression1 , tailtype_expression2 , tailtype_expression3 , tailtype_expression4 , tailtype_expression5 > expression ;


typedef std::tuple < headtype_expression > tailtype_width_expression1 ;
tailtype_width_expression1
expression (  ) { 
 return std::make_tuple ( headtype_expression  ) ; 
} 
typedef boost::variant < tailtype_width_expression1 > width_expression ;


typedef std::tuple < headtype_expression > tailtype_lsb_expression1 ;
tailtype_lsb_expression1
expression (  ) { 
 return std::make_tuple ( headtype_expression  ) ; 
} 
typedef boost::variant < tailtype_lsb_expression1 > lsb_expression ;


typedef std::tuple < headtype_expression > tailtype_msb_expression1 ;
tailtype_msb_expression1
expression (  ) { 
 return std::make_tuple ( headtype_expression  ) ; 
} 
typedef boost::variant < tailtype_msb_expression1 > msb_expression ;


typedef std::tuple < headtype_T_conditional_expression ,  expression , std::list< attribute_instance> , expression , expression > tailtype_conditional_expression1 ;
tailtype_conditional_expression1
T_conditional_expression ( 
 expression  i1 ,
 std::list< attribute_instance>  i2 ,
 expression  i3 ,
 expression i4
) { 
  return std::make_tuple ( headtype_T_conditional_expression  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef boost::variant < tailtype_conditional_expression1 > conditional_expression ;


typedef std::tuple < headtype_T_system_function_call ,  system_function_identifier , std::list< expression> > tailtype_system_function_call1 ;
tailtype_system_function_call1
T_system_function_call ( 
 system_function_identifier  i1 ,
 std::list< expression> i2
) { 
  return std::make_tuple ( headtype_T_system_function_call  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_system_function_call1 > system_function_call ;


typedef std::tuple < headtype_T_function_call ,  hierarchical_identifier , std::list< attribute_instance> , std::list< expression> > tailtype_function_call1 ;
tailtype_function_call1
T_function_call ( 
 hierarchical_identifier  i1 ,
 std::list< attribute_instance>  i2 ,
 std::list< expression> i3
) { 
  return std::make_tuple ( headtype_T_function_call  i1 ,  i2 ,  i3 ) ; 
} 
typedef boost::variant < tailtype_function_call1 > function_call ;


typedef std::tuple < headtype_T_multiple_concatenation ,  expression , concatenation > tailtype_multiple_concatenation1 ;
tailtype_multiple_concatenation1
T_multiple_concatenation ( 
 expression  i1 ,
 concatenation i2
) { 
  return std::make_tuple ( headtype_T_multiple_concatenation  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_multiple_concatenation1 > multiple_concatenation ;


typedef std::tuple < headtype_T_module_path_concatenation , std::list< module_path_expression> > tailtype_module_path_concatenation1 ;
tailtype_module_path_concatenation1
T_module_path_concatenation ( 
 std::list< module_path_expression> i1
) { 
  return std::make_tuple ( headtype_T_module_path_concatenation  i1 ) ; 
} 
typedef boost::variant < tailtype_module_path_concatenation1 > module_path_concatenation ;


typedef std::tuple < headtype_T_module_path_multiple_concatenation ,  expression , module_path_concatenation > tailtype_module_path_multiple_concatenation1 ;
tailtype_module_path_multiple_concatenation1
T_module_path_multiple_concatenation ( 
 expression  i1 ,
 module_path_concatenation i2
) { 
  return std::make_tuple ( headtype_T_module_path_multiple_concatenation  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_module_path_multiple_concatenation1 > module_path_multiple_concatenation ;


typedef std::tuple < headtype_T_concatenation , std::list< expression> > tailtype_concatenation1 ;
tailtype_concatenation1
T_concatenation ( 
 std::list< expression> i1
) { 
  return std::make_tuple ( headtype_T_concatenation  i1 ) ; 
} 
typedef boost::variant < tailtype_concatenation1 > concatenation ;


typedef std::tuple < headtype_T_state_dependent_path_declaration_simple ,  module_path_expression , simple_path_declaration > tailtype_state_dependent_path_declaration1 ;
tailtype_state_dependent_path_declaration1
T_state_dependent_path_declaration_simple ( 
 module_path_expression  i1 ,
 simple_path_declaration i2
) { 
  return std::make_tuple ( headtype_T_state_dependent_path_declaration_simple  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_state_dependent_path_declaration_edge ,  module_path_expression , edge_sensitive_path_declaration > tailtype_state_dependent_path_declaration2 ;
tailtype_state_dependent_path_declaration2
T_state_dependent_path_declaration_edge ( 
 module_path_expression  i1 ,
 edge_sensitive_path_declaration i2
) { 
  return std::make_tuple ( headtype_T_state_dependent_path_declaration_edge  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_state_dependent_path_declaration_ifnone ,  simple_path_declaration > tailtype_state_dependent_path_declaration3 ;
tailtype_state_dependent_path_declaration3
T_state_dependent_path_declaration_ifnone ( 
 simple_path_declaration i1
) { 
  return std::make_tuple ( headtype_T_state_dependent_path_declaration_ifnone  i1 ) ; 
} 
typedef boost::variant < tailtype_state_dependent_path_declaration1 , tailtype_state_dependent_path_declaration2 , tailtype_state_dependent_path_declaration3 > state_dependent_path_declaration ;


typedef std::tuple < headtype_T_full_edge_sensitive_path_description ,  edge_identifier , std::list< specify_input_terminal_descriptor> , std::list< specify_output_terminal_descriptor> , polarity_operator , expression > tailtype_full_edge_sensitive_path_description1 ;
tailtype_full_edge_sensitive_path_description1
T_full_edge_sensitive_path_description ( 
 edge_identifier  i1 ,
 std::list< specify_input_terminal_descriptor>  i2 ,
 std::list< specify_output_terminal_descriptor>  i3 ,
 polarity_operator  i4 ,
 expression i5
) { 
  return std::make_tuple ( headtype_T_full_edge_sensitive_path_description  i1 ,  i2 ,  i3 ,  i4 ,  i5 ) ; 
} 
typedef boost::variant < tailtype_full_edge_sensitive_path_description1 > full_edge_sensitive_path_description ;


typedef std::tuple < headtype_T_parallel_edge_sensitive_path_description ,  edge_identifier , specify_input_terminal_descriptor , specify_output_terminal_descriptor , polarity_operator , expression > tailtype_parallel_edge_sensitive_path_description1 ;
tailtype_parallel_edge_sensitive_path_description1
T_parallel_edge_sensitive_path_description ( 
 edge_identifier  i1 ,
 specify_input_terminal_descriptor  i2 ,
 specify_output_terminal_descriptor  i3 ,
 polarity_operator  i4 ,
 expression i5
) { 
  return std::make_tuple ( headtype_T_parallel_edge_sensitive_path_description  i1 ,  i2 ,  i3 ,  i4 ,  i5 ) ; 
} 
typedef boost::variant < tailtype_parallel_edge_sensitive_path_description1 > parallel_edge_sensitive_path_description ;


typedef std::tuple < headtype_T_edge_sensitive_path_declaration_parallel ,  parallel_edge_sensitive_path_description , list_of_path_delay_expressions > tailtype_edge_sensitive_path_declaration1 ;
tailtype_edge_sensitive_path_declaration1
T_edge_sensitive_path_declaration_parallel ( 
 parallel_edge_sensitive_path_description  i1 ,
 list_of_path_delay_expressions i2
) { 
  return std::make_tuple ( headtype_T_edge_sensitive_path_declaration_parallel  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_edge_sensitive_path_declaration_full ,  full_edge_sensitive_path_description , list_of_path_delay_expressions > tailtype_edge_sensitive_path_declaration2 ;
tailtype_edge_sensitive_path_declaration2
T_edge_sensitive_path_declaration_full ( 
 full_edge_sensitive_path_description  i1 ,
 list_of_path_delay_expressions i2
) { 
  return std::make_tuple ( headtype_T_edge_sensitive_path_declaration_full  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_edge_sensitive_path_declaration1 , tailtype_edge_sensitive_path_declaration2 > edge_sensitive_path_declaration ;


typedef std::tuple < headtype_T_list_of_mintypmax_expressions_1 ,  mintypmax_expression > tailtype_list_of_path_delay_expressions1 ;
tailtype_list_of_path_delay_expressions1
T_list_of_mintypmax_expressions_1 ( 
 mintypmax_expression i1
) { 
  return std::make_tuple ( headtype_T_list_of_mintypmax_expressions_1  i1 ) ; 
} 
typedef std::tuple < headtype_T_list_of_mintypmax_expressions_2 ,  mintypmax_expression , mintypmax_expression > tailtype_list_of_path_delay_expressions2 ;
tailtype_list_of_path_delay_expressions2
T_list_of_mintypmax_expressions_2 ( 
 mintypmax_expression  i1 ,
 mintypmax_expression i2
) { 
  return std::make_tuple ( headtype_T_list_of_mintypmax_expressions_2  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_list_of_mintypmax_expressions_3 ,  mintypmax_expression , mintypmax_expression , mintypmax_expression > tailtype_list_of_path_delay_expressions3 ;
tailtype_list_of_path_delay_expressions3
T_list_of_mintypmax_expressions_3 ( 
 mintypmax_expression  i1 ,
 mintypmax_expression  i2 ,
 mintypmax_expression i3
) { 
  return std::make_tuple ( headtype_T_list_of_mintypmax_expressions_3  i1 ,  i2 ,  i3 ) ; 
} 
typedef std::tuple < headtype_T_list_of_mintypmax_expressions_6 ,  mintypmax_expression , mintypmax_expression , mintypmax_expression , mintypmax_expression , mintypmax_expression , mintypmax_expression > tailtype_list_of_path_delay_expressions4 ;
tailtype_list_of_path_delay_expressions4
T_list_of_mintypmax_expressions_6 ( 
 mintypmax_expression  i1 ,
 mintypmax_expression  i2 ,
 mintypmax_expression  i3 ,
 mintypmax_expression  i4 ,
 mintypmax_expression  i5 ,
 mintypmax_expression i6
) { 
  return std::make_tuple ( headtype_T_list_of_mintypmax_expressions_6  i1 ,  i2 ,  i3 ,  i4 ,  i5 ,  i6 ) ; 
} 
typedef std::tuple < headtype_T_list_of_mintypmax_expressions_12 ,  mintypmax_expression , mintypmax_expression , mintypmax_expression , mintypmax_expression , mintypmax_expression , mintypmax_expression , mintypmax_expression , mintypmax_expression , mintypmax_expression , mintypmax_expression , mintypmax_expression , mintypmax_expression > tailtype_list_of_path_delay_expressions5 ;
tailtype_list_of_path_delay_expressions5
T_list_of_mintypmax_expressions_12 ( 
 mintypmax_expression  i1 ,
 mintypmax_expression  i2 ,
 mintypmax_expression  i3 ,
 mintypmax_expression  i4 ,
 mintypmax_expression  i5 ,
 mintypmax_expression  i6 ,
 mintypmax_expression  i7 ,
 mintypmax_expression  i8 ,
 mintypmax_expression  i9 ,
 mintypmax_expression  i10 ,
 mintypmax_expression  i11 ,
 mintypmax_expression i12
) { 
  return std::make_tuple ( headtype_T_list_of_mintypmax_expressions_12  i1 ,  i2 ,  i3 ,  i4 ,  i5 ,  i6 ,  i7 ,  i8 ,  i9 ,  i10 ,  i11 ,  i12 ) ; 
} 
typedef boost::variant < tailtype_list_of_path_delay_expressions1 , tailtype_list_of_path_delay_expressions2 , tailtype_list_of_path_delay_expressions3 , tailtype_list_of_path_delay_expressions4 , tailtype_list_of_path_delay_expressions5 > list_of_path_delay_expressions ;


typedef std::tuple < headtype_T_specify_output_terminal_descriptor ,  identifier , range_expression > tailtype_specify_output_terminal_descriptor1 ;
tailtype_specify_output_terminal_descriptor1
T_specify_output_terminal_descriptor ( 
 identifier  i1 ,
 range_expression i2
) { 
  return std::make_tuple ( headtype_T_specify_output_terminal_descriptor  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_specify_output_terminal_descriptor1 > specify_output_terminal_descriptor ;


typedef std::tuple < headtype_T_specify_input_terminal_descriptor ,  identifier , range_expression > tailtype_specify_input_terminal_descriptor1 ;
tailtype_specify_input_terminal_descriptor1
T_specify_input_terminal_descriptor ( 
 identifier  i1 ,
 range_expression i2
) { 
  return std::make_tuple ( headtype_T_specify_input_terminal_descriptor  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_specify_input_terminal_descriptor1 > specify_input_terminal_descriptor ;


typedef std::tuple < headtype_T_full_path_description , std::list< specify_input_terminal_descriptor> , polarity_operator , std::list< specify_output_terminal_descriptor> > tailtype_full_path_description1 ;
tailtype_full_path_description1
T_full_path_description ( 
 std::list< specify_input_terminal_descriptor>  i1 ,
 polarity_operator  i2 ,
 std::list< specify_output_terminal_descriptor> i3
) { 
  return std::make_tuple ( headtype_T_full_path_description  i1 ,  i2 ,  i3 ) ; 
} 
typedef boost::variant < tailtype_full_path_description1 > full_path_description ;


typedef std::tuple < headtype_T_parallel_path_description ,  specify_input_terminal_descriptor , polarity_operator , specify_output_terminal_descriptor > tailtype_parallel_path_description1 ;
tailtype_parallel_path_description1
T_parallel_path_description ( 
 specify_input_terminal_descriptor  i1 ,
 polarity_operator  i2 ,
 specify_output_terminal_descriptor i3
) { 
  return std::make_tuple ( headtype_T_parallel_path_description  i1 ,  i2 ,  i3 ) ; 
} 
typedef boost::variant < tailtype_parallel_path_description1 > parallel_path_description ;


typedef std::tuple < headtype_T_simple_path_declaration_parallel ,  parallel_path_description , list_of_path_delay_expressions > tailtype_simple_path_declaration1 ;
tailtype_simple_path_declaration1
T_simple_path_declaration_parallel ( 
 parallel_path_description  i1 ,
 list_of_path_delay_expressions i2
) { 
  return std::make_tuple ( headtype_T_simple_path_declaration_parallel  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_simple_path_declaration_full ,  full_path_description , list_of_path_delay_expressions > tailtype_simple_path_declaration2 ;
tailtype_simple_path_declaration2
T_simple_path_declaration_full ( 
 full_path_description  i1 ,
 list_of_path_delay_expressions i2
) { 
  return std::make_tuple ( headtype_T_simple_path_declaration_full  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_simple_path_declaration1 , tailtype_simple_path_declaration2 > simple_path_declaration ;


typedef std::tuple < headtype_T_path_declaration_simple ,  simple_path_declaration > tailtype_path_declaration1 ;
tailtype_path_declaration1
T_path_declaration_simple ( 
 simple_path_declaration i1
) { 
  return std::make_tuple ( headtype_T_path_declaration_simple  i1 ) ; 
} 
typedef std::tuple < headtype_T_path_declaration_edge ,  edge_sensitive_path_declaration > tailtype_path_declaration2 ;
tailtype_path_declaration2
T_path_declaration_edge ( 
 edge_sensitive_path_declaration i1
) { 
  return std::make_tuple ( headtype_T_path_declaration_edge  i1 ) ; 
} 
typedef std::tuple < headtype_T_path_declaration_state ,  state_dependent_path_declaration > tailtype_path_declaration3 ;
tailtype_path_declaration3
T_path_declaration_state ( 
 state_dependent_path_declaration i1
) { 
  return std::make_tuple ( headtype_T_path_declaration_state  i1 ) ; 
} 
typedef boost::variant < tailtype_path_declaration1 , tailtype_path_declaration2 , tailtype_path_declaration3 > path_declaration ;


typedef std::tuple < headtype_T_showcancelled_declaration_show , std::list< specify_output_terminal_descriptor> > tailtype_showcancelled_declaration1 ;
tailtype_showcancelled_declaration1
T_showcancelled_declaration_show ( 
 std::list< specify_output_terminal_descriptor> i1
) { 
  return std::make_tuple ( headtype_T_showcancelled_declaration_show  i1 ) ; 
} 
typedef std::tuple < headtype_T_showcancelled_declaration_noshow , std::list< specify_output_terminal_descriptor> > tailtype_showcancelled_declaration2 ;
tailtype_showcancelled_declaration2
T_showcancelled_declaration_noshow ( 
 std::list< specify_output_terminal_descriptor> i1
) { 
  return std::make_tuple ( headtype_T_showcancelled_declaration_noshow  i1 ) ; 
} 
typedef boost::variant < tailtype_showcancelled_declaration1 , tailtype_showcancelled_declaration2 > showcancelled_declaration ;


typedef std::tuple < headtype_T_pulsestyle_declaration_oneevent , std::list< specify_output_terminal_descriptor> > tailtype_pulsestyle_declaration1 ;
tailtype_pulsestyle_declaration1
T_pulsestyle_declaration_oneevent ( 
 std::list< specify_output_terminal_descriptor> i1
) { 
  return std::make_tuple ( headtype_T_pulsestyle_declaration_oneevent  i1 ) ; 
} 
typedef std::tuple < headtype_T_pulsestyle_declaration_onedetect , std::list< specify_output_terminal_descriptor> > tailtype_pulsestyle_declaration2 ;
tailtype_pulsestyle_declaration2
T_pulsestyle_declaration_onedetect ( 
 std::list< specify_output_terminal_descriptor> i1
) { 
  return std::make_tuple ( headtype_T_pulsestyle_declaration_onedetect  i1 ) ; 
} 
typedef boost::variant < tailtype_pulsestyle_declaration1 , tailtype_pulsestyle_declaration2 > pulsestyle_declaration ;


typedef std::tuple < headtype_T_specify_item_specparam ,  specparam_declaration > tailtype_specify_item1 ;
tailtype_specify_item1
T_specify_item_specparam ( 
 specparam_declaration i1
) { 
  return std::make_tuple ( headtype_T_specify_item_specparam  i1 ) ; 
} 
typedef std::tuple < headtype_T_specify_item_pulsestyle ,  pulsestyle_declaration > tailtype_specify_item2 ;
tailtype_specify_item2
T_specify_item_pulsestyle ( 
 pulsestyle_declaration i1
) { 
  return std::make_tuple ( headtype_T_specify_item_pulsestyle  i1 ) ; 
} 
typedef std::tuple < headtype_T_specify_item_showcancelled ,  showcancelled_declaration > tailtype_specify_item3 ;
tailtype_specify_item3
T_specify_item_showcancelled ( 
 showcancelled_declaration i1
) { 
  return std::make_tuple ( headtype_T_specify_item_showcancelled  i1 ) ; 
} 
typedef std::tuple < headtype_T_specify_item_path ,  path_declaration > tailtype_specify_item4 ;
tailtype_specify_item4
T_specify_item_path ( 
 path_declaration i1
) { 
  return std::make_tuple ( headtype_T_specify_item_path  i1 ) ; 
} 
typedef boost::variant < tailtype_specify_item1 , tailtype_specify_item2 , tailtype_specify_item3 , tailtype_specify_item4 > specify_item ;


typedef std::tuple < headtype_T_specify_block , std::list< specify_item> > tailtype_specify_block1 ;
tailtype_specify_block1
T_specify_block ( 
 std::list< specify_item> i1
) { 
  return std::make_tuple ( headtype_T_specify_block  i1 ) ; 
} 
typedef boost::variant < tailtype_specify_block1 > specify_block ;


typedef std::tuple < headtype_T_task_enable ,  hierarchical_identifier , std::list< expression> > tailtype_task_enable1 ;
tailtype_task_enable1
T_task_enable ( 
 hierarchical_identifier  i1 ,
 std::list< expression> i2
) { 
  return std::make_tuple ( headtype_T_task_enable  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_task_enable1 > task_enable ;


typedef std::tuple < headtype_T_system_task_enable ,  system_function_identifier , std::list< expression> > tailtype_system_task_enable1 ;
tailtype_system_task_enable1
T_system_task_enable ( 
 system_function_identifier  i1 ,
 std::list< expression> i2
) { 
  return std::make_tuple ( headtype_T_system_task_enable  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_system_task_enable1 > system_task_enable ;


typedef std::tuple < headtype_T_loop_statement_forever ,  statement > tailtype_loop_statement1 ;
tailtype_loop_statement1
T_loop_statement_forever ( 
 statement i1
) { 
  return std::make_tuple ( headtype_T_loop_statement_forever  i1 ) ; 
} 
typedef std::tuple < headtype_T_loop_statement_repeat ,  expression , statement > tailtype_loop_statement2 ;
tailtype_loop_statement2
T_loop_statement_repeat ( 
 expression  i1 ,
 statement i2
) { 
  return std::make_tuple ( headtype_T_loop_statement_repeat  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_loop_statement_while ,  expression , statement > tailtype_loop_statement3 ;
tailtype_loop_statement3
T_loop_statement_while ( 
 expression  i1 ,
 statement i2
) { 
  return std::make_tuple ( headtype_T_loop_statement_while  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_loop_statement_for ,  net_assignment , expression , net_assignment , statement > tailtype_loop_statement4 ;
tailtype_loop_statement4
T_loop_statement_for ( 
 net_assignment  i1 ,
 expression  i2 ,
 net_assignment  i3 ,
 statement i4
) { 
  return std::make_tuple ( headtype_T_loop_statement_for  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef boost::variant < tailtype_loop_statement1 , tailtype_loop_statement2 , tailtype_loop_statement3 , tailtype_loop_statement4 > loop_statement ;


typedef std::tuple < headtype_T_colon_opt_false > tailtype_colon_opt1 ;
tailtype_colon_opt1
T_colon_opt_false (  ) { 
 return std::make_tuple ( headtype_T_colon_opt_false  ) ; 
} 
typedef std::tuple < headtype_T_colon_opt_true > tailtype_colon_opt2 ;
tailtype_colon_opt2
T_colon_opt_true (  ) { 
 return std::make_tuple ( headtype_T_colon_opt_true  ) ; 
} 
typedef boost::variant < tailtype_colon_opt1 , tailtype_colon_opt2 > colon_opt ;


typedef std::tuple < headtype_T_case_item , std::list< expression> , statement > tailtype_case_item1 ;
tailtype_case_item1
T_case_item ( 
 std::list< expression>  i1 ,
 statement i2
) { 
  return std::make_tuple ( headtype_T_case_item  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_case_item_default ,  colon_opt , statement > tailtype_case_item2 ;
tailtype_case_item2
T_case_item_default ( 
 colon_opt  i1 ,
 statement i2
) { 
  return std::make_tuple ( headtype_T_case_item_default  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_case_item1 , tailtype_case_item2 > case_item ;


typedef std::tuple < headtype_T_case_statement_case ,  expression , std::list< case_item> > tailtype_case_statement1 ;
tailtype_case_statement1
T_case_statement_case ( 
 expression  i1 ,
 std::list< case_item> i2
) { 
  return std::make_tuple ( headtype_T_case_statement_case  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_case_statement_casez ,  expression , std::list< case_item> > tailtype_case_statement2 ;
tailtype_case_statement2
T_case_statement_casez ( 
 expression  i1 ,
 std::list< case_item> i2
) { 
  return std::make_tuple ( headtype_T_case_statement_casez  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_case_statement_casex ,  expression , std::list< case_item> > tailtype_case_statement3 ;
tailtype_case_statement3
T_case_statement_casex ( 
 expression  i1 ,
 std::list< case_item> i2
) { 
  return std::make_tuple ( headtype_T_case_statement_casex  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_case_statement1 , tailtype_case_statement2 , tailtype_case_statement3 > case_statement ;


typedef std::tuple < headtype_T_elseif ,  expression , statement > tailtype_else_if_lp_expression_rp_statement_or_null1 ;
tailtype_else_if_lp_expression_rp_statement_or_null1
T_elseif ( 
 expression  i1 ,
 statement i2
) { 
  return std::make_tuple ( headtype_T_elseif  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_else_if_lp_expression_rp_statement_or_null1 > else_if_lp_expression_rp_statement_or_null ;


typedef std::tuple < headtype_T_conditional_statement_ifelse ,  expression , statement , statement > tailtype_conditional_statement1 ;
tailtype_conditional_statement1
T_conditional_statement_ifelse ( 
 expression  i1 ,
 statement  i2 ,
 statement i3
) { 
  return std::make_tuple ( headtype_T_conditional_statement_ifelse  i1 ,  i2 ,  i3 ) ; 
} 
typedef std::tuple < headtype_T_conditional_statement_ifelseif ,  expression , statement , std::list< else_if_lp_expression_rp_statement_or_null> , statement > tailtype_conditional_statement2 ;
tailtype_conditional_statement2
T_conditional_statement_ifelseif ( 
 expression  i1 ,
 statement  i2 ,
 std::list< else_if_lp_expression_rp_statement_or_null>  i3 ,
 statement i4
) { 
  return std::make_tuple ( headtype_T_conditional_statement_ifelseif  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef boost::variant < tailtype_conditional_statement1 , tailtype_conditional_statement2 > conditional_statement ;


typedef std::tuple < headtype_T_wait_statement ,  expression , statement > tailtype_wait_statement1 ;
tailtype_wait_statement1
T_wait_statement ( 
 expression  i1 ,
 statement i2
) { 
  return std::make_tuple ( headtype_T_wait_statement  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_wait_statement1 > wait_statement ;


typedef std::tuple < headtype_T_procedural_timing_control_statement ,  procedural_timing_control , statement > tailtype_procedural_timing_control_statement1 ;
tailtype_procedural_timing_control_statement1
T_procedural_timing_control_statement ( 
 procedural_timing_control  i1 ,
 statement i2
) { 
  return std::make_tuple ( headtype_T_procedural_timing_control_statement  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_procedural_timing_control_statement1 > procedural_timing_control_statement ;


typedef std::tuple < headtype_T_procedural_timing_control_delay ,  delay_control > tailtype_procedural_timing_control1 ;
tailtype_procedural_timing_control1
T_procedural_timing_control_delay ( 
 delay_control i1
) { 
  return std::make_tuple ( headtype_T_procedural_timing_control_delay  i1 ) ; 
} 
typedef std::tuple < headtype_T_procedural_timing_control_event ,  event_control > tailtype_procedural_timing_control2 ;
tailtype_procedural_timing_control2
T_procedural_timing_control_event ( 
 event_control i1
) { 
  return std::make_tuple ( headtype_T_procedural_timing_control_event  i1 ) ; 
} 
typedef boost::variant < tailtype_procedural_timing_control1 , tailtype_procedural_timing_control2 > procedural_timing_control ;


typedef std::tuple < headtype_T_event_expression_exp ,  expression > tailtype_event_expression1 ;
tailtype_event_expression1
T_event_expression_exp ( 
 expression i1
) { 
  return std::make_tuple ( headtype_T_event_expression_exp  i1 ) ; 
} 
typedef std::tuple < headtype_T_event_expression_pos ,  expression > tailtype_event_expression2 ;
tailtype_event_expression2
T_event_expression_pos ( 
 expression i1
) { 
  return std::make_tuple ( headtype_T_event_expression_pos  i1 ) ; 
} 
typedef std::tuple < headtype_T_event_expression_neg ,  expression > tailtype_event_expression3 ;
tailtype_event_expression3
T_event_expression_neg ( 
 expression i1
) { 
  return std::make_tuple ( headtype_T_event_expression_neg  i1 ) ; 
} 
typedef std::tuple < headtype_T_event_expression_or ,  event_expression , event_expression > tailtype_event_expression4 ;
tailtype_event_expression4
T_event_expression_or ( 
 event_expression  i1 ,
 event_expression i2
) { 
  return std::make_tuple ( headtype_T_event_expression_or  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_event_expression1 , tailtype_event_expression2 , tailtype_event_expression3 , tailtype_event_expression4 > event_expression ;


typedef std::tuple < headtype_T_event_trigger ,  hierarchical_identifier > tailtype_event_trigger1 ;
tailtype_event_trigger1
T_event_trigger ( 
 hierarchical_identifier i1
) { 
  return std::make_tuple ( headtype_T_event_trigger  i1 ) ; 
} 
typedef boost::variant < tailtype_event_trigger1 > event_trigger ;


typedef std::tuple < headtype_T_event_control_eventid ,  hierarchical_identifier > tailtype_event_control1 ;
tailtype_event_control1
T_event_control_eventid ( 
 hierarchical_identifier i1
) { 
  return std::make_tuple ( headtype_T_event_control_eventid  i1 ) ; 
} 
typedef std::tuple < headtype_T_event_control_event_exp , std::list< event_expression> > tailtype_event_control2 ;
tailtype_event_control2
T_event_control_event_exp ( 
 std::list< event_expression> i1
) { 
  return std::make_tuple ( headtype_T_event_control_event_exp  i1 ) ; 
} 
typedef std::tuple < headtype_T_event_control_start > tailtype_event_control3 ;
tailtype_event_control3
T_event_control_start (  ) { 
 return std::make_tuple ( headtype_T_event_control_start  ) ; 
} 
typedef boost::variant < tailtype_event_control1 , tailtype_event_control2 , tailtype_event_control3 > event_control ;


typedef std::tuple < headtype_T_disable_statement ,  hierarchical_identifier > tailtype_disable_statement1 ;
tailtype_disable_statement1
T_disable_statement ( 
 hierarchical_identifier i1
) { 
  return std::make_tuple ( headtype_T_disable_statement  i1 ) ; 
} 
typedef boost::variant < tailtype_disable_statement1 > disable_statement ;


typedef std::tuple < headtype_T_delay_or_event_control_NOSPEC > tailtype_delay_or_event_control1 ;
tailtype_delay_or_event_control1
T_delay_or_event_control_NOSPEC (  ) { 
 return std::make_tuple ( headtype_T_delay_or_event_control_NOSPEC  ) ; 
} 
typedef std::tuple < headtype_T_delay_or_event_control_delay_control ,  delay_control > tailtype_delay_or_event_control2 ;
tailtype_delay_or_event_control2
T_delay_or_event_control_delay_control ( 
 delay_control i1
) { 
  return std::make_tuple ( headtype_T_delay_or_event_control_delay_control  i1 ) ; 
} 
typedef std::tuple < headtype_T_delay_or_event_control_event_control ,  event_control > tailtype_delay_or_event_control3 ;
tailtype_delay_or_event_control3
T_delay_or_event_control_event_control ( 
 event_control i1
) { 
  return std::make_tuple ( headtype_T_delay_or_event_control_event_control  i1 ) ; 
} 
typedef std::tuple < headtype_T_delay_or_event_control_3 ,  expression , event_control > tailtype_delay_or_event_control4 ;
tailtype_delay_or_event_control4
T_delay_or_event_control_3 ( 
 expression  i1 ,
 event_control i2
) { 
  return std::make_tuple ( headtype_T_delay_or_event_control_3  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_delay_or_event_control1 , tailtype_delay_or_event_control2 , tailtype_delay_or_event_control3 , tailtype_delay_or_event_control4 > delay_or_event_control ;


typedef std::tuple < headtype_T_delay_control_delay_value ,  delay_value > tailtype_delay_control1 ;
tailtype_delay_control1
T_delay_control_delay_value ( 
 delay_value i1
) { 
  return std::make_tuple ( headtype_T_delay_control_delay_value  i1 ) ; 
} 
typedef std::tuple < headtype_T_delay_control_mintypmax_expression ,  mintypmax_expression > tailtype_delay_control2 ;
tailtype_delay_control2
T_delay_control_mintypmax_expression ( 
 mintypmax_expression i1
) { 
  return std::make_tuple ( headtype_T_delay_control_mintypmax_expression  i1 ) ; 
} 
typedef boost::variant < tailtype_delay_control1 , tailtype_delay_control2 > delay_control ;


typedef std::tuple < headtype_T_statement_NOSPEC , std::list< attribute_instance> > tailtype_statement1 ;
tailtype_statement1
T_statement_NOSPEC ( 
 std::list< attribute_instance> i1
) { 
  return std::make_tuple ( headtype_T_statement_NOSPEC  i1 ) ; 
} 
typedef std::tuple < headtype_T_statement_blocking_assignment , std::list< attribute_instance> , blocking_assignment > tailtype_statement2 ;
tailtype_statement2
T_statement_blocking_assignment ( 
 std::list< attribute_instance>  i1 ,
 blocking_assignment i2
) { 
  return std::make_tuple ( headtype_T_statement_blocking_assignment  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_statement_case_statement , std::list< attribute_instance> , case_statement > tailtype_statement3 ;
tailtype_statement3
T_statement_case_statement ( 
 std::list< attribute_instance>  i1 ,
 case_statement i2
) { 
  return std::make_tuple ( headtype_T_statement_case_statement  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_statement_conditional_statement , std::list< attribute_instance> , conditional_statement > tailtype_statement4 ;
tailtype_statement4
T_statement_conditional_statement ( 
 std::list< attribute_instance>  i1 ,
 conditional_statement i2
) { 
  return std::make_tuple ( headtype_T_statement_conditional_statement  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_statement_disable_statement , std::list< attribute_instance> , disable_statement > tailtype_statement5 ;
tailtype_statement5
T_statement_disable_statement ( 
 std::list< attribute_instance>  i1 ,
 disable_statement i2
) { 
  return std::make_tuple ( headtype_T_statement_disable_statement  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_statement_event_trigger , std::list< attribute_instance> , event_trigger > tailtype_statement6 ;
tailtype_statement6
T_statement_event_trigger ( 
 std::list< attribute_instance>  i1 ,
 event_trigger i2
) { 
  return std::make_tuple ( headtype_T_statement_event_trigger  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_statement_loop_statement , std::list< attribute_instance> , loop_statement > tailtype_statement7 ;
tailtype_statement7
T_statement_loop_statement ( 
 std::list< attribute_instance>  i1 ,
 loop_statement i2
) { 
  return std::make_tuple ( headtype_T_statement_loop_statement  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_statement_nonblocking_assignment , std::list< attribute_instance> , nonblocking_assignment > tailtype_statement8 ;
tailtype_statement8
T_statement_nonblocking_assignment ( 
 std::list< attribute_instance>  i1 ,
 nonblocking_assignment i2
) { 
  return std::make_tuple ( headtype_T_statement_nonblocking_assignment  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_statement_par_block , std::list< attribute_instance> , par_block > tailtype_statement9 ;
tailtype_statement9
T_statement_par_block ( 
 std::list< attribute_instance>  i1 ,
 par_block i2
) { 
  return std::make_tuple ( headtype_T_statement_par_block  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_statement_procedural_continuous_assignments , std::list< attribute_instance> , procedural_continuous_assignments > tailtype_statement10 ;
tailtype_statement10
T_statement_procedural_continuous_assignments ( 
 std::list< attribute_instance>  i1 ,
 procedural_continuous_assignments i2
) { 
  return std::make_tuple ( headtype_T_statement_procedural_continuous_assignments  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_statement_procedural_timing_control_statement , std::list< attribute_instance> , procedural_timing_control_statement > tailtype_statement11 ;
tailtype_statement11
T_statement_procedural_timing_control_statement ( 
 std::list< attribute_instance>  i1 ,
 procedural_timing_control_statement i2
) { 
  return std::make_tuple ( headtype_T_statement_procedural_timing_control_statement  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_statement_seq_block , std::list< attribute_instance> , seq_block > tailtype_statement12 ;
tailtype_statement12
T_statement_seq_block ( 
 std::list< attribute_instance>  i1 ,
 seq_block i2
) { 
  return std::make_tuple ( headtype_T_statement_seq_block  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_statement_system_task_enable , std::list< attribute_instance> , system_task_enable > tailtype_statement13 ;
tailtype_statement13
T_statement_system_task_enable ( 
 std::list< attribute_instance>  i1 ,
 system_task_enable i2
) { 
  return std::make_tuple ( headtype_T_statement_system_task_enable  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_statement_task_enable , std::list< attribute_instance> , task_enable > tailtype_statement14 ;
tailtype_statement14
T_statement_task_enable ( 
 std::list< attribute_instance>  i1 ,
 task_enable i2
) { 
  return std::make_tuple ( headtype_T_statement_task_enable  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_statement_wait_statement , std::list< attribute_instance> , wait_statement > tailtype_statement15 ;
tailtype_statement15
T_statement_wait_statement ( 
 std::list< attribute_instance>  i1 ,
 wait_statement i2
) { 
  return std::make_tuple ( headtype_T_statement_wait_statement  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_statement1 , tailtype_statement2 , tailtype_statement3 , tailtype_statement4 , tailtype_statement5 , tailtype_statement6 , tailtype_statement7 , tailtype_statement8 , tailtype_statement9 , tailtype_statement10 , tailtype_statement11 , tailtype_statement12 , tailtype_statement13 , tailtype_statement14 , tailtype_statement15 > statement ;


typedef std::tuple < headtype_T_seq_block ,  colon_block_identifier , std::list< statement_or_block_item> > tailtype_seq_block1 ;
tailtype_seq_block1
T_seq_block ( 
 colon_block_identifier  i1 ,
 std::list< statement_or_block_item> i2
) { 
  return std::make_tuple ( headtype_T_seq_block  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_seq_block1 > seq_block ;


typedef std::tuple < headtype_T_colon_block_identifier_NOSPEC > tailtype_colon_block_identifier1 ;
tailtype_colon_block_identifier1
T_colon_block_identifier_NOSPEC (  ) { 
 return std::make_tuple ( headtype_T_colon_block_identifier_NOSPEC  ) ; 
} 
typedef std::tuple < headtype_T_colon_block_identifier ,  identifier > tailtype_colon_block_identifier2 ;
tailtype_colon_block_identifier2
T_colon_block_identifier ( 
 identifier i1
) { 
  return std::make_tuple ( headtype_T_colon_block_identifier  i1 ) ; 
} 
typedef boost::variant < tailtype_colon_block_identifier1 , tailtype_colon_block_identifier2 > colon_block_identifier ;


typedef std::tuple < headtype_T_par_block ,  colon_block_identifier , std::list< statement_or_block_item> > tailtype_par_block1 ;
tailtype_par_block1
T_par_block ( 
 colon_block_identifier  i1 ,
 std::list< statement_or_block_item> i2
) { 
  return std::make_tuple ( headtype_T_par_block  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_par_block1 > par_block ;


typedef std::tuple < headtype_T_procedural_continuous_assignments_assign ,  net_assignment > tailtype_procedural_continuous_assignments1 ;
tailtype_procedural_continuous_assignments1
T_procedural_continuous_assignments_assign ( 
 net_assignment i1
) { 
  return std::make_tuple ( headtype_T_procedural_continuous_assignments_assign  i1 ) ; 
} 
typedef std::tuple < headtype_T_procedural_continuous_assignments_deassign ,  net_lvalue > tailtype_procedural_continuous_assignments2 ;
tailtype_procedural_continuous_assignments2
T_procedural_continuous_assignments_deassign ( 
 net_lvalue i1
) { 
  return std::make_tuple ( headtype_T_procedural_continuous_assignments_deassign  i1 ) ; 
} 
typedef std::tuple < headtype_T_procedural_continuous_assignments_force1 ,  net_assignment > tailtype_procedural_continuous_assignments3 ;
tailtype_procedural_continuous_assignments3
T_procedural_continuous_assignments_force1 ( 
 net_assignment i1
) { 
  return std::make_tuple ( headtype_T_procedural_continuous_assignments_force1  i1 ) ; 
} 
typedef std::tuple < headtype_T_procedural_continuous_assignments_force2 ,  net_assignment > tailtype_procedural_continuous_assignments4 ;
tailtype_procedural_continuous_assignments4
T_procedural_continuous_assignments_force2 ( 
 net_assignment i1
) { 
  return std::make_tuple ( headtype_T_procedural_continuous_assignments_force2  i1 ) ; 
} 
typedef std::tuple < headtype_T_procedural_continuous_assignments_release1 ,  net_lvalue > tailtype_procedural_continuous_assignments5 ;
tailtype_procedural_continuous_assignments5
T_procedural_continuous_assignments_release1 ( 
 net_lvalue i1
) { 
  return std::make_tuple ( headtype_T_procedural_continuous_assignments_release1  i1 ) ; 
} 
typedef std::tuple < headtype_T_procedural_continuous_assignments_release2 ,  net_lvalue > tailtype_procedural_continuous_assignments6 ;
tailtype_procedural_continuous_assignments6
T_procedural_continuous_assignments_release2 ( 
 net_lvalue i1
) { 
  return std::make_tuple ( headtype_T_procedural_continuous_assignments_release2  i1 ) ; 
} 
typedef boost::variant < tailtype_procedural_continuous_assignments1 , tailtype_procedural_continuous_assignments2 , tailtype_procedural_continuous_assignments3 , tailtype_procedural_continuous_assignments4 , tailtype_procedural_continuous_assignments5 , tailtype_procedural_continuous_assignments6 > procedural_continuous_assignments ;


typedef std::tuple < headtype_T_nonblocking_assignment ,  net_lvalue , delay_or_event_control , expression > tailtype_nonblocking_assignment1 ;
tailtype_nonblocking_assignment1
T_nonblocking_assignment ( 
 net_lvalue  i1 ,
 delay_or_event_control  i2 ,
 expression i3
) { 
  return std::make_tuple ( headtype_T_nonblocking_assignment  i1 ,  i2 ,  i3 ) ; 
} 
typedef boost::variant < tailtype_nonblocking_assignment1 > nonblocking_assignment ;


typedef std::tuple < headtype_T_blocking_assignment ,  net_lvalue , delay_or_event_control , expression > tailtype_blocking_assignment1 ;
tailtype_blocking_assignment1
T_blocking_assignment ( 
 net_lvalue  i1 ,
 delay_or_event_control  i2 ,
 expression i3
) { 
  return std::make_tuple ( headtype_T_blocking_assignment  i1 ,  i2 ,  i3 ) ; 
} 
typedef boost::variant < tailtype_blocking_assignment1 > blocking_assignment ;


typedef std::tuple < headtype_T_always_construct ,  statement > tailtype_always_construct1 ;
tailtype_always_construct1
T_always_construct ( 
 statement i1
) { 
  return std::make_tuple ( headtype_T_always_construct  i1 ) ; 
} 
typedef boost::variant < tailtype_always_construct1 > always_construct ;


typedef std::tuple < headtype_T_initial_construct ,  statement > tailtype_initial_construct1 ;
tailtype_initial_construct1
T_initial_construct ( 
 statement i1
) { 
  return std::make_tuple ( headtype_T_initial_construct  i1 ) ; 
} 
typedef boost::variant < tailtype_initial_construct1 > initial_construct ;


typedef std::tuple < headtype_T_net_assignment ,  net_lvalue , expression > tailtype_net_assignment1 ;
tailtype_net_assignment1
T_net_assignment ( 
 net_lvalue  i1 ,
 expression i2
) { 
  return std::make_tuple ( headtype_T_net_assignment  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_net_assignment1 > net_assignment ;


typedef std::tuple < headtype_T_continuous_assign ,  drive_strength , delay3 , std::list< net_assignment> > tailtype_continuous_assign1 ;
tailtype_continuous_assign1
T_continuous_assign ( 
 drive_strength  i1 ,
 delay3  i2 ,
 std::list< net_assignment> i3
) { 
  return std::make_tuple ( headtype_T_continuous_assign  i1 ,  i2 ,  i3 ) ; 
} 
typedef boost::variant < tailtype_continuous_assign1 > continuous_assign ;


typedef std::tuple < headtype_T_name_of_udp_instance_NOSPEC > tailtype_name_of_udp_instance1 ;
tailtype_name_of_udp_instance1
T_name_of_udp_instance_NOSPEC (  ) { 
 return std::make_tuple ( headtype_T_name_of_udp_instance_NOSPEC  ) ; 
} 
typedef std::tuple < headtype_T_name_of_udp_instance ,  identifier , range > tailtype_name_of_udp_instance2 ;
tailtype_name_of_udp_instance2
T_name_of_udp_instance ( 
 identifier  i1 ,
 range i2
) { 
  return std::make_tuple ( headtype_T_name_of_udp_instance  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_name_of_udp_instance1 , tailtype_name_of_udp_instance2 > name_of_udp_instance ;


typedef std::tuple < headtype_T_udp_instance ,  name_of_udp_instance , net_lvalue , std::list< expression> > tailtype_udp_instance1 ;
tailtype_udp_instance1
T_udp_instance ( 
 name_of_udp_instance  i1 ,
 net_lvalue  i2 ,
 std::list< expression> i3
) { 
  return std::make_tuple ( headtype_T_udp_instance  i1 ,  i2 ,  i3 ) ; 
} 
typedef boost::variant < tailtype_udp_instance1 > udp_instance ;


typedef std::tuple < headtype_T_udp_instantiation ,  identifier , drive_strength , delay2 , std::list< udp_instance> > tailtype_udp_instantiation1 ;
tailtype_udp_instantiation1
T_udp_instantiation ( 
 identifier  i1 ,
 drive_strength  i2 ,
 delay2  i3 ,
 std::list< udp_instance> i4
) { 
  return std::make_tuple ( headtype_T_udp_instantiation  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef boost::variant < tailtype_udp_instantiation1 > udp_instantiation ;


typedef std::tuple < headtype_T_edge_indicator_level ,  level_symbol , level_symbol > tailtype_edge_indicator1 ;
tailtype_edge_indicator1
T_edge_indicator_level ( 
 level_symbol  i1 ,
 level_symbol i2
) { 
  return std::make_tuple ( headtype_T_edge_indicator_level  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_edge_indicator_edge ,  edge_symbol > tailtype_edge_indicator2 ;
tailtype_edge_indicator2
T_edge_indicator_edge ( 
 edge_symbol i1
) { 
  return std::make_tuple ( headtype_T_edge_indicator_edge  i1 ) ; 
} 
typedef boost::variant < tailtype_edge_indicator1 , tailtype_edge_indicator2 > edge_indicator ;


typedef std::tuple < headtype_T_edge_input_list , std::list< level_symbol> , edge_indicator , std::list< level_symbol> > tailtype_edge_input_list1 ;
tailtype_edge_input_list1
T_edge_input_list ( 
 std::list< level_symbol>  i1 ,
 edge_indicator  i2 ,
 std::list< level_symbol> i3
) { 
  return std::make_tuple ( headtype_T_edge_input_list  i1 ,  i2 ,  i3 ) ; 
} 
typedef boost::variant < tailtype_edge_input_list1 > edge_input_list ;


typedef std::tuple < headtype_T_seq_input_list_level , std::list< level_symbol> > tailtype_seq_input_list1 ;
tailtype_seq_input_list1
T_seq_input_list_level ( 
 std::list< level_symbol> i1
) { 
  return std::make_tuple ( headtype_T_seq_input_list_level  i1 ) ; 
} 
typedef std::tuple < headtype_T_seq_input_list_edge ,  edge_input_list > tailtype_seq_input_list2 ;
tailtype_seq_input_list2
T_seq_input_list_edge ( 
 edge_input_list i1
) { 
  return std::make_tuple ( headtype_T_seq_input_list_edge  i1 ) ; 
} 
typedef boost::variant < tailtype_seq_input_list1 , tailtype_seq_input_list2 > seq_input_list ;


typedef std::tuple < headtype_T_sequential_entry ,  seq_input_list , current_state , next_state > tailtype_sequential_entry1 ;
tailtype_sequential_entry1
T_sequential_entry ( 
 seq_input_list  i1 ,
 current_state  i2 ,
 next_state i3
) { 
  return std::make_tuple ( headtype_T_sequential_entry  i1 ,  i2 ,  i3 ) ; 
} 
typedef boost::variant < tailtype_sequential_entry1 > sequential_entry ;


typedef std::tuple < headtype_T_init_val_bin ,  (int , string) > tailtype_init_val1 ;
tailtype_init_val1
T_init_val_bin ( 
 (int  i1 ,
 string) i2
) { 
  return std::make_tuple ( headtype_T_init_val_bin  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_init_val_unsigned ,  int > tailtype_init_val2 ;
tailtype_init_val2
T_init_val_unsigned ( 
 int i1
) { 
  return std::make_tuple ( headtype_T_init_val_unsigned  i1 ) ; 
} 
typedef boost::variant < tailtype_init_val1 , tailtype_init_val2 > init_val ;


typedef std::tuple < headtype_T_udp_initial_statement_NOSPEC > tailtype_udp_initial_statement1 ;
tailtype_udp_initial_statement1
T_udp_initial_statement_NOSPEC (  ) { 
 return std::make_tuple ( headtype_T_udp_initial_statement_NOSPEC  ) ; 
} 
typedef std::tuple < headtype_T_udp_initial_statement ,  identifier , init_val > tailtype_udp_initial_statement2 ;
tailtype_udp_initial_statement2
T_udp_initial_statement ( 
 identifier  i1 ,
 init_val i2
) { 
  return std::make_tuple ( headtype_T_udp_initial_statement  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_udp_initial_statement1 , tailtype_udp_initial_statement2 > udp_initial_statement ;


typedef std::tuple < headtype_T_sequential_body ,  udp_initial_statement , std::list< sequential_entry> > tailtype_sequential_body1 ;
tailtype_sequential_body1
T_sequential_body ( 
 udp_initial_statement  i1 ,
 std::list< sequential_entry> i2
) { 
  return std::make_tuple ( headtype_T_sequential_body  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_sequential_body1 > sequential_body ;


typedef std::tuple < headtype_T_combinational_entry , std::list< level_symbol> , output_symbol > tailtype_combinational_entry1 ;
tailtype_combinational_entry1
T_combinational_entry ( 
 std::list< level_symbol>  i1 ,
 output_symbol i2
) { 
  return std::make_tuple ( headtype_T_combinational_entry  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_combinational_entry1 > combinational_entry ;


typedef std::tuple < headtype_T_udp_body_comb , std::list< combinational_entry> > tailtype_udp_body1 ;
tailtype_udp_body1
T_udp_body_comb ( 
 std::list< combinational_entry> i1
) { 
  return std::make_tuple ( headtype_T_udp_body_comb  i1 ) ; 
} 
typedef std::tuple < headtype_T_udp_body_seq ,  sequential_body > tailtype_udp_body2 ;
tailtype_udp_body2
T_udp_body_seq ( 
 sequential_body i1
) { 
  return std::make_tuple ( headtype_T_udp_body_seq  i1 ) ; 
} 
typedef boost::variant < tailtype_udp_body1 , tailtype_udp_body2 > udp_body ;


typedef std::tuple < headtype_T_udp_reg_declaration , std::list< attribute_instance> , identifier > tailtype_udp_reg_declaration1 ;
tailtype_udp_reg_declaration1
T_udp_reg_declaration ( 
 std::list< attribute_instance>  i1 ,
 identifier i2
) { 
  return std::make_tuple ( headtype_T_udp_reg_declaration  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_udp_reg_declaration1 > udp_reg_declaration ;


typedef std::tuple < headtype_T_udp_input_declaration , std::list< attribute_instance> , std::list< identifier> > tailtype_udp_input_declaration1 ;
tailtype_udp_input_declaration1
T_udp_input_declaration ( 
 std::list< attribute_instance>  i1 ,
 std::list< identifier> i2
) { 
  return std::make_tuple ( headtype_T_udp_input_declaration  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_udp_input_declaration1 > udp_input_declaration ;


typedef std::tuple < headtype_T_udp_output_declaration_output , std::list< attribute_instance> , identifier > tailtype_udp_output_declaration1 ;
tailtype_udp_output_declaration1
T_udp_output_declaration_output ( 
 std::list< attribute_instance>  i1 ,
 identifier i2
) { 
  return std::make_tuple ( headtype_T_udp_output_declaration_output  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_udp_output_declaration_reg , std::list< attribute_instance> , identifier , expression > tailtype_udp_output_declaration2 ;
tailtype_udp_output_declaration2
T_udp_output_declaration_reg ( 
 std::list< attribute_instance>  i1 ,
 identifier  i2 ,
 expression i3
) { 
  return std::make_tuple ( headtype_T_udp_output_declaration_reg  i1 ,  i2 ,  i3 ) ; 
} 
typedef boost::variant < tailtype_udp_output_declaration1 , tailtype_udp_output_declaration2 > udp_output_declaration ;


typedef std::tuple < headtype_T_udp_port_declaration_out ,  udp_output_declaration > tailtype_udp_port_declaration1 ;
tailtype_udp_port_declaration1
T_udp_port_declaration_out ( 
 udp_output_declaration i1
) { 
  return std::make_tuple ( headtype_T_udp_port_declaration_out  i1 ) ; 
} 
typedef std::tuple < headtype_T_udp_port_declaration_input ,  udp_input_declaration > tailtype_udp_port_declaration2 ;
tailtype_udp_port_declaration2
T_udp_port_declaration_input ( 
 udp_input_declaration i1
) { 
  return std::make_tuple ( headtype_T_udp_port_declaration_input  i1 ) ; 
} 
typedef std::tuple < headtype_T_udp_port_declaration_reg ,  udp_reg_declaration > tailtype_udp_port_declaration3 ;
tailtype_udp_port_declaration3
T_udp_port_declaration_reg ( 
 udp_reg_declaration i1
) { 
  return std::make_tuple ( headtype_T_udp_port_declaration_reg  i1 ) ; 
} 
typedef boost::variant < tailtype_udp_port_declaration1 , tailtype_udp_port_declaration2 , tailtype_udp_port_declaration3 > udp_port_declaration ;


typedef std::tuple < headtype_T_udp_declaration_port_list ,  udp_output_declaration , std::list< udp_input_declaration> > tailtype_udp_declaration_port_list1 ;
tailtype_udp_declaration_port_list1
T_udp_declaration_port_list ( 
 udp_output_declaration  i1 ,
 std::list< udp_input_declaration> i2
) { 
  return std::make_tuple ( headtype_T_udp_declaration_port_list  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_udp_declaration_port_list1 > udp_declaration_port_list ;


typedef std::tuple < headtype_T_udp_port_list ,  identifier , std::list< identifier> > tailtype_udp_port_list1 ;
tailtype_udp_port_list1
T_udp_port_list ( 
 identifier  i1 ,
 std::list< identifier> i2
) { 
  return std::make_tuple ( headtype_T_udp_port_list  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_udp_port_list1 > udp_port_list ;


typedef std::tuple < headtype_T_udp_declaration_1 , std::list< attribute_instance> , identifier , udp_port_list , std::list< udp_port_declaration> , udp_body > tailtype_udp_declaration1 ;
tailtype_udp_declaration1
T_udp_declaration_1 ( 
 std::list< attribute_instance>  i1 ,
 identifier  i2 ,
 udp_port_list  i3 ,
 std::list< udp_port_declaration>  i4 ,
 udp_body i5
) { 
  return std::make_tuple ( headtype_T_udp_declaration_1  i1 ,  i2 ,  i3 ,  i4 ,  i5 ) ; 
} 
typedef std::tuple < headtype_T_udp_declaration_2 , std::list< attribute_instance> , identifier , udp_declaration_port_list , udp_body > tailtype_udp_declaration2 ;
tailtype_udp_declaration2
T_udp_declaration_2 ( 
 std::list< attribute_instance>  i1 ,
 identifier  i2 ,
 udp_declaration_port_list  i3 ,
 udp_body i4
) { 
  return std::make_tuple ( headtype_T_udp_declaration_2  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef boost::variant < tailtype_udp_declaration1 , tailtype_udp_declaration2 > udp_declaration ;


typedef std::tuple < headtype_T_generate_block_NOSPEC > tailtype_generate_block1 ;
tailtype_generate_block1
T_generate_block_NOSPEC (  ) { 
 return std::make_tuple ( headtype_T_generate_block_NOSPEC  ) ; 
} 
typedef std::tuple < headtype_T_generate_block_mgi ,  module_item > tailtype_generate_block2 ;
tailtype_generate_block2
T_generate_block_mgi ( 
 module_item i1
) { 
  return std::make_tuple ( headtype_T_generate_block_mgi  i1 ) ; 
} 
typedef std::tuple < headtype_T_generate_block_begin ,  identifier , std::list< module_item> > tailtype_generate_block3 ;
tailtype_generate_block3
T_generate_block_begin ( 
 identifier  i1 ,
 std::list< module_item> i2
) { 
  return std::make_tuple ( headtype_T_generate_block_begin  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_generate_block1 , tailtype_generate_block2 , tailtype_generate_block3 > generate_block ;


typedef std::tuple < headtype_T_if_generate_construct ,  expression , generate_block , generate_block > tailtype_if_generate_construct1 ;
tailtype_if_generate_construct1
T_if_generate_construct ( 
 expression  i1 ,
 generate_block  i2 ,
 generate_block i3
) { 
  return std::make_tuple ( headtype_T_if_generate_construct  i1 ,  i2 ,  i3 ) ; 
} 
typedef boost::variant < tailtype_if_generate_construct1 > if_generate_construct ;


typedef std::tuple < headtype_T_case_generate_item_case , std::list< expression> , generate_block > tailtype_case_generate_item1 ;
tailtype_case_generate_item1
T_case_generate_item_case ( 
 std::list< expression>  i1 ,
 generate_block i2
) { 
  return std::make_tuple ( headtype_T_case_generate_item_case  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_case_generate_item_default ,  generate_block > tailtype_case_generate_item2 ;
tailtype_case_generate_item2
T_case_generate_item_default ( 
 generate_block i1
) { 
  return std::make_tuple ( headtype_T_case_generate_item_default  i1 ) ; 
} 
typedef boost::variant < tailtype_case_generate_item1 , tailtype_case_generate_item2 > case_generate_item ;


typedef std::tuple < headtype_T_case_generate_construct ,  expression , std::list< case_generate_item> > tailtype_case_generate_construct1 ;
tailtype_case_generate_construct1
T_case_generate_construct ( 
 expression  i1 ,
 std::list< case_generate_item> i2
) { 
  return std::make_tuple ( headtype_T_case_generate_construct  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_case_generate_construct1 > case_generate_construct ;


typedef std::tuple < headtype_T_conditional_generate_construct_if ,  if_generate_construct > tailtype_conditional_generate_construct1 ;
tailtype_conditional_generate_construct1
T_conditional_generate_construct_if ( 
 if_generate_construct i1
) { 
  return std::make_tuple ( headtype_T_conditional_generate_construct_if  i1 ) ; 
} 
typedef std::tuple < headtype_T_conditional_generate_construct_case ,  case_generate_construct > tailtype_conditional_generate_construct2 ;
tailtype_conditional_generate_construct2
T_conditional_generate_construct_case ( 
 case_generate_construct i1
) { 
  return std::make_tuple ( headtype_T_conditional_generate_construct_case  i1 ) ; 
} 
typedef boost::variant < tailtype_conditional_generate_construct1 , tailtype_conditional_generate_construct2 > conditional_generate_construct ;


typedef std::tuple < headtype_T_genvar_iteration ,  identifier , expression > tailtype_genvar_iteration1 ;
tailtype_genvar_iteration1
T_genvar_iteration ( 
 identifier  i1 ,
 expression i2
) { 
  return std::make_tuple ( headtype_T_genvar_iteration  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_genvar_iteration1 > genvar_iteration ;


typedef std::tuple < headtype_T_genvar_initialization ,  identifier , expression > tailtype_genvar_initialization1 ;
tailtype_genvar_initialization1
T_genvar_initialization ( 
 identifier  i1 ,
 expression i2
) { 
  return std::make_tuple ( headtype_T_genvar_initialization  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_genvar_initialization1 > genvar_initialization ;


typedef std::tuple < headtype_T_loop_generate_construct ,  genvar_initialization , expression , genvar_iteration , generate_block > tailtype_loop_generate_construct1 ;
tailtype_loop_generate_construct1
T_loop_generate_construct ( 
 genvar_initialization  i1 ,
 expression  i2 ,
 genvar_iteration  i3 ,
 generate_block i4
) { 
  return std::make_tuple ( headtype_T_loop_generate_construct  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef boost::variant < tailtype_loop_generate_construct1 > loop_generate_construct ;


typedef std::tuple < headtype_T_genvar_declaration , std::list< identifier> > tailtype_genvar_declaration1 ;
tailtype_genvar_declaration1
T_genvar_declaration ( 
 std::list< identifier> i1
) { 
  return std::make_tuple ( headtype_T_genvar_declaration  i1 ) ; 
} 
typedef boost::variant < tailtype_genvar_declaration1 > genvar_declaration ;


typedef std::tuple < headtype_T_generate_region , std::list< module_item> > tailtype_generate_region1 ;
tailtype_generate_region1
T_generate_region ( 
 std::list< module_item> i1
) { 
  return std::make_tuple ( headtype_T_generate_region  i1 ) ; 
} 
typedef boost::variant < tailtype_generate_region1 > generate_region ;


typedef std::tuple < headtype_T_named_port_connection , std::list< attribute_instance> , identifier , expression > tailtype_named_port_connection1 ;
tailtype_named_port_connection1
T_named_port_connection ( 
 std::list< attribute_instance>  i1 ,
 identifier  i2 ,
 expression i3
) { 
  return std::make_tuple ( headtype_T_named_port_connection  i1 ,  i2 ,  i3 ) ; 
} 
typedef boost::variant < tailtype_named_port_connection1 > named_port_connection ;


typedef std::tuple < headtype_T_ordered_port_connection , std::list< attribute_instance> , expression > tailtype_ordered_port_connection1 ;
tailtype_ordered_port_connection1
T_ordered_port_connection ( 
 std::list< attribute_instance>  i1 ,
 expression i2
) { 
  return std::make_tuple ( headtype_T_ordered_port_connection  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_ordered_port_connection1 > ordered_port_connection ;


typedef std::tuple < headtype_T_list_of_port_connections_ordered , std::list< ordered_port_connection> > tailtype_list_of_port_connections1 ;
tailtype_list_of_port_connections1
T_list_of_port_connections_ordered ( 
 std::list< ordered_port_connection> i1
) { 
  return std::make_tuple ( headtype_T_list_of_port_connections_ordered  i1 ) ; 
} 
typedef std::tuple < headtype_T_list_of_port_connections_named , std::list< named_port_connection> > tailtype_list_of_port_connections2 ;
tailtype_list_of_port_connections2
T_list_of_port_connections_named ( 
 std::list< named_port_connection> i1
) { 
  return std::make_tuple ( headtype_T_list_of_port_connections_named  i1 ) ; 
} 
typedef boost::variant < tailtype_list_of_port_connections1 , tailtype_list_of_port_connections2 > list_of_port_connections ;


typedef std::tuple < headtype_T_named_parameter_assignment ,  identifier , mintypmax_expression > tailtype_named_parameter_assignment1 ;
tailtype_named_parameter_assignment1
T_named_parameter_assignment ( 
 identifier  i1 ,
 mintypmax_expression i2
) { 
  return std::make_tuple ( headtype_T_named_parameter_assignment  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_named_parameter_assignment1 > named_parameter_assignment ;


typedef std::tuple < headtype_T_parameter_value_assignment_NOSPEC > tailtype_parameter_value_assignment1 ;
tailtype_parameter_value_assignment1
T_parameter_value_assignment_NOSPEC (  ) { 
 return std::make_tuple ( headtype_T_parameter_value_assignment_NOSPEC  ) ; 
} 
typedef std::tuple < headtype_T_parameter_value_assignment_order , std::list< expression> > tailtype_parameter_value_assignment2 ;
tailtype_parameter_value_assignment2
T_parameter_value_assignment_order ( 
 std::list< expression> i1
) { 
  return std::make_tuple ( headtype_T_parameter_value_assignment_order  i1 ) ; 
} 
typedef std::tuple < headtype_T_parameter_value_assignment_named , std::list< named_parameter_assignment> > tailtype_parameter_value_assignment3 ;
tailtype_parameter_value_assignment3
T_parameter_value_assignment_named ( 
 std::list< named_parameter_assignment> i1
) { 
  return std::make_tuple ( headtype_T_parameter_value_assignment_named  i1 ) ; 
} 
typedef boost::variant < tailtype_parameter_value_assignment1 , tailtype_parameter_value_assignment2 , tailtype_parameter_value_assignment3 > parameter_value_assignment ;


typedef std::tuple < headtype_T_name_of_module_instance ,  identifier , range > tailtype_name_of_module_instance1 ;
tailtype_name_of_module_instance1
T_name_of_module_instance ( 
 identifier  i1 ,
 range i2
) { 
  return std::make_tuple ( headtype_T_name_of_module_instance  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_name_of_module_instance1 > name_of_module_instance ;


typedef std::tuple < headtype_T_module_instance ,  name_of_module_instance , list_of_port_connections > tailtype_module_instance1 ;
tailtype_module_instance1
T_module_instance ( 
 name_of_module_instance  i1 ,
 list_of_port_connections i2
) { 
  return std::make_tuple ( headtype_T_module_instance  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_module_instance1 > module_instance ;


typedef std::tuple < headtype_T_module_instantiation ,  identifier , parameter_value_assignment , std::list< module_instance> > tailtype_module_instantiation1 ;
tailtype_module_instantiation1
T_module_instantiation ( 
 identifier  i1 ,
 parameter_value_assignment  i2 ,
 std::list< module_instance> i3
) { 
  return std::make_tuple ( headtype_T_module_instantiation  i1 ,  i2 ,  i3 ) ; 
} 
typedef boost::variant < tailtype_module_instantiation1 > module_instantiation ;


typedef std::tuple < headtype_T_pass_switchtype_TRAN > tailtype_pass_switchtype1 ;
tailtype_pass_switchtype1
T_pass_switchtype_TRAN (  ) { 
 return std::make_tuple ( headtype_T_pass_switchtype_TRAN  ) ; 
} 
typedef std::tuple < headtype_T_pass_switchtype_RTRAN > tailtype_pass_switchtype2 ;
tailtype_pass_switchtype2
T_pass_switchtype_RTRAN (  ) { 
 return std::make_tuple ( headtype_T_pass_switchtype_RTRAN  ) ; 
} 
typedef boost::variant < tailtype_pass_switchtype1 , tailtype_pass_switchtype2 > pass_switchtype ;


typedef std::tuple < headtype_T_pass_en_switchtype_TRANIF0 > tailtype_pass_en_switchtype1 ;
tailtype_pass_en_switchtype1
T_pass_en_switchtype_TRANIF0 (  ) { 
 return std::make_tuple ( headtype_T_pass_en_switchtype_TRANIF0  ) ; 
} 
typedef std::tuple < headtype_T_pass_en_switchtype_TRANIF1 > tailtype_pass_en_switchtype2 ;
tailtype_pass_en_switchtype2
T_pass_en_switchtype_TRANIF1 (  ) { 
 return std::make_tuple ( headtype_T_pass_en_switchtype_TRANIF1  ) ; 
} 
typedef std::tuple < headtype_T_pass_en_switchtype_RTRANIF1 > tailtype_pass_en_switchtype3 ;
tailtype_pass_en_switchtype3
T_pass_en_switchtype_RTRANIF1 (  ) { 
 return std::make_tuple ( headtype_T_pass_en_switchtype_RTRANIF1  ) ; 
} 
typedef std::tuple < headtype_T_pass_en_switchtype_RTRANIF0 > tailtype_pass_en_switchtype4 ;
tailtype_pass_en_switchtype4
T_pass_en_switchtype_RTRANIF0 (  ) { 
 return std::make_tuple ( headtype_T_pass_en_switchtype_RTRANIF0  ) ; 
} 
typedef boost::variant < tailtype_pass_en_switchtype1 , tailtype_pass_en_switchtype2 , tailtype_pass_en_switchtype3 , tailtype_pass_en_switchtype4 > pass_en_switchtype ;


typedef std::tuple < headtype_T_n_output_gatetype_BUF > tailtype_n_output_gatetype1 ;
tailtype_n_output_gatetype1
T_n_output_gatetype_BUF (  ) { 
 return std::make_tuple ( headtype_T_n_output_gatetype_BUF  ) ; 
} 
typedef std::tuple < headtype_T_n_output_gatetype_NOT > tailtype_n_output_gatetype2 ;
tailtype_n_output_gatetype2
T_n_output_gatetype_NOT (  ) { 
 return std::make_tuple ( headtype_T_n_output_gatetype_NOT  ) ; 
} 
typedef boost::variant < tailtype_n_output_gatetype1 , tailtype_n_output_gatetype2 > n_output_gatetype ;


typedef std::tuple < headtype_T_n_input_gatetype_AND > tailtype_n_input_gatetype1 ;
tailtype_n_input_gatetype1
T_n_input_gatetype_AND (  ) { 
 return std::make_tuple ( headtype_T_n_input_gatetype_AND  ) ; 
} 
typedef std::tuple < headtype_T_n_input_gatetype_NAND > tailtype_n_input_gatetype2 ;
tailtype_n_input_gatetype2
T_n_input_gatetype_NAND (  ) { 
 return std::make_tuple ( headtype_T_n_input_gatetype_NAND  ) ; 
} 
typedef std::tuple < headtype_T_n_input_gatetype_OR > tailtype_n_input_gatetype3 ;
tailtype_n_input_gatetype3
T_n_input_gatetype_OR (  ) { 
 return std::make_tuple ( headtype_T_n_input_gatetype_OR  ) ; 
} 
typedef std::tuple < headtype_T_n_input_gatetype_NOR > tailtype_n_input_gatetype4 ;
tailtype_n_input_gatetype4
T_n_input_gatetype_NOR (  ) { 
 return std::make_tuple ( headtype_T_n_input_gatetype_NOR  ) ; 
} 
typedef std::tuple < headtype_T_n_input_gatetype_XOR > tailtype_n_input_gatetype5 ;
tailtype_n_input_gatetype5
T_n_input_gatetype_XOR (  ) { 
 return std::make_tuple ( headtype_T_n_input_gatetype_XOR  ) ; 
} 
typedef std::tuple < headtype_T_n_input_gatetype_XNOR > tailtype_n_input_gatetype6 ;
tailtype_n_input_gatetype6
T_n_input_gatetype_XNOR (  ) { 
 return std::make_tuple ( headtype_T_n_input_gatetype_XNOR  ) ; 
} 
typedef boost::variant < tailtype_n_input_gatetype1 , tailtype_n_input_gatetype2 , tailtype_n_input_gatetype3 , tailtype_n_input_gatetype4 , tailtype_n_input_gatetype5 , tailtype_n_input_gatetype6 > n_input_gatetype ;


typedef std::tuple < headtype_T_mos_switchtype_NMOS > tailtype_mos_switchtype1 ;
tailtype_mos_switchtype1
T_mos_switchtype_NMOS (  ) { 
 return std::make_tuple ( headtype_T_mos_switchtype_NMOS  ) ; 
} 
typedef std::tuple < headtype_T_mos_switchtype_PMOS > tailtype_mos_switchtype2 ;
tailtype_mos_switchtype2
T_mos_switchtype_PMOS (  ) { 
 return std::make_tuple ( headtype_T_mos_switchtype_PMOS  ) ; 
} 
typedef std::tuple < headtype_T_mos_switchtype_RNMOS > tailtype_mos_switchtype3 ;
tailtype_mos_switchtype3
T_mos_switchtype_RNMOS (  ) { 
 return std::make_tuple ( headtype_T_mos_switchtype_RNMOS  ) ; 
} 
typedef std::tuple < headtype_T_mos_switchtype_RPMOS > tailtype_mos_switchtype4 ;
tailtype_mos_switchtype4
T_mos_switchtype_RPMOS (  ) { 
 return std::make_tuple ( headtype_T_mos_switchtype_RPMOS  ) ; 
} 
typedef boost::variant < tailtype_mos_switchtype1 , tailtype_mos_switchtype2 , tailtype_mos_switchtype3 , tailtype_mos_switchtype4 > mos_switchtype ;


typedef std::tuple < headtype_T_enable_gatetype__BUFIF0 > tailtype_enable_gatetype1 ;
tailtype_enable_gatetype1
T_enable_gatetype__BUFIF0 (  ) { 
 return std::make_tuple ( headtype_T_enable_gatetype__BUFIF0  ) ; 
} 
typedef std::tuple < headtype_T_enable_gatetype__BUFIF1 > tailtype_enable_gatetype2 ;
tailtype_enable_gatetype2
T_enable_gatetype__BUFIF1 (  ) { 
 return std::make_tuple ( headtype_T_enable_gatetype__BUFIF1  ) ; 
} 
typedef std::tuple < headtype_T_enable_gatetype__NOTIF0 > tailtype_enable_gatetype3 ;
tailtype_enable_gatetype3
T_enable_gatetype__NOTIF0 (  ) { 
 return std::make_tuple ( headtype_T_enable_gatetype__NOTIF0  ) ; 
} 
typedef std::tuple < headtype_T_enable_gatetype__NOTIF1 > tailtype_enable_gatetype4 ;
tailtype_enable_gatetype4
T_enable_gatetype__NOTIF1 (  ) { 
 return std::make_tuple ( headtype_T_enable_gatetype__NOTIF1  ) ; 
} 
typedef boost::variant < tailtype_enable_gatetype1 , tailtype_enable_gatetype2 , tailtype_enable_gatetype3 , tailtype_enable_gatetype4 > enable_gatetype ;


typedef std::tuple < headtype_T_cmos_switchtype_CMOS > tailtype_cmos_switchtype1 ;
tailtype_cmos_switchtype1
T_cmos_switchtype_CMOS (  ) { 
 return std::make_tuple ( headtype_T_cmos_switchtype_CMOS  ) ; 
} 
typedef std::tuple < headtype_T_cmos_switchtype_RCMOS > tailtype_cmos_switchtype2 ;
tailtype_cmos_switchtype2
T_cmos_switchtype_RCMOS (  ) { 
 return std::make_tuple ( headtype_T_cmos_switchtype_RCMOS  ) ; 
} 
typedef boost::variant < tailtype_cmos_switchtype1 , tailtype_cmos_switchtype2 > cmos_switchtype ;


typedef std::tuple < headtype_T_pullup_strength_NOSPEC > tailtype_pullup_strength1 ;
tailtype_pullup_strength1
T_pullup_strength_NOSPEC (  ) { 
 return std::make_tuple ( headtype_T_pullup_strength_NOSPEC  ) ; 
} 
typedef std::tuple < headtype_T_pullup_strength01 ,  strength , strength > tailtype_pullup_strength2 ;
tailtype_pullup_strength2
T_pullup_strength01 ( 
 strength  i1 ,
 strength i2
) { 
  return std::make_tuple ( headtype_T_pullup_strength01  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_pullup_strength10 ,  strength , strength > tailtype_pullup_strength3 ;
tailtype_pullup_strength3
T_pullup_strength10 ( 
 strength  i1 ,
 strength i2
) { 
  return std::make_tuple ( headtype_T_pullup_strength10  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_pullup_strength1 ,  strength > tailtype_pullup_strength4 ;
tailtype_pullup_strength4
T_pullup_strength1 ( 
 strength i1
) { 
  return std::make_tuple ( headtype_T_pullup_strength1  i1 ) ; 
} 
typedef boost::variant < tailtype_pullup_strength1 , tailtype_pullup_strength2 , tailtype_pullup_strength3 , tailtype_pullup_strength4 > pullup_strength ;


typedef std::tuple < headtype_T_pulldown_strength_NOSPEC > tailtype_pulldown_strength1 ;
tailtype_pulldown_strength1
T_pulldown_strength_NOSPEC (  ) { 
 return std::make_tuple ( headtype_T_pulldown_strength_NOSPEC  ) ; 
} 
typedef std::tuple < headtype_T_pulldown_strength01 ,  strength , strength > tailtype_pulldown_strength2 ;
tailtype_pulldown_strength2
T_pulldown_strength01 ( 
 strength  i1 ,
 strength i2
) { 
  return std::make_tuple ( headtype_T_pulldown_strength01  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_pulldown_strength10 ,  strength , strength > tailtype_pulldown_strength3 ;
tailtype_pulldown_strength3
T_pulldown_strength10 ( 
 strength  i1 ,
 strength i2
) { 
  return std::make_tuple ( headtype_T_pulldown_strength10  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_pulldown_strength0 ,  strength > tailtype_pulldown_strength4 ;
tailtype_pulldown_strength4
T_pulldown_strength0 ( 
 strength i1
) { 
  return std::make_tuple ( headtype_T_pulldown_strength0  i1 ) ; 
} 
typedef boost::variant < tailtype_pulldown_strength1 , tailtype_pulldown_strength2 , tailtype_pulldown_strength3 , tailtype_pulldown_strength4 > pulldown_strength ;


typedef std::tuple < headtype_T_name_of_gate_instance_NOSPEC > tailtype_name_of_gate_instance1 ;
tailtype_name_of_gate_instance1
T_name_of_gate_instance_NOSPEC (  ) { 
 return std::make_tuple ( headtype_T_name_of_gate_instance_NOSPEC  ) ; 
} 
typedef std::tuple < headtype_T_name_of_gate_instance ,  identifier , range > tailtype_name_of_gate_instance2 ;
tailtype_name_of_gate_instance2
T_name_of_gate_instance ( 
 identifier  i1 ,
 range i2
) { 
  return std::make_tuple ( headtype_T_name_of_gate_instance  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_name_of_gate_instance1 , tailtype_name_of_gate_instance2 > name_of_gate_instance ;


typedef std::tuple < headtype_T_pull_gate_instance ,  name_of_gate_instance , net_lvalue > tailtype_pull_gate_instance1 ;
tailtype_pull_gate_instance1
T_pull_gate_instance ( 
 name_of_gate_instance  i1 ,
 net_lvalue i2
) { 
  return std::make_tuple ( headtype_T_pull_gate_instance  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_pull_gate_instance1 > pull_gate_instance ;


typedef std::tuple < headtype_T_pass_enable_switch_instance ,  name_of_gate_instance , net_lvalue , net_lvalue , expression > tailtype_pass_enable_switch_instance1 ;
tailtype_pass_enable_switch_instance1
T_pass_enable_switch_instance ( 
 name_of_gate_instance  i1 ,
 net_lvalue  i2 ,
 net_lvalue  i3 ,
 expression i4
) { 
  return std::make_tuple ( headtype_T_pass_enable_switch_instance  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef boost::variant < tailtype_pass_enable_switch_instance1 > pass_enable_switch_instance ;


typedef std::tuple < headtype_T_pass_switch_instance ,  name_of_gate_instance , net_lvalue , net_lvalue > tailtype_pass_switch_instance1 ;
tailtype_pass_switch_instance1
T_pass_switch_instance ( 
 name_of_gate_instance  i1 ,
 net_lvalue  i2 ,
 net_lvalue i3
) { 
  return std::make_tuple ( headtype_T_pass_switch_instance  i1 ,  i2 ,  i3 ) ; 
} 
typedef boost::variant < tailtype_pass_switch_instance1 > pass_switch_instance ;


typedef std::tuple < headtype_T_n_output_gate_instance ,  name_of_gate_instance , net_lvalue , std::list< net_lvalue> , expression > tailtype_n_output_gate_instance1 ;
tailtype_n_output_gate_instance1
T_n_output_gate_instance ( 
 name_of_gate_instance  i1 ,
 net_lvalue  i2 ,
 std::list< net_lvalue>  i3 ,
 expression i4
) { 
  return std::make_tuple ( headtype_T_n_output_gate_instance  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef boost::variant < tailtype_n_output_gate_instance1 > n_output_gate_instance ;


typedef std::tuple < headtype_T_n_input_gate_instance ,  name_of_gate_instance , net_lvalue , expression , std::list< expression> > tailtype_n_input_gate_instance1 ;
tailtype_n_input_gate_instance1
T_n_input_gate_instance ( 
 name_of_gate_instance  i1 ,
 net_lvalue  i2 ,
 expression  i3 ,
 std::list< expression> i4
) { 
  return std::make_tuple ( headtype_T_n_input_gate_instance  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef boost::variant < tailtype_n_input_gate_instance1 > n_input_gate_instance ;


typedef std::tuple < headtype_T_mos_switch_instance ,  name_of_gate_instance , net_lvalue , expression , expression > tailtype_mos_switch_instance1 ;
tailtype_mos_switch_instance1
T_mos_switch_instance ( 
 name_of_gate_instance  i1 ,
 net_lvalue  i2 ,
 expression  i3 ,
 expression i4
) { 
  return std::make_tuple ( headtype_T_mos_switch_instance  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef boost::variant < tailtype_mos_switch_instance1 > mos_switch_instance ;


typedef std::tuple < headtype_T_enable_gate_instance ,  name_of_gate_instance , net_lvalue , expression , expression > tailtype_enable_gate_instance1 ;
tailtype_enable_gate_instance1
T_enable_gate_instance ( 
 name_of_gate_instance  i1 ,
 net_lvalue  i2 ,
 expression  i3 ,
 expression i4
) { 
  return std::make_tuple ( headtype_T_enable_gate_instance  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef boost::variant < tailtype_enable_gate_instance1 > enable_gate_instance ;


typedef std::tuple < headtype_T_cmos_switch_instance ,  name_of_gate_instance , net_lvalue , expression , expression , expression > tailtype_cmos_switch_instance1 ;
tailtype_cmos_switch_instance1
T_cmos_switch_instance ( 
 name_of_gate_instance  i1 ,
 net_lvalue  i2 ,
 expression  i3 ,
 expression  i4 ,
 expression i5
) { 
  return std::make_tuple ( headtype_T_cmos_switch_instance  i1 ,  i2 ,  i3 ,  i4 ,  i5 ) ; 
} 
typedef boost::variant < tailtype_cmos_switch_instance1 > cmos_switch_instance ;


typedef std::tuple < headtype_T_gate_instantiation_cmos ,  cmos_switchtype , delay3 , std::list< cmos_switch_instance> > tailtype_gate_instantiation1 ;
tailtype_gate_instantiation1
T_gate_instantiation_cmos ( 
 cmos_switchtype  i1 ,
 delay3  i2 ,
 std::list< cmos_switch_instance> i3
) { 
  return std::make_tuple ( headtype_T_gate_instantiation_cmos  i1 ,  i2 ,  i3 ) ; 
} 
typedef std::tuple < headtype_T_gate_instantiation_enable ,  enable_gatetype , drive_strength , delay3 , std::list< enable_gate_instance> > tailtype_gate_instantiation2 ;
tailtype_gate_instantiation2
T_gate_instantiation_enable ( 
 enable_gatetype  i1 ,
 drive_strength  i2 ,
 delay3  i3 ,
 std::list< enable_gate_instance> i4
) { 
  return std::make_tuple ( headtype_T_gate_instantiation_enable  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef std::tuple < headtype_T_gate_instantiation_mos ,  mos_switchtype , delay3 , std::list< mos_switch_instance> > tailtype_gate_instantiation3 ;
tailtype_gate_instantiation3
T_gate_instantiation_mos ( 
 mos_switchtype  i1 ,
 delay3  i2 ,
 std::list< mos_switch_instance> i3
) { 
  return std::make_tuple ( headtype_T_gate_instantiation_mos  i1 ,  i2 ,  i3 ) ; 
} 
typedef std::tuple < headtype_T_gate_instantiation_input ,  n_input_gatetype , drive_strength , delay2 , std::list< n_input_gate_instance> > tailtype_gate_instantiation4 ;
tailtype_gate_instantiation4
T_gate_instantiation_input ( 
 n_input_gatetype  i1 ,
 drive_strength  i2 ,
 delay2  i3 ,
 std::list< n_input_gate_instance> i4
) { 
  return std::make_tuple ( headtype_T_gate_instantiation_input  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef std::tuple < headtype_T_gate_instantiation_output ,  n_output_gatetype , drive_strength , delay2 , std::list< n_output_gate_instance> > tailtype_gate_instantiation5 ;
tailtype_gate_instantiation5
T_gate_instantiation_output ( 
 n_output_gatetype  i1 ,
 drive_strength  i2 ,
 delay2  i3 ,
 std::list< n_output_gate_instance> i4
) { 
  return std::make_tuple ( headtype_T_gate_instantiation_output  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef std::tuple < headtype_T_gate_instantiation_pass_en ,  pass_en_switchtype , delay2 , std::list< pass_enable_switch_instance> > tailtype_gate_instantiation6 ;
tailtype_gate_instantiation6
T_gate_instantiation_pass_en ( 
 pass_en_switchtype  i1 ,
 delay2  i2 ,
 std::list< pass_enable_switch_instance> i3
) { 
  return std::make_tuple ( headtype_T_gate_instantiation_pass_en  i1 ,  i2 ,  i3 ) ; 
} 
typedef std::tuple < headtype_T_gate_instantiation_pass ,  pass_switchtype , std::list< pass_switch_instance> > tailtype_gate_instantiation7 ;
tailtype_gate_instantiation7
T_gate_instantiation_pass ( 
 pass_switchtype  i1 ,
 std::list< pass_switch_instance> i2
) { 
  return std::make_tuple ( headtype_T_gate_instantiation_pass  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_gate_instantiation_pulldown ,  pulldown_strength , std::list< pull_gate_instance> > tailtype_gate_instantiation8 ;
tailtype_gate_instantiation8
T_gate_instantiation_pulldown ( 
 pulldown_strength  i1 ,
 std::list< pull_gate_instance> i2
) { 
  return std::make_tuple ( headtype_T_gate_instantiation_pulldown  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_gate_instantiation_pullup ,  pullup_strength , std::list< pull_gate_instance> > tailtype_gate_instantiation9 ;
tailtype_gate_instantiation9
T_gate_instantiation_pullup ( 
 pullup_strength  i1 ,
 std::list< pull_gate_instance> i2
) { 
  return std::make_tuple ( headtype_T_gate_instantiation_pullup  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_gate_instantiation1 , tailtype_gate_instantiation2 , tailtype_gate_instantiation3 , tailtype_gate_instantiation4 , tailtype_gate_instantiation5 , tailtype_gate_instantiation6 , tailtype_gate_instantiation7 , tailtype_gate_instantiation8 , tailtype_gate_instantiation9 > gate_instantiation ;


typedef std::tuple < headtype_T_block_real_type ,  identifier , std::list< dimension> > tailtype_block_real_type1 ;
tailtype_block_real_type1
T_block_real_type ( 
 identifier  i1 ,
 std::list< dimension> i2
) { 
  return std::make_tuple ( headtype_T_block_real_type  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_block_real_type1 > block_real_type ;


typedef std::tuple < headtype_T_block_variable_type ,  identifier , std::list< dimension> > tailtype_block_variable_type1 ;
tailtype_block_variable_type1
T_block_variable_type ( 
 identifier  i1 ,
 std::list< dimension> i2
) { 
  return std::make_tuple ( headtype_T_block_variable_type  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_block_variable_type1 > block_variable_type ;


typedef std::tuple < headtype_T_block_item_declaration_reg , std::list< attribute_instance> , signed , range , std::list< block_variable_type> > tailtype_block_item_declaration1 ;
tailtype_block_item_declaration1
T_block_item_declaration_reg ( 
 std::list< attribute_instance>  i1 ,
 signed  i2 ,
 range  i3 ,
 std::list< block_variable_type> i4
) { 
  return std::make_tuple ( headtype_T_block_item_declaration_reg  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef std::tuple < headtype_T_block_item_declaration_integer , std::list< attribute_instance> , std::list< block_variable_type> > tailtype_block_item_declaration2 ;
tailtype_block_item_declaration2
T_block_item_declaration_integer ( 
 std::list< attribute_instance>  i1 ,
 std::list< block_variable_type> i2
) { 
  return std::make_tuple ( headtype_T_block_item_declaration_integer  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_block_item_declaration_time , std::list< attribute_instance> , std::list< block_variable_type> > tailtype_block_item_declaration3 ;
tailtype_block_item_declaration3
T_block_item_declaration_time ( 
 std::list< attribute_instance>  i1 ,
 std::list< block_variable_type> i2
) { 
  return std::make_tuple ( headtype_T_block_item_declaration_time  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_block_item_declaration_real , std::list< attribute_instance> , std::list< block_real_type> > tailtype_block_item_declaration4 ;
tailtype_block_item_declaration4
T_block_item_declaration_real ( 
 std::list< attribute_instance>  i1 ,
 std::list< block_real_type> i2
) { 
  return std::make_tuple ( headtype_T_block_item_declaration_real  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_block_item_declaration_realtime , std::list< attribute_instance> , std::list< block_real_type> > tailtype_block_item_declaration5 ;
tailtype_block_item_declaration5
T_block_item_declaration_realtime ( 
 std::list< attribute_instance>  i1 ,
 std::list< block_real_type> i2
) { 
  return std::make_tuple ( headtype_T_block_item_declaration_realtime  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_block_item_declaration_event , std::list< attribute_instance> , event_declaration > tailtype_block_item_declaration6 ;
tailtype_block_item_declaration6
T_block_item_declaration_event ( 
 std::list< attribute_instance>  i1 ,
 event_declaration i2
) { 
  return std::make_tuple ( headtype_T_block_item_declaration_event  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_block_item_declaration_local_param , std::list< attribute_instance> , local_parameter_declaration > tailtype_block_item_declaration7 ;
tailtype_block_item_declaration7
T_block_item_declaration_local_param ( 
 std::list< attribute_instance>  i1 ,
 local_parameter_declaration i2
) { 
  return std::make_tuple ( headtype_T_block_item_declaration_local_param  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_block_item_declaration_param , std::list< attribute_instance> , parameter_declaration > tailtype_block_item_declaration8 ;
tailtype_block_item_declaration8
T_block_item_declaration_param ( 
 std::list< attribute_instance>  i1 ,
 parameter_declaration i2
) { 
  return std::make_tuple ( headtype_T_block_item_declaration_param  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_block_item_declaration1 , tailtype_block_item_declaration2 , tailtype_block_item_declaration3 , tailtype_block_item_declaration4 , tailtype_block_item_declaration5 , tailtype_block_item_declaration6 , tailtype_block_item_declaration7 , tailtype_block_item_declaration8 > block_item_declaration ;


typedef std::tuple < headtype_T_task_port_type_integer > tailtype_task_port_type1 ;
tailtype_task_port_type1
T_task_port_type_integer (  ) { 
 return std::make_tuple ( headtype_T_task_port_type_integer  ) ; 
} 
typedef std::tuple < headtype_T_task_port_type_real > tailtype_task_port_type2 ;
tailtype_task_port_type2
T_task_port_type_real (  ) { 
 return std::make_tuple ( headtype_T_task_port_type_real  ) ; 
} 
typedef std::tuple < headtype_T_task_port_type_realtime > tailtype_task_port_type3 ;
tailtype_task_port_type3
T_task_port_type_realtime (  ) { 
 return std::make_tuple ( headtype_T_task_port_type_realtime  ) ; 
} 
typedef std::tuple < headtype_T_task_port_type_time > tailtype_task_port_type4 ;
tailtype_task_port_type4
T_task_port_type_time (  ) { 
 return std::make_tuple ( headtype_T_task_port_type_time  ) ; 
} 
typedef boost::variant < tailtype_task_port_type1 , tailtype_task_port_type2 , tailtype_task_port_type3 , tailtype_task_port_type4 > task_port_type ;


typedef std::tuple < headtype_T_tf_inout_declaration_reg ,  reg , signed , range , std::list< identifier> > tailtype_tf_inout_declaration1 ;
tailtype_tf_inout_declaration1
T_tf_inout_declaration_reg ( 
 reg  i1 ,
 signed  i2 ,
 range  i3 ,
 std::list< identifier> i4
) { 
  return std::make_tuple ( headtype_T_tf_inout_declaration_reg  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef std::tuple < headtype_T_tf_inout_declaration_type ,  task_port_type , std::list< identifier> > tailtype_tf_inout_declaration2 ;
tailtype_tf_inout_declaration2
T_tf_inout_declaration_type ( 
 task_port_type  i1 ,
 std::list< identifier> i2
) { 
  return std::make_tuple ( headtype_T_tf_inout_declaration_type  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_tf_inout_declaration1 , tailtype_tf_inout_declaration2 > tf_inout_declaration ;


typedef std::tuple < headtype_T_tf_output_declaration_reg ,  reg , signed , range , std::list< identifier> > tailtype_tf_output_declaration1 ;
tailtype_tf_output_declaration1
T_tf_output_declaration_reg ( 
 reg  i1 ,
 signed  i2 ,
 range  i3 ,
 std::list< identifier> i4
) { 
  return std::make_tuple ( headtype_T_tf_output_declaration_reg  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef std::tuple < headtype_T_tf_output_declaration_type ,  task_port_type , std::list< identifier> > tailtype_tf_output_declaration2 ;
tailtype_tf_output_declaration2
T_tf_output_declaration_type ( 
 task_port_type  i1 ,
 std::list< identifier> i2
) { 
  return std::make_tuple ( headtype_T_tf_output_declaration_type  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_tf_output_declaration1 , tailtype_tf_output_declaration2 > tf_output_declaration ;


typedef std::tuple < headtype_T_tf_input_declaration_reg ,  reg , signed , range , std::list< identifier> > tailtype_tf_input_declaration1 ;
tailtype_tf_input_declaration1
T_tf_input_declaration_reg ( 
 reg  i1 ,
 signed  i2 ,
 range  i3 ,
 std::list< identifier> i4
) { 
  return std::make_tuple ( headtype_T_tf_input_declaration_reg  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef std::tuple < headtype_T_tf_input_declaration_type ,  task_port_type , std::list< identifier> > tailtype_tf_input_declaration2 ;
tailtype_tf_input_declaration2
T_tf_input_declaration_type ( 
 task_port_type  i1 ,
 std::list< identifier> i2
) { 
  return std::make_tuple ( headtype_T_tf_input_declaration_type  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_tf_input_declaration1 , tailtype_tf_input_declaration2 > tf_input_declaration ;


typedef std::tuple < headtype_T_reg_false > tailtype_reg1 ;
tailtype_reg1
T_reg_false (  ) { 
 return std::make_tuple ( headtype_T_reg_false  ) ; 
} 
typedef std::tuple < headtype_T_reg_true > tailtype_reg2 ;
tailtype_reg2
T_reg_true (  ) { 
 return std::make_tuple ( headtype_T_reg_true  ) ; 
} 
typedef boost::variant < tailtype_reg1 , tailtype_reg2 > reg ;


typedef std::tuple < headtype_T_task_port_item_input , std::list< attribute_instance> , tf_io_declaration_gen > tailtype_task_port_item1 ;
tailtype_task_port_item1
T_task_port_item_input ( 
 std::list< attribute_instance>  i1 ,
 tf_io_declaration_gen i2
) { 
  return std::make_tuple ( headtype_T_task_port_item_input  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_task_port_item1 > task_port_item ;


typedef std::tuple < headtype_T_task_item_declaration_block ,  block_item_declaration > tailtype_task_item_declaration1 ;
tailtype_task_item_declaration1
T_task_item_declaration_block ( 
 block_item_declaration i1
) { 
  return std::make_tuple ( headtype_T_task_item_declaration_block  i1 ) ; 
} 
typedef std::tuple < headtype_T_task_item_declaration_input , std::list< attribute_instance> , tf_input_declaration > tailtype_task_item_declaration2 ;
tailtype_task_item_declaration2
T_task_item_declaration_input ( 
 std::list< attribute_instance>  i1 ,
 tf_input_declaration i2
) { 
  return std::make_tuple ( headtype_T_task_item_declaration_input  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_task_item_declaration_output , std::list< attribute_instance> , tf_output_declaration > tailtype_task_item_declaration3 ;
tailtype_task_item_declaration3
T_task_item_declaration_output ( 
 std::list< attribute_instance>  i1 ,
 tf_output_declaration i2
) { 
  return std::make_tuple ( headtype_T_task_item_declaration_output  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_task_item_declaration_inout , std::list< attribute_instance> , tf_inout_declaration > tailtype_task_item_declaration4 ;
tailtype_task_item_declaration4
T_task_item_declaration_inout ( 
 std::list< attribute_instance>  i1 ,
 tf_inout_declaration i2
) { 
  return std::make_tuple ( headtype_T_task_item_declaration_inout  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_task_item_declaration1 , tailtype_task_item_declaration2 , tailtype_task_item_declaration3 , tailtype_task_item_declaration4 > task_item_declaration ;


typedef std::tuple < headtype_T_task_declaration1 ,  automatic , identifier , std::list< task_item_declaration> , statement > tailtype_task_declaration1 ;
tailtype_task_declaration1
T_task_declaration1 ( 
 automatic  i1 ,
 identifier  i2 ,
 std::list< task_item_declaration>  i3 ,
 statement i4
) { 
  return std::make_tuple ( headtype_T_task_declaration1  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef std::tuple < headtype_T_task_declaration2 ,  automatic , identifier , std::list< task_port_item> , std::list< task_item_declaration> , statement > tailtype_task_declaration2 ;
tailtype_task_declaration2
T_task_declaration2 ( 
 automatic  i1 ,
 identifier  i2 ,
 std::list< task_port_item>  i3 ,
 std::list< task_item_declaration>  i4 ,
 statement i5
) { 
  return std::make_tuple ( headtype_T_task_declaration2  i1 ,  i2 ,  i3 ,  i4 ,  i5 ) ; 
} 
typedef boost::variant < tailtype_task_declaration1 , tailtype_task_declaration2 > task_declaration ;


typedef std::tuple < headtype_T_function_range_or_type_NOSPEC > tailtype_function_range_or_type1 ;
tailtype_function_range_or_type1
T_function_range_or_type_NOSPEC (  ) { 
 return std::make_tuple ( headtype_T_function_range_or_type_NOSPEC  ) ; 
} 
typedef std::tuple < headtype_T_function_range_or_type ,  signed , range > tailtype_function_range_or_type2 ;
tailtype_function_range_or_type2
T_function_range_or_type ( 
 signed  i1 ,
 range i2
) { 
  return std::make_tuple ( headtype_T_function_range_or_type  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_function_range_or_type_INTEGER > tailtype_function_range_or_type3 ;
tailtype_function_range_or_type3
T_function_range_or_type_INTEGER (  ) { 
 return std::make_tuple ( headtype_T_function_range_or_type_INTEGER  ) ; 
} 
typedef std::tuple < headtype_T_function_range_or_type_REAL > tailtype_function_range_or_type4 ;
tailtype_function_range_or_type4
T_function_range_or_type_REAL (  ) { 
 return std::make_tuple ( headtype_T_function_range_or_type_REAL  ) ; 
} 
typedef std::tuple < headtype_T_function_range_or_type_REALTIME > tailtype_function_range_or_type5 ;
tailtype_function_range_or_type5
T_function_range_or_type_REALTIME (  ) { 
 return std::make_tuple ( headtype_T_function_range_or_type_REALTIME  ) ; 
} 
typedef std::tuple < headtype_T_function_range_or_type_TIME > tailtype_function_range_or_type6 ;
tailtype_function_range_or_type6
T_function_range_or_type_TIME (  ) { 
 return std::make_tuple ( headtype_T_function_range_or_type_TIME  ) ; 
} 
typedef boost::variant < tailtype_function_range_or_type1 , tailtype_function_range_or_type2 , tailtype_function_range_or_type3 , tailtype_function_range_or_type4 , tailtype_function_range_or_type5 , tailtype_function_range_or_type6 > function_range_or_type ;


typedef std::tuple < headtype_T_attribute_instance_list_tf_input_declaration , std::list< attribute_instance> , tf_io_declaration_gen > tailtype_attribute_instance_list_tf_input_declaration1 ;
tailtype_attribute_instance_list_tf_input_declaration1
T_attribute_instance_list_tf_input_declaration ( 
 std::list< attribute_instance>  i1 ,
 tf_io_declaration_gen i2
) { 
  return std::make_tuple ( headtype_T_attribute_instance_list_tf_input_declaration  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_attribute_instance_list_tf_input_declaration1 > attribute_instance_list_tf_input_declaration ;


typedef std::tuple < headtype_T_function_item_declaration_block ,  block_item_declaration > tailtype_function_item_declaration1 ;
tailtype_function_item_declaration1
T_function_item_declaration_block ( 
 block_item_declaration i1
) { 
  return std::make_tuple ( headtype_T_function_item_declaration_block  i1 ) ; 
} 
typedef std::tuple < headtype_T_function_item_declaration_input , std::list< attribute_instance> , tf_input_declaration > tailtype_function_item_declaration2 ;
tailtype_function_item_declaration2
T_function_item_declaration_input ( 
 std::list< attribute_instance>  i1 ,
 tf_input_declaration i2
) { 
  return std::make_tuple ( headtype_T_function_item_declaration_input  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_function_item_declaration1 , tailtype_function_item_declaration2 > function_item_declaration ;


typedef std::tuple < headtype_T_function_declaration_1 ,  automatic , function_range_or_type , identifier , std::list< function_item_declaration> , statement > tailtype_function_declaration1 ;
tailtype_function_declaration1
T_function_declaration_1 ( 
 automatic  i1 ,
 function_range_or_type  i2 ,
 identifier  i3 ,
 std::list< function_item_declaration>  i4 ,
 statement i5
) { 
  return std::make_tuple ( headtype_T_function_declaration_1  i1 ,  i2 ,  i3 ,  i4 ,  i5 ) ; 
} 
typedef std::tuple < headtype_T_function_declaration_2 ,  automatic , function_range_or_type , identifier , std::list< attribute_instance_list_tf_input_declaration> , std::list< function_item_declaration> , statement > tailtype_function_declaration2 ;
tailtype_function_declaration2
T_function_declaration_2 ( 
 automatic  i1 ,
 function_range_or_type  i2 ,
 identifier  i3 ,
 std::list< attribute_instance_list_tf_input_declaration>  i4 ,
 std::list< function_item_declaration>  i5 ,
 statement i6
) { 
  return std::make_tuple ( headtype_T_function_declaration_2  i1 ,  i2 ,  i3 ,  i4 ,  i5 ,  i6 ) ; 
} 
typedef boost::variant < tailtype_function_declaration1 , tailtype_function_declaration2 > function_declaration ;


typedef std::tuple < headtype_T_automatic_false > tailtype_automatic1 ;
tailtype_automatic1
T_automatic_false (  ) { 
 return std::make_tuple ( headtype_T_automatic_false  ) ; 
} 
typedef std::tuple < headtype_T_automatic_true > tailtype_automatic2 ;
tailtype_automatic2
T_automatic_true (  ) { 
 return std::make_tuple ( headtype_T_automatic_true  ) ; 
} 
typedef boost::variant < tailtype_automatic1 , tailtype_automatic2 > automatic ;


typedef std::tuple < headtype_T_range_NOSPEC > tailtype_range1 ;
tailtype_range1
T_range_NOSPEC (  ) { 
 return std::make_tuple ( headtype_T_range_NOSPEC  ) ; 
} 
typedef std::tuple < headtype_T_range ,  expression , expression > tailtype_range2 ;
tailtype_range2
T_range ( 
 expression  i1 ,
 expression i2
) { 
  return std::make_tuple ( headtype_T_range  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_range1 , tailtype_range2 > range ;


typedef std::tuple < headtype_T_dimension ,  expression , expression > tailtype_dimension1 ;
tailtype_dimension1
T_dimension ( 
 expression  i1 ,
 expression i2
) { 
  return std::make_tuple ( headtype_T_dimension  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_dimension1 > dimension ;


typedef std::tuple < headtype_T_specparam_assignment ,  identifier , mintypmax_expression > tailtype_specparam_assignment1 ;
tailtype_specparam_assignment1
T_specparam_assignment ( 
 identifier  i1 ,
 mintypmax_expression i2
) { 
  return std::make_tuple ( headtype_T_specparam_assignment  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_specparam_assignment_pulse1 ,  mintypmax_expression , mintypmax_expression > tailtype_specparam_assignment2 ;
tailtype_specparam_assignment2
T_specparam_assignment_pulse1 ( 
 mintypmax_expression  i1 ,
 mintypmax_expression i2
) { 
  return std::make_tuple ( headtype_T_specparam_assignment_pulse1  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_specparam_assignment_pulse2 ,  specify_input_terminal_descriptor , specify_output_terminal_descriptor , mintypmax_expression , mintypmax_expression > tailtype_specparam_assignment3 ;
tailtype_specparam_assignment3
T_specparam_assignment_pulse2 ( 
 specify_input_terminal_descriptor  i1 ,
 specify_output_terminal_descriptor  i2 ,
 mintypmax_expression  i3 ,
 mintypmax_expression i4
) { 
  return std::make_tuple ( headtype_T_specparam_assignment_pulse2  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef boost::variant < tailtype_specparam_assignment1 , tailtype_specparam_assignment2 , tailtype_specparam_assignment3 > specparam_assignment ;


typedef std::tuple < headtype_T_param_assignment ,  identifier , mintypmax_expression > tailtype_param_assignment1 ;
tailtype_param_assignment1
T_param_assignment ( 
 identifier  i1 ,
 mintypmax_expression i2
) { 
  return std::make_tuple ( headtype_T_param_assignment  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_param_assignment1 > param_assignment ;


typedef std::tuple < headtype_T_net_decl_assignment ,  identifier , expression > tailtype_net_decl_assignment1 ;
tailtype_net_decl_assignment1
T_net_decl_assignment ( 
 identifier  i1 ,
 expression i2
) { 
  return std::make_tuple ( headtype_T_net_decl_assignment  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_net_decl_assignment1 > net_decl_assignment ;


typedef std::tuple < headtype_T_defparam_assignment ,  hierarchical_identifier , mintypmax_expression > tailtype_defparam_assignment1 ;
tailtype_defparam_assignment1
T_defparam_assignment ( 
 hierarchical_identifier  i1 ,
 mintypmax_expression i2
) { 
  return std::make_tuple ( headtype_T_defparam_assignment  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_defparam_assignment1 > defparam_assignment ;


typedef std::tuple < headtype_T_port_identifier_equ1_expression_opt ,  identifier , expression > tailtype_port_identifier_equ1_expression_opt1 ;
tailtype_port_identifier_equ1_expression_opt1
T_port_identifier_equ1_expression_opt ( 
 identifier  i1 ,
 expression i2
) { 
  return std::make_tuple ( headtype_T_port_identifier_equ1_expression_opt  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_port_identifier_equ1_expression_opt1 > port_identifier_equ1_expression_opt ;


typedef std::tuple < headtype_T_net_identifier_dimension_list ,  identifier , std::list< dimension> > tailtype_net_identifier_dimension_list1 ;
tailtype_net_identifier_dimension_list1
T_net_identifier_dimension_list ( 
 identifier  i1 ,
 std::list< dimension> i2
) { 
  return std::make_tuple ( headtype_T_net_identifier_dimension_list  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_net_identifier_dimension_list1 > net_identifier_dimension_list ;


typedef std::tuple < headtype_T_event_identifier_dimension_list ,  identifier , std::list< dimension> > tailtype_event_identifier_dimension_list1 ;
tailtype_event_identifier_dimension_list1
T_event_identifier_dimension_list ( 
 identifier  i1 ,
 std::list< dimension> i2
) { 
  return std::make_tuple ( headtype_T_event_identifier_dimension_list  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_event_identifier_dimension_list1 > event_identifier_dimension_list ;


typedef std::tuple < headtype_T_delay2_NOSPEC > tailtype_delay21 ;
tailtype_delay21
T_delay2_NOSPEC (  ) { 
 return std::make_tuple ( headtype_T_delay2_NOSPEC  ) ; 
} 
typedef std::tuple < headtype_T_delay2_1 ,  delay_value > tailtype_delay22 ;
tailtype_delay22
T_delay2_1 ( 
 delay_value i1
) { 
  return std::make_tuple ( headtype_T_delay2_1  i1 ) ; 
} 
typedef std::tuple < headtype_T_delay2_minmax1 ,  mintypmax_expression > tailtype_delay23 ;
tailtype_delay23
T_delay2_minmax1 ( 
 mintypmax_expression i1
) { 
  return std::make_tuple ( headtype_T_delay2_minmax1  i1 ) ; 
} 
typedef std::tuple < headtype_T_delay2_minmax2 ,  mintypmax_expression , mintypmax_expression > tailtype_delay24 ;
tailtype_delay24
T_delay2_minmax2 ( 
 mintypmax_expression  i1 ,
 mintypmax_expression i2
) { 
  return std::make_tuple ( headtype_T_delay2_minmax2  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_delay21 , tailtype_delay22 , tailtype_delay23 , tailtype_delay24 > delay2 ;


typedef std::tuple < headtype_T_delay3_NOSPEC > tailtype_delay31 ;
tailtype_delay31
T_delay3_NOSPEC (  ) { 
 return std::make_tuple ( headtype_T_delay3_NOSPEC  ) ; 
} 
typedef std::tuple < headtype_T_delay3_1 ,  delay_value > tailtype_delay32 ;
tailtype_delay32
T_delay3_1 ( 
 delay_value i1
) { 
  return std::make_tuple ( headtype_T_delay3_1  i1 ) ; 
} 
typedef std::tuple < headtype_T_delay3_minmax1 ,  mintypmax_expression > tailtype_delay33 ;
tailtype_delay33
T_delay3_minmax1 ( 
 mintypmax_expression i1
) { 
  return std::make_tuple ( headtype_T_delay3_minmax1  i1 ) ; 
} 
typedef std::tuple < headtype_T_delay3_minmax2 ,  mintypmax_expression , mintypmax_expression > tailtype_delay34 ;
tailtype_delay34
T_delay3_minmax2 ( 
 mintypmax_expression  i1 ,
 mintypmax_expression i2
) { 
  return std::make_tuple ( headtype_T_delay3_minmax2  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_delay3_minmax3 ,  mintypmax_expression , mintypmax_expression , mintypmax_expression > tailtype_delay35 ;
tailtype_delay35
T_delay3_minmax3 ( 
 mintypmax_expression  i1 ,
 mintypmax_expression  i2 ,
 mintypmax_expression i3
) { 
  return std::make_tuple ( headtype_T_delay3_minmax3  i1 ,  i2 ,  i3 ) ; 
} 
typedef boost::variant < tailtype_delay31 , tailtype_delay32 , tailtype_delay33 , tailtype_delay34 , tailtype_delay35 > delay3 ;


typedef std::tuple < headtype_T_charge_strength_NOSPEC > tailtype_charge_strength1 ;
tailtype_charge_strength1
T_charge_strength_NOSPEC (  ) { 
 return std::make_tuple ( headtype_T_charge_strength_NOSPEC  ) ; 
} 
typedef std::tuple < headtype_T_charge_strength__small > tailtype_charge_strength2 ;
tailtype_charge_strength2
T_charge_strength__small (  ) { 
 return std::make_tuple ( headtype_T_charge_strength__small  ) ; 
} 
typedef std::tuple < headtype_T_charge_strength__medium > tailtype_charge_strength3 ;
tailtype_charge_strength3
T_charge_strength__medium (  ) { 
 return std::make_tuple ( headtype_T_charge_strength__medium  ) ; 
} 
typedef std::tuple < headtype_T_charge_strength__large > tailtype_charge_strength4 ;
tailtype_charge_strength4
T_charge_strength__large (  ) { 
 return std::make_tuple ( headtype_T_charge_strength__large  ) ; 
} 
typedef boost::variant < tailtype_charge_strength1 , tailtype_charge_strength2 , tailtype_charge_strength3 , tailtype_charge_strength4 > charge_strength ;


typedef std::tuple < headtype_T_drive_strength_NOSPEC > tailtype_drive_strength1 ;
tailtype_drive_strength1
T_drive_strength_NOSPEC (  ) { 
 return std::make_tuple ( headtype_T_drive_strength_NOSPEC  ) ; 
} 
typedef std::tuple < headtype_T_drive_strength ,  strength , strength > tailtype_drive_strength2 ;
tailtype_drive_strength2
T_drive_strength ( 
 strength  i1 ,
 strength i2
) { 
  return std::make_tuple ( headtype_T_drive_strength  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_drive_strength1 , tailtype_drive_strength2 > drive_strength ;


typedef std::tuple < headtype_KEY_HIGHZ0 > tailtype_strength1 ;
tailtype_strength1
KEY_HIGHZ0 (  ) { 
 return std::make_tuple ( headtype_KEY_HIGHZ0  ) ; 
} 
typedef std::tuple < headtype_KEY_HIGHZ1 > tailtype_strength2 ;
tailtype_strength2
KEY_HIGHZ1 (  ) { 
 return std::make_tuple ( headtype_KEY_HIGHZ1  ) ; 
} 
typedef std::tuple < headtype_KEY_SUPPLY0 > tailtype_strength3 ;
tailtype_strength3
KEY_SUPPLY0 (  ) { 
 return std::make_tuple ( headtype_KEY_SUPPLY0  ) ; 
} 
typedef std::tuple < headtype_KEY_STRONG0 > tailtype_strength4 ;
tailtype_strength4
KEY_STRONG0 (  ) { 
 return std::make_tuple ( headtype_KEY_STRONG0  ) ; 
} 
typedef std::tuple < headtype_KEY_PULL0 > tailtype_strength5 ;
tailtype_strength5
KEY_PULL0 (  ) { 
 return std::make_tuple ( headtype_KEY_PULL0  ) ; 
} 
typedef std::tuple < headtype_KEY_WEAK0 > tailtype_strength6 ;
tailtype_strength6
KEY_WEAK0 (  ) { 
 return std::make_tuple ( headtype_KEY_WEAK0  ) ; 
} 
typedef std::tuple < headtype_KEY_SUPPLY1 > tailtype_strength7 ;
tailtype_strength7
KEY_SUPPLY1 (  ) { 
 return std::make_tuple ( headtype_KEY_SUPPLY1  ) ; 
} 
typedef std::tuple < headtype_KEY_STRONG1 > tailtype_strength8 ;
tailtype_strength8
KEY_STRONG1 (  ) { 
 return std::make_tuple ( headtype_KEY_STRONG1  ) ; 
} 
typedef std::tuple < headtype_KEY_PULL1 > tailtype_strength9 ;
tailtype_strength9
KEY_PULL1 (  ) { 
 return std::make_tuple ( headtype_KEY_PULL1  ) ; 
} 
typedef std::tuple < headtype_KEY_WEAK1 > tailtype_strength10 ;
tailtype_strength10
KEY_WEAK1 (  ) { 
 return std::make_tuple ( headtype_KEY_WEAK1  ) ; 
} 
typedef boost::variant < tailtype_strength1 , tailtype_strength2 , tailtype_strength3 , tailtype_strength4 , tailtype_strength5 , tailtype_strength6 , tailtype_strength7 , tailtype_strength8 , tailtype_strength9 , tailtype_strength10 > strength ;


typedef std::tuple < headtype_T_variable_type_noass ,  identifier , std::list< dimension> > tailtype_variable_type1 ;
tailtype_variable_type1
T_variable_type_noass ( 
 identifier  i1 ,
 std::list< dimension> i2
) { 
  return std::make_tuple ( headtype_T_variable_type_noass  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_variable_type_ass ,  identifier , expression > tailtype_variable_type2 ;
tailtype_variable_type2
T_variable_type_ass ( 
 identifier  i1 ,
 expression i2
) { 
  return std::make_tuple ( headtype_T_variable_type_ass  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_variable_type1 , tailtype_variable_type2 > variable_type ;


typedef std::tuple < headtype_T_real_type_noass ,  identifier , std::list< dimension> > tailtype_real_type1 ;
tailtype_real_type1
T_real_type_noass ( 
 identifier  i1 ,
 std::list< dimension> i2
) { 
  return std::make_tuple ( headtype_T_real_type_noass  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_real_type_ass ,  identifier , expression > tailtype_real_type2 ;
tailtype_real_type2
T_real_type_ass ( 
 identifier  i1 ,
 expression i2
) { 
  return std::make_tuple ( headtype_T_real_type_ass  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_real_type1 , tailtype_real_type2 > real_type ;


typedef std::tuple < headtype_T_net_type_NOSPEC > tailtype_net_type1 ;
tailtype_net_type1
T_net_type_NOSPEC (  ) { 
 return std::make_tuple ( headtype_T_net_type_NOSPEC  ) ; 
} 
typedef std::tuple < headtype_T_net_type__KEY_SUPPLY0 > tailtype_net_type2 ;
tailtype_net_type2
T_net_type__KEY_SUPPLY0 (  ) { 
 return std::make_tuple ( headtype_T_net_type__KEY_SUPPLY0  ) ; 
} 
typedef std::tuple < headtype_T_net_type__KEY_SUPPLY1 > tailtype_net_type3 ;
tailtype_net_type3
T_net_type__KEY_SUPPLY1 (  ) { 
 return std::make_tuple ( headtype_T_net_type__KEY_SUPPLY1  ) ; 
} 
typedef std::tuple < headtype_T_net_type__KEY_TRI > tailtype_net_type4 ;
tailtype_net_type4
T_net_type__KEY_TRI (  ) { 
 return std::make_tuple ( headtype_T_net_type__KEY_TRI  ) ; 
} 
typedef std::tuple < headtype_T_net_type__KEY_TRIAND > tailtype_net_type5 ;
tailtype_net_type5
T_net_type__KEY_TRIAND (  ) { 
 return std::make_tuple ( headtype_T_net_type__KEY_TRIAND  ) ; 
} 
typedef std::tuple < headtype_T_net_type__KEY_TRIOR > tailtype_net_type6 ;
tailtype_net_type6
T_net_type__KEY_TRIOR (  ) { 
 return std::make_tuple ( headtype_T_net_type__KEY_TRIOR  ) ; 
} 
typedef std::tuple < headtype_T_net_type__KEY_TRI0 > tailtype_net_type7 ;
tailtype_net_type7
T_net_type__KEY_TRI0 (  ) { 
 return std::make_tuple ( headtype_T_net_type__KEY_TRI0  ) ; 
} 
typedef std::tuple < headtype_T_net_type__KEY_TRI1 > tailtype_net_type8 ;
tailtype_net_type8
T_net_type__KEY_TRI1 (  ) { 
 return std::make_tuple ( headtype_T_net_type__KEY_TRI1  ) ; 
} 
typedef std::tuple < headtype_T_net_type__KEY_UWIRE > tailtype_net_type9 ;
tailtype_net_type9
T_net_type__KEY_UWIRE (  ) { 
 return std::make_tuple ( headtype_T_net_type__KEY_UWIRE  ) ; 
} 
typedef std::tuple < headtype_T_net_type__KEY_WIRE > tailtype_net_type10 ;
tailtype_net_type10
T_net_type__KEY_WIRE (  ) { 
 return std::make_tuple ( headtype_T_net_type__KEY_WIRE  ) ; 
} 
typedef std::tuple < headtype_T_net_type__KEY_WAND > tailtype_net_type11 ;
tailtype_net_type11
T_net_type__KEY_WAND (  ) { 
 return std::make_tuple ( headtype_T_net_type__KEY_WAND  ) ; 
} 
typedef std::tuple < headtype_T_net_type__KEY_WOR > tailtype_net_type12 ;
tailtype_net_type12
T_net_type__KEY_WOR (  ) { 
 return std::make_tuple ( headtype_T_net_type__KEY_WOR  ) ; 
} 
typedef boost::variant < tailtype_net_type1 , tailtype_net_type2 , tailtype_net_type3 , tailtype_net_type4 , tailtype_net_type5 , tailtype_net_type6 , tailtype_net_type7 , tailtype_net_type8 , tailtype_net_type9 , tailtype_net_type10 , tailtype_net_type11 , tailtype_net_type12 > net_type ;


typedef std::tuple < headtype_T_time_declaration , std::list< variable_type> > tailtype_time_declaration1 ;
tailtype_time_declaration1
T_time_declaration ( 
 std::list< variable_type> i1
) { 
  return std::make_tuple ( headtype_T_time_declaration  i1 ) ; 
} 
typedef boost::variant < tailtype_time_declaration1 > time_declaration ;


typedef std::tuple < headtype_T_reg_declaration ,  signed , range , std::list< variable_type> > tailtype_reg_declaration1 ;
tailtype_reg_declaration1
T_reg_declaration ( 
 signed  i1 ,
 range  i2 ,
 std::list< variable_type> i3
) { 
  return std::make_tuple ( headtype_T_reg_declaration  i1 ,  i2 ,  i3 ) ; 
} 
typedef boost::variant < tailtype_reg_declaration1 > reg_declaration ;


typedef std::tuple < headtype_T_realtime_declaration , std::list< real_type> > tailtype_realtime_declaration1 ;
tailtype_realtime_declaration1
T_realtime_declaration ( 
 std::list< real_type> i1
) { 
  return std::make_tuple ( headtype_T_realtime_declaration  i1 ) ; 
} 
typedef boost::variant < tailtype_realtime_declaration1 > realtime_declaration ;


typedef std::tuple < headtype_T_real_declaration , std::list< real_type> > tailtype_real_declaration1 ;
tailtype_real_declaration1
T_real_declaration ( 
 std::list< real_type> i1
) { 
  return std::make_tuple ( headtype_T_real_declaration  i1 ) ; 
} 
typedef boost::variant < tailtype_real_declaration1 > real_declaration ;


typedef std::tuple < headtype_T_vectored_scalared_NOSPEC > tailtype_vectored_scalared1 ;
tailtype_vectored_scalared1
T_vectored_scalared_NOSPEC (  ) { 
 return std::make_tuple ( headtype_T_vectored_scalared_NOSPEC  ) ; 
} 
typedef std::tuple < headtype_|T_vectored_scalared_vectored > tailtype_vectored_scalared2 ;
tailtype_vectored_scalared2
|T_vectored_scalared_vectored (  ) { 
 return std::make_tuple ( headtype_|T_vectored_scalared_vectored  ) ; 
} 
typedef std::tuple < headtype_|T_vectored_scalared_scalared > tailtype_vectored_scalared3 ;
tailtype_vectored_scalared3
|T_vectored_scalared_scalared (  ) { 
 return std::make_tuple ( headtype_|T_vectored_scalared_scalared  ) ; 
} 
typedef boost::variant < tailtype_vectored_scalared1 , tailtype_vectored_scalared2 , tailtype_vectored_scalared3 > vectored_scalared ;


typedef std::tuple < headtype_T_net_declaration_net_type1 ,  net_type , signed , delay3 , std::list< net_identifier_dimension_list> > tailtype_net_declaration1 ;
tailtype_net_declaration1
T_net_declaration_net_type1 ( 
 net_type  i1 ,
 signed  i2 ,
 delay3  i3 ,
 std::list< net_identifier_dimension_list> i4
) { 
  return std::make_tuple ( headtype_T_net_declaration_net_type1  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef std::tuple < headtype_T_net_declaration_net_type2 ,  net_type , drive_strength , signed , delay3 , std::list< net_decl_assignment> > tailtype_net_declaration2 ;
tailtype_net_declaration2
T_net_declaration_net_type2 ( 
 net_type  i1 ,
 drive_strength  i2 ,
 signed  i3 ,
 delay3  i4 ,
 std::list< net_decl_assignment> i5
) { 
  return std::make_tuple ( headtype_T_net_declaration_net_type2  i1 ,  i2 ,  i3 ,  i4 ,  i5 ) ; 
} 
typedef std::tuple < headtype_T_net_declaration_net_type3 ,  net_type , drive_strength , vectored_scalared , signed , range , delay3 , std::list< net_identifier_dimension_list> > tailtype_net_declaration3 ;
tailtype_net_declaration3
T_net_declaration_net_type3 ( 
 net_type  i1 ,
 drive_strength  i2 ,
 vectored_scalared  i3 ,
 signed  i4 ,
 range  i5 ,
 delay3  i6 ,
 std::list< net_identifier_dimension_list> i7
) { 
  return std::make_tuple ( headtype_T_net_declaration_net_type3  i1 ,  i2 ,  i3 ,  i4 ,  i5 ,  i6 ,  i7 ) ; 
} 
typedef std::tuple < headtype_T_net_declaration_net_type4 ,  net_type , drive_strength , vectored_scalared , signed , range , delay3 , std::list< net_decl_assignment> > tailtype_net_declaration4 ;
tailtype_net_declaration4
T_net_declaration_net_type4 ( 
 net_type  i1 ,
 drive_strength  i2 ,
 vectored_scalared  i3 ,
 signed  i4 ,
 range  i5 ,
 delay3  i6 ,
 std::list< net_decl_assignment> i7
) { 
  return std::make_tuple ( headtype_T_net_declaration_net_type4  i1 ,  i2 ,  i3 ,  i4 ,  i5 ,  i6 ,  i7 ) ; 
} 
typedef std::tuple < headtype_T_net_declaration_trireg_1 ,  charge_strength , signed , delay3 , std::list< net_identifier_dimension_list> > tailtype_net_declaration5 ;
tailtype_net_declaration5
T_net_declaration_trireg_1 ( 
 charge_strength  i1 ,
 signed  i2 ,
 delay3  i3 ,
 std::list< net_identifier_dimension_list> i4
) { 
  return std::make_tuple ( headtype_T_net_declaration_trireg_1  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef std::tuple < headtype_T_net_declaration_trireg_2 ,  drive_strength , signed , delay3 , std::list< net_decl_assignment> > tailtype_net_declaration6 ;
tailtype_net_declaration6
T_net_declaration_trireg_2 ( 
 drive_strength  i1 ,
 signed  i2 ,
 delay3  i3 ,
 std::list< net_decl_assignment> i4
) { 
  return std::make_tuple ( headtype_T_net_declaration_trireg_2  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef std::tuple < headtype_T_net_declaration_trireg_3 ,  charge_strength , vectored_scalared , signed , range , delay3 > tailtype_net_declaration7 ;
tailtype_net_declaration7
T_net_declaration_trireg_3 ( 
 charge_strength  i1 ,
 vectored_scalared  i2 ,
 signed  i3 ,
 range  i4 ,
 delay3 i5
) { 
  return std::make_tuple ( headtype_T_net_declaration_trireg_3  i1 ,  i2 ,  i3 ,  i4 ,  i5 ) ; 
} 
typedef std::tuple < headtype_T_net_declaration_trireg_4 ,  drive_strength , vectored_scalared , signed , range , delay3 , std::list< net_decl_assignment> > tailtype_net_declaration8 ;
tailtype_net_declaration8
T_net_declaration_trireg_4 ( 
 drive_strength  i1 ,
 vectored_scalared  i2 ,
 signed  i3 ,
 range  i4 ,
 delay3  i5 ,
 std::list< net_decl_assignment> i6
) { 
  return std::make_tuple ( headtype_T_net_declaration_trireg_4  i1 ,  i2 ,  i3 ,  i4 ,  i5 ,  i6 ) ; 
} 
typedef boost::variant < tailtype_net_declaration1 , tailtype_net_declaration2 , tailtype_net_declaration3 , tailtype_net_declaration4 , tailtype_net_declaration5 , tailtype_net_declaration6 , tailtype_net_declaration7 , tailtype_net_declaration8 > net_declaration ;


typedef std::tuple < headtype_T_integer_declaration , std::list< variable_type> > tailtype_integer_declaration1 ;
tailtype_integer_declaration1
T_integer_declaration ( 
 std::list< variable_type> i1
) { 
  return std::make_tuple ( headtype_T_integer_declaration  i1 ) ; 
} 
typedef boost::variant < tailtype_integer_declaration1 > integer_declaration ;


typedef std::tuple < headtype_T_event_declaration , std::list< event_identifier_dimension_list> > tailtype_event_declaration1 ;
tailtype_event_declaration1
T_event_declaration ( 
 std::list< event_identifier_dimension_list> i1
) { 
  return std::make_tuple ( headtype_T_event_declaration  i1 ) ; 
} 
typedef boost::variant < tailtype_event_declaration1 > event_declaration ;


typedef std::tuple < headtype_T_output_variable_type_INTEGER > tailtype_output_variable_type1 ;
tailtype_output_variable_type1
T_output_variable_type_INTEGER (  ) { 
 return std::make_tuple ( headtype_T_output_variable_type_INTEGER  ) ; 
} 
typedef std::tuple < headtype_T_output_variable_type_TIME > tailtype_output_variable_type2 ;
tailtype_output_variable_type2
T_output_variable_type_TIME (  ) { 
 return std::make_tuple ( headtype_T_output_variable_type_TIME  ) ; 
} 
typedef boost::variant < tailtype_output_variable_type1 , tailtype_output_variable_type2 > output_variable_type ;


typedef std::tuple < headtype_T_output_declaration_net ,  net_type , signed , range , std::list< identifier> > tailtype_output_declaration1 ;
tailtype_output_declaration1
T_output_declaration_net ( 
 net_type  i1 ,
 signed  i2 ,
 range  i3 ,
 std::list< identifier> i4
) { 
  return std::make_tuple ( headtype_T_output_declaration_net  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef std::tuple < headtype_|T_output_declaration_reg ,  signed , range , std::list< port_identifier_equ1_expression_opt> > tailtype_output_declaration2 ;
tailtype_output_declaration2
|T_output_declaration_reg ( 
 signed  i1 ,
 range  i2 ,
 std::list< port_identifier_equ1_expression_opt> i3
) { 
  return std::make_tuple ( headtype_|T_output_declaration_reg  i1 ,  i2 ,  i3 ) ; 
} 
typedef std::tuple < headtype_|T_output_declaration_var ,  output_variable_type , std::list< port_identifier_equ1_expression_opt> > tailtype_output_declaration3 ;
tailtype_output_declaration3
|T_output_declaration_var ( 
 output_variable_type  i1 ,
 std::list< port_identifier_equ1_expression_opt> i2
) { 
  return std::make_tuple ( headtype_|T_output_declaration_var  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_output_declaration1 , tailtype_output_declaration2 , tailtype_output_declaration3 > output_declaration ;


typedef std::tuple < headtype_T_input_declaration ,  net_type , signed , range , std::list< identifier> > tailtype_input_declaration1 ;
tailtype_input_declaration1
T_input_declaration ( 
 net_type  i1 ,
 signed  i2 ,
 range  i3 ,
 std::list< identifier> i4
) { 
  return std::make_tuple ( headtype_T_input_declaration  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef boost::variant < tailtype_input_declaration1 > input_declaration ;


typedef std::tuple < headtype_T_inout_declaration ,  net_type , signed , range , std::list< identifier> > tailtype_inout_declaration1 ;
tailtype_inout_declaration1
T_inout_declaration ( 
 net_type  i1 ,
 signed  i2 ,
 range  i3 ,
 std::list< identifier> i4
) { 
  return std::make_tuple ( headtype_T_inout_declaration  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef boost::variant < tailtype_inout_declaration1 > inout_declaration ;


typedef std::tuple < headtype_T_parameter_type__NOSPEC > tailtype_parameter_type1 ;
tailtype_parameter_type1
T_parameter_type__NOSPEC (  ) { 
 return std::make_tuple ( headtype_T_parameter_type__NOSPEC  ) ; 
} 
typedef std::tuple < headtype_T_parameter_type__INTEGER > tailtype_parameter_type2 ;
tailtype_parameter_type2
T_parameter_type__INTEGER (  ) { 
 return std::make_tuple ( headtype_T_parameter_type__INTEGER  ) ; 
} 
typedef std::tuple < headtype_T_parameter_type__REAL > tailtype_parameter_type3 ;
tailtype_parameter_type3
T_parameter_type__REAL (  ) { 
 return std::make_tuple ( headtype_T_parameter_type__REAL  ) ; 
} 
typedef std::tuple < headtype_T_parameter_type__REALTIME > tailtype_parameter_type4 ;
tailtype_parameter_type4
T_parameter_type__REALTIME (  ) { 
 return std::make_tuple ( headtype_T_parameter_type__REALTIME  ) ; 
} 
typedef std::tuple < headtype_T_parameter_type__TIME > tailtype_parameter_type5 ;
tailtype_parameter_type5
T_parameter_type__TIME (  ) { 
 return std::make_tuple ( headtype_T_parameter_type__TIME  ) ; 
} 
typedef boost::variant < tailtype_parameter_type1 , tailtype_parameter_type2 , tailtype_parameter_type3 , tailtype_parameter_type4 , tailtype_parameter_type5 > parameter_type ;


typedef std::tuple < headtype_T_specparam_declaration ,  range , std::list< specparam_assignment> > tailtype_specparam_declaration1 ;
tailtype_specparam_declaration1
T_specparam_declaration ( 
 range  i1 ,
 std::list< specparam_assignment> i2
) { 
  return std::make_tuple ( headtype_T_specparam_declaration  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_specparam_declaration1 > specparam_declaration ;


typedef std::tuple < headtype_T_parameter_declaration_1 ,  signed , range , std::list< param_assignment> > tailtype_parameter_declaration1 ;
tailtype_parameter_declaration1
T_parameter_declaration_1 ( 
 signed  i1 ,
 range  i2 ,
 std::list< param_assignment> i3
) { 
  return std::make_tuple ( headtype_T_parameter_declaration_1  i1 ,  i2 ,  i3 ) ; 
} 
typedef std::tuple < headtype_T_parameter_declaration_2 ,  parameter_type , std::list< param_assignment> > tailtype_parameter_declaration2 ;
tailtype_parameter_declaration2
T_parameter_declaration_2 ( 
 parameter_type  i1 ,
 std::list< param_assignment> i2
) { 
  return std::make_tuple ( headtype_T_parameter_declaration_2  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_parameter_declaration1 , tailtype_parameter_declaration2 > parameter_declaration ;


typedef std::tuple < headtype_T_parameter_declaration_gen_1 ,  parameter_type , signed , range , param_assignment > tailtype_parameter_declaration_gen1 ;
tailtype_parameter_declaration_gen1
T_parameter_declaration_gen_1 ( 
 parameter_type  i1 ,
 signed  i2 ,
 range  i3 ,
 param_assignment i4
) { 
  return std::make_tuple ( headtype_T_parameter_declaration_gen_1  i1 ,  i2 ,  i3 ,  i4 ) ; 
} 
typedef boost::variant < tailtype_parameter_declaration_gen1 > parameter_declaration_gen ;


typedef std::tuple < headtype_T_local_parameter_declaration_1 ,  signed , range , std::list< param_assignment> > tailtype_local_parameter_declaration1 ;
tailtype_local_parameter_declaration1
T_local_parameter_declaration_1 ( 
 signed  i1 ,
 range  i2 ,
 std::list< param_assignment> i3
) { 
  return std::make_tuple ( headtype_T_local_parameter_declaration_1  i1 ,  i2 ,  i3 ) ; 
} 
typedef std::tuple < headtype_T_local_parameter_declaration_2 ,  parameter_type , std::list< param_assignment> > tailtype_local_parameter_declaration2 ;
tailtype_local_parameter_declaration2
T_local_parameter_declaration_2 ( 
 parameter_type  i1 ,
 std::list< param_assignment> i2
) { 
  return std::make_tuple ( headtype_T_local_parameter_declaration_2  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_local_parameter_declaration1 , tailtype_local_parameter_declaration2 > local_parameter_declaration ;


typedef std::tuple < headtype_T_signed_FALSE > tailtype_signed1 ;
tailtype_signed1
T_signed_FALSE (  ) { 
 return std::make_tuple ( headtype_T_signed_FALSE  ) ; 
} 
typedef std::tuple < headtype_T_signed_TRUE > tailtype_signed2 ;
tailtype_signed2
T_signed_TRUE (  ) { 
 return std::make_tuple ( headtype_T_signed_TRUE  ) ; 
} 
typedef boost::variant < tailtype_signed1 , tailtype_signed2 > signed ;


typedef std::tuple < headtype_T_colon_config_opt_FALSE > tailtype_colon_config_opt1 ;
tailtype_colon_config_opt1
T_colon_config_opt_FALSE (  ) { 
 return std::make_tuple ( headtype_T_colon_config_opt_FALSE  ) ; 
} 
typedef std::tuple < headtype_T_colon_config_opt_TRUE > tailtype_colon_config_opt2 ;
tailtype_colon_config_opt2
T_colon_config_opt_TRUE (  ) { 
 return std::make_tuple ( headtype_T_colon_config_opt_TRUE  ) ; 
} 
typedef boost::variant < tailtype_colon_config_opt1 , tailtype_colon_config_opt2 > colon_config_opt ;


typedef std::tuple < headtype_T_use_clause ,  library_identifier_period_opt_cell_identifier , colon_config_opt > tailtype_use_clause1 ;
tailtype_use_clause1
T_use_clause ( 
 library_identifier_period_opt_cell_identifier  i1 ,
 colon_config_opt i2
) { 
  return std::make_tuple ( headtype_T_use_clause  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_use_clause1 > use_clause ;


typedef std::tuple < headtype_T_config_rule_statement__default , std::list< identifier> > tailtype_config_rule_statement1 ;
tailtype_config_rule_statement1
T_config_rule_statement__default ( 
 std::list< identifier> i1
) { 
  return std::make_tuple ( headtype_T_config_rule_statement__default  i1 ) ; 
} 
typedef std::tuple < headtype_T_config_rule_statement__inst_lib , std::list< identifier> , std::list< identifier> > tailtype_config_rule_statement2 ;
tailtype_config_rule_statement2
T_config_rule_statement__inst_lib ( 
 std::list< identifier>  i1 ,
 std::list< identifier> i2
) { 
  return std::make_tuple ( headtype_T_config_rule_statement__inst_lib  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_config_rule_statement__inst_use , std::list< identifier> , use_clause > tailtype_config_rule_statement3 ;
tailtype_config_rule_statement3
T_config_rule_statement__inst_use ( 
 std::list< identifier>  i1 ,
 use_clause i2
) { 
  return std::make_tuple ( headtype_T_config_rule_statement__inst_use  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_config_rule_statement__cell_lib ,  library_identifier_period_opt_cell_identifier , std::list< identifier> > tailtype_config_rule_statement4 ;
tailtype_config_rule_statement4
T_config_rule_statement__cell_lib ( 
 library_identifier_period_opt_cell_identifier  i1 ,
 std::list< identifier> i2
) { 
  return std::make_tuple ( headtype_T_config_rule_statement__cell_lib  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_config_rule_statement__cell_use ,  library_identifier_period_opt_cell_identifier , use_clause > tailtype_config_rule_statement5 ;
tailtype_config_rule_statement5
T_config_rule_statement__cell_use ( 
 library_identifier_period_opt_cell_identifier  i1 ,
 use_clause i2
) { 
  return std::make_tuple ( headtype_T_config_rule_statement__cell_use  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_config_rule_statement1 , tailtype_config_rule_statement2 , tailtype_config_rule_statement3 , tailtype_config_rule_statement4 , tailtype_config_rule_statement5 > config_rule_statement ;


typedef std::tuple < headtype_T_lib_cell_identifier ,  identifier , identifier > tailtype_library_identifier_period_opt_cell_identifier1 ;
tailtype_library_identifier_period_opt_cell_identifier1
T_lib_cell_identifier ( 
 identifier  i1 ,
 identifier i2
) { 
  return std::make_tuple ( headtype_T_lib_cell_identifier  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_library_identifier_period_opt_cell_identifier1 > library_identifier_period_opt_cell_identifier ;


typedef std::tuple < headtype_T_design_statement , std::list< library_identifier_period_opt_cell_identifier> > tailtype_design_statement1 ;
tailtype_design_statement1
T_design_statement ( 
 std::list< library_identifier_period_opt_cell_identifier> i1
) { 
  return std::make_tuple ( headtype_T_design_statement  i1 ) ; 
} 
typedef boost::variant < tailtype_design_statement1 > design_statement ;


typedef std::tuple < headtype_T_config_declaration ,  identifier , design_statement , std::list< config_rule_statement> > tailtype_config_declaration1 ;
tailtype_config_declaration1
T_config_declaration ( 
 identifier  i1 ,
 design_statement  i2 ,
 std::list< config_rule_statement> i3
) { 
  return std::make_tuple ( headtype_T_config_declaration  i1 ,  i2 ,  i3 ) ; 
} 
typedef boost::variant < tailtype_config_declaration1 > config_declaration ;


typedef std::tuple < headtype_T_module_item__port_declaration ,  port_declaration > tailtype_module_item1 ;
tailtype_module_item1
T_module_item__port_declaration ( 
 port_declaration i1
) { 
  return std::make_tuple ( headtype_T_module_item__port_declaration  i1 ) ; 
} 
typedef std::tuple < headtype_T_module_item__generate_region ,  generate_region > tailtype_module_item2 ;
tailtype_module_item2
T_module_item__generate_region ( 
 generate_region i1
) { 
  return std::make_tuple ( headtype_T_module_item__generate_region  i1 ) ; 
} 
typedef std::tuple < headtype_T_module_item__specify_block ,  specify_block > tailtype_module_item3 ;
tailtype_module_item3
T_module_item__specify_block ( 
 specify_block i1
) { 
  return std::make_tuple ( headtype_T_module_item__specify_block  i1 ) ; 
} 
typedef std::tuple < headtype_T_module_item__parameter_declaration , std::list< attribute_instance> , parameter_declaration > tailtype_module_item4 ;
tailtype_module_item4
T_module_item__parameter_declaration ( 
 std::list< attribute_instance>  i1 ,
 parameter_declaration i2
) { 
  return std::make_tuple ( headtype_T_module_item__parameter_declaration  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_module_item__specparam_declaration , std::list< attribute_instance> , specparam_declaration > tailtype_module_item5 ;
tailtype_module_item5
T_module_item__specparam_declaration ( 
 std::list< attribute_instance>  i1 ,
 specparam_declaration i2
) { 
  return std::make_tuple ( headtype_T_module_item__specparam_declaration  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_module_item__net_declaration , std::list< attribute_instance> , net_declaration > tailtype_module_item6 ;
tailtype_module_item6
T_module_item__net_declaration ( 
 std::list< attribute_instance>  i1 ,
 net_declaration i2
) { 
  return std::make_tuple ( headtype_T_module_item__net_declaration  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_module_item__reg_declaration , std::list< attribute_instance> , reg_declaration > tailtype_module_item7 ;
tailtype_module_item7
T_module_item__reg_declaration ( 
 std::list< attribute_instance>  i1 ,
 reg_declaration i2
) { 
  return std::make_tuple ( headtype_T_module_item__reg_declaration  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_module_item__integer_declaration , std::list< attribute_instance> , integer_declaration > tailtype_module_item8 ;
tailtype_module_item8
T_module_item__integer_declaration ( 
 std::list< attribute_instance>  i1 ,
 integer_declaration i2
) { 
  return std::make_tuple ( headtype_T_module_item__integer_declaration  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_module_item__real_declaration , std::list< attribute_instance> , real_declaration > tailtype_module_item9 ;
tailtype_module_item9
T_module_item__real_declaration ( 
 std::list< attribute_instance>  i1 ,
 real_declaration i2
) { 
  return std::make_tuple ( headtype_T_module_item__real_declaration  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_module_item__time_declaration , std::list< attribute_instance> , time_declaration > tailtype_module_item10 ;
tailtype_module_item10
T_module_item__time_declaration ( 
 std::list< attribute_instance>  i1 ,
 time_declaration i2
) { 
  return std::make_tuple ( headtype_T_module_item__time_declaration  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_module_item__realtime_declaration , std::list< attribute_instance> , realtime_declaration > tailtype_module_item11 ;
tailtype_module_item11
T_module_item__realtime_declaration ( 
 std::list< attribute_instance>  i1 ,
 realtime_declaration i2
) { 
  return std::make_tuple ( headtype_T_module_item__realtime_declaration  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_module_item__event_declaration , std::list< attribute_instance> , event_declaration > tailtype_module_item12 ;
tailtype_module_item12
T_module_item__event_declaration ( 
 std::list< attribute_instance>  i1 ,
 event_declaration i2
) { 
  return std::make_tuple ( headtype_T_module_item__event_declaration  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_module_item__genvar_declaration , std::list< attribute_instance> , genvar_declaration > tailtype_module_item13 ;
tailtype_module_item13
T_module_item__genvar_declaration ( 
 std::list< attribute_instance>  i1 ,
 genvar_declaration i2
) { 
  return std::make_tuple ( headtype_T_module_item__genvar_declaration  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_module_item__task_declaration , std::list< attribute_instance> , task_declaration > tailtype_module_item14 ;
tailtype_module_item14
T_module_item__task_declaration ( 
 std::list< attribute_instance>  i1 ,
 task_declaration i2
) { 
  return std::make_tuple ( headtype_T_module_item__task_declaration  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_module_item__function_declaration , std::list< attribute_instance> , function_declaration > tailtype_module_item15 ;
tailtype_module_item15
T_module_item__function_declaration ( 
 std::list< attribute_instance>  i1 ,
 function_declaration i2
) { 
  return std::make_tuple ( headtype_T_module_item__function_declaration  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_module_item__local_parameter_declaration , std::list< attribute_instance> , local_parameter_declaration > tailtype_module_item16 ;
tailtype_module_item16
T_module_item__local_parameter_declaration ( 
 std::list< attribute_instance>  i1 ,
 local_parameter_declaration i2
) { 
  return std::make_tuple ( headtype_T_module_item__local_parameter_declaration  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_module_item__parameter_override , std::list< attribute_instance> , std::list< defparam_assignment> > tailtype_module_item17 ;
tailtype_module_item17
T_module_item__parameter_override ( 
 std::list< attribute_instance>  i1 ,
 std::list< defparam_assignment> i2
) { 
  return std::make_tuple ( headtype_T_module_item__parameter_override  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_module_item__continuous_assign , std::list< attribute_instance> , continuous_assign > tailtype_module_item18 ;
tailtype_module_item18
T_module_item__continuous_assign ( 
 std::list< attribute_instance>  i1 ,
 continuous_assign i2
) { 
  return std::make_tuple ( headtype_T_module_item__continuous_assign  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_module_item__gate_instantiation , std::list< attribute_instance> , gate_instantiation > tailtype_module_item19 ;
tailtype_module_item19
T_module_item__gate_instantiation ( 
 std::list< attribute_instance>  i1 ,
 gate_instantiation i2
) { 
  return std::make_tuple ( headtype_T_module_item__gate_instantiation  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_module_item__udp_instantiation , std::list< attribute_instance> , udp_instantiation > tailtype_module_item20 ;
tailtype_module_item20
T_module_item__udp_instantiation ( 
 std::list< attribute_instance>  i1 ,
 udp_instantiation i2
) { 
  return std::make_tuple ( headtype_T_module_item__udp_instantiation  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_module_item__module_instantiation , std::list< attribute_instance> , module_instantiation > tailtype_module_item21 ;
tailtype_module_item21
T_module_item__module_instantiation ( 
 std::list< attribute_instance>  i1 ,
 module_instantiation i2
) { 
  return std::make_tuple ( headtype_T_module_item__module_instantiation  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_module_item__initial_construct , std::list< attribute_instance> , initial_construct > tailtype_module_item22 ;
tailtype_module_item22
T_module_item__initial_construct ( 
 std::list< attribute_instance>  i1 ,
 initial_construct i2
) { 
  return std::make_tuple ( headtype_T_module_item__initial_construct  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_module_item__always_construct , std::list< attribute_instance> , always_construct > tailtype_module_item23 ;
tailtype_module_item23
T_module_item__always_construct ( 
 std::list< attribute_instance>  i1 ,
 always_construct i2
) { 
  return std::make_tuple ( headtype_T_module_item__always_construct  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_module_item__loop_generate_construct , std::list< attribute_instance> , loop_generate_construct > tailtype_module_item24 ;
tailtype_module_item24
T_module_item__loop_generate_construct ( 
 std::list< attribute_instance>  i1 ,
 loop_generate_construct i2
) { 
  return std::make_tuple ( headtype_T_module_item__loop_generate_construct  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_module_item__conditional_generate_construct , std::list< attribute_instance> , conditional_generate_construct > tailtype_module_item25 ;
tailtype_module_item25
T_module_item__conditional_generate_construct ( 
 std::list< attribute_instance>  i1 ,
 conditional_generate_construct i2
) { 
  return std::make_tuple ( headtype_T_module_item__conditional_generate_construct  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_module_item1 , tailtype_module_item2 , tailtype_module_item3 , tailtype_module_item4 , tailtype_module_item5 , tailtype_module_item6 , tailtype_module_item7 , tailtype_module_item8 , tailtype_module_item9 , tailtype_module_item10 , tailtype_module_item11 , tailtype_module_item12 , tailtype_module_item13 , tailtype_module_item14 , tailtype_module_item15 , tailtype_module_item16 , tailtype_module_item17 , tailtype_module_item18 , tailtype_module_item19 , tailtype_module_item20 , tailtype_module_item21 , tailtype_module_item22 , tailtype_module_item23 , tailtype_module_item24 , tailtype_module_item25 > module_item ;


typedef std::tuple < headtype_T_port_declaration__inout_declaration , std::list< attribute_instance> , inout_declaration > tailtype_port_declaration1 ;
tailtype_port_declaration1
T_port_declaration__inout_declaration ( 
 std::list< attribute_instance>  i1 ,
 inout_declaration i2
) { 
  return std::make_tuple ( headtype_T_port_declaration__inout_declaration  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_port_declaration__input_declaration , std::list< attribute_instance> , input_declaration > tailtype_port_declaration2 ;
tailtype_port_declaration2
T_port_declaration__input_declaration ( 
 std::list< attribute_instance>  i1 ,
 input_declaration i2
) { 
  return std::make_tuple ( headtype_T_port_declaration__input_declaration  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_port_declaration__output_declaration , std::list< attribute_instance> , output_declaration > tailtype_port_declaration3 ;
tailtype_port_declaration3
T_port_declaration__output_declaration ( 
 std::list< attribute_instance>  i1 ,
 output_declaration i2
) { 
  return std::make_tuple ( headtype_T_port_declaration__output_declaration  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_port_declaration1 , tailtype_port_declaration2 , tailtype_port_declaration3 > port_declaration ;


typedef std::tuple < headtype_T_port_reference ,  identifier , range_expression > tailtype_port_reference1 ;
tailtype_port_reference1
T_port_reference ( 
 identifier  i1 ,
 range_expression i2
) { 
  return std::make_tuple ( headtype_T_port_reference  i1 ,  i2 ) ; 
} 
typedef boost::variant < tailtype_port_reference1 > port_reference ;


typedef std::tuple < headtype_T_port_expression , std::list< port_reference> > tailtype_port_expression1 ;
tailtype_port_expression1
T_port_expression ( 
 std::list< port_reference> i1
) { 
  return std::make_tuple ( headtype_T_port_expression  i1 ) ; 
} 
typedef boost::variant < tailtype_port_expression1 > port_expression ;


typedef std::tuple < headtype_T_port_exp ,  identifier , port_expression > tailtype_port1 ;
tailtype_port1
T_port_exp ( 
 identifier  i1 ,
 port_expression i2
) { 
  return std::make_tuple ( headtype_T_port_exp  i1 ,  i2 ) ; 
} 
typedef std::tuple < headtype_T_port_net ,  io_type , netreg_type , signed , range , port_expression , expression > tailtype_port2 ;
tailtype_port2
T_port_net ( 
 io_type  i1 ,
 netreg_type  i2 ,
 signed  i3 ,
 range  i4 ,
 port_expression  i5 ,
 expression i6
) { 
  return std::make_tuple ( headtype_T_port_net  i1 ,  i2 ,  i3 ,  i4 ,  i5 ,  i6 ) ; 
} 
typedef boost::variant < tailtype_port1 , tailtype_port2 > port ;


typedef std::tuple < headtype_T_module_declaration__1 , std::list< attribute_instance> , identifier , std::list< parameter_declaration_gen> , std::list< port> , std::list< module_item> > tailtype_module_declaration1 ;
tailtype_module_declaration1
T_module_declaration__1 ( 
 std::list< attribute_instance>  i1 ,
 identifier  i2 ,
 std::list< parameter_declaration_gen>  i3 ,
 std::list< port>  i4 ,
 std::list< module_item> i5
) { 
  return std::make_tuple ( headtype_T_module_declaration__1  i1 ,  i2 ,  i3 ,  i4 ,  i5 ) ; 
} 
typedef boost::variant < tailtype_module_declaration1 > module_declaration ;


typedef std::tuple < headtype_T_description__module_declaration ,  module_declaration > tailtype_description1 ;
tailtype_description1
T_description__module_declaration ( 
 module_declaration i1
) { 
  return std::make_tuple ( headtype_T_description__module_declaration  i1 ) ; 
} 
typedef std::tuple < headtype_T_description__udp_declaration ,  udp_declaration > tailtype_description2 ;
tailtype_description2
T_description__udp_declaration ( 
 udp_declaration i1
) { 
  return std::make_tuple ( headtype_T_description__udp_declaration  i1 ) ; 
} 
typedef std::tuple < headtype_T_description__config_declaration ,  config_declaration > tailtype_description3 ;
tailtype_description3
T_description__config_declaration ( 
 config_declaration i1
) { 
  return std::make_tuple ( headtype_T_description__config_declaration  i1 ) ; 
} 
typedef boost::variant < tailtype_description1 , tailtype_description2 , tailtype_description3 > description ;

}
