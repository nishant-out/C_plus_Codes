#include <iostream>
using namespace std ;

class A {

	static int cnt ;
public:
	
	static void counter( void ){
		cnt ++ ;
	}

	static int show( void ){
		return cnt ;
	}
};

//  Initializing the static data member
int A :: cnt = 0 ;

int main( ){

	A obj1, obj2, obj3 ;

	obj1.counter( ) ;
	obj2.counter( ) ;
	obj3.counter( ) ;
	obj1.counter( ) ;

	cout << "\nFunction is Called " << obj1.show( ) << " times" << endl ;

	return 0;
}