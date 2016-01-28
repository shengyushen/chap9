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

class is_T_mintypmax_expression_NOSPEC: public boost::static_visitor<bool> {
public :
	bool operator()(std::shared_ptr<T_mintypmax_expression_NOSPEC>   ) const { return true; }
	template <typename T>
	bool operator()(std::shared_ptr<T>   ) const { return false; }
};
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

//operator functions macro
#define OPERATOR(T_typename,T_ptr)                   \
	void operator()(std::shared_ptr<T_typename> T_ptr) const 


class printVisitor : public boost::static_visitor<void> {
public :
	OPERATOR(T_description__udp_declaration   ,p) { printcell(p->mem1); }
	OPERATOR(T_description__config_declaration,p) { assert(false);}
	OPERATOR(T_description__module_declaration,p) { printcell(p->mem1); }

	
	OPERATOR(T_udp_declaration_1,p) {
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		prt_keyword_space("primitive");
		printcell(p->mem2);
		printcell(p->mem3);//udp_port_list
		prt_keyword_space(";");
		printlist(p->mem4 , prt_nothing , prt_nothing , prt_nothing);//udp_port_declaration_list
		printcell(p->mem5);
		prt_keyword_space("endprimitive");
	}
	OPERATOR(T_udp_declaration_2,p) {
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		prt_keyword_space("primitive");
		printcell(p->mem2);
		printcell(p->mem3);
		prt_keyword_space(";");
		printcell(p->mem4);
		prt_keyword_space("endprimitive");
	}

	OPERATOR(T_udp_port_list,p) {
		printcell(p->mem1);
		prt_keyword_space(",");
		printlist(p->mem2 , prt_nothing, prt_comma , prt_nothing);//comma_input_port_identifier_list
	}

	OPERATOR(T_udp_port_declaration_out,p) { printcell(p->mem1); }
	OPERATOR(T_udp_port_declaration_input,p) { printcell(p->mem1); }
	OPERATOR(T_udp_port_declaration_reg,p) { printcell(p->mem1); }

	OPERATOR(T_identifier_NOSPEC,p) {  }
	OPERATOR(T_identifier,       p) { prt_keyword_space(p->mem1); }

