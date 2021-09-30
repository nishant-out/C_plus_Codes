#include <iostream>
using namespace std ;

void char_func( void ){

	char c = 'A' ;
	cout << "Char: "  << c << endl ;
}

void bool_func( void ){

	bool val = ( 10 > 9 ) ;
	cout << "Bool: "  << val << endl ;
}

void short_func( void ){

	short sh = 10 ;
	cout << "Short: "  << sh << endl ;
}

void int_func( void ){

	int in = 643528 ;
	cout << "Integer: "  << in << endl ;
}

void long_func( void ){

	long lng = 3475928357 ;
	cout << "Long: "  << lng << endl ;
}

void float_func( void ){

	float fl = 34.7592835f ;
	cout << "Float: "  << fl << endl ;
}

void double_func( void ){

	double db = 34.7592835789 ;
	cout << "Double: "  << db << endl ;
}

void longdouble_func( void ){

	long double  ldb = 34.75928357657475689L ;
	cout << "Long Double: "  << ldb << endl ;
}

void widechar_func( void ){

	wchar_t  w = L'ग' ;
	cout << "Wide Char: "  << w << endl ;
	//		Use wcout to print the original char
}

int main(){

	char_func( ) ;
	bool_func( ) ;
	short_func( ) ;
	int_func( ) ;
	long_func( ) ;
	float_func( ) ;
	double_func( ) ;
	longdouble_func( ) ;
	widechar_func( ) ;


	return 0;
}
