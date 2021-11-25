#include <iostream>
using namespace std;

int fact( int n ) {

    if( n <= 1 ){
    	return 1 ;
    }
    
    return n * fact( n -1 ) ;
}	
	

int main(){ 

    int ans , n ;
    
    cout << "Enter a NUmber: " ;
    cin >> n ;
    
    ans = fact( n  ) ;
    
    cout << "\nFact of " << n << " is: " << ans << endl ;

    return 0 ;
}

