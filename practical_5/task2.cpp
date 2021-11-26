#include <iostream>
using namespace std ;

void char_func( void ){

    char ch = 'A' ;
    cout << "Char: "  << ch << endl ;
    cout 
         << "size of var : " << sizeof(ch) << "// size of datatype : " 
         << sizeof(char) << "// size of value : " << sizeof('A') << "\n"
         << endl;
}

void bool_func( void ){

    bool val = ( 10 > 9 ) ;
    cout << "Bool: "  << val << endl ;
    cout << "size of var : " << sizeof( val ) << "// size of datatype : " 
         << sizeof(bool) << "// size of value : " << sizeof('1') << "\n"
         << endl;
}

void short_func( void ){

    short sh = 10 ;
    cout << "Short: "  << sh << endl ;
    cout 
         << "size of var : " << sizeof(sh) << "// size of datatype : " 
         << sizeof(short) << "// size of value : " << sizeof( 10 ) << "\n"
         << endl ;
}

void int_func( void ){

    int in = 643528 ;
    cout << "Integer: "  << in ;
    cout << "   // size of value : " << sizeof( in ) << endl;
}

void long_func( void ){

    long lng = 34759283 ;
    cout << "Long: "  << lng ;
    cout << "   // size of value : " << sizeof( lng ) << endl;
}

void float_func( void ){

    float fl = 34.7592835f ;
    cout << "Float: "  << fl ;
    cout << "   // size of value : " << sizeof( fl ) << endl;
}

void double_func( void ){

    double db = 34.7592835789 ;
    cout << "Double: "  << db ;
    cout << "   // size of value : " << sizeof( db ) << endl;
}

void longdouble_func( void ){

    long double  ldb = 34.75928357657475689L ;
    cout << "Long Double: "  << ldb ;
    cout << "   // size of value : " << sizeof( ldb ) << endl;
}

void widechar_func( void ){

    wchar_t  w = L'ग' ;
    cout << "Wide Char: "  << w ;
    cout << "   // size of value : " << sizeof( w ) << endl;
    //      Use wcout to print the original char
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