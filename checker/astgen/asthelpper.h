// this  is for POD type
#define SHR_LIST_POD(typename2share) \
	make_shared<list<typename2share>>

#define SHR_LIST_SHR(typename2share) \
	make_shared<list<std::shared_ptr<typename2share>>>

#define SHR2(variant1,type2,init) \
	make_shared<variant1>(make_shared<type2>init)

#define SHR4(variant1,m1,m2,type2,init) \
	make_shared<variant1>(make_shared<m1>(make_shared<m2>(make_shared<type2>init)))

class ComponentBase {
};


