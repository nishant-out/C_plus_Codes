#include <iostream>
using namespace std;

int fact( int n ) {

    int ans = 1 ;
    
    for( int i = 2; i <= n; i++ ){
    
    	ans *= i ;
    }
    
    return ans ;
}	
	

int main(){ 

    int ans ;
    
    ans = fact( 5 ) ;
    
    cout << "Fact: " << ans << endl ;

    return 0 ;
}

