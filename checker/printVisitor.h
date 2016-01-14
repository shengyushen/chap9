#ifndef PRINTVISITOR_H
#define PRINTVISITOR_H



void prt_nothing () { }
void prt_space   () { cout<<" ";}
void prt_return  () { cout<<endl;}
void prt_jinglparent () { cout<<"  #(";}
void prt_lparent () { cout<<"(";}
void prt_rparent () { cout<<")";}
void prt_rparent_semicolon () { cout<<");";}
void prt_lp_star () { cout<<"(*"; }
void prt_comma   () { cout<<" , ";}
void prt_period  () { cout<<".";}
void prt_star_rp () { cout<<"*)"; }
void prt_lbrace  () { cout<<"{";}
void prt_rbrace  () { cout<<"}";}
template <typename T>
void prt_keyword_space(T & str) { cout<<" "<<str<<" ";}
//void prt_keyword_space(const char* const pstr  ) { cout<<" "<<pstr<<" ";}

class is_T_expression_NOSPEC : public boost::static_visitor<bool> {
public :
	bool operator()(std::shared_ptr<T_expression_NOSPEC>   ) const { return true; }
	template <typename T>
	bool operator()(std::shared_ptr<T>   ) const { return false; }
};
class is_T_statement_NOSPEC : public boost::static_visitor<bool> {
public :
	bool operator()(std::shared_ptr<T_statement_NOSPEC>   ) const { return true; }
	template <typename T>
	bool operator()(std::shared_ptr<T>   ) const { return false; }
};

//macros for invoke visitor on T_* types and list of non-T_* types
#define APP_PRINTV(x)                              \
	boost::apply_visitor(printVisitor(),*(p->x));
#define APPLST_PRINTV(ptr , head_func , sept_func , tail_func)    \
{                                                                 \
	if(false==((p->ptr)->empty())) {                                \
		head_func();                                                  \
		for(auto x = (p->ptr)->begin() ; x!=(p->ptr)->end() ; x++) {  \
			if(x!=(p->ptr)->begin()) {sept_func();}                     \
			boost::apply_visitor(printVisitor(),**x);                   \
		}                                                             \
		tail_func();                                                  \
	}                                                               \
}
#define APPLST_PRINTV_SIMPLE(ptr)  \
	APPLST_PRINTV(ptr , prt_return , prt_return , prt_return)  
#define APPLST_PRINTV_COMMA(ptr)  \
	APPLST_PRINTV(ptr , prt_return , prt_comma , prt_return)  
#define APPLST_PRINTV_PERIOD(ptr)  \
	APPLST_PRINTV(ptr , prt_return , prt_period , prt_return)  


//operator functions macro
#define OPERATOR(T_typename,T_ptr)                   \
	void operator()(std::shared_ptr<T_typename> T_ptr) const 

class printVisitor : public boost::static_visitor<void> {
public :
	OPERATOR(T_description__udp_declaration   ,p) { assert(false);}
	OPERATOR(T_description__config_declaration,p) { assert(false);}
	OPERATOR(T_description__module_declaration,p) { APP_PRINTV(mem1) }

	OPERATOR(T_identifier_NOSPEC,p) {  }
	OPERATOR(T_identifier,       p) { prt_keyword_space(p->mem1); }

	OPERATOR(T_attribute_instance,p) { assert(false); }

	OPERATOR(T_parameter_declaration_gen_1,p) {
		APP_PRINTV(mem1) //parameter type
		prt_space();
		APP_PRINTV(mem2) //signed type
		prt_space();
		APP_PRINTV(mem3) //range type
		prt_space();
		APP_PRINTV(mem4) //pam assignment
	}

	OPERATOR(T_parameter_type__NOSPEC,p)   { }
	OPERATOR(T_parameter_type__INTEGER,p)  { prt_keyword_space("integer" );}
	OPERATOR(T_parameter_type__REAL,p)     { prt_keyword_space("real"    );}
	OPERATOR(T_parameter_type__REALTIME,p) { prt_keyword_space("realtime");}
	OPERATOR(T_parameter_type__TIME,p)     { prt_keyword_space("time"    );}

	OPERATOR(T_unary_operator_LOGIC_NEG,p)   { prt_keyword_space("!"); }
	OPERATOR(T_unary_operator_BITWISE_NEG,p) { prt_keyword_space("~"); }
	OPERATOR(T_unary_operator_REDUCE_NOR ,p) { prt_keyword_space("~|"); }
	OPERATOR(T_unary_operator_REDUCE_NAND,p) { prt_keyword_space("~&"); }
	OPERATOR(T_unary_operator_ADD        ,p) { prt_keyword_space("+"); }
	OPERATOR(T_unary_operator_SUB        ,p) { prt_keyword_space("-"); }
	OPERATOR(T_unary_operator_REDUCE_AND ,p) { prt_keyword_space("&"); }
	OPERATOR(T_unary_operator_REDUCE_OR  ,p) { prt_keyword_space("|"); }
	OPERATOR(T_unary_operator_REDUCE_XOR ,p) { prt_keyword_space("^"); }
	OPERATOR(T_unary_operator_REDUCE_XNOR,p) { prt_keyword_space("~^"); }

	OPERATOR(T_signed_FALSE,p) {  }
	OPERATOR(T_signed_TRUE,p) { prt_keyword_space("signed"); }

	OPERATOR(T_range_NOSPEC,p) {  }
	OPERATOR(T_range,p) { 
		prt_keyword_space("[");
		APP_PRINTV(mem1) //exp1
		prt_keyword_space(":");
		APP_PRINTV(mem2) //exp2
		prt_keyword_space("]");
	}

	OPERATOR(T_expression_NOSPEC,p) { }
	OPERATOR(T_expression_prim,p) { APP_PRINTV(mem1) }
	OPERATOR(T_expression_op1,p) {
		APP_PRINTV(mem1)//op
		APPLST_PRINTV( mem2 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem3)//primary
	}
	OPERATOR(T_expression_op2,p) {
		APP_PRINTV(mem1)//exp1
		APP_PRINTV(mem2)//op
		APPLST_PRINTV( mem3 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem4)//exp2
	}
	OPERATOR(T_expression_condition,p) { APP_PRINTV(mem1) }
	
