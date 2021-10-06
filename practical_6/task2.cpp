#include <iostream>
using namespace std ;

bool xrev( string s ){

    int len = s.length();
    for( int i = 0; i < len/2; i++ ){
        
        if( s[ i ] != s[ len -1 - i ] )
            return false ;
    }

    return true ;
}

int main(){

    string str  ;
    getline( cin, str ) ;
    
    bool ans = xrev( str ) ;

    cout << ans << endl ;

    return 0 ;
}
