#include <iostream>
using namespace std ;

class Area{

	float area ;

public:
	Area( float l, float b ){
		area = l * b ;
	}

	Area( float side ){
		area = side * side ;
	}

	float show( void ){
		return area ;
	}
};

int main( ){

	Area rect( 4.2, 5.4 ) ;
	Area sqr( 5.1 ) ;
	
	cout << "\nArea of rect is.: " << rect.show( ) << endl ;
	cout << "Area of sqr is.: " << sqr.show( ) << endl ;

	return 0;
}