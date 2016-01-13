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

class is_T_expression_NOSPEC : public boost::static_visitor<bool> {
public :
	bool operator()(std::shared_ptr<T_expression_NOSPEC>   ) const { return true; }
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

	OPERATOR(T_identifier_NOSPEC,p) { cout<<""; }
	OPERATOR(T_identifier,       p) { cout<<(p->mem1); }

	OPERATOR(T_attribute_instance,p) { assert(false); }

	OPERATOR(T_parameter_declaration_gen_1,p) {
		APP_PRINTV(mem1) //parameter type
		cout<<" ";
		APP_PRINTV(mem2) //signed type
		cout<<" ";
		APP_PRINTV(mem3) //range type
		cout<<" ";
		APP_PRINTV(mem4) //pam assignment
	}

	OPERATOR(T_parameter_type__NOSPEC,p) { }
	OPERATOR(T_parameter_type__INTEGER,p) { cout<<" integer ";}
	OPERATOR(T_parameter_type__REAL,p) { cout<<" real "; }
	OPERATOR(T_parameter_type__REALTIME,p) { cout<<" realtime "; }
	OPERATOR(T_parameter_type__TIME,p) { cout<<" time "; }

	OPERATOR(T_unary_operator_LOGIC_NEG,p)   { cout<<" ! "; }
	OPERATOR(T_unary_operator_BITWISE_NEG,p) { cout<<" ~ "; }
	OPERATOR(T_unary_operator_REDUCE_NOR ,p) { cout<<" ~|  "; }
	OPERATOR(T_unary_operator_REDUCE_NAND,p) { cout<<" ~& "; }
	OPERATOR(T_unary_operator_ADD        ,p) { cout<<" + "; }
	OPERATOR(T_unary_operator_SUB        ,p) { cout<<" - "; }
	OPERATOR(T_unary_operator_REDUCE_AND ,p) { cout<<" & "; }
	OPERATOR(T_unary_operator_REDUCE_OR  ,p) { cout<<" | "; }
	OPERATOR(T_unary_operator_REDUCE_XOR ,p) { cout<<" ^ "; }
	OPERATOR(T_unary_operator_REDUCE_XNOR,p) { cout<<" ~^ "; }

	OPERATOR(T_signed_FALSE,p) {  }
	OPERATOR(T_signed_TRUE,p) { cout<<" signed "; }

	OPERATOR(T_range_NOSPEC,p) {  }
	OPERATOR(T_range,p) { 
		cout<<"[";
		APP_PRINTV(mem1) //exp1
		cout<<":";
		APP_PRINTV(mem2) //exp2
		cout<<"]";
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
		cout<<" = ";
		APP_PRINTV(mem2) //mintypmax_expression
	}

