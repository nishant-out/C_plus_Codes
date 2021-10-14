#include<iostream>

using namespace std ;

int main(){

    int n ;
    cin >> n ;
    
    for( int i = n; i > 0; i-- ){
        int j ;
        
        for( j = n; j > i; j-- ){
        
            cout << "  " ;
        }
        for( ; j > 0; j-- ){
            cout << "* " ;
        }
        
        cout << endl ;
    }

    return 0 ;
}                 
