#include <iostream>
#include <cmath>

using namespace std ;

int chk( int n ){

	if( n == 2 )
		return 1 ;

	if( n == 1 || n % 2 == 0 )
		return 0 ; 
		
	//	Now check for Odd nums. only
	for( int i = 3; i <= sqrt( n ); i += 2 ){
		
		if( n % i == 0 )
			return 0 ;
	}
	
	return 1 ;
} 

int main(){

	int n ;
	cin >> n ;
	
	//	Check for Prime
	if( chk( n ) )
		cout << n << " is Prime" << endl ;

	else
		cout << n << " is not Prime" << endl ;


	return 0 ;
}