	OPERATOR(T_mintypmax_expression_NOSPEC,p) {}
	OPERATOR(T_mintypmax_expression_1,p) { APP_PRINTV(mem1)}
	OPERATOR(T_mintypmax_expression_3,p) {
		APP_PRINTV(mem1) //exp1
		cout<<" : ";
		APP_PRINTV(mem2) //exp2
		cout<<" : ";
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
		cout<<"{";
		APPLST_PRINTV(mem1,prt_lbrace , prt_comma , prt_rbrace);//explist
		cout<<"}";
	}
	OPERATOR(T_multiple_concatenation     ,p) { 
		cout<<"{";
			APP_PRINTV(mem1) //exp1
			APP_PRINTV(mem2) //concat
		cout<<"}";
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
	OPERATOR(T_system_function_identifier     ,p) { cout<<p->mem1; }
	OPERATOR(T_string     ,p) { cout<<p->mem1; }

	OPERATOR(T_binary_operator_1     ,p) { cout<<p->mem1; }
	OPERATOR(T_binary_operator_2     ,p) { cout<<p->mem1; }

	OPERATOR(T_binary_operator_MUL   ,p) { cout<<"*"; }
	OPERATOR(T_binary_operator_DIV   ,p) { cout<<"/"; }
	OPERATOR(T_binary_operator_MOD   ,p) { cout<<"%"; }
	OPERATOR(T_binary_operator_EQU2  ,p) { cout<<"=="; }
	OPERATOR(T_binary_operator_NEQ2  ,p) { cout<<"!="; }
	OPERATOR(T_binary_operator_EQU3  ,p) { cout<<"==="; }
	OPERATOR(T_binary_operator_NEQ3  ,p) { cout<<"!=="; }
	OPERATOR(T_binary_operator_POWER ,p) { cout<<"**"; }
	OPERATOR(T_binary_operator_LT    ,p) { cout<<"<"; } 
	OPERATOR(T_binary_operator_LE    ,p) { cout<<"<="; } 
	OPERATOR(T_binary_operator_GT    ,p) { cout<<">"; } 
	OPERATOR(T_binary_operator_GE    ,p) { cout<<">="; } 
	OPERATOR(T_binary_operator_LOGICAL_RIGHTSHIFT,p) { cout<<">>"; } 
	OPERATOR(T_binary_operator_LOGICAL_LEFTSHIFT,p) { cout<<"<<"; } 
	OPERATOR(T_binary_operator_ARITHMETIC_RIGHTSHIFT,p) { cout<<">>>"; } 
	OPERATOR(T_binary_operator_ARITHMETIC_LEFTSHIFT,p) { cout<<"<<<"; } 
	OPERATOR(T_binary_operator_ADD,p) { cout<<"+"; } 
	OPERATOR(T_binary_operator_SUB,p) { cout<<"-"; } 
	OPERATOR(T_binary_operator_AND,p) { cout<<"&"; } 
	OPERATOR(T_binary_operator_OR,p) { cout<<"|"; } 
	OPERATOR(T_binary_operator_AND2,p) { cout<<"&&"; } 
	OPERATOR(T_binary_operator_OR2,p) { cout<<"||"; } 
	OPERATOR(T_binary_operator_XOR,p) { cout<<"^"; } 
	OPERATOR(T_binary_operator_XNOR,p) { cout<<"~^"; } 

	OPERATOR(T_conditional_expression,p) {
		APP_PRINTV(mem1)
		cout << "?";
		APPLST_PRINTV(mem2 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem3)
		cout<<":";
		APP_PRINTV(mem4)
	}

	OPERATOR(T_identifier_lsq_expression_rsq,p) {
		APP_PRINTV(mem1)
		APPLST_PRINTV(mem2,prt_nothing,prt_nothing,prt_nothing);
	}
	OPERATOR(T_range_expression_NOSPEC,p) {}
	OPERATOR(T_range_expression_1,p) {
		cout<<"[";
		APP_PRINTV(mem1)
		cout<<"]";
	}
	OPERATOR(T_range_expression_2,p) {
		cout<<"[";
		APP_PRINTV(mem1)
		cout<<":";
		APP_PRINTV(mem2)
		cout<<"]";
	}
	OPERATOR(T_range_expression_addrange,p) {
		cout<<"[";
		APP_PRINTV(mem1)
		cout<<"+:";
		APP_PRINTV(mem2)
		cout<<"]";
	}
	OPERATOR(T_range_expression_subrange,p) {
		cout<<"[";
		APP_PRINTV(mem1)
		cout<<"-:";
		APP_PRINTV(mem2)
		cout<<"]";
	}

	OPERATOR(T_io_type_NOSPEC,p) {}
	OPERATOR(T_io_type_output,p) {cout<<"output";}
	OPERATOR(T_io_type_input,p) {cout<<"input";}
	OPERATOR(T_io_type_inout,p) {cout<<"inout";}

	OPERATOR(T_netreg_type__NOSPEC,p) {}
	OPERATOR(T_netreg_type__KEY_SUPPLY0,p) {cout<<"supply0";}
	OPERATOR(T_netreg_type__KEY_SUPPLY1,p) {cout<<"supply1";}
	OPERATOR(T_netreg_type__KEY_TRI,p) {cout<<"tri";}
	OPERATOR(T_netreg_type__KEY_TRIAND,p) {cout<<"triand";}
	OPERATOR(T_netreg_type__KEY_TRIOR,p) {cout<<"trior";}
	OPERATOR(T_netreg_type__KEY_TRI0,p) {cout<<"tri0";}
	OPERATOR(T_netreg_type__KEY_TRI1,p) {cout<<"tri1";}
	OPERATOR(T_netreg_type__KEY_UWIRE,p) {cout<<"uwire";}
	OPERATOR(T_netreg_type__KEY_WIRE,p) {cout<<"wire";}
	OPERATOR(T_netreg_type__KEY_WAND,p) {cout<<"wand";}
	OPERATOR(T_netreg_type__KEY_WOR,p) {cout<<"wor";}
	OPERATOR(T_netreg_type__KEY_REG,p) {cout<<"reg";}
	OPERATOR(T_netreg_type__KEY_INTEGER,p) {cout<<"integer";}
	OPERATOR(T_netreg_type__KEY_TIME,p) {cout<<"time";}

	OPERATOR(T_port_reference,p) {
		APP_PRINTV(mem1)
		APP_PRINTV(mem2)
	}
	OPERATOR(T_port_exp,         p) {
		cout<<".";
		APP_PRINTV(mem1) //port name
		cout<<"(";
		APP_PRINTV(mem2) //expression
		cout<<")";
	}
	OPERATOR(T_port_net,         p) {
		APP_PRINTV(mem1)
		cout<<" ";
		APP_PRINTV(mem2)
		cout<<" ";
		APP_PRINTV(mem3)
		cout<<" ";
		APP_PRINTV(mem4)
		cout<<" ";
		APP_PRINTV(mem5)
		cout<<" ";
		APP_PRINTV(mem6)
	}

	OPERATOR(T_port_expression,         p) {
		APPLST_PRINTV(mem1 , prt_lbrace , prt_comma , prt_rbrace);//ports refs
	}
	OPERATOR(T_module_declaration__1,p) {
		APPLST_PRINTV(mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list

		cout<<"module ";
		APP_PRINTV(mem2) //module name
		APPLST_PRINTV(mem3 , prt_jinglparent , prt_comma , prt_rparent); // parameter list
		APPLST_PRINTV(mem4 , prt_lparent , prt_comma , prt_rparent_semicolon);//ports
		APPLST_PRINTV(mem5 , prt_return , prt_return , prt_return);//module_item
		cout<<endl<<"endmodule"<<endl;
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
		cout<<"inout ";
		APP_PRINTV(mem1);
		cout<<" ";
		APP_PRINTV(mem2);
		cout<<" ";
		APP_PRINTV(mem3);
		cout<<" ";
		APPLST_PRINTV( mem4 , prt_nothing , prt_comma , prt_nothing);//identifier
	}
	OPERATOR(T_input_declaration,p) {  
		cout<<"input ";
		APP_PRINTV(mem1);
		cout<<" ";
		APP_PRINTV(mem2);
		cout<<" ";
		APP_PRINTV(mem3);
		cout<<" ";
		APPLST_PRINTV( mem4 , prt_nothing , prt_comma , prt_nothing);//identifier
	}
	OPERATOR(T_output_declaration_net,p) {  
		cout<<"output ";
		APP_PRINTV(mem1);
		cout<<" ";
		APP_PRINTV(mem2);
		cout<<" ";
		APP_PRINTV(mem3);
		cout<<" ";
		APPLST_PRINTV( mem4 , prt_nothing , prt_comma , prt_nothing);//identifier
	}
	OPERATOR(T_output_declaration_reg,p) {  
		cout<<"output reg ";
		APP_PRINTV(mem1);
		cout<<" ";
		APP_PRINTV(mem2);
		cout<<" ";
		APPLST_PRINTV( mem3 , prt_nothing , prt_comma , prt_nothing);//identifier
	}
	OPERATOR(T_output_declaration_var,p) {
		cout<<"output ";
		APP_PRINTV(mem1);
		cout<<" ";
		APPLST_PRINTV( mem2 , prt_nothing , prt_comma , prt_nothing);//identifier
	}
	OPERATOR(T_net_type_NOSPEC,p) {  }
	OPERATOR(T_net_type__KEY_SUPPLY0,p) { cout<<"supply0"; }
	OPERATOR(T_net_type__KEY_SUPPLY1,p) { cout<<"supply1"; }
	OPERATOR(T_net_type__KEY_TRI,p) { cout<<"tri"; }
	OPERATOR(T_net_type__KEY_TRIAND,p) { cout<<"triand"; }
	OPERATOR(T_net_type__KEY_TRIOR,p) {cout<<"trior";  }
	OPERATOR(T_net_type__KEY_TRI0,p) { cout<<"tri0"; }
	OPERATOR(T_net_type__KEY_TRI1,p) { cout<<"tri1"; }
	OPERATOR(T_net_type__KEY_UWIRE,p) { cout<<"uwire"; }
	OPERATOR(T_net_type__KEY_WIRE,p) { cout<<"wire"; }
	OPERATOR(T_net_type__KEY_WAND,p) {cout<<"wand";  }
	OPERATOR(T_net_type__KEY_WOR,p) { cout<<"wor"; }

	OPERATOR(T_port_identifier_equ1_expression_opt,p) { 
		APP_PRINTV(mem1);
		if(false==(boost::apply_visitor(is_T_expression_NOSPEC(),*(p->mem2)))) {
			//it is not NOSPEC, we can print =
			cout<<" = ";
			APP_PRINTV(mem2);
		}
	}
	OPERATOR(T_output_variable_type_INTEGER,p) { cout<<"integer"; }
	OPERATOR(T_output_variable_type_TIME,p) {cout <<"time";}

	OPERATOR(T_module_item__generate_region,p) { APP_PRINTV(mem1); }
	OPERATOR(T_generate_region,p) { 
		cout<<endl<<"generate"<<endl;
			APPLST_PRINTV( mem1 , prt_return , prt_return , prt_return);//module_item_list
		cout<<endl<<"endgenerate"<<endl;
	}

	OPERATOR(T_parameter_declaration_1,p) { 
		cout<<"parameter ";
		APP_PRINTV(mem1);
		cout<<" ";
		APP_PRINTV(mem2);
		cout<<" ";
		APPLST_PRINTV( mem3 , prt_nothing , prt_comma , prt_nothing);//param_assignment list
	}
	OPERATOR(T_parameter_declaration_2,p) {
		cout<<"parameter ";
		APP_PRINTV(mem1);
		cout<<" ";
		APPLST_PRINTV( mem2 , prt_nothing , prt_comma , prt_nothing);//param_assignment list
	}
	
	OPERATOR(T_net_declaration_net_type1,p) { assert(false); }
	OPERATOR(T_net_declaration_net_type2,p) { assert(false); }
	OPERATOR(T_net_declaration_net_type3,p) { 
		APP_PRINTV(mem1) 
		cout<<" ";
		APP_PRINTV(mem2)
		cout<<" ";
		APP_PRINTV(mem3)
		cout<<" ";
		APP_PRINTV(mem4)
		cout<<" ";
		APP_PRINTV(mem5)
		cout<<" ";
		APP_PRINTV(mem6)
		cout<<" ";
		APPLST_PRINTV( mem7 , prt_nothing , prt_comma , prt_nothing);//net_identifier_dimension_list
		cout<<" ;"<<endl;
	}

	OPERATOR(T_net_declaration_net_type4,p) {  
		APP_PRINTV(mem1) 
		cout<<" ";
		APP_PRINTV(mem2)
		cout<<" ";
		APP_PRINTV(mem3)
		cout<<" ";
		APP_PRINTV(mem4)
		cout<<" ";
		APP_PRINTV(mem5)
		cout<<" ";
		APP_PRINTV(mem6)
		cout<<" ";
		APPLST_PRINTV( mem7 , prt_nothing , prt_comma , prt_nothing);//net_decl_assignment
		cout<<" ;"<<endl;
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
		cout<<" = ";
		APP_PRINTV(mem2)
	}
	OPERATOR(T_drive_strength_NOSPEC,p) { }
	OPERATOR(T_drive_strength,p) { 
		cout<<" (";
			APP_PRINTV(mem1)
		cout<<":";
			APP_PRINTV(mem2)
		cout<<") ";
	}

	OPERATOR(KEY_HIGHZ0,p)  { cout<<" highz0 "; }
	OPERATOR(KEY_HIGHZ1,p)  { cout<<" highz1 "; }
	OPERATOR(KEY_SUPPLY0,p) { cout<<" supply0 "; }
	OPERATOR(KEY_STRONG0,p) { cout<<" strong0 "; }
	OPERATOR(KEY_PULL0,p)   { cout<<" pull0 "; }
	OPERATOR(KEY_WEAK0,p)   { cout<<" weak0 "; }
	OPERATOR(KEY_SUPPLY1,p) { cout<<" supply1 "; }
	OPERATOR(KEY_STRONG1,p) { cout<<" strong1 "; }
	OPERATOR(KEY_PULL1,p)   { cout<<" pull1 "; }
	OPERATOR(KEY_WEAK1,p)   { cout<<" weak1 "; }

	OPERATOR(T_vectored_scalared_NOSPEC,p) {  }
	OPERATOR(T_vectored_scalared_vectored,p) { cout<<" vectored ";  }
	OPERATOR(T_vectored_scalared_scalared,p) { cout<<" scalared ";  }

	OPERATOR(T_delay3_NOSPEC,p) {  }
	OPERATOR(T_delay3_1,p) { 
		cout<<" #";
		APP_PRINTV(mem1) 
		cout<<" ";
	}
	OPERATOR(T_delay3_minmax1,p) {
		cout<<" #(";
		APP_PRINTV(mem1) 
		cout<<") ";
	}
	OPERATOR(T_delay3_minmax2,p) { 
		cout<<" #(";
		APP_PRINTV(mem1) 
		cout<<" , ";
		APP_PRINTV(mem2) 
		cout<<") ";
	}
	OPERATOR(T_delay3_minmax3,p) { 
		cout<<" #(";
		APP_PRINTV(mem1) 
		cout<<" , ";
		APP_PRINTV(mem2) 
		cout<<" , ";
		APP_PRINTV(mem3) 
		cout<<") ";
	}

	OPERATOR(T_dimension,p) { 
		cout<<" [ ";
			APP_PRINTV(mem1) 
		cout<<" : ";
			APP_PRINTV(mem2) 
		cout<<" ] ";
	}
	OPERATOR(T_delay_value_UNSIGNED_NUMBER,p) { cout<<" "<<p->mem1<<" ";  }
	OPERATOR(T_delay_value_REAL_NUMBER,p) { cout<<" "<<p->mem1<<" ";  }
	OPERATOR(T_delay_value_id,p) { APP_PRINTV(mem1) }

	OPERATOR(T_reg_declaration,p) {
		cout<<" reg ";
			APP_PRINTV(mem1) 
		cout<<" ";
			APP_PRINTV(mem2) 
		cout<<" ";
			APPLST_PRINTV( mem3 , prt_nothing , prt_comma , prt_nothing);//variable_type
		cout<<" ; "<<endl;
	}

	OPERATOR(T_variable_type_noass,p) { 
		APP_PRINTV(mem1) 
		APPLST_PRINTV( mem2 , prt_nothing , prt_nothing , prt_nothing);//dimension
	}
	OPERATOR(T_variable_type_ass,p) { 
		APP_PRINTV(mem1) 
		cout<<" = ";
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_integer_declaration,p) { 
		cout<<" integer ";
		APPLST_PRINTV( mem1 , prt_nothing , prt_comma , prt_nothing);//variable_type
		cout<<" ; "<<endl;
	}
	OPERATOR(T_real_declaration,p) { 
		cout<<" real ";
		APPLST_PRINTV( mem1 , prt_nothing , prt_comma , prt_nothing);//variable_type
		cout<<" ; "<<endl;
	}
	OPERATOR(T_real_type_noass,p) {  
		APP_PRINTV(mem1) 
		cout<<" ";
		APPLST_PRINTV( mem2 , prt_nothing , prt_nothing , prt_nothing);//dimension
	}
	OPERATOR(T_real_type_ass,p) { 
		APP_PRINTV(mem1) 
		cout<<" = ";
		APP_PRINTV(mem2) 
	}
	OPERATOR(T_time_declaration,p) { 
		cout<<" time ";
		APPLST_PRINTV( mem1 , prt_nothing , prt_comma , prt_nothing);//variable_type
		cout<<" ; "<<endl;
	}
	OPERATOR(T_realtime_declaration,p) { 
		cout<<" realtime ";
		APPLST_PRINTV( mem1 , prt_nothing , prt_comma , prt_nothing);//variable_type
		cout<<" ; "<<endl;
	}

	OPERATOR(T_module_item__specify_block,p) { assert(false); }
	OPERATOR(T_module_item__parameter_declaration,p) { 
		APPLST_PRINTV( mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		APP_PRINTV(mem2);
		cout<<";"<<endl;
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
// above is finished
	OPERATOR(T_module_item__event_declaration,p) {  }
	OPERATOR(T_module_item__genvar_declaration,p) {  }
	OPERATOR(T_module_item__task_declaration,p) {  }
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
