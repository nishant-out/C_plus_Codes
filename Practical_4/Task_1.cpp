#include<iostream>

namespace first{

	int add( int x, int y ){
	
		return x + y  ;
	}
}

namespace second{

	float add( float x, float y ){
	
		return x + y  ;
	}
}

int main(){

	std :: cout << first :: add( 2,7 ) << std :: endl ;
	std :: cout << second :: add( 2.2,7.9 ) << std :: endl ;

	return 0;
}
