#ifndef PRINTVISITOR_H
#define PRINTVISITOR_H

//macros for invoke visitor on T_* types and list of non-T_* types
#define APP_PRINTV(T_ptr,x)                     \
	boost::apply_visitor(printVisitor(),*(T_ptr->x));
#define APPLST_PRINTV(ptr)                   \
	for(auto & x : *ptr) {                     \
		boost::apply_visitor(printVisitor(),*x); \
	}
//operator functions macro
#define OPERATOR(T_typename,T_ptr)                   \
	void operator()(std::shared_ptr<T_typename> T_ptr) const 

class printVisitor : public boost::static_visitor<void> {
public :
	OPERATOR(T_description__udp_declaration   ,p) { assert(false);}
	OPERATOR(T_description__config_declaration,p) { assert(false);}
	OPERATOR(T_description__module_declaration,p) { APP_PRINTV(p,mem1) }

	OPERATOR(T_module_declaration__1,p) 
	{
		cout<<"module ";
		APP_PRINTV(p,mem2) //module name
		cout<<"("<<endl;
		APPLST_PRINTV(p->mem4);//ports
		cout<<")"<<endl;

		cout<<"endmodule"<<endl;
	}

	OPERATOR(T_identifier_NOSPEC,p) { cout<<""; }
	OPERATOR(T_identifier,       p) { cout<<(p->mem1); }

	OPERATOR(T_port_exp,         p) {
		
	}
	OPERATOR(T_port_net,         p) {
		
	}
};

void printVerilog( std::shared_ptr<std::list<std::shared_ptr<Verilogast::description>>> ptr_source_text) {
	cout<<"//about to print"<<endl;
	APPLST_PRINTV(ptr_source_text)
}

#endif