	OPERATOR(T_param_assignment,p) {
		APP_PRINTV(mem1) //identifier
		prt_keyword_space("=");
		APP_PRINTV(mem2) //mintypmax_expression
	}

	OPERATOR(T_mintypmax_expression_NOSPEC,p) {}
	OPERATOR(T_mintypmax_expression_1,p) { APP_PRINTV(mem1)}
	OPERATOR(T_mintypmax_expression_3,p) {
		APP_PRINTV(mem1) //exp1
		prt_keyword_space(":");
		APP_PRINTV(mem2) //exp2
		prt_keyword_space(":");
		APP_PRINTV(mem3) //exp3
	}
	OPERATOR(T_primary_num,p)    { APP_PRINTV(mem1)}
	OPERATOR(T_primary_id ,p)    { APP_PRINTV(mem1)}
	OPERATOR(T_primary_concat,p) { APP_PRINTV(mem1)}
	OPERATOR(T_primary_mulcon,p) { APP_PRINTV(mem1)}
	OPERATOR(T_primary_func,p)   { APP_PRINTV(mem1)}
	OPERATOR(T_primary_sysfunc,p){ APP_PRINTV(mem1)}
	OPERATOR(T_primary_mintypmax,p) { APP_PRINTV(mem1)}
	OPERATOR(T_primary_string,p) { APP_PRINTV(mem1)}

	OPERATOR(T_number_UNSIGNED_NUMBER      ,p) { cout<<p->mem1;}
	OPERATOR(T_number_UNSIGNED_NUMBER_size ,p) { cout<<p->mem1<<"'d"<<p->mem2;}
	OPERATOR(T_number_OCTAL_NUMBER         ,p) { cout<<p->mem1<<"'o"<<p->mem2;}
	OPERATOR(T_number_BINARY_NUMBER        ,p) { cout<<p->mem1<<"'b"<<p->mem2;}
	OPERATOR(T_number_HEX_NUMBER           ,p) { cout<<p->mem1<<"'h"<<p->mem2;}
	OPERATOR(T_number_REAL_NUMBER          ,p) { cout<<p->mem1;}

	OPERATOR(T_hierarchical_identifier     ,p) { 
		APPLST_PRINTV(mem1 , prt_nothing , prt_period , prt_nothing); }
	
