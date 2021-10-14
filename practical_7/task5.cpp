#include <iostream>
using namespace std ;

void swap( int *p, int *q ){
	int t = *p ;
	*p = *q ;
	*q = t ;
}

int main(){

	int n = 3 ;
	int arr[ n ][ n ] = { 	{ 1, 2, 3 },
				{ 4, 5, 6 },
				{ 7, 8, 9 }
			} ;

	cout << "Before: " << endl ;
	for( int i = 0; i < n; i++ ){
		for( int j = 0; j < n; j++ ){		
			cout << arr[ i ][ j ] << " " ;
		}
		cout << endl ;
	}

	//	SWAP Cols
	for( int i = 0; i < n; i++ ){
		for( int j = 0; j <= n /2; j++ ){
			swap( &arr[ i ][ j ], &arr[ i ][ n -1 -j ] ) ;
		}
	}

	//	3 2 1		=>	9 8 7
	//	6 5 4		=>	6 5 4
	//	9 8 7		=>	3 2 1

	//	SWAP Rows
	for( int i = 0; i < n /2; i++ ){
		for( int j = 0; j < n; j++ ){
			swap( &arr[ i ][ j ], &arr[ n -1 -i ][ j ] ) ;
		}
	}

	cout << "After: " << endl ;
	for( int i = 0; i < n; i++ ){
		for( int j = 0; j < n; j++ ){		
			cout << arr[ i ][ j ] << " " ;
		}
		cout << endl ;
	}
	cout << endl ;

	return 0 ;
}
