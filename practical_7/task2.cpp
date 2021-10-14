#include <iostream>
#include <ctime>

using namespace std ;

int main(){

	time_t today ;

	time( &today ) ;

	cout << "Time is: " << asctime( localtime( &today ) ) << endl ;

	return 0 ;
}
