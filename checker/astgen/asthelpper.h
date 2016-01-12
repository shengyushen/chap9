#define SHR_LIST_SHR(typename2share) \
	make_shared<list<std::shared_ptr<typename2share>>>

#define SHR2(variant1,type2,init) \
	make_shared<variant1>(make_shared<type2>init)

#define SHR3(variant1,m1,type2,init) \
	make_shared<variant1>(make_shared<m1>(make_shared<type2>init))

class ComponentBase {
	
};


