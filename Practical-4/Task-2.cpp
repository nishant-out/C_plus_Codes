#include<iostream>
using namespace std ;

namespace first{

	int add( int x, int y ){
		cout << "In Int" << endl ;
		return x + y  ;
	}
}

namespace second{

	float add( float x, float y ){
		cout << "In Float" << endl ;
		return x + y  ;
	}
}

	using namespace first ;
	using namespace second ;

int main(){

	cout << add( 2, 4 ) << endl ;
	cout << add( 2.2, 4.2 ) << endl ;

	return 0;
}
