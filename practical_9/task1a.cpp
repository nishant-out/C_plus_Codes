#include <iostream>
using namespace std ;

class Student {
	int roll ;
	unsigned long long num ;
	string addr ;

public:

	Student( int roll, string addr, unsigned long long num ){

		this->roll = roll ;
		this->num  = num  ;
		this->addr = addr ;
	}
	void show( void ){
		cout << "Roll no.: " << roll << endl ;
		cout << "Mobile no.: " << num << endl ;
		cout << "Address.: " << addr << endl ;
	}
};

int main( ){
	
	Student Sam ( 45,  "Clement Town", (unsigned long long) 7868754329 ) ;
	Student John ( 23, "Shubhash Nagar", (unsigned long long) 9842332145 ) ;

	Sam.show() ;
	cout << endl ;
	John.show() ;

	return 0;
}