	OPERATOR(T_attribute_instance,p) { 
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp) ;
	}
	
	OPERATOR(T_udp_body_comb,p) { assert(false); }

	OPERATOR(T_udp_body_seq,p) { printcell(p->mem1); }
	OPERATOR(T_sequential_body,p) {
		printcell(p->mem1);
		prt_keyword_space("table");
		printlist(p->mem2 , prt_nothing , prt_nothing , prt_nothing) ;
		prt_keyword_space("endtable");
	}

	OPERATOR(T_udp_initial_statement_NOSPEC,p) { }
	OPERATOR(T_udp_initial_statement,p) {
		prt_keyword_space("initial");
		printcell(p->mem1);
		prt_keyword_space("=");
		printcell(p->mem2);
		prt_keyword_space(";");
	}
	OPERATOR(T_init_val_bin,p) {
		if(0==(p->mem1)) {
			cout<<"'"<<p->mem2<<p->mem3;
		} else {
			cout<<p->mem1<<"'"<<p->mem2<<p->mem3;
		}
	}
	OPERATOR(T_init_val_unsigned,p) {
		cout<<p->mem1<<endl;
	}
	OPERATOR(T_udp_output_declaration_output,p) {
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		prt_keyword_space("output");
		printcell(p->mem2);
	}
	OPERATOR(T_udp_output_declaration_reg,p) {
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		prt_keyword_space("output");
		prt_keyword_space("reg");
		printcell(p->mem2);
		if(false==(boost::apply_visitor(is_T_expression_NOSPEC(),*(p->mem3)))) {
			//it is not NOSPEC, we can print =
			prt_keyword_space("=");
			printcell(p->mem3);
		}
	}
	OPERATOR(T_udp_reg_declaration,p) {
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		prt_keyword_space("reg");
		printcell(p->mem2);
	}

	OPERATOR(T_udp_input_declaration,p) {
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		prt_keyword_space("input");
		printlist(p->mem2 , prt_nothing , prt_comma , prt_nothing);//list_of_port_identifiers
	}

	OPERATOR(T_udp_declaration_port_list,p) {
		printcell(p->mem1);
		prt_keyword_space(",");
		printlist(p->mem2 , prt_nothing , prt_comma , prt_nothing);// comma_udp_input_declaration_list
	}

	OPERATOR(T_udp_input_declaration_singular,p) {
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		if((p->mem2 )== 1) {
			prt_keyword_space("input");
		}
		printcell(p->mem3);
	}

	
	OPERATOR(T_sequential_entry,p) {
		printcell(p->mem1);
		prt_keyword_space(":");
		printcell(p->mem2);
		prt_keyword_space(":");
		printcell(p->mem3);
		prt_keyword_space(";");
	}
	OPERATOR(T_sequential_entry_comb,p) {
		printcell(p->mem1);
		prt_keyword_space(":");
		printcell(p->mem2);
		prt_keyword_space(";");
	}

	OPERATOR(T_seq_input_list_level,p) { 
		printlist(p->mem1 , prt_nothing , prt_nothing, prt_nothing);//level_symbol 
	}
	OPERATOR(T_seq_input_list_edge,p) { printcell(p->mem1); }
	OPERATOR(T_edge_input_list,p) {
		printlist(p->mem1 , prt_nothing , prt_nothing, prt_nothing);//level_symbol 
		printcell(p->mem2);
		printlist(p->mem3 , prt_nothing , prt_nothing, prt_nothing);//level_symbol 
	}

	OPERATOR(T_edge_indicator_level,p) {
		prt_keyword_space("(");
			printcell(p->mem1);
			printcell(p->mem2);
		prt_keyword_space(")");
	}
	OPERATOR(T_edge_indicator_edge,p) {
		printcell(p->mem1);
	}

	OPERATOR(T_attr_spec,p) { 
		printcell(p->mem1);
		if(false==(boost::apply_visitor(is_T_expression_NOSPEC(),*(p->mem2)))) {
			prt_keyword_space("=");
			printcell(p->mem2);
		}
	}



	OPERATOR(T_range_NOSPEC,p) {  }
	OPERATOR(T_range,p) { 
		prt_keyword_space("[");
		printcell(p->mem1); //exp1
		prt_keyword_space(":");
		printcell(p->mem2); //exp2
		prt_keyword_space("]");
	}

	OPERATOR(T_expression_NOSPEC,p) { }
	OPERATOR(T_expression_prim,p) { printcell(p->mem1); }
	OPERATOR(T_expression_op1,p) {
		printcell(p->mem1);//op
		printlist(p->mem2 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem3);//primary
	}
	OPERATOR(T_expression_op2,p) {
		printcell(p->mem1);//exp1
		printcell(p->mem2);//op
		printlist(p->mem3 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem4);//exp2
	}
	OPERATOR(T_expression_condition,p) { printcell(p->mem1); }
	
	OPERATOR(T_param_assignment,p) {
		printcell(p->mem1); //identifier
		prt_keyword_space("=");
		printcell(p->mem2); //mintypmax_expression
	}

	OPERATOR(T_mintypmax_expression_NOSPEC,p) {}
	OPERATOR(T_mintypmax_expression_1,p) { printcell(p->mem1);}
	OPERATOR(T_mintypmax_expression_3,p) {
		printcell(p->mem1); //exp1
		prt_keyword_space(":");
		printcell(p->mem2); //exp2
		prt_keyword_space(":");
		printcell(p->mem3); //exp3
	}
	OPERATOR(T_primary_num,p)    { printcell(p->mem1);}
	OPERATOR(T_primary_id ,p)    { printcell(p->mem1);}
	OPERATOR(T_primary_concat,p) { printcell(p->mem1);}
	OPERATOR(T_primary_mulcon,p) { printcell(p->mem1);}
	OPERATOR(T_primary_func,p)   { printcell(p->mem1);}
	OPERATOR(T_primary_sysfunc,p){ printcell(p->mem1);}
	OPERATOR(T_primary_mintypmax,p) {
		prt_keyword_space("(");
		printcell(p->mem1);
		prt_keyword_space(")");
	}
	OPERATOR(T_primary_string,p) { printcell(p->mem1);}

	OPERATOR(T_number_UNSIGNED_NUMBER      ,p) { cout<<p->mem1;}
	OPERATOR(T_number_UNSIGNED_NUMBER_size ,p) { 
		if(0==(p->mem1)) {
			cout<<"'"<<p->mem2<<p->mem3;
		} else {
			cout<<p->mem1<<"'"<<p->mem2<<p->mem3;
		}
	}
	OPERATOR(T_number_OCTAL_NUMBER         ,p) { 
		if(0==(p->mem1)) {
			cout<<"'"<<p->mem2<<p->mem3;
		} else {
			cout<<p->mem1<<"'"<<p->mem2<<p->mem3;
		}
	}
	OPERATOR(T_number_BINARY_NUMBER        ,p) { 
		if(0==(p->mem1)) {
			cout<<"'"<<p->mem2<<p->mem3;
		} else {
			cout<<p->mem1<<"'"<<p->mem2<<p->mem3;
		}
	}
	OPERATOR(T_number_HEX_NUMBER           ,p) { 
		if(0==(p->mem1)) {
			cout<<"'"<<p->mem2<<p->mem3;
		} else {
			cout<<p->mem1<<"'"<<p->mem2<<p->mem3;
		}
	}
	OPERATOR(T_number_REAL_NUMBER          ,p) { cout<<p->mem1;}

	OPERATOR(T_hierarchical_identifier     ,p) { 
		printlist(p->mem1 , prt_nothing , prt_period , prt_nothing); }
	
	OPERATOR(T_concatenation     ,p) { 
		printlist(p->mem1,prt_lbrace , prt_comma , prt_rbrace);//explist
	}
	OPERATOR(T_multiple_concatenation     ,p) { 
		prt_keyword_space("{");
			printcell(p->mem1); //exp1
			printcell(p->mem2); //concat
		prt_keyword_space("}");
	}
	OPERATOR(T_function_call     ,p) { 
		printcell(p->mem1);//func name
		printlist(p->mem2 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printlist(p->mem3 , prt_lparent , prt_comma , prt_rparent);//exp list for parameter
	}
	OPERATOR(T_system_function_call     ,p) { 
		printcell(p->mem1);//func name
		printlist(p->mem2 , prt_lparent , prt_comma , prt_rparent);//exp list for parameter
	}
	OPERATOR(T_system_function_identifier     ,p) { prt_keyword_space(p->mem1); }
	OPERATOR(T_string     ,p) { 
		prt_keyword_space("\"");
		prt_keyword_space(p->mem1); 
		prt_keyword_space("\"");
	}


	OPERATOR(T_conditional_expression,p) {
		printcell(p->mem1);
		prt_keyword_space("?");
		printlist(p->mem2 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem3);
		prt_keyword_space(":");
		printcell(p->mem4);
	}

	OPERATOR(T_identifier_lsq_expression_rsq,p) {
		printcell(p->mem1);
		printlist(p->mem2,prt_nothing,prt_nothing,prt_nothing);
	}
	OPERATOR(T_range_expression_NOSPEC,p) {}
	OPERATOR(T_range_expression_1,p) {
		prt_keyword_space("[");
		printcell(p->mem1);
		prt_keyword_space("]");
	}
	OPERATOR(T_range_expression_2,p) {
		prt_keyword_space("[");
		printcell(p->mem1);
		prt_keyword_space(":");
		printcell(p->mem2);
		prt_keyword_space("]");
	}
	OPERATOR(T_range_expression_addrange,p) {
		prt_keyword_space("[");
		printcell(p->mem1);
		prt_keyword_space("+:");
		printcell(p->mem2);
		prt_keyword_space("]");
	}
	OPERATOR(T_range_expression_subrange,p) {
		prt_keyword_space("[");
		printcell(p->mem1);
		prt_keyword_space("-:");
		printcell(p->mem2);
		prt_keyword_space("]");
	}


	OPERATOR(T_port_reference,p) {
		printcell(p->mem1);
		printcell(p->mem2);
	}
	OPERATOR(T_port_named,         p) {
		prt_keyword_space(".");
		printcell(p->mem1); //port name
		prt_keyword_space("(");
		printcell(p->mem2); //expression
		prt_keyword_space(")");
	}
	OPERATOR(T_port_unnamed,         p) {
		printcell(p->mem1);
	}

	OPERATOR(T_port_expression,         p) {
		if(((p->mem1)->size())==1) {
			boost::apply_visitor(printVisitor(),*((p->mem1)->front()));
		} else if(((p->mem1)->size())>1) {
			printlist(p->mem1 , prt_lbrace , prt_comma , prt_rbrace); 
		} else {//no port_reference
		}//ports refs
	}
	OPERATOR(T_module_declaration__1,p) {
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list

		prt_keyword_space("module");
		printcell(p->mem2); //module name
		prt_keyword_space("\n");
		printlist(p->mem3 , prt_jinglparent , prt_comma , prt_rparent); // parameter list
		if(((p->mem4)->size())>0) {
			printlist(p->mem4 , prt_lparent , prt_comma , prt_rparent);//ports
		}
		prt_keyword_space(";");
		printlist(p->mem5 , prt_return , prt_return , prt_return);//module_item
		prt_keyword_space("\n endmodule\n");
	}
	OPERATOR(T_module_declaration__2,p) {
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list

		prt_keyword_space("module");
		printcell(p->mem2); //module name
		prt_keyword_space("\n");
		printlist(p->mem3 , prt_jinglparent , prt_comma , prt_rparent); // parameter list
		printlist(p->mem4 , prt_lparent , prt_comma , prt_rparent);//port_declaration
		prt_keyword_space(";");
		printlist(p->mem5 , prt_return , prt_return , prt_return);//module_item
		prt_keyword_space("\n endmodule\n");
	}

	OPERATOR(T_module_item__1,p) { printcell(p->mem1);}
	OPERATOR(T_module_item__2,p) { printcell(p->mem1);}
	OPERATOR(T_module_item__port_declaration,p) { 
		printcell(p->mem1);
		prt_keyword_space(";\n");
	}
	OPERATOR(T_port_declaration__inout_declaration,p) {
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2);
	}
	OPERATOR(T_port_declaration__input_declaration,p) {
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2);
	}
	OPERATOR(T_port_declaration__output_declaration,p) {
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2);
	}
	OPERATOR(T_inout_declaration,p) {  
		prt_keyword_space("inout");
		printcell(p->mem1);
		prt_space();
		printcell(p->mem2);
		prt_space();
		printcell(p->mem3);
		prt_space();
		printlist(p->mem4 , prt_nothing , prt_comma , prt_nothing);//identifier
	}
	OPERATOR(T_input_declaration,p) {  
		prt_keyword_space("input");
		printcell(p->mem1);
		prt_space();
		printcell(p->mem2);
		prt_space();
		printcell(p->mem3);
		prt_space();
		printlist(p->mem4 , prt_nothing , prt_comma , prt_nothing);//identifier
	}
	OPERATOR(T_output_declaration_net,p) {  
		prt_keyword_space("output");
		printcell(p->mem1);
		prt_space();
		printcell(p->mem2);
		prt_space();
		printcell(p->mem3);
		prt_space();
		printlist(p->mem4 , prt_nothing , prt_comma , prt_nothing);//identifier
	}
	OPERATOR(T_output_declaration_reg,p) {  
		prt_keyword_space("output reg");
		printcell(p->mem1);
		prt_space();
		printcell(p->mem2);
		prt_space();
		printlist(p->mem3 , prt_nothing , prt_comma , prt_nothing);//identifier
	}
	OPERATOR(T_output_declaration_var,p) {
		prt_keyword_space("output");
		printcell(p->mem1);
		prt_space();
		printlist(p->mem2 , prt_nothing , prt_comma , prt_nothing);//identifier
	}

	OPERATOR(T_port_identifier_equ1_expression_opt,p) { 
		printcell(p->mem1);
		if(false==(boost::apply_visitor(is_T_expression_NOSPEC(),*(p->mem2)))) {
			//it is not NOSPEC, we can print =
			prt_keyword_space("=");
			printcell(p->mem2);
		}
	}

	OPERATOR(T_module_item__generate_region,p) { printcell(p->mem1); }
	OPERATOR(T_generate_region_1,p) { 
		prt_keyword_space("\n generate\n");
			printlist(p->mem1 , prt_return , prt_return , prt_return);//module_item_list
		prt_keyword_space("\n endgenerate\n");
	}
	OPERATOR(T_generate_region_2,p) {
		prt_keyword_space("\n generate\n");
		prt_keyword_space("begin\n");
		if(false==(boost::apply_visitor(is_T_identifier_NOSPEC(),*(p->mem1)))) {
			prt_keyword_space(":");
			printcell(p->mem1); 
		}
		printlist(p->mem2 , prt_return , prt_return , prt_return);//module_item_list
		prt_keyword_space("\nend\n");
		prt_keyword_space("\n endgenerate\n");
	}

	OPERATOR(T_parameter_declaration_1,p) { 
		prt_keyword_space("parameter");
		printcell(p->mem1);
		prt_space();
		printcell(p->mem2);
		prt_space();
		printlist(p->mem3 , prt_nothing , prt_comma , prt_nothing);//param_assignment list
	}
	OPERATOR(T_parameter_declaration_2,p) {
		prt_keyword_space("parameter");
		printcell(p->mem1);
		prt_space();
		printlist(p->mem2 , prt_nothing , prt_comma , prt_nothing);//param_assignment list
	}
	
	OPERATOR(T_net_declaration_net_type1,p) { assert(false); }
	OPERATOR(T_net_declaration_net_type2,p) { assert(false); }
	OPERATOR(T_net_declaration_net_type3,p) { 
		printcell(p->mem1); 
		prt_space();
		printcell(p->mem2);
		prt_space();
		printcell(p->mem3);
		prt_space();
		printcell(p->mem4);
		prt_space();
		printcell(p->mem5);
		prt_space();
		printcell(p->mem6);
		prt_space();
		printlist(p->mem7 , prt_nothing , prt_comma , prt_nothing);//net_identifier_dimension_list
		prt_keyword_space(";\n");
	}

	OPERATOR(T_net_declaration_net_type4,p) {  
		printcell(p->mem1); 
		prt_space();
		printcell(p->mem2);
		prt_space();
		printcell(p->mem3);
		prt_space();
		printcell(p->mem4);
		prt_space();
		printcell(p->mem5);
		prt_space();
		printcell(p->mem6);
		prt_space();
		printlist(p->mem7 , prt_nothing , prt_comma , prt_nothing);//net_decl_assignment
		prt_keyword_space(";\n");
	}
	OPERATOR(T_net_declaration_trireg_1,p) { assert(false); }
	OPERATOR(T_net_declaration_trireg_2,p) { assert(false); }
	OPERATOR(T_net_declaration_trireg_3,p) {  
		prt_keyword_space("trireg");
		printcell(p->mem1);
		printcell(p->mem2);
		printcell(p->mem3);
		printcell(p->mem4);
		printcell(p->mem5);
		printlist(p->mem6 , prt_nothing , prt_comma , prt_nothing);//list_of_net_identifiers
		prt_keyword_space(";\n");
	}
	OPERATOR(T_net_declaration_trireg_4,p) {  
		prt_keyword_space("trireg");
		printcell(p->mem1);
		printcell(p->mem2);
		printcell(p->mem3);
		printcell(p->mem4);
		printcell(p->mem5);
		printlist(p->mem6 , prt_nothing , prt_comma , prt_nothing);//list_of_net_decl_assignments
		prt_keyword_space(";\n");
	}

	OPERATOR(T_net_identifier_dimension_list,p) {
		printcell(p->mem1);
		printlist(p->mem2 , prt_nothing , prt_nothing , prt_nothing);//dimension
	}
	OPERATOR(T_net_decl_assignment,p) {
		printcell(p->mem1);
		prt_keyword_space("=");
		printcell(p->mem2);
	}
	OPERATOR(T_drive_strength_NOSPEC,p) { }
	OPERATOR(T_drive_strength,p) { 
		prt_keyword_space("(");
			printcell(p->mem1);
		prt_keyword_space(",");
			printcell(p->mem2);
		prt_keyword_space(")");
	}


	OPERATOR(T_delay3_NOSPEC,p) {  }
	OPERATOR(T_delay3_1,p) { 
		prt_keyword_space("#");
		printcell(p->mem1); 
		prt_space();
	}
	OPERATOR(T_delay3_minmax1,p) {
		prt_keyword_space("#(");
		printcell(p->mem1); 
		prt_keyword_space(")");
	}
	OPERATOR(T_delay3_minmax2,p) { 
		prt_keyword_space("#(");
		printcell(p->mem1); 
		prt_keyword_space(",");
		printcell(p->mem2); 
		prt_keyword_space(")");
	}
	OPERATOR(T_delay3_minmax3,p) { 
		prt_keyword_space("#(");
		printcell(p->mem1); 
		prt_keyword_space(",");
		printcell(p->mem2); 
		prt_keyword_space(",");
		printcell(p->mem3); 
		prt_keyword_space(")");
	}

	OPERATOR(T_dimension,p) { 
		prt_keyword_space("[");
			printcell(p->mem1); 
		prt_keyword_space(":");
			printcell(p->mem2); 
		prt_keyword_space("]");
	}
	OPERATOR(T_delay_value_UNSIGNED_NUMBER,p) { prt_keyword_space(p->mem1);  }
	OPERATOR(T_delay_value_REAL_NUMBER,p) { prt_keyword_space(p->mem1);  }
	OPERATOR(T_delay_value_id,p) { printcell(p->mem1); }

	OPERATOR(T_reg_declaration,p) {
		prt_keyword_space("reg");
			printcell(p->mem1); 
		prt_space();
			printcell(p->mem2); 
		prt_space();
			printlist(p->mem3 , prt_nothing , prt_comma , prt_nothing);//variable_type
		prt_keyword_space(";\n");
	}

	OPERATOR(T_variable_type_noass,p) { 
		printcell(p->mem1); 
		printlist(p->mem2 , prt_nothing , prt_nothing , prt_nothing);//dimension
	}
	OPERATOR(T_variable_type_ass,p) { 
		printcell(p->mem1); 
		prt_keyword_space("=");
		printcell(p->mem2); 
	}
	OPERATOR(T_integer_declaration,p) { 
		prt_keyword_space("integer");
		printlist(p->mem1 , prt_nothing , prt_comma , prt_nothing);//variable_type
		prt_keyword_space(";\n");
	}
	OPERATOR(T_real_declaration,p) { 
		prt_keyword_space("real");
		printlist(p->mem1 , prt_nothing , prt_comma , prt_nothing);//variable_type
		prt_keyword_space(";\n");
	}
	OPERATOR(T_real_type_noass,p) {  
		printcell(p->mem1); 
		prt_space();
		printlist(p->mem2 , prt_nothing , prt_nothing , prt_nothing);//dimension
	}
	OPERATOR(T_real_type_ass,p) { 
		printcell(p->mem1); 
		prt_keyword_space("=");
		printcell(p->mem2); 
	}
	OPERATOR(T_time_declaration,p) { 
		prt_keyword_space("time");
		printlist(p->mem1 , prt_nothing , prt_comma , prt_nothing);//variable_type
		prt_keyword_space(";\n");
	}
	OPERATOR(T_realtime_declaration,p) { 
		prt_keyword_space("realtime");
		printlist(p->mem1 , prt_nothing , prt_comma , prt_nothing);//variable_type
		prt_keyword_space(";\n");
	}

	OPERATOR(T_event_declaration,p) { 
		prt_keyword_space("event");
		printlist(p->mem1 , prt_nothing , prt_comma , prt_nothing);//list_of_event_identifiers
		prt_keyword_space(";");
	}

	OPERATOR(T_event_identifier_dimension_list,p) { 
		printcell(p->mem1); 
		printlist(p->mem2 , prt_nothing , prt_nothing , prt_nothing);//dimension_list
	}
	
	OPERATOR(T_genvar_declaration,p) { 
		prt_keyword_space("genvar");
		printlist(p->mem1 , prt_nothing , prt_comma , prt_nothing);//identifier
		prt_keyword_space(";");
	}
	OPERATOR(T_task_declaration1,p) {
		prt_keyword_space("\n task");
			printcell(p->mem1); 
			prt_space();
			printcell(p->mem2); 
		prt_keyword_space(";\n");
			printlist(p->mem3 , prt_nothing , prt_nothing , prt_nothing);//task_item_declaration_list
			printcell(p->mem4); 
		prt_keyword_space("\n endtask\n");
	}
	OPERATOR(T_task_declaration2,p) {
		prt_keyword_space("\n task");
			printcell(p->mem1); 
			prt_space();
			printcell(p->mem2); 
			prt_keyword_space("(");
			printlist(p->mem3 , prt_nothing , prt_comma, prt_nothing);//task_port_list
			prt_keyword_space(");\n");
			printlist(p->mem4 , prt_nothing , prt_nothing, prt_nothing);//task_item_declaration_list
			printcell(p->mem5); 
			prt_keyword_space("\n endtask\n");
	}

	OPERATOR(T_task_item_declaration_block,p) { printcell(p->mem1); }
	OPERATOR(T_task_item_declaration_input,p) { 
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2); 
		prt_keyword_space(";\n");
	}
	OPERATOR(T_task_item_declaration_output,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2); 
		prt_keyword_space(";\n");
	}
	OPERATOR(T_task_item_declaration_inout,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2); 
		prt_keyword_space(";\n");
	}
	OPERATOR(T_tf_input_declaration_reg,p) { 
		prt_keyword_space("input");
		printcell(p->mem1); 
		prt_keyword_space(" ");
		printcell(p->mem2); 
		prt_keyword_space(" ");
		printcell(p->mem3); 
		prt_keyword_space(" ");
		printlist(p->mem4 , prt_nothing , prt_comma , prt_nothing);//identifier
	}
	OPERATOR(T_tf_input_declaration_type,p) { 
		prt_keyword_space("input");
		printcell(p->mem1); 
		prt_keyword_space(" ");
		printlist(p->mem2 , prt_nothing , prt_comma , prt_nothing);//identifier
	}
	OPERATOR(T_tf_output_declaration_reg,p) { 
		prt_keyword_space("output");
		printcell(p->mem1); 
		prt_keyword_space(" ");
		printcell(p->mem2); 
		prt_keyword_space(" ");
		printcell(p->mem3); 
		prt_keyword_space(" ");
		printlist(p->mem4 , prt_nothing , prt_comma , prt_nothing);//identifier
	}
	OPERATOR(T_tf_output_declaration_type,p) {  
		prt_keyword_space("output");
		printcell(p->mem1); 
		prt_keyword_space(" ");
		printlist(p->mem2 , prt_nothing , prt_comma , prt_nothing);//identifier
	}
	OPERATOR(T_tf_inout_declaration_reg,p) {  
		prt_keyword_space("inout");
		printcell(p->mem1); 
		prt_keyword_space(" ");
		printcell(p->mem2); 
		prt_keyword_space(" ");
		printcell(p->mem3); 
		prt_keyword_space(" ");
		printlist(p->mem4 , prt_nothing , prt_comma , prt_nothing);//identifier
	}
	OPERATOR(T_tf_inout_declaration_type,p) {  
		prt_keyword_space("inout");
		printcell(p->mem1); 
		prt_keyword_space(" ");
		printlist(p->mem2 , prt_nothing , prt_comma , prt_nothing);//identifier
	}

	OPERATOR(T_task_port_item_input,p)     {
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2); 
	}
	OPERATOR(T_tf_io_declaration_gen1,p) {  
		printcell(p->mem1); 
		prt_keyword_space(" ");
		printcell(p->mem2); 
		prt_keyword_space(" ");
		printcell(p->mem3); 
		prt_keyword_space(" ");
		printcell(p->mem4); 
		prt_keyword_space(" ");
		printcell(p->mem5); 
	}
	OPERATOR(T_tf_io_declaration_gen2,p) {  
		printcell(p->mem1); 
		prt_keyword_space(" ");
		printcell(p->mem2); 
		prt_keyword_space(" ");
		printcell(p->mem3); 
	}
	OPERATOR(T_block_variable_type,p) {  
		printcell(p->mem1); 
		printlist(p->mem2 , prt_nothing, prt_nothing, prt_nothing);//dimension_list
	}
	OPERATOR(T_block_real_type,p) {  
		printcell(p->mem1); 
		printlist(p->mem2 , prt_nothing, prt_nothing, prt_nothing);//dimension_list
	}
	OPERATOR(T_block_item_declaration_reg,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		prt_keyword_space("\n reg");
		printcell(p->mem2); 
		prt_keyword_space(" ");
		printcell(p->mem3); 
		prt_keyword_space(" ");
		printlist(p->mem4 , prt_nothing , prt_comma , prt_nothing );// block_variable_type
		prt_keyword_space(";");
	}
	OPERATOR(T_block_item_declaration_integer,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		prt_keyword_space("\n integer");
		printlist(p->mem2 , prt_nothing , prt_comma , prt_nothing );// block_variable_type
		prt_keyword_space(";");
	}
	OPERATOR(T_block_item_declaration_time,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		prt_keyword_space("\n time");
		printlist(p->mem2 , prt_nothing , prt_comma , prt_nothing );// block_variable_type
		prt_keyword_space(";");
	}
	OPERATOR(T_block_item_declaration_real,p) { 
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		prt_keyword_space("\n real");
		printlist(p->mem2 , prt_nothing , prt_comma , prt_nothing );// block_variable_type
		prt_keyword_space(";");
	}
	OPERATOR(T_block_item_declaration_realtime,p) { 
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		prt_keyword_space("\n realtime");
		printlist(p->mem2 , prt_nothing , prt_comma , prt_nothing );// block_variable_type
		prt_keyword_space(";");
	}
	OPERATOR(T_block_item_declaration_event,p) { 
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2); 
	}
	OPERATOR(T_block_item_declaration_local_param,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2); 
	}
	OPERATOR(T_block_item_declaration_param,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2); 
	}
	OPERATOR(T_event_expression_exp,p) { printcell(p->mem1); }
	OPERATOR(T_event_expression_pos,p) { 
		prt_keyword_space("posedge");
		printcell(p->mem1); 
	}
	OPERATOR(T_event_expression_neg,p) {  
		prt_keyword_space("negedge");
		printcell(p->mem1); 
	}
	OPERATOR(T_event_expression_or,p) { assert(false); }

	OPERATOR(T_case_item,p) {  
		printlist(p->mem1 , prt_nothing , prt_comma , prt_nothing);//expression
		prt_keyword_space(":");
		printcell(p->mem2); 
	}
	OPERATOR(T_case_item_default,p) {  
		prt_keyword_space("default");
		printcell(p->mem1); 
		prt_keyword_space("\n");
		printcell(p->mem2); 
	}
	OPERATOR(T_colon_opt_false,p) {  }
	OPERATOR(T_colon_opt_true,p) {  
		prt_keyword_space(":");
	}

	OPERATOR(T_statement_or_block_item_statement,p) { printcell(p->mem1); }
	OPERATOR(T_statement_or_block_item_block,p) {  printcell(p->mem1); }

	OPERATOR(T_local_parameter_declaration_1,p) {  
		prt_keyword_space("localparam");
		printcell(p->mem1); 
		prt_keyword_space(" ");
		printcell(p->mem2); 
		prt_keyword_space(" ");
		printlist(p->mem3 , prt_nothing , prt_comma , prt_nothing);//param_assignment
	}
	OPERATOR(T_local_parameter_declaration_2,p) {  
		prt_keyword_space("localparam");
		printcell(p->mem1); 
		prt_keyword_space(" ");
		printlist(p->mem2 , prt_nothing , prt_comma , prt_nothing);//param_assignment
	}

	OPERATOR(T_statement_NOSPEC,p) {
		prt_keyword_space(";");
	}
	OPERATOR(T_statement_blocking_assignment,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2); 
		prt_keyword_space(";\n");
	}
	OPERATOR(T_blocking_assignment,p) {  
		printcell(p->mem1); 
		prt_keyword_space("=");
		printcell(p->mem2); 
		printcell(p->mem3); 
	}
	OPERATOR(T_net_lvalue_id,p) { printcell(p->mem1);}
	OPERATOR(T_net_lvalue_idexp,p) { assert(false); }
	OPERATOR(T_net_lvalue_lvlist,p) { 
		printlist(p->mem1 , prt_lbrace , prt_comma , prt_rbrace);//net_lvalue
	}
	OPERATOR(T_delay_or_event_control_NOSPEC,p) {  }
	OPERATOR(T_delay_or_event_control_delay_control,p) { printcell(p->mem1); }
	OPERATOR(T_delay_or_event_control_event_control,p) { printcell(p->mem1); }
	OPERATOR(T_delay_or_event_control_3,p) { 
		prt_keyword_space("repeat");
		prt_keyword_space("(");
			printcell(p->mem1); 
		prt_keyword_space(")");
			printcell(p->mem2); 
	}
	OPERATOR(T_delay_control_delay_value,p) {
		prt_keyword_space("#");
		printcell(p->mem1); 
	}
	OPERATOR(T_delay_control_mintypmax_expression,p) {  
		prt_keyword_space("#(");
		printcell(p->mem1); 
		prt_keyword_space(")");
	}
	OPERATOR(T_event_control_eventid,p) {  
		prt_keyword_space("@(");
		printcell(p->mem1); 
		prt_keyword_space(")");
	}
	OPERATOR(T_event_control_event_exp,p) {  
		prt_keyword_space("@(");
		printlist(p->mem1 , prt_nothing , prt_or , prt_nothing);//event_expression_orcomma_list
		prt_keyword_space(")");
	}
	OPERATOR(T_event_control_start,p) { prt_keyword_space("@(*)"); }
	
	OPERATOR(T_disable_statement,p) { 
		prt_keyword_space("\n disable");
		printcell(p->mem1); 
		prt_keyword_space(";\n");
	}
	OPERATOR(T_event_trigger,p) { 
		prt_keyword_space("\n ->");
		printcell(p->mem1); 
		prt_keyword_space(";\n");
	}
	OPERATOR(T_loop_statement_forever,p) {  
		prt_keyword_space("forever\n");
		printcell(p->mem1); 
	}
	OPERATOR(T_loop_statement_repeat,p) {  
		prt_keyword_space("repeat(");
			printcell(p->mem1); 
		prt_keyword_space(")\n");
			printcell(p->mem2); 
	}
	OPERATOR(T_loop_statement_while,p) {  
		prt_keyword_space("while(");
			printcell(p->mem1); 
		prt_keyword_space(")\n");
			printcell(p->mem2); 
	}
	OPERATOR(T_loop_statement_for,p) {  
		prt_keyword_space("for(");
			printcell(p->mem1); 
		prt_keyword_space(";");
			printcell(p->mem2); 
		prt_keyword_space(";");
			printcell(p->mem3); 
		prt_keyword_space(")\n");
			printcell(p->mem4); 
	}
	OPERATOR(T_net_assignment,p) {  
		printcell(p->mem1); 
		prt_keyword_space("=");
		printcell(p->mem2); 
	}

	OPERATOR(T_statement_case_statement,p) { 
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2); 
	}
	OPERATOR(T_statement_conditional_statement,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2); 
	}
	OPERATOR(T_statement_disable_statement,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2); 
	}
	OPERATOR(T_statement_event_trigger,p) { 
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2); 
	}
	OPERATOR(T_statement_loop_statement,p) { 
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2); 
	}
	OPERATOR(T_statement_nonblocking_assignment,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2); 
		prt_keyword_space(";");
	}
	OPERATOR(T_statement_par_block,p) { 
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2); 
	}
	OPERATOR(T_statement_procedural_continuous_assignments,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2); 
		prt_keyword_space(";");
	}
	OPERATOR(T_statement_procedural_timing_control_statement,p) { 
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2); 
	}
	OPERATOR(T_statement_seq_block,p) { 
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2); 
	}
	OPERATOR(T_statement_system_task_enable,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2); 
	}
	OPERATOR(T_statement_task_enable,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2); 
	}
	OPERATOR(T_statement_wait_statement,p) { 
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2); 
	}
	
	OPERATOR(T_conditional_statement_ifelse,p) {  
		prt_keyword_space("if(");
			printcell(p->mem1); 
		prt_keyword_space(")");
			printcell(p->mem2); 
		if(false==(boost::apply_visitor(is_T_statement_NOSPEC(),*(p->mem3)))) {
			prt_keyword_space("else");
			printcell(p->mem3); 
		}
	}
	OPERATOR(T_conditional_statement_ifelseif,p) { assert(false); }
	OPERATOR(T_case_statement_case,p) { 
		prt_keyword_space("case(");
			printcell(p->mem1); 
		prt_keyword_space(")\n");
			printlist(p->mem2 , prt_nothing , prt_return , prt_nothing);//case_item_list
		prt_keyword_space("\n endcase\n");
	}
	OPERATOR(T_case_statement_casez,p) {  
		prt_keyword_space("casez(");
			printcell(p->mem1); 
		prt_keyword_space(")");
			printlist(p->mem2 , prt_nothing , prt_nothing , prt_nothing);//case_item_list
		prt_keyword_space("\n endcase\n");
	}
	OPERATOR(T_case_statement_casex,p) {  
		prt_keyword_space("casex(");
			printcell(p->mem1); 
		prt_keyword_space(")");
			printlist(p->mem2 , prt_nothing , prt_nothing , prt_nothing);//case_item_list
		prt_keyword_space("\n endcase\n");
	}

	OPERATOR(T_nonblocking_assignment,p) {  
		printcell(p->mem1); 
		prt_keyword_space("<=");
		printcell(p->mem2); 
		prt_keyword_space(" ");
		printcell(p->mem3); 
	}
	OPERATOR(T_par_block,p) {
		prt_keyword_space("fork");
		printcell(p->mem1); 
		prt_keyword_space("\n");
		printlist(p->mem2 , prt_nothing , prt_nothing , prt_nothing);//statement_or_block_item_list
		prt_keyword_space("\n join\n");
	}

	OPERATOR(T_colon_block_identifier_NOSPEC,p) {  }
	OPERATOR(T_colon_block_identifier,p) {  
		prt_keyword_space(":");
		printcell(p->mem1); 
	}

	OPERATOR(T_procedural_continuous_assignments_assign,p) {  
		prt_keyword_space("assign");
		printcell(p->mem1); 
	}
	OPERATOR(T_procedural_continuous_assignments_deassign,p) {
		prt_keyword_space("deassign");
		printcell(p->mem1); 
	}
	OPERATOR(T_procedural_continuous_assignments_force1,p) {  
		prt_keyword_space("force");
		printcell(p->mem1); 
	}
	OPERATOR(T_procedural_continuous_assignments_force2,p) { assert(false);  }
	OPERATOR(T_procedural_continuous_assignments_release1,p) {  
		prt_keyword_space("release");
		printcell(p->mem1); 
	}
	OPERATOR(T_procedural_continuous_assignments_release2,p) { assert(false); }
	OPERATOR(T_procedural_timing_control_statement,p) {  
		printcell(p->mem1); 
		prt_keyword_space(" ");
		printcell(p->mem2); 
	}
	OPERATOR(T_procedural_timing_control_delay,p) { printcell(p->mem1); }
	OPERATOR(T_procedural_timing_control_event,p) { printcell(p->mem1); }

	OPERATOR(T_seq_block,p) { 
		prt_keyword_space("begin");
		printcell(p->mem1); 
		prt_keyword_space("\n");
		printlist(p->mem2 , prt_nothing , prt_nothing , prt_nothing);//statement_or_block_item_list
		prt_keyword_space("end");
	}
	
	OPERATOR(T_system_task_enable,p) { 
		printcell(p->mem1);
		printlist(p->mem2 , prt_lparent , prt_comma , prt_rparent);  
		prt_keyword_space(";");
	}

	OPERATOR(T_task_enable,p) { 
		printcell(p->mem1); 
		printlist(p->mem2 , prt_lparent , prt_comma , prt_rparent);  
		prt_keyword_space(";");
	}
	OPERATOR(T_wait_statement,p) { 
		prt_keyword_space("wait (");
		printcell(p->mem1); 
		prt_keyword_space(")\n");
		printcell(p->mem2); 
	}

	OPERATOR(T_function_declaration_1,p) {  
		prt_keyword_space("\n function");
		printcell(p->mem1); 
		prt_keyword_space(" ");
		printcell(p->mem2); 
		prt_keyword_space(" ");
		printcell(p->mem3); 
		prt_keyword_space(";\n");
		printlist(p->mem4 , prt_nothing , prt_nothing , prt_nothing);  
		prt_keyword_space("\n");
		printcell(p->mem5); 
		prt_keyword_space("\n endfunction");
	}
	OPERATOR(T_function_declaration_2,p) {  
		prt_keyword_space("\n function");
		printcell(p->mem1); 
		prt_keyword_space(" ");
		printcell(p->mem2); 
		prt_keyword_space(" ");
		printcell(p->mem3); 
		prt_keyword_space(" ");
		printlist(p->mem4 , prt_lparent , prt_comma , prt_rparent);  
		prt_keyword_space(";\n");
		printlist(p->mem5 , prt_nothing , prt_nothing, prt_nothing);  
		prt_keyword_space(";\n");
		printcell(p->mem6); 
	}

	OPERATOR(T_function_range_or_type_NOSPEC,p) {  }
	OPERATOR(T_function_range_or_type,p) { 
		printcell(p->mem1); 
		printcell(p->mem2); 
	}
	OPERATOR(T_function_range_or_type_INTEGER,p) { prt_keyword_space("integer"); }
	OPERATOR(T_function_range_or_type_REAL,p) { prt_keyword_space("real"); }
	OPERATOR(T_function_range_or_type_REALTIME,p) { prt_keyword_space("realtime"); }
	OPERATOR(T_function_range_or_type_TIME,p) { prt_keyword_space("time"); }
	OPERATOR(T_attribute_instance_list_tf_input_declaration,p) { 
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		prt_keyword_space(" ");
		printcell(p->mem2); 
	}
	OPERATOR(T_function_item_declaration_block,p) { printcell(p->mem1); }
	OPERATOR(T_function_item_declaration_input,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		prt_keyword_space(" ");
		printcell(p->mem2); 
		prt_keyword_space(";\n");
	}

	OPERATOR(T_defparam_assignment,p) {  
		printcell(p->mem1); 
		prt_keyword_space("=");
		printcell(p->mem2); 
	}

	OPERATOR(T_module_instantiation,p) {  
		printcell(p->mem1); 
		printcell(p->mem2); 
		printcell(p->mem3); 
		printlist(p->mem4 , prt_nothing, prt_comma , prt_nothing);//attribute_instance_list
		prt_keyword_space(";\n");
	}

	OPERATOR(T_parameter_value_assignment_NOSPEC,p) {  }
	OPERATOR(T_parameter_value_assignment_order,p) { 
		prt_keyword_space("#(");
		printlist(p->mem1 , prt_nothing, prt_comma , prt_nothing);//expression
		prt_keyword_space(")");
	}
	OPERATOR(T_parameter_value_assignment_named,p) {  
		prt_keyword_space("#(");
		printlist(p->mem1 , prt_nothing, prt_comma , prt_nothing);//expression
		prt_keyword_space(")");
	}
	OPERATOR(T_module_instance,p) {  
		printcell(p->mem1); 
		prt_keyword_space("(\n");
		printcell(p->mem2); 
		prt_keyword_space(")");
	}
	OPERATOR(T_named_parameter_assignment,p) {  
		prt_keyword_space(".");
		printcell(p->mem1); 
		prt_keyword_space("(");
		printcell(p->mem2); 
		prt_keyword_space(")");
	}
	OPERATOR(T_list_of_port_connections_ordered,p) {  
		printlist(p->mem1 , prt_nothing, prt_comma , prt_nothing);//ordered_port_connection
	}
	OPERATOR(T_list_of_port_connections_named,p) {  
		printlist(p->mem1 , prt_nothing, prt_comma , prt_nothing);//named_port_connection
	}
	OPERATOR(T_ordered_port_connection,p) {  
		printlist(p->mem1 , prt_nothing , prt_comma , prt_nothing);//attribute_instance_list
		printcell(p->mem2); 
	}
	OPERATOR(T_named_port_connection,p) {  
		printlist(p->mem1 , prt_nothing , prt_comma , prt_nothing);//attribute_instance_list
		prt_keyword_space(".");
		printcell(p->mem2); 
		prt_keyword_space("(");
		printcell(p->mem3); 
		prt_keyword_space(")");
	}
	OPERATOR(T_name_of_module_instance_NOSPEC,p) {  
	}
	OPERATOR(T_name_of_module_instance,p) {  
		printcell(p->mem1); 
		printcell(p->mem2); 
	}
	OPERATOR(T_continuous_assign,p) {  
		prt_keyword_space("assign");
		printcell(p->mem1); 
		prt_keyword_space(" ");
		printcell(p->mem2); 
		prt_keyword_space(" ");
		printlist(p->mem3 , prt_nothing , prt_comma , prt_nothing);//net_assignment
		prt_keyword_space(";\n");
	}
	OPERATOR(T_initial_construct,p) {  
		prt_keyword_space("initial");
		printcell(p->mem1); 
	}
	OPERATOR(T_always_construct,p) {  
		prt_keyword_space("always\n");
		printcell(p->mem1); 
	}
	OPERATOR(T_loop_generate_construct,p) {  
		prt_keyword_space("for(");
		printcell(p->mem1); 
		prt_keyword_space(";");
		printcell(p->mem2); 
		prt_keyword_space(";");
		printcell(p->mem3); 
		prt_keyword_space(")\n");
		printcell(p->mem4); 
	}
	OPERATOR(T_genvar_initialization,p) {  
		printcell(p->mem1); 
		prt_keyword_space("=");
		printcell(p->mem2); 
	}
	OPERATOR(T_genvar_iteration,p) {  
		printcell(p->mem1); 
		prt_keyword_space("=");
		printcell(p->mem2); 
	}
	OPERATOR(T_generate_block_NOSPEC,p) {  
		prt_keyword_space(";\n");
	}
	OPERATOR(T_generate_block_mgi,p) {  
		printcell(p->mem1); 
	}
	OPERATOR(T_generate_block_begin,p) {  
		prt_keyword_space("\n begin");
		if(false==(boost::apply_visitor(is_T_identifier_NOSPEC(),*(p->mem1)))) {
			prt_keyword_space(":");
			printcell(p->mem1); 
		}
		prt_keyword_space("\n");
		printlist(p->mem2 , prt_nothing , prt_nothing , prt_nothing);//module_item
		prt_keyword_space("\n end\n");
	}
	OPERATOR(T_conditional_generate_construct_if,p) {  printcell(p->mem1); }
	OPERATOR(T_conditional_generate_construct_case,p) {  printcell(p->mem1); }
	OPERATOR(T_if_generate_construct,p) {
		prt_keyword_space("\n if(");
		printcell(p->mem1); 
		prt_keyword_space(")");
		printcell(p->mem2); 
		if(false==(boost::apply_visitor(is_T_generate_block_NOSPEC(),*(p->mem3)))) {
			prt_keyword_space("else");
			printcell(p->mem3); 
		}
	}
	OPERATOR(T_case_generate_construct,p) {
		prt_keyword_space("\n case(");
		printcell(p->mem1); 
		prt_keyword_space(")\n");
		printlist(p->mem2 , prt_nothing , prt_nothing , prt_nothing);//case_generate_item
		prt_keyword_space("\n endcase\n");
	}

	OPERATOR(T_case_generate_item_case,p) {  
		printlist(p->mem1 , prt_nothing , prt_comma , prt_nothing);//expression
		prt_keyword_space(":");
		printcell(p->mem2); 
	}
	OPERATOR(T_case_generate_item_default,p) { 
		prt_keyword_space("default");
		prt_keyword_space(":");
		printcell(p->mem1); 
	}

	OPERATOR(T_name_of_gate_instance_NOSPEC,p) {}
	OPERATOR(T_name_of_gate_instance,p) {
		printcell(p->mem1); 
		printcell(p->mem2); 
	}
	OPERATOR(T_cmos_switch_instance,p) { 
		printcell(p->mem1); 
		prt_keyword_space("(");
		printcell(p->mem2); 
		prt_keyword_space(",");
		printcell(p->mem3); 
		prt_keyword_space(",");
		printcell(p->mem4); 
		prt_keyword_space(",");
		printcell(p->mem5); 
		prt_keyword_space(")");
	}
	OPERATOR(T_gate_instantiation_cmos,p) {
		printcell(p->mem1); 
		printcell(p->mem2); 
		printlist(p->mem3 , prt_nothing , prt_comma , prt_nothing);//cmos_switch_instance
		prt_keyword_space(";");
	}

	OPERATOR(T_enable_gate_instance,p) {
		printcell(p->mem1); 
		prt_keyword_space("(");
		printcell(p->mem2); 
		prt_keyword_space(",");
		printcell(p->mem3); 
		prt_keyword_space(",");
		printcell(p->mem4); 
		prt_keyword_space(")");
	}
	OPERATOR(T_gate_instantiation_enable,p) {
		printcell(p->mem1); 
		printcell(p->mem2); 
		printcell(p->mem3); 
		printlist(p->mem4 , prt_nothing , prt_comma , prt_nothing);//enable_gate_instance
		prt_keyword_space(";");
	}

	OPERATOR(T_mos_switch_instance,p) {
		printcell(p->mem1); 
		prt_keyword_space("(");
		printcell(p->mem2); 
		prt_keyword_space(",");
		printcell(p->mem3); 
		prt_keyword_space(",");
		printcell(p->mem4); 
		prt_keyword_space(")");
	}
	OPERATOR(T_gate_instantiation_mos,p) {
		printcell(p->mem1); 
		printcell(p->mem2); 
		printlist(p->mem3 , prt_nothing , prt_comma , prt_nothing);//mos_switch_instance
		prt_keyword_space(";");
	}

	OPERATOR(T_n_input_gate_instance,p) {
		printcell(p->mem1); 
		prt_keyword_space("(");
		printcell(p->mem2); 
		prt_keyword_space(",");
		printcell(p->mem3); 
		prt_keyword_space(",");
		printlist(p->mem4 , prt_nothing , prt_comma , prt_nothing);//expression
		prt_keyword_space(")");
	}

	OPERATOR(T_gate_instantiation_input,p) {
		printcell(p->mem1); 
		printcell(p->mem2); 
		printcell(p->mem3); 
		printlist(p->mem4 , prt_nothing , prt_comma , prt_nothing);//n_input_gate_instance
		prt_keyword_space(";");
	}

	OPERATOR(T_delay2_NOSPEC,p) {}
	OPERATOR(T_delay2_1,p) {
		prt_keyword_space("#");
		printcell(p->mem1); 
	}
	OPERATOR(T_delay2_minmax1,p) {
		prt_keyword_space("# (");
		printcell(p->mem1); 
		prt_keyword_space(")");
	}
	OPERATOR(T_delay2_minmax2,p) {
		prt_keyword_space("# (");
		printcell(p->mem1); 
		prt_keyword_space(",");
		printcell(p->mem2); 
		prt_keyword_space(")");
	}
	OPERATOR(T_n_output_gate_instance,p) {
		printcell(p->mem1); 
		prt_keyword_space("(");
		printcell(p->mem2); 
		printlist(p->mem3 , prt_comma , prt_comma , prt_nothing);//
		prt_keyword_space(",");
		printcell(p->mem4); 
		prt_keyword_space(")");
	}

	OPERATOR(T_gate_instantiation_output,p) {
		printcell(p->mem1); 
		printcell(p->mem2); 
		printcell(p->mem3); 
		printlist(p->mem4 , prt_nothing , prt_comma , prt_nothing);//n_output_gate_instance
		prt_keyword_space(";");
	}

	OPERATOR(T_pass_enable_switch_instance,p) {
		printcell(p->mem1); 
		prt_keyword_space("(");
		printcell(p->mem2); 
		prt_keyword_space(",");
		printcell(p->mem3); 
		prt_keyword_space(",");
		printcell(p->mem4); 
		prt_keyword_space(")");
	}
	OPERATOR(T_gate_instantiation_pass_en,p) {
		printcell(p->mem1); 
		printcell(p->mem2); 
		printlist(p->mem3 , prt_nothing , prt_comma , prt_nothing);//pass_enable_switch_instance
		prt_keyword_space(";");
	}

	OPERATOR(T_pass_switch_instance,p) {
		printcell(p->mem1); 
		prt_keyword_space("(");
		printcell(p->mem2); 
		prt_keyword_space(",");
		printcell(p->mem3); 
		prt_keyword_space(")");
	}
	OPERATOR(T_gate_instantiation_pass,p) {
		printcell(p->mem1); 
		printlist(p->mem2 , prt_nothing , prt_comma , prt_nothing);//pass_switch_instance
		prt_keyword_space(";");
	}

	OPERATOR(T_pulldown_strength_NOSPEC,p) {}
	OPERATOR(T_pulldown_strength01,p) {
		prt_keyword_space("(");
		printcell(p->mem1); 
		prt_keyword_space(",");
		printcell(p->mem2); 
		prt_keyword_space(")");
	}
	OPERATOR(T_pulldown_strength10,p) {
		prt_keyword_space("(");
		printcell(p->mem1); 
		prt_keyword_space(",");
		printcell(p->mem2); 
		prt_keyword_space(")");
	}

	OPERATOR(T_pulldown_strength0 ,p)  {
		prt_keyword_space("(");
		printcell(p->mem1); 
		prt_keyword_space(")");
	}


	OPERATOR(T_pull_gate_instance ,p) {
		printcell(p->mem1); 
		prt_keyword_space("(");
		printlist(p->mem2 , prt_nothing , prt_comma , prt_nothing);//output_terminal 
		prt_keyword_space(")");
	}
	OPERATOR(T_gate_instantiation_pulldown,p) {
		prt_keyword_space("pulldown");
		printcell(p->mem1); 
		printlist(p->mem2 , prt_nothing , prt_comma , prt_nothing);//pull_gate_instance
		prt_keyword_space(";");
	}
	OPERATOR(T_pullup_strength_NOSPEC,p) {}
	OPERATOR(T_pullup_strength01,p) {prt_keyword_space(" ( strength0 , strength1 ) ");}
	OPERATOR(T_pullup_strength10,p) {prt_keyword_space(" ( strength1 , strength1 ) ");}
	OPERATOR(T_pullup_strength1 ,p) {prt_keyword_space(" ( strength1 ) ");}
	OPERATOR(T_gate_instantiation_pullup,p) {
		prt_keyword_space("pullup");
		printcell(p->mem1); 
		printlist(p->mem2 , prt_nothing , prt_comma , prt_nothing);//pull_gate_instance
		prt_keyword_space(";");
	}

	OPERATOR(T_module_item__specify_block,p) { printcell(p->mem1); }
	OPERATOR(T_specify_block,p) {
		prt_keyword_space("specify");
			printlist(p->mem1 , prt_nothing , prt_nothing , prt_nothing);//specify_item_list
		prt_keyword_space("endspecify");
	}
	
	OPERATOR(T_specify_item_specparam,p) {printcell(p->mem1);}
	OPERATOR(T_specify_item_pulsestyle,p) {printcell(p->mem1);}
	OPERATOR(T_specify_item_showcancelled,p) {printcell(p->mem1);}
	OPERATOR(T_specify_item_path,p) {printcell(p->mem1);}
	OPERATOR(T_specify_item_system,p) {printcell(p->mem1);}

	OPERATOR(T_system_timing_check_dollor_setup_timing_check,p) {printcell(p->mem1);}
	OPERATOR(T_system_timing_check_dollor_hold_timing_check,p) {printcell(p->mem1);}
	OPERATOR(T_system_timing_check_dollor_setuphold_timing_check,p) {printcell(p->mem1);}
	OPERATOR(T_system_timing_check_dollor_recovery_timing_check,p) {printcell(p->mem1);}
	OPERATOR(T_system_timing_check_dollor_removal_timing_check,p) {printcell(p->mem1);}
	OPERATOR(T_system_timing_check_dollor_recrem_timing_check,p) {printcell(p->mem1);}
	OPERATOR(T_system_timing_check_dollor_skew_timing_check,p) {printcell(p->mem1);}
	OPERATOR(T_system_timing_check_dollor_timeskew_timing_check,p) {printcell(p->mem1);}
	OPERATOR(T_system_timing_check_dollor_fullskew_timing_check,p) {printcell(p->mem1);}
	OPERATOR(T_system_timing_check_dollor_period_timing_check,p) {printcell(p->mem1);}
	OPERATOR(T_system_timing_check_dollor_width_timing_check,p) {printcell(p->mem1);}
	OPERATOR(T_system_timing_check_dollor_nochange_timing_check,p) {printcell(p->mem1);}

	OPERATOR(T_edge_descriptor_01,p) { prt_keyword_space("01"); }
	OPERATOR(T_edge_descriptor_10,p) { prt_keyword_space("10"); }
	OPERATOR(T_edge_descriptor_zx01,p) {
		printcell(p->mem1); 
		printcell(p->mem2); 
	}
	OPERATOR(T_edge_descriptor_01zx,p) {
		printcell(p->mem1); 
		printcell(p->mem2); 
	}
	OPERATOR(T_edge_control_specifier , p ) {
		prt_keyword_space("edge");
		prt_keyword_space("[");
		printlist(p->mem1 , prt_nothing , prt_comma , prt_nothing);//edge_descriptor
		prt_keyword_space("]");
	}
	OPERATOR(T_timing_check_event_control_NOSPEC,p) { }
	OPERATOR(T_timing_check_event_control_POSEDGE,p) {
		prt_keyword_space("posedge");
	}
	OPERATOR(T_timing_check_event_control_NEGEDGE,p) {
		prt_keyword_space("negedge");
	}
	OPERATOR(T_timing_check_event_control_edge_control_specifier,p) {
		printcell(p->mem1); 
	}

	OPERATOR(T_specify_terminal_descriptor_in , p ) { printcell(p->mem1); }
	OPERATOR(T_timing_check_event,p) {
		printcell(p->mem1); 
		printcell(p->mem2); 
		if(false==(boost::apply_visitor(is_T_expression_NOSPEC(),*(p->mem3)))) {
			prt_keyword_space("&&&");
			printcell(p->mem3); 
		}
	}
	OPERATOR(T_reference_event , p ) { printcell(p->mem1); }
	OPERATOR(T_data_event , p ) { printcell(p->mem1); }
	OPERATOR(T_start_edge_offset,p) { printcell(p->mem1); }
	OPERATOR(T_notifier_NOSPEC,p) { }
	OPERATOR(T_notifier,p) { printcell(p->mem1); }
	OPERATOR(T_end_edge_offset , p) { printcell(p->mem1); }
	OPERATOR(T_dollor_nochange_timing_check , p ) {
		prt_keyword_space("\\$nochange");
		prt_keyword_space("(");
		printcell(p->mem1); 
		prt_keyword_space(",");
		printcell(p->mem2); 
		prt_keyword_space(",");
		printcell(p->mem3); 
		prt_keyword_space(",");
		printcell(p->mem4); 
		prt_keyword_space(",");
		printcell(p->mem5); 
		prt_keyword_space(")");
		prt_keyword_space(";");
	}
	OPERATOR(T_controlled_timing_check_event , p) {
		printcell(p->mem1); 
		printcell(p->mem2); 
		if(false==(boost::apply_visitor(is_T_expression_NOSPEC(),*(p->mem3)))) {
			prt_keyword_space("&&&");
			printcell(p->mem3); 
		}
	}
	OPERATOR(T_controlled_reference_event , p ) { printcell(p->mem1); }
	OPERATOR(T_timing_check_limit , p ) { printcell(p->mem1); }
	OPERATOR(T_threshold,p) { printcell(p->mem1); }
	OPERATOR(T_threshold_NOSPEC,p) { }
	OPERATOR(T_dollor_width_timing_check , p ) {
		prt_keyword_space("\\$width");
		prt_keyword_space("(");
		printcell(p->mem1); 
		prt_keyword_space(",");
		printcell(p->mem2); 
		prt_keyword_space(",");
		printcell(p->mem3); 
		prt_keyword_space(",");
		printcell(p->mem4); 
		prt_keyword_space(")");
		prt_keyword_space(";");
	}
	OPERATOR(T_dollor_period_timing_check , p ) {
		prt_keyword_space("\\$period");
		prt_keyword_space("(");
		printcell(p->mem1); 
		prt_keyword_space(",");
		printcell(p->mem2); 
		prt_keyword_space(",");
		printcell(p->mem3); 
		prt_keyword_space(")");
		prt_keyword_space(";");
	}
	OPERATOR(T_event_based_flag,p) { printcell(p->mem1); }
	OPERATOR(T_event_based_flag_NOSPEC,p) { }
	OPERATOR(T_remain_active_flag,p) { printcell(p->mem1); }
	OPERATOR(T_remain_active_flag_NOSPEC,p) { }
	OPERATOR(T_dollor_fullskew_timing_check , p ) {
		prt_keyword_space("\\$fullskew");
		prt_keyword_space("(");
		printcell(p->mem1); 
		prt_keyword_space(",");
		printcell(p->mem2); 
		prt_keyword_space(",");
		printcell(p->mem3); 
		prt_keyword_space(",");
		printcell(p->mem4); 
		prt_keyword_space(",");
		printcell(p->mem5); 
		prt_keyword_space(",");
		printcell(p->mem6); 
		prt_keyword_space(",");
		printcell(p->mem7); 
		prt_keyword_space(")");
		prt_keyword_space(";");
	}
	OPERATOR(T_dollor_timeskew_timing_check , p ) {
		prt_keyword_space("\\$timeskew");
		prt_keyword_space("(");
		printcell(p->mem1); 
		prt_keyword_space(",");
		printcell(p->mem2); 
		prt_keyword_space(",");
		printcell(p->mem3); 
		prt_keyword_space(",");
		printcell(p->mem4); 
		prt_keyword_space(",");
		printcell(p->mem5); 
		prt_keyword_space(",");
		printcell(p->mem6); 
		prt_keyword_space(")");
		prt_keyword_space(";");
	}
	OPERATOR(T_dollor_skew_timing_check , p ) {
		prt_keyword_space("\\$skew");
		prt_keyword_space("(");
		printcell(p->mem1); 
		prt_keyword_space(",");
		printcell(p->mem2); 
		prt_keyword_space(",");
		printcell(p->mem3); 
		prt_keyword_space(",");
		printcell(p->mem4); 
		prt_keyword_space(")");
		prt_keyword_space(";");
	}
	OPERATOR(T_stamptime_condition,p) { printcell(p->mem1); }
	OPERATOR(T_stamptime_condition_NOSPEC,p) { }
	OPERATOR(T_checktime_condition_NOSPEC,p) { }
	OPERATOR(T_checktime_condition,p) { printcell(p->mem1); }
	OPERATOR(T_delayed_reference_NOSPEC,p) { }
	OPERATOR(T_delayed_reference_id,p) { printcell(p->mem1); }
	OPERATOR(T_delayed_reference_idmtmexp,p) {
		printcell(p->mem1); 
		prt_keyword_space("[");
		printcell(p->mem2); 
		prt_keyword_space("]");
	}
	OPERATOR(T_delayed_data_NOSPEC,p) { }
	OPERATOR(T_delayed_data_id,p) { printcell(p->mem1); }
	OPERATOR(T_delayed_data_idmtmexp,p) {
		printcell(p->mem1); 
		prt_keyword_space("[");
		printcell(p->mem2); 
		prt_keyword_space("]");
	}

	OPERATOR(T_dollor_recrem_timing_check , p ) {
		prt_keyword_space("\\$recrem");
		prt_keyword_space("(");
		printcell(p->mem1); 
		prt_keyword_space(",");
		printcell(p->mem2); 
		prt_keyword_space(",");
		printcell(p->mem3); 
		prt_keyword_space(",");
		printcell(p->mem4); 
		prt_keyword_space(",");
		printcell(p->mem5); 
		prt_keyword_space(",");
		printcell(p->mem6); 
		prt_keyword_space(",");
		printcell(p->mem7); 
		prt_keyword_space(",");
		printcell(p->mem8); 
		prt_keyword_space(",");
		printcell(p->mem9); 
		prt_keyword_space(")");
		prt_keyword_space(";");
	}
	OPERATOR(T_dollor_removal_timing_check , p) {
		prt_keyword_space("\\$removal");
		prt_keyword_space("(");
		printcell(p->mem1);
		prt_keyword_space(",");
		printcell(p->mem2);
		prt_keyword_space(",");
		printcell(p->mem3);
		prt_keyword_space(",");
		printcell(p->mem4);
		prt_keyword_space(")");
		prt_keyword_space(";");
	}
	OPERATOR(T_dollor_recovery_timing_check ,p ) {
		prt_keyword_space("\\$recovery");
		prt_keyword_space("(");
		printcell(p->mem1); 
		prt_keyword_space(",");
		printcell(p->mem2); 
		prt_keyword_space(",");
		printcell(p->mem3); 
		prt_keyword_space(",");
		printcell(p->mem4); 
		prt_keyword_space(")");
		prt_keyword_space(";");
	}
	OPERATOR(T_dollor_setuphold_timing_check,p) {
		prt_keyword_space("\\$setuphold");
		prt_keyword_space("(");
		printcell(p->mem1);
		prt_keyword_space(",");
		printcell(p->mem2);
		prt_keyword_space(",");
		printcell(p->mem3);
		prt_keyword_space(",");
		printcell(p->mem4);
		prt_keyword_space(",");
		printcell(p->mem5);
		prt_keyword_space(",");
		printcell(p->mem6);
		prt_keyword_space(",");
		printcell(p->mem7);
		prt_keyword_space(",");
		printcell(p->mem8);
		prt_keyword_space(",");
		printcell(p->mem9);
		prt_keyword_space(")");
		prt_keyword_space(";");
	}
	OPERATOR(T_dollor_hold_timing_check,p) {
		prt_keyword_space("\\$hold");
		prt_keyword_space("(");
		printcell(p->mem1);
		prt_keyword_space(",");
		printcell(p->mem2);
		prt_keyword_space(",");
		printcell(p->mem3);
		prt_keyword_space(",");
		printcell(p->mem4);
		prt_keyword_space(";");
	}
	OPERATOR(T_dollor_setup_timing_check,p) {
		prt_keyword_space("\\$setup");
		prt_keyword_space("(");
		printcell(p->mem1); 
		prt_keyword_space(",");
		printcell(p->mem2); 
		prt_keyword_space(",");
		printcell(p->mem3); 
		prt_keyword_space(",");
		printcell(p->mem4); 
		prt_keyword_space(";");
	}

	OPERATOR(T_path_declaration_simple,p) {
		printcell(p->mem1); 
		prt_keyword_space(";");
	}

	OPERATOR(T_edge_sensitive_path_declaration_parallel,p) {
		printcell(p->mem1); 
		prt_keyword_space("=");
		printcell(p->mem2); 
	}
	OPERATOR(T_parallel_edge_sensitive_path_description , p ) {
		prt_keyword_space("(");
		printcell(p->mem1); 
		printlist(p->mem2 , prt_nothing , prt_comma , prt_nothing);// specify_inout_terminal_descriptor
		printcell(p->mem3); 
		prt_keyword_space("=>");
		prt_keyword_space("(");
		printcell(p->mem4); 
		printcell(p->mem5); 
		prt_keyword_space(":");
		printcell(p->mem6); 
		prt_keyword_space("))");
	}
	OPERATOR(T_edge_sensitive_path_declaration_full,p) {
		printcell(p->mem1); 
		prt_keyword_space("=");
		printcell(p->mem2); 
	}
	OPERATOR(T_full_edge_sensitive_path_description , p) {
		prt_keyword_space("(");
		printcell(p->mem1); 
		printlist(p->mem2 , prt_nothing , prt_comma , prt_nothing);// specify_inout_terminal_descriptor
		printcell(p->mem3); 
		prt_keyword_space("*>");
		prt_keyword_space("(");
		printlist(p->mem4 , prt_nothing , prt_comma , prt_nothing);// specify_inout_terminal_descriptor
		printcell(p->mem5); 
		prt_keyword_space(":");
		printcell(p->mem6); 
		prt_keyword_space("))");
	}
	OPERATOR(T_state_dependent_path_declaration_simple,p) {
		prt_keyword_space("if (");
		printcell(p->mem1); 
		prt_keyword_space(")");
		printcell(p->mem2); 
	}
	OPERATOR(T_state_dependent_path_declaration_edge,p) {
		prt_keyword_space("if (");
		printcell(p->mem1); 
		prt_keyword_space(")");
		printcell(p->mem2); 
	}
	OPERATOR(T_state_dependent_path_declaration_ifnone,p) {
		prt_keyword_space("ifnone");
		printcell(p->mem1); 
	}
	OPERATOR(T_parallel_path_description,p) {
		prt_keyword_space("(");
		printcell(p->mem1); 
		printlist(p->mem2 , prt_nothing , prt_comma , prt_nothing);// specify_inout_terminal_descriptor
		printcell(p->mem3); 
		prt_keyword_space("=>");
		printcell(p->mem4); 
		prt_keyword_space(")");
	}
	OPERATOR(T_list_of_mintypmax_expressions_1,p) { printcell(p->mem1); }
	OPERATOR(T_list_of_mintypmax_expressions_2,p) {
		printcell(p->mem1); 
		prt_keyword_space(",");
		printcell(p->mem2); 
	}
	OPERATOR(T_list_of_mintypmax_expressions_3,p) {
		printcell(p->mem1); 
		prt_keyword_space(",");
		printcell(p->mem2); 
		prt_keyword_space(",");
		printcell(p->mem3); 
	}
	OPERATOR(T_list_of_mintypmax_expressions_6,p) {
		printcell(p->mem1); 
		prt_keyword_space(",");
		printcell(p->mem2); 
		prt_keyword_space(",");
		printcell(p->mem3); 
		prt_keyword_space(",");
		printcell(p->mem4); 
		prt_keyword_space(",");
		printcell(p->mem5); 
		prt_keyword_space(",");
		printcell(p->mem6); 
	}
	OPERATOR(T_list_of_mintypmax_expressions_12,p) {
		printcell(p->mem1); 
		prt_keyword_space(",");
		printcell(p->mem2); 
		prt_keyword_space(",");
		printcell(p->mem3); 
		prt_keyword_space(",");
		printcell(p->mem4); 
		prt_keyword_space(",");
		printcell(p->mem5); 
		prt_keyword_space(",");
		printcell(p->mem6); 
		prt_keyword_space(",");
		printcell(p->mem7); 
		prt_keyword_space(",");
		printcell(p->mem8); 
		prt_keyword_space(",");
		printcell(p->mem9); 
		prt_keyword_space(",");
		printcell(p->mem10); 
		prt_keyword_space(",");
		printcell(p->mem11); 
		prt_keyword_space(",");
		printcell(p->mem12); 
	}
	OPERATOR(T_full_path_description,p) {
		prt_keyword_space("(");
		printcell(p->mem1); 
		printlist(p->mem2 , prt_nothing , prt_comma , prt_nothing);// specify_inout_terminal_descriptor
		printcell(p->mem3); 
		prt_keyword_space("*>");
		printlist(p->mem4 , prt_nothing , prt_comma , prt_nothing);// specify_inout_terminal_descriptor
		prt_keyword_space(")");
	}

	OPERATOR(T_path_declaration_edge,p) {
		printcell(p->mem1); 
		prt_keyword_space(";");
	}
	OPERATOR(T_path_declaration_state,p) {
		printcell(p->mem1); 
		prt_keyword_space(";");
	}

	OPERATOR(T_simple_path_declaration_parallel,p) {
		printcell(p->mem1); 
		prt_keyword_space("=");
		printcell(p->mem2); 
	}
	OPERATOR(T_simple_path_declaration_full,p) {
		printcell(p->mem1); 
		prt_keyword_space("=");
		printcell(p->mem2); 
	}

	OPERATOR(T_pulsestyle_declaration_oneevent,p) {
		prt_keyword_space("pulsestyle_onevent");
		printlist(p->mem1 , prt_nothing , prt_comma , prt_nothing);//list_of_path_inouts
		prt_keyword_space(";");
	}
	OPERATOR(T_pulsestyle_declaration_onedetect,p) {
		prt_keyword_space("pulsestyle_ondetect");
		printlist(p->mem1 , prt_nothing , prt_comma , prt_nothing);//list_of_path_inouts
		prt_keyword_space(";");
	}
	
	OPERATOR(T_showcancelled_declaration_show,p) {
		prt_keyword_space("showcancelled");
		printlist(p->mem1 , prt_nothing , prt_comma , prt_nothing);//list_of_path_inouts
		prt_keyword_space(";");
	}
	OPERATOR(T_showcancelled_declaration_noshow,p) {
		prt_keyword_space("noshowcancelled");
		printlist(p->mem1 , prt_nothing , prt_comma , prt_nothing);//list_of_path_inouts
		prt_keyword_space(";");
	}

	OPERATOR(T_specify_inout_terminal_descriptor,p) {
		printcell(p->mem1); 
		printcell(p->mem2); 
	}

	OPERATOR(T_specparam_declaration,p) {
		prt_keyword_space("specparam");
		printcell(p->mem1); 
		printlist(p->mem2 , prt_nothing , prt_comma , prt_nothing);//list_of_specparam_assignments
		prt_keyword_space(";");
	}

	OPERATOR(T_specparam_assignment,p) {
		printcell(p->mem1); 
		prt_keyword_space("=");
		printcell(p->mem2); 
	}
	OPERATOR(T_specparam_assignment_pulse1,p) {
		prt_keyword_space("PATHPULSE\\$");
		prt_keyword_space("=");
		prt_keyword_space("(");
		printcell(p->mem1); 
		if(false==(boost::apply_visitor(is_T_mintypmax_expression_NOSPEC(),*(p->mem2)))) {
			prt_keyword_space(",");
			printcell(p->mem2); 
		}
		prt_keyword_space(")");
	}
	OPERATOR(T_specparam_assignment_pulse2,p) {
		cout<<"PATHPULSE\\$";
		printcell(p->mem1); 
		cout<<"\\$";
		printcell(p->mem2); 
		prt_keyword_space("=");
		prt_keyword_space("(");
		printcell(p->mem3); 
		if(false==(boost::apply_visitor(is_T_mintypmax_expression_NOSPEC(),*(p->mem4)))) {
			prt_keyword_space(",");
			printcell(p->mem4); 
		}
		prt_keyword_space(")");
	}

	OPERATOR(T_module_item__parameter_declaration,p) { 
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2);
		prt_keyword_space(";\n");
	}
	OPERATOR(T_module_item__specparam_declaration,p) {
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2);
	}
	OPERATOR(T_module_item__net_declaration,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2);
	}
	OPERATOR(T_module_item__reg_declaration,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2);
	}
	OPERATOR(T_module_item__integer_declaration,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2);
	}
	OPERATOR(T_module_item__real_declaration,p) {
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2);
	}
	OPERATOR(T_module_item__time_declaration,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2);
	}
	OPERATOR(T_module_item__realtime_declaration,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2);
	}
	OPERATOR(T_module_item__event_declaration,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2);
	}
	OPERATOR(T_module_item__genvar_declaration,p) { 
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2);
	}
	OPERATOR(T_module_item__task_declaration,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2);
	}
	OPERATOR(T_module_item__function_declaration,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2);
	}
	OPERATOR(T_module_item__local_parameter_declaration,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2);
		prt_keyword_space(";\n");
	}
	OPERATOR(T_module_item__parameter_override,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		prt_keyword_space("defparam");
		printlist(p->mem2 , prt_nothing , prt_comma , prt_nothing);//attribute_instance_list
		prt_keyword_space(";\n");
	}
	OPERATOR(T_module_item__continuous_assign,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2);
	}
	OPERATOR(T_module_item__gate_instantiation,p) { 
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2);
	}
	OPERATOR(T_module_item__udp_instantiation,p) {  assert(false); }
	OPERATOR(T_module_item__module_instantiation,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2);
	}
	OPERATOR(T_module_item__initial_construct,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2);
	}
	OPERATOR(T_module_item__always_construct,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2);
	}
	OPERATOR(T_module_item__loop_generate_construct,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2);
	}
	OPERATOR(T_module_item__conditional_generate_construct,p) {  
		printlist(p->mem1 , prt_lp_star , prt_comma , prt_star_rp);//attribute_instance_list
		printcell(p->mem2);
	}
	void printcell(level_symbol p) const {
		prt_keyword_space("");
		switch(p) {
		case T_level_symbol_0       : {prt_keyword_space("0");break;}
		case T_level_symbol_1       : {prt_keyword_space("1");break;}
		case T_level_symbol_x       : {prt_keyword_space("x");break;}
		case T_level_symbol_X       : {prt_keyword_space("X");break;}
		case T_level_symbol_QUESTION: {prt_keyword_space("?");break;}
		case T_level_symbol_b       : {prt_keyword_space("b");break;}
		case T_level_symbol_B       : {prt_keyword_space("B");break;}
		case T_level_symbol_SUB     : {prt_keyword_space("-");break;}
		}
		prt_keyword_space("");
	}
	void printcell(edge_symbol p) const {
		prt_keyword_space("");
		switch(p) {
		case T_edge_symbol_r :   {prt_keyword_space("r");break;}
		case T_edge_symbol_R :   {prt_keyword_space("R");break;}
		case T_edge_symbol_f :   {prt_keyword_space("f");break;}
		case T_edge_symbol_F :   {prt_keyword_space("F");break;}
		case T_edge_symbol_p :   {prt_keyword_space("p");break;}
		case T_edge_symbol_P :   {prt_keyword_space("P");break;}
		case T_edge_symbol_n :   {prt_keyword_space("n");break;}
		case T_edge_symbol_N :   {prt_keyword_space("N");break;}
		case T_edge_symbol_MUL : {prt_keyword_space("*");break;}
		}
		prt_keyword_space("");
	}
	void printcell(parameter_type p) const {
		prt_keyword_space("");
		switch(p) {
		case T_parameter_type__NOSPEC :    { break;}
		case T_parameter_type__INTEGER :   { prt_keyword_space("integer" );break;}
		case T_parameter_type__REAL :      { prt_keyword_space("real"    );break;}
		case T_parameter_type__REALTIME :  { prt_keyword_space("realtime");break;}
		case T_parameter_type__TIME :      { prt_keyword_space("time"    );break;}
		}
		prt_keyword_space("");
	}

	void printcell(unary_operator p) const {
		prt_keyword_space("");
		switch(p) {
		case T_unary_operator_LOGIC_NEG :    { prt_keyword_space("!"); break;}
		case T_unary_operator_BITWISE_NEG :  { prt_keyword_space("~"); break;}
		case T_unary_operator_REDUCE_NOR  :  { prt_keyword_space("~|"); break;}
		case T_unary_operator_REDUCE_NAND :  { prt_keyword_space("~&"); break;}
		case T_unary_operator_ADD         :  { prt_keyword_space("+"); break;}
		case T_unary_operator_SUB         :  { prt_keyword_space("-"); break;}
		case T_unary_operator_REDUCE_AND  :  { prt_keyword_space("&"); break;}
		case T_unary_operator_REDUCE_OR   :  { prt_keyword_space("|"); break;}
		case T_unary_operator_REDUCE_XOR  :  { prt_keyword_space("^"); break;}
		case T_unary_operator_REDUCE_XNOR :  { prt_keyword_space("~^"); break;}
		}
		prt_keyword_space("");
	}
	void printcell(signedType p) const {
		prt_keyword_space("");
		switch(p) {
		case T_signed_FALSE :  {  break;}
		case T_signed_TRUE :  { prt_keyword_space("signed"); break;}
		}
		prt_keyword_space("");
	}
	void printcell(binary_operator p) const {
		prt_keyword_space("");
		switch(p) {
		case T_binary_operator_MUL    :  { prt_keyword_space("*"); break;}
		case T_binary_operator_DIV    :  { prt_keyword_space("/"); break;}
		case T_binary_operator_MOD    :  { prt_keyword_space("%"); break;}
		case T_binary_operator_EQU2   :  { prt_keyword_space("=="); break;}
		case T_binary_operator_NEQ2   :  { prt_keyword_space("!="); break;}
		case T_binary_operator_EQU3   :  { prt_keyword_space("==="); break;}
		case T_binary_operator_NEQ3   :  { prt_keyword_space("!=="); break;}
		case T_binary_operator_POWER  :  { prt_keyword_space("**"); break;}
		case T_binary_operator_LT     :  { prt_keyword_space("<"); break;} 
		case T_binary_operator_LE     :  { prt_keyword_space("<="); break;} 
		case T_binary_operator_GT     :  { prt_keyword_space(">"); break;} 
		case T_binary_operator_GE     :  { prt_keyword_space(">="); break;} 
		case T_binary_operator_LOGICAL_RIGHTSHIFT :  { prt_keyword_space(">>"); break;} 
		case T_binary_operator_LOGICAL_LEFTSHIFT :  { prt_keyword_space("<<"); break;} 
		case T_binary_operator_ARITHMETIC_RIGHTSHIFT :  { prt_keyword_space(">>>"); break;} 
		case T_binary_operator_ARITHMETIC_LEFTSHIFT :  { prt_keyword_space("<<<"); break;} 
		case T_binary_operator_ADD :  { prt_keyword_space("+"); break;} 
		case T_binary_operator_SUB :  { prt_keyword_space("-"); break;} 
		case T_binary_operator_AND :  { prt_keyword_space("&"); break;} 
		case T_binary_operator_OR :  { prt_keyword_space("|"); break;} 
		case T_binary_operator_AND2 :  { prt_keyword_space("&&"); break;} 
		case T_binary_operator_OR2 :  { prt_keyword_space("||"); break;} 
		case T_binary_operator_XOR :  { prt_keyword_space("^"); break;} 
		case T_binary_operator_XNOR :  { prt_keyword_space("~^"); break;} 
		}
		prt_keyword_space("");
	}
	void printcell(io_type p) const {
		prt_keyword_space("");
		switch(p) {
		case T_io_type_NOSPEC :  {break;}
		case T_io_type_output :  {prt_keyword_space("output");break;}
		case T_io_type_input :  {prt_keyword_space("input");break;}
		case T_io_type_inout :  {prt_keyword_space("inout");break;}
		}
		prt_keyword_space("");
	}

	void printcell(netreg_type p) const {
		prt_keyword_space("");
		switch(p) {
		case T_netreg_type__NOSPEC :  {break;}
		case T_netreg_type__KEY_SUPPLY0 :  {prt_keyword_space("supply0");break;}
		case T_netreg_type__KEY_SUPPLY1 :  {prt_keyword_space("supply1");break;}
		case T_netreg_type__KEY_TRI :  {prt_keyword_space("tri");break;}
		case T_netreg_type__KEY_TRIAND :  {prt_keyword_space("triand");break;}
		case T_netreg_type__KEY_TRIOR :  {prt_keyword_space("trior");break;}
		case T_netreg_type__KEY_TRI0 :  {prt_keyword_space("tri0");break;}
		case T_netreg_type__KEY_TRI1 :  {prt_keyword_space("tri1");break;}
		case T_netreg_type__KEY_UWIRE :  {prt_keyword_space("uwire");break;}
		case T_netreg_type__KEY_WIRE :  {prt_keyword_space("wire");break;}
		case T_netreg_type__KEY_WAND :  {prt_keyword_space("wand");break;}
		case T_netreg_type__KEY_WOR :  {prt_keyword_space("wor");break;}
		case T_netreg_type__KEY_REG :  {prt_keyword_space("reg");break;}
		case T_netreg_type__KEY_INTEGER :  {prt_keyword_space("integer");break;}
		case T_netreg_type__KEY_TIME :  {prt_keyword_space("time");break;}
		}
		prt_keyword_space("");
	}
	void printcell(net_type p) const {
		prt_keyword_space("");
		switch(p) {
		case T_net_type_NOSPEC :  {  break;}
		case T_net_type__KEY_SUPPLY0 :  { prt_keyword_space("supply0"); break;}
		case T_net_type__KEY_SUPPLY1 :  { prt_keyword_space("supply1"); break;}
		case T_net_type__KEY_TRI :  { prt_keyword_space("tri"); break;}
		case T_net_type__KEY_TRIAND :  { prt_keyword_space("triand"); break;}
		case T_net_type__KEY_TRIOR :  {prt_keyword_space("trior");  break;}
		case T_net_type__KEY_TRI0 :  { prt_keyword_space("tri0"); break;}
		case T_net_type__KEY_TRI1 :  { prt_keyword_space("tri1"); break;}
		case T_net_type__KEY_UWIRE :  { prt_keyword_space("uwire"); break;}
		case T_net_type__KEY_WIRE :  { prt_keyword_space("wire"); break;}
		case T_net_type__KEY_WAND :  {prt_keyword_space("wand");  break;}
		case T_net_type__KEY_WOR :  { prt_keyword_space("wor"); break;}
		}
		prt_keyword_space("");
	}
	void printcell(output_variable_type p) const {
		prt_keyword_space("");
		switch(p) {
		case T_output_variable_type_INTEGER :  { prt_keyword_space("integer"); break;}
		case T_output_variable_type_TIME :  {prt_keyword_space("time");break;}
		}
		prt_keyword_space("");
	}
	void printcell(strength p) const {
		prt_keyword_space("");
		switch(p) {
		case KEY_HIGHZ0 :   { prt_keyword_space("highz0"); break;}
		case KEY_HIGHZ1 :   { prt_keyword_space("highz1"); break;}
		case KEY_SUPPLY0 :  { prt_keyword_space("supply0"); break;}
		case KEY_STRONG0 :  { prt_keyword_space("strong0"); break;}
		case KEY_PULL0 :    { prt_keyword_space("pull0"); break;}
		case KEY_WEAK0 :    { prt_keyword_space("weak0"); break;}
		case KEY_SUPPLY1 :  { prt_keyword_space("supply1"); break;}
		case KEY_STRONG1 :  { prt_keyword_space("strong1"); break;}
		case KEY_PULL1 :    { prt_keyword_space("pull1"); break;}
		case KEY_WEAK1 :    { prt_keyword_space("weak1"); break;}
		}
		prt_keyword_space("");
	}

	void printcell(vectored_scalared p) const {
		prt_keyword_space("");
		switch(p) {
		case T_vectored_scalared_NOSPEC :  {  break;}
		case T_vectored_scalared_vectored :  { prt_keyword_space("vectored");  break;}
		case T_vectored_scalared_scalared :  { prt_keyword_space("scalared");  break;}
		}
		prt_keyword_space("");
	}
	void printcell(automatic p) const {
		prt_keyword_space("");
		switch(p) {
		case T_automatic_false :  {  break;}
		case T_automatic_true :  { prt_keyword_space("automatic"); break;}
		}
		prt_keyword_space("");
	}
	void printcell(task_port_type p) const {
		prt_keyword_space("");
		switch(p) {
		case T_task_port_type_integer :   { prt_keyword_space("integer"); break;}
		case T_task_port_type_real :      { prt_keyword_space("real"); break;}
		case T_task_port_type_realtime :  { prt_keyword_space("realtime"); break;}
		case T_task_port_type_time :      { prt_keyword_space("time"); break;}
		}
		prt_keyword_space("");
	}
	void printcell(reg p) const {
		prt_keyword_space("");
		switch(p) {
		case T_reg_false :  {  break;}
		case T_reg_true :  { prt_keyword_space("reg"); break;}
		}
		prt_keyword_space("");
	}
	void printcell(cmos_switchtype p) const {
		prt_keyword_space("");
		switch(p) {
		case T_cmos_switchtype_CMOS :  { prt_keyword_space("cmos"); break;}
		case T_cmos_switchtype_RCMOS :  { prt_keyword_space("rcmos"); break;}
		}
		prt_keyword_space("");
	}
	void printcell(enable_gatetype p) const {
		prt_keyword_space("");
		switch(p) {
		case T_enable_gatetype__BUFIF0 :  {prt_keyword_space("bufif0");break;}
		case T_enable_gatetype__BUFIF1 :  {prt_keyword_space("bufif1");break;}
		case T_enable_gatetype__NOTIF0 :  {prt_keyword_space("notif0");break;}
		case T_enable_gatetype__NOTIF1 :  {prt_keyword_space("notif1");break;}
		}
		prt_keyword_space("");
	}
	void printcell(mos_switchtype p) const {
		prt_keyword_space("");
		switch(p) {
		case T_mos_switchtype_NMOS  :   {prt_keyword_space("nmos");break;}
		case T_mos_switchtype_PMOS  :   {prt_keyword_space("pmos");break;}
		case T_mos_switchtype_RNMOS :   {prt_keyword_space("rnmos");break;}
		case T_mos_switchtype_RPMOS :   {prt_keyword_space("rpmos");break;}
		}
		prt_keyword_space("");
	}
	void printcell(n_input_gatetype p) const {
		prt_keyword_space("");
		switch(p) {
		case T_n_input_gatetype_AND  :  {prt_keyword_space("and");break;}
		case T_n_input_gatetype_NAND :  {prt_keyword_space("nand");break;}
		case T_n_input_gatetype_OR   :  {prt_keyword_space("or");break;}
		case T_n_input_gatetype_NOR  :  {prt_keyword_space("nor");break;}
		case T_n_input_gatetype_XOR  :  {prt_keyword_space("xor");break;}
		case T_n_input_gatetype_XNOR :  {prt_keyword_space("xnor");break;}
		}
		prt_keyword_space("");
	}
	void printcell(n_output_gatetype p) const {
		prt_keyword_space("");
		switch(p) {
		case T_n_output_gatetype_BUF :  {prt_keyword_space("buf");break;}
		case T_n_output_gatetype_NOT :  {prt_keyword_space("not");break;}
		}
		prt_keyword_space("");
	}
	void printcell(pass_en_switchtype p) const {
		prt_keyword_space("");
		switch(p) {
		case T_pass_en_switchtype_TRANIF0  :  {prt_keyword_space("tranif0");break;}
		case T_pass_en_switchtype_TRANIF1  :  {prt_keyword_space("tranif1");break;}
		case T_pass_en_switchtype_RTRANIF1 :  {prt_keyword_space("rtranif1");break;}
		case T_pass_en_switchtype_RTRANIF0 :  {prt_keyword_space("rtranif0");break;}
		}
		prt_keyword_space("");
	}
	void printcell(pass_switchtype p) const {
		prt_keyword_space("");
		switch(p) {
		case T_pass_switchtype_TRAN  :  {prt_keyword_space("tran");break;}
		case T_pass_switchtype_RTRAN :  {prt_keyword_space("rtran");break;}
		}
		prt_keyword_space("");
	}
	void printcell(zero_or_one p) const {
		prt_keyword_space("");
		switch(p) {
		case T_zero_or_one_0 :  { prt_keyword_space("0"); break;}
		case T_zero_or_one_1 :  { prt_keyword_space("1"); break;}
		}
		prt_keyword_space("");
	}
	void printcell(z_or_x p) const {
		prt_keyword_space("");
		switch(p) {
		case T_z_or_x__x :  { prt_keyword_space("x"); break;}
		case T_z_or_x__X :  { prt_keyword_space("X"); break;}
		case T_z_or_x__z :  { prt_keyword_space("z"); break;}
		case T_z_or_x__Z :  { prt_keyword_space("Z"); break;}
		}
		prt_keyword_space("");
	}
	void printcell(edge_identifier p) const {
		prt_keyword_space("");
		switch(p) {
		case T_edge_identifier_NOSPEC :  { break;}
		case T_edge_identifier_POS :  { prt_keyword_space("posedge"); break;}
		case T_edge_identifier_NEG :  { prt_keyword_space("negedge"); break;}
		}
		prt_keyword_space("");
	}
	void printcell(polarity_operator p) const {
		prt_keyword_space("");
		switch(p) {
		case T_polarity_operator_NOSPEC :  { break;}
		case T_polarity_operator_ADD :  { prt_keyword_space("+"); break;}
		case T_polarity_operator_SUB :  { prt_keyword_space("-"); break;}
		}
		prt_keyword_space("");
	}
	void printcell(charge_strength p) const {
		prt_keyword_space("");
		switch(p) {
		case T_charge_strength_NOSPEC : {break;}
		case T_charge_strength__small : {prt_keyword_space("small");break;}
		case T_charge_strength__medium: {prt_keyword_space("medium");break;}
		case T_charge_strength__large : {prt_keyword_space("large");break;}
		}
		prt_keyword_space("");
	}
	template<typename T>
	void printcell(std::shared_ptr<T> p) const {
		prt_keyword_space("");
		boost::apply_visitor(printVisitor(),*p);
		prt_keyword_space("");
	}
	template<typename T>
	void printlist(std::shared_ptr<std::list<T>> p , void(*head_func)() , void(*sept_func)() , void(*tail_func)()) const {
		prt_keyword_space("");
		if(false==(p->empty())) {
			head_func();
			for(auto x = p->begin() ; x!=p->end() ; x++) {
				if(x!=p->begin()) {sept_func();}
				printcell(*x);
			}
			tail_func();
		}
		prt_keyword_space("");
	}
};


void printVerilog( std::shared_ptr<std::list<std::shared_ptr<Verilogast::description>>> ptr_source_text) {
	for(auto x = ptr_source_text->begin() ; x!=ptr_source_text->end() ; x++) {        
		prt_return();
		boost::apply_visitor(printVisitor(),**x);                   
	}                                                             
}

#endif
