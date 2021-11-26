#include <iostream>
using namespace std ;


class Base {
public:
	int var ;
};

class Child : Base{
	int var2 ;
};

struct SBase {
public:
	int var ;
};

struct SChild : Base{
	int var2 ;
};

int main( ){
	
	// Child obj ;
	// obj.var2 = 5 ;

	struct SChild obj2 ;
	obj2.var2 = 5 ;

	cout << obj2.var2 << endl ;

	return 0;
}


	/**********************	Diff. b/w Classes and Structure	******************

=>	By default Structure data members are public, whereas 
	Class data members are private by default

=>	Inheritence by default in Classes is private, whereas 
	Inheritence by default in Structure is public

=>	Structure uses less memory as compared to Classes because 

=>	You cannot change the default constructor of structure, whereas
	You can change class default constructor.

=>	In structure, all the value types are allocated on stack, whereas
	In class, all value types are allocated on heap.


	*/	
















