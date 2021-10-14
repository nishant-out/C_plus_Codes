#include<iostream>

using namespace std ;

int main(){

    int n ;
    cin >> n ;
    
    for( int i = n-1; i >= 0; i-- ){
        int j ;
        
        for( j = 1; j <= i; j++ ){
        
            cout << "  " ;
        }
        for( ; j <= n; j++ ){
            cout << "* " ;
        }
        
        cout << endl ;
    }

    return 0 ;
}                 
