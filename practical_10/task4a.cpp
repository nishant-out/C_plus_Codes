#include <iostream>
using namespace std ;

class A{

	int data ;

public:
	A( int data ){
		this-> data = data ;
	}
	
	friend bool operator <( A, A ) ;
};

bool operator <( A obj1, A obj2 ){

	return (bool) obj1.data < obj2.data ;
}


int main( ){
	
	A obj1( 5 ), obj2( 10 ) ;

	cout << ( obj1 < obj2 ) << endl ;

	return 0;
}