	OPERATOR(T_concatenation     ,p) { 
		APPLST_PRINTV(mem1,prt_lbrace , prt_comma , prt_rbrace);//explist
	}
	OPERATOR(T_multiple_concatenation     ,p) { 
		prt_keyword_space("{");
			APP_PRINTV(mem1) //exp1
			APP_PRINTV(mem2) //concat
		prt_keyword_space("}");
	}
	OPERATOR(T_function_call     ,p) { 
		APP_PRINTV(mem1)//func name
		APPLST_PRINTV(mem2 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APPLST_PRINTV(mem3 , prt_lparent , prt_comma , prt_rparent);//exp list for parameter
	}
	OPERATOR(T_system_function_call     ,p) { 
		APP_PRINTV(mem1)//func name
		APPLST_PRINTV(mem2 , prt_lparent , prt_comma , prt_rparent);//exp list for parameter
	}
	OPERATOR(T_system_function_identifier     ,p) { prt_keyword_space(p->mem1); }
	OPERATOR(T_string     ,p) { prt_keyword_space(p->mem1); }

	OPERATOR(T_binary_operator_1     ,p) { APP_PRINTV(mem1); }
	OPERATOR(T_binary_operator_2     ,p) { APP_PRINTV(mem1); }

	OPERATOR(T_binary_operator_MUL   ,p) { prt_keyword_space("*"); }
	OPERATOR(T_binary_operator_DIV   ,p) { prt_keyword_space("/"); }
	OPERATOR(T_binary_operator_MOD   ,p) { prt_keyword_space("%"); }
	OPERATOR(T_binary_operator_EQU2  ,p) { prt_keyword_space("=="); }
	OPERATOR(T_binary_operator_NEQ2  ,p) { prt_keyword_space("!="); }
	OPERATOR(T_binary_operator_EQU3  ,p) { prt_keyword_space("==="); }
	OPERATOR(T_binary_operator_NEQ3  ,p) { prt_keyword_space("!=="); }
	OPERATOR(T_binary_operator_POWER ,p) { prt_keyword_space("**"); }
	OPERATOR(T_binary_operator_LT    ,p) { prt_keyword_space("<"); } 
	OPERATOR(T_binary_operator_LE    ,p) { prt_keyword_space("<="); } 
	OPERATOR(T_binary_operator_GT    ,p) { prt_keyword_space(">"); } 
	OPERATOR(T_binary_operator_GE    ,p) { prt_keyword_space(">="); } 
	OPERATOR(T_binary_operator_LOGICAL_RIGHTSHIFT,p) { prt_keyword_space(">>"); } 
	OPERATOR(T_binary_operator_LOGICAL_LEFTSHIFT,p) { prt_keyword_space("<<"); } 
	OPERATOR(T_binary_operator_ARITHMETIC_RIGHTSHIFT,p) { prt_keyword_space(">>>"); } 
	OPERATOR(T_binary_operator_ARITHMETIC_LEFTSHIFT,p) { prt_keyword_space("<<<"); } 
	OPERATOR(T_binary_operator_ADD,p) { prt_keyword_space("+"); } 
	OPERATOR(T_binary_operator_SUB,p) { prt_keyword_space("-"); } 
	OPERATOR(T_binary_operator_AND,p) { prt_keyword_space("&"); } 
	OPERATOR(T_binary_operator_OR,p) { prt_keyword_space("|"); } 
	OPERATOR(T_binary_operator_AND2,p) { prt_keyword_space("&&"); } 
	OPERATOR(T_binary_operator_OR2,p) { prt_keyword_space("||"); } 
	OPERATOR(T_binary_operator_XOR,p) { prt_keyword_space("^"); } 
	OPERATOR(T_binary_operator_XNOR,p) { prt_keyword_space("~^"); } 

	OPERATOR(T_conditional_expression,p) {
		APP_PRINTV(mem1)
		prt_keyword_space("?");
		APPLST_PRINTV(mem2 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem3)
		prt_keyword_space(":");
		APP_PRINTV(mem4)
	}

	OPERATOR(T_identifier_lsq_expression_rsq,p) {
		APP_PRINTV(mem1)
		APPLST_PRINTV(mem2,prt_nothing,prt_nothing,prt_nothing);
	}
	OPERATOR(T_range_expression_NOSPEC,p) {}
	OPERATOR(T_range_expression_1,p) {
		prt_keyword_space("[");
		APP_PRINTV(mem1)
		prt_keyword_space("]");
	}
	OPERATOR(T_range_expression_2,p) {
		prt_keyword_space("[");
		APP_PRINTV(mem1)
		prt_keyword_space(":");
		APP_PRINTV(mem2)
		prt_keyword_space("]");
	}
	OPERATOR(T_range_expression_addrange,p) {
		prt_keyword_space("[");
		APP_PRINTV(mem1)
		prt_keyword_space("+:");
		APP_PRINTV(mem2)
		prt_keyword_space("]");
	}
	OPERATOR(T_range_expression_subrange,p) {
		prt_keyword_space("[");
		APP_PRINTV(mem1)
		prt_keyword_space("-:");
		APP_PRINTV(mem2)
		prt_keyword_space("]");
	}

	OPERATOR(T_io_type_NOSPEC,p) {}
	OPERATOR(T_io_type_output,p) {prt_keyword_space("output");}
	OPERATOR(T_io_type_input,p) {prt_keyword_space("input");}
	OPERATOR(T_io_type_inout,p) {prt_keyword_space("inout");}

	OPERATOR(T_netreg_type__NOSPEC,p) {}
	OPERATOR(T_netreg_type__KEY_SUPPLY0,p) {prt_keyword_space("supply0");}
	OPERATOR(T_netreg_type__KEY_SUPPLY1,p) {prt_keyword_space("supply1");}
	OPERATOR(T_netreg_type__KEY_TRI,p) {prt_keyword_space("tri");}
	OPERATOR(T_netreg_type__KEY_TRIAND,p) {prt_keyword_space("triand");}
	OPERATOR(T_netreg_type__KEY_TRIOR,p) {prt_keyword_space("trior");}
	OPERATOR(T_netreg_type__KEY_TRI0,p) {prt_keyword_space("tri0");}
	OPERATOR(T_netreg_type__KEY_TRI1,p) {prt_keyword_space("tri1");}
	OPERATOR(T_netreg_type__KEY_UWIRE,p) {prt_keyword_space("uwire");}
	OPERATOR(T_netreg_type__KEY_WIRE,p) {prt_keyword_space("wire");}
	OPERATOR(T_netreg_type__KEY_WAND,p) {prt_keyword_space("wand");}
	OPERATOR(T_netreg_type__KEY_WOR,p) {prt_keyword_space("wor");}
	OPERATOR(T_netreg_type__KEY_REG,p) {prt_keyword_space("reg");}
	OPERATOR(T_netreg_type__KEY_INTEGER,p) {prt_keyword_space("integer");}
	OPERATOR(T_netreg_type__KEY_TIME,p) {prt_keyword_space("time");}

	OPERATOR(T_port_reference,p) {
		APP_PRINTV(mem1)
		APP_PRINTV(mem2)
	}
	OPERATOR(T_port_exp,         p) {
		prt_keyword_space(".");
		APP_PRINTV(mem1) //port name
		prt_keyword_space("(");
		APP_PRINTV(mem2) //expression
		prt_keyword_space(")");
	}
	OPERATOR(T_port_net,         p) {
		APP_PRINTV(mem1)
		prt_space();
		APP_PRINTV(mem2)
		prt_space();
		APP_PRINTV(mem3)
		prt_space();
		APP_PRINTV(mem4)
		prt_space();
		APP_PRINTV(mem5)
		prt_space();
		APP_PRINTV(mem6)
	}

	OPERATOR(T_port_expression,         p) {
		assert(((p->mem1)->size())>=1);
		if(((p->mem1)->size())==1) {
			boost::apply_visitor(printVisitor(),*((p->mem1)->front()));
		} else {
			APPLST_PRINTV(mem1 , prt_lbrace , prt_comma , prt_rbrace); 
		}//ports refs
	}
	OPERATOR(T_module_declaration__1,p) {
		APPLST_PRINTV(mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list

		prt_keyword_space("module");
		APP_PRINTV(mem2) //module name
		APPLST_PRINTV(mem3 , prt_jinglparent , prt_comma , prt_rparent); // parameter list
		APPLST_PRINTV(mem4 , prt_lparent , prt_comma , prt_rparent_semicolon);//ports
		APPLST_PRINTV(mem5 , prt_return , prt_return , prt_return);//module_item
		prt_keyword_space("\n endmodule\n");
	}
	OPERATOR(T_module_item__1,p) { APP_PRINTV(mem1)}
	OPERATOR(T_module_item__2,p) { APP_PRINTV(mem1)}
	OPERATOR(T_module_item__port_declaration,p) { APP_PRINTV(mem1)}
	OPERATOR(T_port_declaration__inout_declaration,p) {
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2)
	}
	OPERATOR(T_port_declaration__input_declaration,p) {
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2)
	}
	OPERATOR(T_port_declaration__output_declaration,p) {
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2)
	}
	OPERATOR(T_inout_declaration,p) {  
		prt_keyword_space("inout");
		APP_PRINTV(mem1);
		prt_space();
		APP_PRINTV(mem2);
		prt_space();
		APP_PRINTV(mem3);
		prt_space();
		APPLST_PRINTV( mem4 , prt_nothing , prt_comma , prt_nothing);//identifier
	}
	OPERATOR(T_input_declaration,p) {  
		prt_keyword_space("input");
		APP_PRINTV(mem1);
		prt_space();
		APP_PRINTV(mem2);
		prt_space();
		APP_PRINTV(mem3);
		prt_space();
		APPLST_PRINTV( mem4 , prt_nothing , prt_comma , prt_nothing);//identifier
	}
	OPERATOR(T_output_declaration_net,p) {  
		prt_keyword_space("output");
		APP_PRINTV(mem1);
		prt_space();
		APP_PRINTV(mem2);
		prt_space();
		APP_PRINTV(mem3);
		prt_space();
		APPLST_PRINTV( mem4 , prt_nothing , prt_comma , prt_nothing);//identifier
	}
	OPERATOR(T_output_declaration_reg,p) {  
		prt_keyword_space("output reg");
		APP_PRINTV(mem1);
		prt_space();
		APP_PRINTV(mem2);
		prt_space();
		APPLST_PRINTV( mem3 , prt_nothing , prt_comma , prt_nothing);//identifier
	}
	OPERATOR(T_output_declaration_var,p) {
		prt_keyword_space("output");
		APP_PRINTV(mem1);
		prt_space();
		APPLST_PRINTV( mem2 , prt_nothing , prt_comma , prt_nothing);//identifier
	}
	OPERATOR(T_net_type_NOSPEC,p) {  }
	OPERATOR(T_net_type__KEY_SUPPLY0,p) { prt_keyword_space("supply0"); }
	OPERATOR(T_net_type__KEY_SUPPLY1,p) { prt_keyword_space("supply1"); }
	OPERATOR(T_net_type__KEY_TRI,p) { prt_keyword_space("tri"); }
	OPERATOR(T_net_type__KEY_TRIAND,p) { prt_keyword_space("triand"); }
	OPERATOR(T_net_type__KEY_TRIOR,p) {prt_keyword_space("trior");  }
	OPERATOR(T_net_type__KEY_TRI0,p) { prt_keyword_space("tri0"); }
	OPERATOR(T_net_type__KEY_TRI1,p) { prt_keyword_space("tri1"); }
	OPERATOR(T_net_type__KEY_UWIRE,p) { prt_keyword_space("uwire"); }
	OPERATOR(T_net_type__KEY_WIRE,p) { prt_keyword_space("wire"); }
	OPERATOR(T_net_type__KEY_WAND,p) {prt_keyword_space("wand");  }
	OPERATOR(T_net_type__KEY_WOR,p) { prt_keyword_space("wor"); }

	OPERATOR(T_port_identifier_equ1_expression_opt,p) { 
		APP_PRINTV(mem1);
		if(false==(boost::apply_visitor(is_T_expression_NOSPEC(),*(p->mem2)))) {
			//it is not NOSPEC, we can print =
			prt_keyword_space("=");
			APP_PRINTV(mem2);
		}
	}
	OPERATOR(T_output_variable_type_INTEGER,p) { prt_keyword_space("integer"); }
	OPERATOR(T_output_variable_type_TIME,p) {prt_keyword_space("time");}

	OPERATOR(T_module_item__generate_region,p) { APP_PRINTV(mem1); }
	OPERATOR(T_generate_region,p) { 
		prt_keyword_space("\n generate\n");
			APPLST_PRINTV( mem1 , prt_return , prt_return , prt_return);//module_item_list
		prt_keyword_space("\n endgenerate\n");
	}

	OPERATOR(T_parameter_declaration_1,p) { 
		prt_keyword_space("parameter");
		APP_PRINTV(mem1);
		prt_space();
		APP_PRINTV(mem2);
		prt_space();
		APPLST_PRINTV( mem3 , prt_nothing , prt_comma , prt_nothing);//param_assignment list
	}
	OPERATOR(T_parameter_declaration_2,p) {
		prt_keyword_space("parameter");
		APP_PRINTV(mem1);
		prt_space();
		APPLST_PRINTV( mem2 , prt_nothing , prt_comma , prt_nothing);//param_assignment list
	}
	
	OPERATOR(T_net_declaration_net_type1,p) { assert(false); }
	OPERATOR(T_net_declaration_net_type2,p) { assert(false); }
	OPERATOR(T_net_declaration_net_type3,p) { 
		APP_PRINTV(mem1) 
		prt_space();
		APP_PRINTV(mem2)
		prt_space();
		APP_PRINTV(mem3)
		prt_space();
		APP_PRINTV(mem4)
		prt_space();
		APP_PRINTV(mem5)
		prt_space();
		APP_PRINTV(mem6)
		prt_space();
		APPLST_PRINTV( mem7 , prt_nothing , prt_comma , prt_nothing);//net_identifier_dimension_list
		prt_keyword_space(";\n");
	}

	OPERATOR(T_net_declaration_net_type4,p) {  
		APP_PRINTV(mem1) 
		prt_space();
		APP_PRINTV(mem2)
		prt_space();
		APP_PRINTV(mem3)
		prt_space();
		APP_PRINTV(mem4)
		prt_space();
		APP_PRINTV(mem5)
		prt_space();
		APP_PRINTV(mem6)
		prt_space();
		APPLST_PRINTV( mem7 , prt_nothing , prt_comma , prt_nothing);//net_decl_assignment
		prt_keyword_space(";\n");
	}
	OPERATOR(T_net_declaration_trireg_1,p) { assert(false); }
	OPERATOR(T_net_declaration_trireg_2,p) { assert(false); }
	OPERATOR(T_net_declaration_trireg_3,p) { assert(false); }
	OPERATOR(T_net_declaration_trireg_4,p) { assert(false); }

	OPERATOR(T_net_identifier_dimension_list,p) {
		APP_PRINTV(mem1)
		APPLST_PRINTV( mem2 , prt_nothing , prt_nothing , prt_nothing);//dimension
	}
	OPERATOR(T_net_decl_assignment,p) {
		APP_PRINTV(mem1)
		prt_keyword_space("=");
		APP_PRINTV(mem2)
	}
	OPERATOR(T_drive_strength_NOSPEC,p) { }
	OPERATOR(T_drive_strength,p) { 
		prt_keyword_space("(");
			APP_PRINTV(mem1)
		prt_keyword_space(":");
			APP_PRINTV(mem2)
		prt_keyword_space(")");
	}

	OPERATOR(KEY_HIGHZ0,p)  { prt_keyword_space("highz0"); }
	OPERATOR(KEY_HIGHZ1,p)  { prt_keyword_space("highz1"); }
	OPERATOR(KEY_SUPPLY0,p) { prt_keyword_space("supply0"); }
	OPERATOR(KEY_STRONG0,p) { prt_keyword_space("strong0"); }
	OPERATOR(KEY_PULL0,p)   { prt_keyword_space("pull0"); }
	OPERATOR(KEY_WEAK0,p)   { prt_keyword_space("weak0"); }
	OPERATOR(KEY_SUPPLY1,p) { prt_keyword_space("supply1"); }
	OPERATOR(KEY_STRONG1,p) { prt_keyword_space("strong1"); }
	OPERATOR(KEY_PULL1,p)   { prt_keyword_space("pull1"); }
	OPERATOR(KEY_WEAK1,p)   { prt_keyword_space("weak1"); }

	OPERATOR(T_vectored_scalared_NOSPEC,p) {  }
	OPERATOR(T_vectored_scalared_vectored,p) { prt_keyword_space("vectored");  }
	OPERATOR(T_vectored_scalared_scalared,p) { prt_keyword_space("scalared");  }

	OPERATOR(T_delay3_NOSPEC,p) {  }
	OPERATOR(T_delay3_1,p) { 
		prt_keyword_space("#");
		APP_PRINTV(mem1) 
		prt_space();
	}
	OPERATOR(T_delay3_minmax1,p) {
		prt_keyword_space("#(");
		APP_PRINTV(mem1) 
		prt_keyword_space(")");
	}
	OPERATOR(T_delay3_minmax2,p) { 
		prt_keyword_space("#(");
		APP_PRINTV(mem1) 
		prt_keyword_space(",");
		APP_PRINTV(mem2) 
		prt_keyword_space(")");
	}
	OPERATOR(T_delay3_minmax3,p) { 
		prt_keyword_space("#(");
		APP_PRINTV(mem1) 
		prt_keyword_space(",");
		APP_PRINTV(mem2) 
		prt_keyword_space(",");
		APP_PRINTV(mem3) 
		prt_keyword_space(")");
	}

	OPERATOR(T_dimension,p) { 
		prt_keyword_space("[");
			APP_PRINTV(mem1) 
		prt_keyword_space(":");
			APP_PRINTV(mem2) 
		prt_keyword_space("]");
	}
	OPERATOR(T_delay_value_UNSIGNED_NUMBER,p) { prt_keyword_space(p->mem1);  }
	OPERATOR(T_delay_value_REAL_NUMBER,p) { prt_keyword_space(p->mem1);  }
	OPERATOR(T_delay_value_id,p) { APP_PRINTV(mem1) }

	OPERATOR(T_reg_declaration,p) {
		prt_keyword_space("reg");
			APP_PRINTV(mem1) 
		prt_space();
			APP_PRINTV(mem2) 
		prt_space();
			APPLST_PRINTV( mem3 , prt_nothing , prt_comma , prt_nothing);//variable_type
		prt_keyword_space(";\n");
	}

	OPERATOR(T_variable_type_noass,p) { 
		APP_PRINTV(mem1) 
		APPLST_PRINTV( mem2 , prt_nothing , prt_nothing , prt_nothing);//dimension
	}
	OPERATOR(T_variable_type_ass,p) { 
		APP_PRINTV(mem1) 
		prt_keyword_space("=");
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_integer_declaration,p) { 
		prt_keyword_space("integer");
		APPLST_PRINTV( mem1 , prt_nothing , prt_comma , prt_nothing);//variable_type
		prt_keyword_space(";\n");
	}
	OPERATOR(T_real_declaration,p) { 
		prt_keyword_space("real");
		APPLST_PRINTV( mem1 , prt_nothing , prt_comma , prt_nothing);//variable_type
		prt_keyword_space(";\n");
	}
	OPERATOR(T_real_type_noass,p) {  
		APP_PRINTV(mem1) 
		prt_space();
		APPLST_PRINTV( mem2 , prt_nothing , prt_nothing , prt_nothing);//dimension
	}
	OPERATOR(T_real_type_ass,p) { 
		APP_PRINTV(mem1) 
		prt_keyword_space("=");
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_time_declaration,p) { 
		prt_keyword_space("time");
		APPLST_PRINTV( mem1 , prt_nothing , prt_comma , prt_nothing);//variable_type
		prt_keyword_space(";\n");
	}
	OPERATOR(T_realtime_declaration,p) { 
		prt_keyword_space("realtime");
		APPLST_PRINTV( mem1 , prt_nothing , prt_comma , prt_nothing);//variable_type
		prt_keyword_space(";\n");
	}

	OPERATOR(T_event_declaration,p) { 
		prt_keyword_space("event");
		APPLST_PRINTV( mem1 , prt_nothing , prt_comma , prt_nothing);//list_of_event_identifiers
		prt_keyword_space(";");
	}

	OPERATOR(T_event_identifier_dimension_list,p) { 
		APP_PRINTV(mem1) 
		APPLST_PRINTV( mem2 , prt_nothing , prt_nothing , prt_nothing);//dimension_list
	}
	
	OPERATOR(T_genvar_declaration,p) { 
		prt_keyword_space("genvar");
		APPLST_PRINTV( mem1 , prt_nothing , prt_comma , prt_nothing);//identifier
		prt_keyword_space(";");
	}
	OPERATOR(T_task_declaration1,p) {
		prt_keyword_space("\n task");
			APP_PRINTV(mem1) 
			prt_space();
			APP_PRINTV(mem2) 
		prt_keyword_space(";\n");
			APPLST_PRINTV( mem3 , prt_nothing , prt_nothing , prt_nothing);//task_item_declaration_list
			APP_PRINTV(mem4) 
		prt_keyword_space("\n endtask\n");
	}
	OPERATOR(T_task_declaration2,p) {
		prt_keyword_space("\n task");
			APP_PRINTV(mem1) 
			prt_space();
			APP_PRINTV(mem2) 
			prt_keyword_space("(");
			APPLST_PRINTV( mem3 , prt_nothing , prt_comma, prt_nothing);//task_port_list
			prt_keyword_space(");\n");
			APPLST_PRINTV( mem4 , prt_nothing , prt_nothing, prt_nothing);//task_item_declaration_list
			APP_PRINTV(mem5) 
			prt_keyword_space("\n endtask\n");
	}
	OPERATOR(T_automatic_false,p) {  }
	OPERATOR(T_automatic_true,p) { prt_keyword_space("automatic"); }

	OPERATOR(T_task_item_declaration_block,p) { APP_PRINTV(mem1) }
	OPERATOR(T_task_item_declaration_input,p) { 
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2) 
		prt_keyword_space(";\n");
	}
	OPERATOR(T_task_item_declaration_output,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2) 
		prt_keyword_space(";\n");
	}
	OPERATOR(T_task_item_declaration_inout,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2) 
		prt_keyword_space(";\n");
	}
	OPERATOR(T_tf_input_declaration_reg,p) { 
		prt_keyword_space("input");
		APP_PRINTV(mem1) 
		prt_keyword_space(" ");
		APP_PRINTV(mem2) 
		prt_keyword_space(" ");
		APP_PRINTV(mem3) 
		prt_keyword_space(" ");
		APPLST_PRINTV( mem4 , prt_nothing , prt_comma , prt_nothing);//identifier
	}
	OPERATOR(T_tf_input_declaration_type,p) { 
		prt_keyword_space("input");
		APP_PRINTV(mem1) 
		prt_keyword_space(" ");
		APPLST_PRINTV( mem2 , prt_nothing , prt_comma , prt_nothing);//identifier
	}
	OPERATOR(T_tf_output_declaration_reg,p) { 
		prt_keyword_space("output");
		APP_PRINTV(mem1) 
		prt_keyword_space(" ");
		APP_PRINTV(mem2) 
		prt_keyword_space(" ");
		APP_PRINTV(mem3) 
		prt_keyword_space(" ");
		APPLST_PRINTV( mem4 , prt_nothing , prt_comma , prt_nothing);//identifier
	}
	OPERATOR(T_tf_output_declaration_type,p) {  
		prt_keyword_space("output");
		APP_PRINTV(mem1) 
		prt_keyword_space(" ");
		APPLST_PRINTV( mem2 , prt_nothing , prt_comma , prt_nothing);//identifier
	}
	OPERATOR(T_tf_inout_declaration_reg,p) {  
		prt_keyword_space("inout");
		APP_PRINTV(mem1) 
		prt_keyword_space(" ");
		APP_PRINTV(mem2) 
		prt_keyword_space(" ");
		APP_PRINTV(mem3) 
		prt_keyword_space(" ");
		APPLST_PRINTV( mem4 , prt_nothing , prt_comma , prt_nothing);//identifier
	}
	OPERATOR(T_tf_inout_declaration_type,p) {  
		prt_keyword_space("inout");
		APP_PRINTV(mem1) 
		prt_keyword_space(" ");
		APPLST_PRINTV( mem2 , prt_nothing , prt_comma , prt_nothing);//identifier
	}
	OPERATOR(T_task_port_type_integer,p)  { prt_keyword_space("integer"); }
	OPERATOR(T_task_port_type_real,p)     { prt_keyword_space("real"); }
	OPERATOR(T_task_port_type_realtime,p) { prt_keyword_space("realtime"); }
	OPERATOR(T_task_port_type_time,p)     { prt_keyword_space("time"); }

	OPERATOR(T_task_port_item_input,p)     {
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_tf_io_declaration_gen1,p) {  
		APP_PRINTV(mem1) 
		prt_keyword_space(" ");
		APP_PRINTV(mem2) 
		prt_keyword_space(" ");
		APP_PRINTV(mem3) 
		prt_keyword_space(" ");
		APP_PRINTV(mem4) 
		prt_keyword_space(" ");
		APP_PRINTV(mem5) 
	}
	OPERATOR(T_tf_io_declaration_gen2,p) {  
		APP_PRINTV(mem1) 
		prt_keyword_space(" ");
		APP_PRINTV(mem2) 
		prt_keyword_space(" ");
		APP_PRINTV(mem3) 
	}
	OPERATOR(T_block_variable_type,p) {  
		APP_PRINTV(mem1) 
		APPLST_PRINTV( mem2 , prt_nothing, prt_nothing, prt_nothing);//dimension_list
	}
	OPERATOR(T_block_real_type,p) {  
		APP_PRINTV(mem1) 
		APPLST_PRINTV( mem2 , prt_nothing, prt_nothing, prt_nothing);//dimension_list
	}
	OPERATOR(T_block_item_declaration_reg,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		prt_keyword_space("\n reg");
		APP_PRINTV(mem2) 
		prt_keyword_space(" ");
		APP_PRINTV(mem3) 
		prt_keyword_space(" ");
		APPLST_PRINTV( mem4 , prt_nothing , prt_comma , prt_nothing );// block_variable_type
		prt_keyword_space(";");
	}
	OPERATOR(T_block_item_declaration_integer,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		prt_keyword_space("\n integer");
		APPLST_PRINTV( mem2 , prt_nothing , prt_comma , prt_nothing );// block_variable_type
		prt_keyword_space(";");
	}
	OPERATOR(T_block_item_declaration_time,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		prt_keyword_space("\n time");
		APPLST_PRINTV( mem2 , prt_nothing , prt_comma , prt_nothing );// block_variable_type
		prt_keyword_space(";");
	}
	OPERATOR(T_block_item_declaration_real,p) { 
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		prt_keyword_space("\n real");
		APPLST_PRINTV( mem2 , prt_nothing , prt_comma , prt_nothing );// block_variable_type
		prt_keyword_space(";");
	}
	OPERATOR(T_block_item_declaration_realtime,p) { 
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		prt_keyword_space("\n realtime");
		APPLST_PRINTV( mem2 , prt_nothing , prt_comma , prt_nothing );// block_variable_type
		prt_keyword_space(";");
	}
	OPERATOR(T_block_item_declaration_event,p) { 
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_block_item_declaration_local_param,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_block_item_declaration_param,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_event_expression_exp,p) { APP_PRINTV(mem1) }
	OPERATOR(T_event_expression_pos,p) { 
		prt_keyword_space("posedge");
		APP_PRINTV(mem1) 
	}
	OPERATOR(T_event_expression_neg,p) {  
		prt_keyword_space("negedge");
		APP_PRINTV(mem1) 
	}
	OPERATOR(T_event_expression_or,p) { assert(false); }

	OPERATOR(T_case_item,p) {  
		APPLST_PRINTV( mem1 , prt_nothing , prt_comma , prt_nothing);//expression
		prt_keyword_space(":");
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_case_item_default,p) {  }

	OPERATOR(T_statement_or_block_item_statement,p) { APP_PRINTV(mem1) }
	OPERATOR(T_statement_or_block_item_block,p) {  APP_PRINTV(mem1) }

	OPERATOR(T_local_parameter_declaration_1,p) {  
		prt_keyword_space("localparam");
		APP_PRINTV(mem1) 
		prt_keyword_space(" ");
		APP_PRINTV(mem2) 
		prt_keyword_space(" ");
		APPLST_PRINTV( mem3 , prt_nothing , prt_comma , prt_nothing);//param_assignment
	}
	OPERATOR(T_local_parameter_declaration_2,p) {  
		prt_keyword_space("localparam");
		APP_PRINTV(mem1) 
		prt_keyword_space(" ");
		APPLST_PRINTV( mem2 , prt_nothing , prt_comma , prt_nothing);//param_assignment
	}
	OPERATOR(T_reg_false,p) {  }
	OPERATOR(T_reg_true,p) { prt_keyword_space("reg"); }

	OPERATOR(T_statement_NOSPEC,p) { }
	OPERATOR(T_statement_blocking_assignment,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2) 
		prt_keyword_space(";\n");
	}
	OPERATOR(T_blocking_assignment,p) {  
		APP_PRINTV(mem1) 
		prt_keyword_space("=");
		APP_PRINTV(mem2) 
		APP_PRINTV(mem3) 
	}
	OPERATOR(T_net_lvalue_id,p) { APP_PRINTV(mem1)}
	OPERATOR(T_net_lvalue_idexp,p) { assert(false); }
	OPERATOR(T_net_lvalue_lvlist,p) { 
		APPLST_PRINTV( mem1 , prt_lbrace , prt_comma , prt_rbrace);//net_lvalue
	}
	OPERATOR(T_delay_or_event_control_NOSPEC,p) {  }
	OPERATOR(T_delay_or_event_control_delay_control,p) { APP_PRINTV(mem1) }
	OPERATOR(T_delay_or_event_control_event_control,p) { APP_PRINTV(mem1) }
	OPERATOR(T_delay_or_event_control_3,p) { 
		prt_keyword_space("repeat");
		prt_keyword_space("(");
			APP_PRINTV(mem1) 
		prt_keyword_space(")");
			APP_PRINTV(mem2) 
	}
	OPERATOR(T_delay_control_delay_value,p) {
		prt_keyword_space("#");
		APP_PRINTV(mem1) 
	}
	OPERATOR(T_delay_control_mintypmax_expression,p) {  
		prt_keyword_space("#(");
		APP_PRINTV(mem1) 
		prt_keyword_space(")");
	}
	OPERATOR(T_event_control_eventid,p) {  
		prt_keyword_space("@");
		APP_PRINTV(mem1) 
	}
	OPERATOR(T_event_control_event_exp,p) {  
		prt_keyword_space("@");
		APPLST_PRINTV( mem1 , prt_lparent , prt_comma , prt_rparent);//event_expression_orcomma_list
	}
	OPERATOR(T_event_control_start,p) { prt_keyword_space("(*)"); }
	
	OPERATOR(T_disable_statement,p) { 
		prt_keyword_space("\n disable");
		APP_PRINTV(mem1) 
		prt_keyword_space(";\n");
	}
	OPERATOR(T_event_trigger,p) { 
		prt_keyword_space("\n ->");
		APP_PRINTV(mem1) 
		prt_keyword_space(";\n");
	}
	OPERATOR(T_loop_statement_forever,p) {  
		prt_keyword_space("forever\n");
		APP_PRINTV(mem1) 
	}
	OPERATOR(T_loop_statement_repeat,p) {  
		prt_keyword_space("repeat(");
			APP_PRINTV(mem1) 
		prt_keyword_space(")\n");
			APP_PRINTV(mem2) 
	}
	OPERATOR(T_loop_statement_while,p) {  
		prt_keyword_space("while(");
			APP_PRINTV(mem1) 
		prt_keyword_space(")\n");
			APP_PRINTV(mem2) 
	}
	OPERATOR(T_loop_statement_for,p) {  
		prt_keyword_space("while(");
			APP_PRINTV(mem1) 
		prt_keyword_space(":");
			APP_PRINTV(mem2) 
		prt_keyword_space(":");
			APP_PRINTV(mem3) 
		prt_keyword_space(")\n");
			APP_PRINTV(mem4) 
	}
	OPERATOR(T_net_assignment,p) {  
		APP_PRINTV(mem1) 
		prt_keyword_space("=");
		APP_PRINTV(mem2) 
	}

	OPERATOR(T_statement_case_statement,p) { 
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_statement_conditional_statement,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_statement_disable_statement,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_statement_event_trigger,p) { 
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_statement_loop_statement,p) { 
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_statement_nonblocking_assignment,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2) 
		prt_keyword_space(";");
	}
	OPERATOR(T_statement_par_block,p) { 
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_statement_procedural_continuous_assignments,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2) 
		prt_keyword_space(";");
	}
	OPERATOR(T_statement_procedural_timing_control_statement,p) { 
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_statement_seq_block,p) { 
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_statement_system_task_enable,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_statement_task_enable,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_statement_wait_statement,p) { 
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2) 
	}
	
	OPERATOR(T_conditional_statement_ifelse,p) {  
		prt_keyword_space("if(");
			APP_PRINTV(mem1) 
		prt_keyword_space(")");
			APP_PRINTV(mem2) 
		if(false==(boost::apply_visitor(is_T_statement_NOSPEC(),*(p->mem3)))) {
			prt_keyword_space("else");
			APP_PRINTV(mem3) 
		}
	}
	OPERATOR(T_conditional_statement_ifelseif,p) { assert(false); }
	OPERATOR(T_case_statement_case,p) { 
		prt_keyword_space("case(");
			APP_PRINTV(mem1) 
		prt_keyword_space(")");
			APPLST_PRINTV( mem2 , prt_nothing , prt_nothing , prt_nothing);//case_item_list
		prt_keyword_space("\n endcase\n");
	}
	OPERATOR(T_case_statement_casez,p) {  
		prt_keyword_space("casez(");
			APP_PRINTV(mem1) 
		prt_keyword_space(")");
			APPLST_PRINTV( mem2 , prt_nothing , prt_nothing , prt_nothing);//case_item_list
		prt_keyword_space("\n endcase\n");
	}
	OPERATOR(T_case_statement_casex,p) {  
		prt_keyword_space("casex(");
			APP_PRINTV(mem1) 
		prt_keyword_space(")");
			APPLST_PRINTV( mem2 , prt_nothing , prt_nothing , prt_nothing);//case_item_list
		prt_keyword_space("\n endcase\n");
	}

	OPERATOR(T_nonblocking_assignment,p) {  
		APP_PRINTV(mem1) 
		prt_keyword_space("<=");
		APP_PRINTV(mem2) 
		prt_keyword_space(" ");
		APP_PRINTV(mem3) 
	}
	OPERATOR(T_par_block,p) {
		prt_keyword_space("fork");
		APP_PRINTV(mem1) 
		prt_keyword_space("\n");
		APPLST_PRINTV( mem2 , prt_nothing , prt_nothing , prt_nothing);//statement_or_block_item_list
		prt_keyword_space("\n end\n");
	}

	OPERATOR(T_colon_block_identifier_NOSPEC,p) {  }
	OPERATOR(T_colon_block_identifier,p) {  
		prt_keyword_space(":");
		APP_PRINTV(mem1) 
	}

	OPERATOR(T_procedural_continuous_assignments_assign,p) {  
		prt_keyword_space("assign");
		APP_PRINTV(mem1) 
	}
	OPERATOR(T_procedural_continuous_assignments_deassign,p) {
		prt_keyword_space("deassign");
		APP_PRINTV(mem1) 
	}
	OPERATOR(T_procedural_continuous_assignments_force1,p) {  
		prt_keyword_space("force");
		APP_PRINTV(mem1) 
	}
	OPERATOR(T_procedural_continuous_assignments_force2,p) { assert(false);  }
	OPERATOR(T_procedural_continuous_assignments_release1,p) {  
		prt_keyword_space("release");
		APP_PRINTV(mem1) 
	}
	OPERATOR(T_procedural_continuous_assignments_release2,p) { assert(false); }
	OPERATOR(T_procedural_timing_control_statement,p) {  
		APP_PRINTV(mem1) 
		prt_keyword_space(" ");
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_procedural_timing_control_delay,p) { APP_PRINTV(mem1) }
	OPERATOR(T_procedural_timing_control_event,p) { APP_PRINTV(mem1) }

	OPERATOR(T_seq_block,p) { 
		prt_keyword_space("begin");
		APP_PRINTV(mem1) 
		APPLST_PRINTV( mem2 , prt_nothing , prt_nothing , prt_nothing);//statement_or_block_item_list
		prt_keyword_space("end");
	}
	
	OPERATOR(T_system_task_enable,p) { 
		APP_PRINTV(mem1)
		APPLST_PRINTV(mem2 , prt_lparent , prt_comma , prt_lparent)  
		prt_keyword_space(";");
	}

	OPERATOR(T_task_enable,p) { 
		APP_PRINTV(mem1) 
		APPLST_PRINTV(mem2 , prt_lparent , prt_comma , prt_lparent)  
		prt_keyword_space(";");
	}
	OPERATOR(T_wait_statement,p) { 
		prt_keyword_space("wait (");
		APP_PRINTV(mem1) 
		prt_keyword_space(")\n");
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_module_item__specify_block,p) { assert(false); }
	OPERATOR(T_module_item__parameter_declaration,p) { 
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2);
		prt_keyword_space(";\n");
	}
	OPERATOR(T_module_item__specparam_declaration,p) { assert(false); }
	OPERATOR(T_module_item__net_declaration,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2);
	}
	OPERATOR(T_module_item__reg_declaration,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2);
	}
	OPERATOR(T_module_item__integer_declaration,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2);
	}
	OPERATOR(T_module_item__real_declaration,p) {
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2);
	}
	OPERATOR(T_module_item__time_declaration,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2);
	}
	OPERATOR(T_module_item__realtime_declaration,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2);
	}
	OPERATOR(T_module_item__event_declaration,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2);
	}
	OPERATOR(T_module_item__genvar_declaration,p) { 
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2);
	}
	OPERATOR(T_module_item__task_declaration,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2);
	}
// above is finished
	OPERATOR(T_module_item__function_declaration,p) {  }
	OPERATOR(T_module_item__local_parameter_declaration,p) {  }
	OPERATOR(T_module_item__parameter_override,p) {  }
	OPERATOR(T_module_item__continuous_assign,p) {  }
	OPERATOR(T_module_item__gate_instantiation,p) {  }
	OPERATOR(T_module_item__udp_instantiation,p) {  }
	OPERATOR(T_module_item__module_instantiation,p) {  }
	OPERATOR(T_module_item__initial_construct,p) {  }
	OPERATOR(T_module_item__always_construct,p) {  }
	OPERATOR(T_module_item__loop_generate_construct,p) {  }
	OPERATOR(T_module_item__conditional_generate_construct,p) {  }
	

	
};

void printVerilog( std::shared_ptr<std::list<std::shared_ptr<Verilogast::description>>> ptr_source_text) {
	cout<<"//about to print"<<endl;
	for(auto x = ptr_source_text->begin() ; x!=ptr_source_text->end() ; x++) {        
		prt_return();
		boost::apply_visitor(printVisitor(),**x);                   
	}                                                             
}

#endif
