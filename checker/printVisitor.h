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
void prt_or   () { cout<<" or ";}
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

class  is_T_generate_block_NOSPEC: public boost::static_visitor<bool> {
public :
	bool operator()(std::shared_ptr<T_generate_block_NOSPEC>   ) const { return true; }
	template <typename T>
	bool operator()(std::shared_ptr<T>   ) const { return false; }
};
class  is_T_identifier_NOSPEC: public boost::static_visitor<bool> {
public :
	bool operator()(std::shared_ptr<T_identifier_NOSPEC>   ) const { return true; }
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

	OPERATOR(T_attribute_instance,p) { 
		APPLST_PRINTV(mem1 , prt_lp_star , prt_comma , prt_star_rp) 
	}

	OPERATOR(T_attr_spec,p) { 
		APP_PRINTV(mem1);
		if(false==(boost::apply_visitor(is_T_expression_NOSPEC(),*(p->mem2)))) {
			prt_keyword_space("=");
			APP_PRINTV(mem2);
		}
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
	OPERATOR(T_primary_mintypmax,p) {
		prt_keyword_space("(");
		APP_PRINTV(mem1)
		prt_keyword_space(")");
	}
	OPERATOR(T_primary_string,p) { APP_PRINTV(mem1)}

	OPERATOR(T_number_UNSIGNED_NUMBER      ,p) { cout<<p->mem1;}
	OPERATOR(T_number_UNSIGNED_NUMBER_size ,p) { 
		if(0==(p->mem1)) {
			cout<<"'d"<<p->mem2;
		} else {
			cout<<p->mem1<<"'d"<<p->mem2;
		}
	}
	OPERATOR(T_number_OCTAL_NUMBER         ,p) { 
		if(0==(p->mem1)) {
			cout<<"'o"<<p->mem2;
		} else {
			cout<<p->mem1<<"'o"<<p->mem2;
		}
	}
	OPERATOR(T_number_BINARY_NUMBER        ,p) { 
		if(0==(p->mem1)) {
			cout<<"'b"<<p->mem2;
		} else {
			cout<<p->mem1<<"'b"<<p->mem2;
		}
	}
	OPERATOR(T_number_HEX_NUMBER           ,p) { 
		if(0==(p->mem1)) {
			cout<<"'h"<<p->mem2;
		} else {
			cout<<p->mem1<<"'h"<<p->mem2;
		}
	}
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
	OPERATOR(T_string     ,p) { 
		prt_keyword_space("\"");
		prt_keyword_space(p->mem1); 
		prt_keyword_space("\"");
	}

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
	OPERATOR(T_port_named,         p) {
		prt_keyword_space(".");
		APP_PRINTV(mem1) //port name
		prt_keyword_space("(");
		APP_PRINTV(mem2) //expression
		prt_keyword_space(")");
	}
	OPERATOR(T_port_unnamed,         p) {
		APP_PRINTV(mem1)
	}

	OPERATOR(T_port_expression,         p) {
		if(((p->mem1)->size())==1) {
			boost::apply_visitor(printVisitor(),*((p->mem1)->front()));
		} else if(((p->mem1)->size())>1) {
			APPLST_PRINTV(mem1 , prt_lbrace , prt_comma , prt_rbrace); 
		} else {//no port_reference
		}//ports refs
	}
	OPERATOR(T_module_declaration__1,p) {
		APPLST_PRINTV(mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list

		prt_keyword_space("module");
		APP_PRINTV(mem2) //module name
		prt_keyword_space("\n");
		APPLST_PRINTV(mem3 , prt_jinglparent , prt_comma , prt_rparent); // parameter list
		if(((p->mem4)->size())>0) {
			prt_keyword_space("\n (\n");
			APPLST_PRINTV(mem4 , prt_nothing , prt_comma , prt_rparent);//ports
		}
		cout<<";";
		APPLST_PRINTV(mem5 , prt_return , prt_return , prt_return);//module_item
		prt_keyword_space("\n endmodule\n");
	}
	OPERATOR(T_module_declaration__2,p) {
		APPLST_PRINTV(mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list

		prt_keyword_space("module");
		APP_PRINTV(mem2) //module name
		prt_keyword_space("\n");
		APPLST_PRINTV(mem3 , prt_jinglparent , prt_comma , prt_rparent); // parameter list
		prt_keyword_space("\n (\n");
		APPLST_PRINTV(mem4 , prt_nothing , prt_comma , prt_rparent);//port_declaration
		cout<<";";
		APPLST_PRINTV(mem5 , prt_return , prt_return , prt_return);//module_item
		prt_keyword_space("\n endmodule\n");
	}

	OPERATOR(T_module_item__1,p) { APP_PRINTV(mem1)}
	OPERATOR(T_module_item__2,p) { APP_PRINTV(mem1)}
	OPERATOR(T_module_item__port_declaration,p) { 
		APP_PRINTV(mem1)
		prt_keyword_space(";\n");
	}
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
		prt_keyword_space(",");
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
	OPERATOR(T_case_item_default,p) {  
		prt_keyword_space("default");
		APP_PRINTV(mem1) 
		prt_keyword_space("\n");
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_colon_opt_false,p) {  }
	OPERATOR(T_colon_opt_true,p) {  
		prt_keyword_space(":");
	}

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

	OPERATOR(T_statement_NOSPEC,p) {
		prt_keyword_space(";");
	}
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
		prt_keyword_space("@(");
		APP_PRINTV(mem1) 
		prt_keyword_space(")");
	}
	OPERATOR(T_event_control_event_exp,p) {  
		prt_keyword_space("@(");
		APPLST_PRINTV( mem1 , prt_nothing , prt_or , prt_nothing);//event_expression_orcomma_list
		prt_keyword_space(")");
	}
	OPERATOR(T_event_control_start,p) { prt_keyword_space("@(*)"); }
	
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
		prt_keyword_space("for(");
			APP_PRINTV(mem1) 
		prt_keyword_space(";");
			APP_PRINTV(mem2) 
		prt_keyword_space(";");
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
		prt_keyword_space(")\n");
			APPLST_PRINTV( mem2 , prt_nothing , prt_return , prt_nothing);//case_item_list
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
		prt_keyword_space("\n join\n");
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
		prt_keyword_space("\n");
		APPLST_PRINTV( mem2 , prt_nothing , prt_nothing , prt_nothing);//statement_or_block_item_list
		prt_keyword_space("end");
	}
	
	OPERATOR(T_system_task_enable,p) { 
		APP_PRINTV(mem1)
		APPLST_PRINTV(mem2 , prt_lparent , prt_comma , prt_rparent)  
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

	OPERATOR(T_function_declaration_1,p) {  
		prt_keyword_space("\n function");
		APP_PRINTV(mem1) 
		prt_keyword_space(" ");
		APP_PRINTV(mem2) 
		prt_keyword_space(" ");
		APP_PRINTV(mem3) 
		prt_keyword_space(";\n");
		APPLST_PRINTV(mem4 , prt_nothing , prt_nothing , prt_nothing)  
		prt_keyword_space("\n");
		APP_PRINTV(mem5) 
		prt_keyword_space("\n endfunction");
	}
	OPERATOR(T_function_declaration_2,p) {  
		prt_keyword_space("\n function");
		APP_PRINTV(mem1) 
		prt_keyword_space(" ");
		APP_PRINTV(mem2) 
		prt_keyword_space(" ");
		APP_PRINTV(mem3) 
		prt_keyword_space(" ");
		APPLST_PRINTV(mem4 , prt_lparent , prt_comma , prt_rparent)  
		prt_keyword_space(";\n");
		APPLST_PRINTV(mem5 , prt_nothing , prt_nothing, prt_nothing)  
		prt_keyword_space(";\n");
		APP_PRINTV(mem6) 
	}

	OPERATOR(T_function_range_or_type_NOSPEC,p) {  }
	OPERATOR(T_function_range_or_type,p) { 
		APP_PRINTV(mem1) 
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_function_range_or_type_INTEGER,p) { prt_keyword_space("integer"); }
	OPERATOR(T_function_range_or_type_REAL,p) { prt_keyword_space("real"); }
	OPERATOR(T_function_range_or_type_REALTIME,p) { prt_keyword_space("realtime"); }
	OPERATOR(T_function_range_or_type_TIME,p) { prt_keyword_space("time"); }
	OPERATOR(T_attribute_instance_list_tf_input_declaration,p) { 
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		prt_keyword_space(" ");
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_function_item_declaration_block,p) { APP_PRINTV(mem1) }
	OPERATOR(T_function_item_declaration_input,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		prt_keyword_space(" ");
		APP_PRINTV(mem2) 
		prt_keyword_space(";\n");
	}

	OPERATOR(T_defparam_assignment,p) {  
		APP_PRINTV(mem1) 
		prt_keyword_space("=");
		APP_PRINTV(mem2) 
	}

	OPERATOR(T_module_instantiation,p) {  
		APP_PRINTV(mem1) 
		prt_keyword_space("");
		APP_PRINTV(mem2) 
		prt_keyword_space("");
		APP_PRINTV(mem3) 
		prt_keyword_space("");
		APPLST_PRINTV( mem4 , prt_nothing, prt_comma , prt_nothing);//attribute_instance_list
		prt_keyword_space(";\n");
	}

	OPERATOR(T_parameter_value_assignment_NOSPEC,p) {  }
	OPERATOR(T_parameter_value_assignment_order,p) { 
		prt_keyword_space("#(");
		APPLST_PRINTV( mem1 , prt_nothing, prt_comma , prt_nothing);//expression
		prt_keyword_space(")");
	}
	OPERATOR(T_parameter_value_assignment_named,p) {  
		prt_keyword_space("#(");
		APPLST_PRINTV( mem1 , prt_nothing, prt_comma , prt_nothing);//expression
		prt_keyword_space(")");
	}
	OPERATOR(T_module_instance,p) {  
		APP_PRINTV(mem1) 
		prt_keyword_space("(\n");
		APP_PRINTV(mem2) 
		prt_keyword_space(")");
	}
	OPERATOR(T_named_parameter_assignment,p) {  
		prt_keyword_space(".");
		APP_PRINTV(mem1) 
		prt_keyword_space("(");
		APP_PRINTV(mem2) 
		prt_keyword_space(")");
	}
	OPERATOR(T_list_of_port_connections_ordered,p) {  
		APPLST_PRINTV( mem1 , prt_nothing, prt_comma , prt_nothing);//ordered_port_connection
	}
	OPERATOR(T_list_of_port_connections_named,p) {  
		APPLST_PRINTV( mem1 , prt_nothing, prt_comma , prt_nothing);//named_port_connection
	}
	OPERATOR(T_ordered_port_connection,p) {  
		APPLST_PRINTV( mem1 , prt_nothing , prt_comma , prt_nothing);//attribute_instance_list
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_named_port_connection,p) {  
		APPLST_PRINTV( mem1 , prt_nothing , prt_comma , prt_nothing);//attribute_instance_list
		prt_keyword_space(".");
		APP_PRINTV(mem2) 
		prt_keyword_space("(");
		APP_PRINTV(mem3) 
		prt_keyword_space(")");
	}
	OPERATOR(T_name_of_module_instance_NOSPEC,p) {  
	}
	OPERATOR(T_name_of_module_instance,p) {  
		APP_PRINTV(mem1) 
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_continuous_assign,p) {  
		prt_keyword_space("assign");
		APP_PRINTV(mem1) 
		prt_keyword_space(" ");
		APP_PRINTV(mem2) 
		prt_keyword_space(" ");
		APPLST_PRINTV( mem3 , prt_nothing , prt_comma , prt_nothing);//net_assignment
		prt_keyword_space(";\n");
	}
	OPERATOR(T_initial_construct,p) {  
		prt_keyword_space("initial");
		APP_PRINTV(mem1) 
	}
	OPERATOR(T_always_construct,p) {  
		prt_keyword_space("always\n");
		APP_PRINTV(mem1) 
	}
	OPERATOR(T_loop_generate_construct,p) {  
		prt_keyword_space("for(");
		APP_PRINTV(mem1) 
		prt_keyword_space(";");
		APP_PRINTV(mem2) 
		prt_keyword_space(";");
		APP_PRINTV(mem3) 
		prt_keyword_space(")\n");
		APP_PRINTV(mem4) 
	}
	OPERATOR(T_genvar_initialization,p) {  
		APP_PRINTV(mem1) 
		prt_keyword_space("=");
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_genvar_iteration,p) {  
		APP_PRINTV(mem1) 
		prt_keyword_space("=");
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_generate_block_NOSPEC,p) {  
		prt_keyword_space(";\n");
	}
	OPERATOR(T_generate_block_mgi,p) {  
		APP_PRINTV(mem1) 
	}
	OPERATOR(T_generate_block_begin,p) {  
		prt_keyword_space("\n begin");
		if(false==(boost::apply_visitor(is_T_identifier_NOSPEC(),*(p->mem1)))) {
			cout<<":  ";
			APP_PRINTV(mem1) 
		}
		prt_keyword_space("\n");
		APPLST_PRINTV( mem2 , prt_nothing , prt_nothing , prt_nothing);//module_item
		prt_keyword_space("\n end\n");
	}
	OPERATOR(T_conditional_generate_construct_if,p) {  APP_PRINTV(mem1) }
	OPERATOR(T_conditional_generate_construct_case,p) {  APP_PRINTV(mem1) }
	OPERATOR(T_if_generate_construct,p) {
		prt_keyword_space("\n if(");
		APP_PRINTV(mem1) 
		prt_keyword_space(")");
		APP_PRINTV(mem2) 
		if(false==(boost::apply_visitor(is_T_generate_block_NOSPEC(),*(p->mem3)))) {
			prt_keyword_space("else");
			APP_PRINTV(mem3) 
		}
	}
	OPERATOR(T_case_generate_construct,p) {
		prt_keyword_space("\n case(");
		APP_PRINTV(mem1) 
		prt_keyword_space(")\n");
		APPLST_PRINTV( mem2 , prt_nothing , prt_nothing , prt_nothing);//case_generate_item
		prt_keyword_space("\n endcase\n");
	}

	OPERATOR(T_case_generate_item_case,p) {  
		APPLST_PRINTV( mem1 , prt_nothing , prt_comma , prt_nothing);//expression
		prt_keyword_space(":");
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_case_generate_item_default,p) { 
		prt_keyword_space("default");
		prt_keyword_space(":");
		APP_PRINTV(mem1) 
	}

	OPERATOR(T_cmos_switchtype_CMOS,p) { prt_keyword_space("cmos"); }
	OPERATOR(T_cmos_switchtype_RCMOS,p) { prt_keyword_space("rcmos"); }
	OPERATOR(T_name_of_gate_instance_NOSPEC,p) {}
	OPERATOR(T_name_of_gate_instance,p) {
		APP_PRINTV(mem1) 
		prt_keyword_space("");
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_cmos_switch_instance,p) { 
		APP_PRINTV(mem1) 
		prt_keyword_space("(");
		APP_PRINTV(mem2) 
		prt_keyword_space(",");
		APP_PRINTV(mem3) 
		prt_keyword_space(",");
		APP_PRINTV(mem4) 
		prt_keyword_space(",");
		APP_PRINTV(mem5) 
		prt_keyword_space(")");
	}
	OPERATOR(T_gate_instantiation_cmos,p) {
		APP_PRINTV(mem1) 
		prt_keyword_space("");
		APP_PRINTV(mem2) 
		prt_keyword_space("");
		APPLST_PRINTV( mem3 , prt_nothing , prt_comma , prt_nothing);//cmos_switch_instance
		prt_keyword_space(";");
	}

	OPERATOR(T_enable_gatetype__BUFIF0,p) {prt_keyword_space("bufif0");}
	OPERATOR(T_enable_gatetype__BUFIF1,p) {prt_keyword_space("bufif1");}
	OPERATOR(T_enable_gatetype__NOTIF0,p) {prt_keyword_space("notif0");}
	OPERATOR(T_enable_gatetype__NOTIF1,p) {prt_keyword_space("notif1");}
	OPERATOR(T_enable_gate_instance,p) {
		APP_PRINTV(mem1) 
		prt_keyword_space("(");
		APP_PRINTV(mem2) 
		prt_keyword_space(",");
		APP_PRINTV(mem3) 
		prt_keyword_space(",");
		APP_PRINTV(mem4) 
		prt_keyword_space(")");
	}
	OPERATOR(T_gate_instantiation_enable,p) {
		APP_PRINTV(mem1) 
		prt_keyword_space("");
		APP_PRINTV(mem2) 
		prt_keyword_space("");
		APP_PRINTV(mem3) 
		prt_keyword_space("");
		APPLST_PRINTV( mem4 , prt_nothing , prt_comma , prt_nothing);//enable_gate_instance
		prt_keyword_space(";");
	}

	OPERATOR(T_mos_switchtype_NMOS ,p)  {prt_keyword_space("nmos");}
	OPERATOR(T_mos_switchtype_PMOS ,p)  {prt_keyword_space("pmos");}
	OPERATOR(T_mos_switchtype_RNMOS,p)  {prt_keyword_space("rnmos");}
	OPERATOR(T_mos_switchtype_RPMOS,p)  {prt_keyword_space("rpmos");}
	OPERATOR(T_mos_switch_instance,p) {
		APP_PRINTV(mem1) 
		prt_keyword_space("(");
		APP_PRINTV(mem2) 
		prt_keyword_space(",");
		APP_PRINTV(mem3) 
		prt_keyword_space(",");
		APP_PRINTV(mem4) 
		prt_keyword_space(")");
	}
	OPERATOR(T_gate_instantiation_mos,p) {
		APP_PRINTV(mem1) 
		prt_keyword_space("");
		APP_PRINTV(mem2) 
		prt_keyword_space("");
		APPLST_PRINTV( mem3 , prt_nothing , prt_comma , prt_nothing);//mos_switch_instance
		prt_keyword_space(";");
	}

	OPERATOR(T_n_input_gatetype_AND ,p) {prt_keyword_space("and");}
	OPERATOR(T_n_input_gatetype_NAND,p) {prt_keyword_space("nand");}
	OPERATOR(T_n_input_gatetype_OR  ,p) {prt_keyword_space("or");}
	OPERATOR(T_n_input_gatetype_NOR ,p) {prt_keyword_space("nor");}
	OPERATOR(T_n_input_gatetype_XOR ,p) {prt_keyword_space("xor");}
	OPERATOR(T_n_input_gatetype_XNOR,p) {prt_keyword_space("xnor");}
	OPERATOR(T_n_input_gate_instance,p) {
		APP_PRINTV(mem1) 
		prt_keyword_space("(");
		APP_PRINTV(mem2) 
		prt_keyword_space(",");
		APP_PRINTV(mem3) 
		prt_keyword_space(",");
		APPLST_PRINTV( mem4 , prt_nothing , prt_comma , prt_nothing);//expression
		prt_keyword_space(")");
	}

	OPERATOR(T_gate_instantiation_input,p) {
		APP_PRINTV(mem1) 
		prt_keyword_space("");
		APP_PRINTV(mem2) 
		prt_keyword_space("");
		APP_PRINTV(mem3) 
		prt_keyword_space("");
		APPLST_PRINTV( mem4 , prt_nothing , prt_comma , prt_nothing);//n_input_gate_instance
		prt_keyword_space(";");
	}

	OPERATOR(T_delay2_NOSPEC,p) {}
	OPERATOR(T_delay2_1,p) {
		prt_keyword_space("#");
		APP_PRINTV(mem1) 
	}
	OPERATOR(T_delay2_minmax1,p) {
		prt_keyword_space("# (");
		APP_PRINTV(mem1) 
		prt_keyword_space(")");
	}
	OPERATOR(T_delay2_minmax2,p) {
		prt_keyword_space("# (");
		APP_PRINTV(mem1) 
		prt_keyword_space(",");
		APP_PRINTV(mem2) 
		prt_keyword_space(")");
	}
	OPERATOR(T_n_output_gatetype_BUF,p) {prt_keyword_space("buf");}
	OPERATOR(T_n_output_gatetype_NOT,p) {prt_keyword_space("not");}
	OPERATOR(T_n_output_gate_instance,p) {
		APP_PRINTV(mem1) 
		prt_keyword_space("(");
		APP_PRINTV(mem2) 
		APPLST_PRINTV( mem3 , prt_comma , prt_comma , prt_nothing);//
		prt_keyword_space(",");
		APP_PRINTV(mem4) 
	}

	OPERATOR(T_gate_instantiation_output,p) {
		APP_PRINTV(mem1) 
		prt_keyword_space("");
		APP_PRINTV(mem2) 
		prt_keyword_space("");
		APP_PRINTV(mem3) 
		prt_keyword_space("");
		APPLST_PRINTV( mem4 , prt_nothing , prt_comma , prt_nothing);//n_output_gate_instance
		prt_keyword_space(";");
	}

	OPERATOR(T_pass_en_switchtype_TRANIF0 ,p) {prt_keyword_space("tranif0");}
	OPERATOR(T_pass_en_switchtype_TRANIF1 ,p) {prt_keyword_space("tranif1");}
	OPERATOR(T_pass_en_switchtype_RTRANIF1,p) {prt_keyword_space("rtranif1");}
	OPERATOR(T_pass_en_switchtype_RTRANIF0,p) {prt_keyword_space("rtranif0");}
	OPERATOR(T_pass_enable_switch_instance,p) {
		APP_PRINTV(mem1) 
		prt_keyword_space("(");
		APP_PRINTV(mem2) 
		prt_keyword_space(",");
		APP_PRINTV(mem3) 
		prt_keyword_space(",");
		APP_PRINTV(mem4) 
		prt_keyword_space(")");
	}
	OPERATOR(T_gate_instantiation_pass_en,p) {
		APP_PRINTV(mem1) 
		prt_keyword_space("");
		APP_PRINTV(mem2) 
		prt_keyword_space("");
		APPLST_PRINTV( mem3 , prt_nothing , prt_comma , prt_nothing);//pass_enable_switch_instance
		prt_keyword_space(";");
	}

	OPERATOR(T_pass_switchtype_TRAN ,p) {prt_keyword_space("tran");}
	OPERATOR(T_pass_switchtype_RTRAN,p) {prt_keyword_space("rtran");}
	OPERATOR(T_pass_switch_instance,p) {
		APP_PRINTV(mem1) 
		prt_keyword_space("(");
		APP_PRINTV(mem2) 
		prt_keyword_space(",");
		APP_PRINTV(mem3) 
		prt_keyword_space(")");
	}
	OPERATOR(T_gate_instantiation_pass,p) {
		APP_PRINTV(mem1) 
		prt_keyword_space("");
		APPLST_PRINTV( mem2 , prt_nothing , prt_comma , prt_nothing);//pass_switch_instance
		prt_keyword_space(";");
	}
	OPERATOR(T_pulldown_strength_NOSPEC,p) {}
	OPERATOR(T_pulldown_strength01,p) {prt_keyword_space(" ( strength0 , strength1 ) ");}
	OPERATOR(T_pulldown_strength10,p) {prt_keyword_space(" ( strength1 , strength1 ) ");}
	OPERATOR(T_pulldown_strength0 ,p) {prt_keyword_space(" ( strength0 ) ");}
	OPERATOR(T_pull_gate_instance ,p) {
		APP_PRINTV(mem1) 
		prt_keyword_space("(");
		APP_PRINTV(mem2) 
		prt_keyword_space(")");
	}
	OPERATOR(T_gate_instantiation_pulldown,p) {
		prt_keyword_space("pulldown");
		APP_PRINTV(mem1) 
		prt_keyword_space("");
		APPLST_PRINTV( mem2 , prt_nothing , prt_comma , prt_nothing);//pull_gate_instance
		prt_keyword_space(";");
	}
	OPERATOR(T_pullup_strength_NOSPEC,p) {}
	OPERATOR(T_pullup_strength01,p) {prt_keyword_space(" ( strength0 , strength1 ) ");}
	OPERATOR(T_pullup_strength10,p) {prt_keyword_space(" ( strength1 , strength1 ) ");}
	OPERATOR(T_pullup_strength1 ,p) {prt_keyword_space(" ( strength1 ) ");}
	OPERATOR(T_gate_instantiation_pullup,p) {
		prt_keyword_space("pullup");
		APP_PRINTV(mem1) 
		prt_keyword_space("");
		APPLST_PRINTV( mem2 , prt_nothing , prt_comma , prt_nothing);//pull_gate_instance
		prt_keyword_space(";");
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
	OPERATOR(T_module_item__function_declaration,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2);
	}
	OPERATOR(T_module_item__local_parameter_declaration,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2);
		prt_keyword_space(";\n");
	}
	OPERATOR(T_module_item__parameter_override,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		prt_keyword_space("defparam");
		APPLST_PRINTV( mem2 , prt_nothing , prt_comma , prt_nothing);//attribute_instance_list
		prt_keyword_space(";\n");
	}
	OPERATOR(T_module_item__continuous_assign,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2);
	}
	OPERATOR(T_module_item__gate_instantiation,p) { 
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2);
	}
	OPERATOR(T_module_item__udp_instantiation,p) {  assert(false); }
	OPERATOR(T_module_item__module_instantiation,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2);
	}
	OPERATOR(T_module_item__initial_construct,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2);
	}
	OPERATOR(T_module_item__always_construct,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2);
	}
	OPERATOR(T_module_item__loop_generate_construct,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2);
	}
	OPERATOR(T_module_item__conditional_generate_construct,p) {  
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2);
	}
};

void printVerilog( std::shared_ptr<std::list<std::shared_ptr<Verilogast::description>>> ptr_source_text) {
	for(auto x = ptr_source_text->begin() ; x!=ptr_source_text->end() ; x++) {        
		prt_return();
		boost::apply_visitor(printVisitor(),**x);                   
	}                                                             
}

#endif
