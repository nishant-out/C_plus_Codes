#include <iostream>
using namespace std ;

class Student {
	string name ;
	short age ;
	short year ;
	char sec ;
	float marks ;

public:

	void assign( string name, short age, short year, char sec, float marks ){

		this-> name = name ;
		this-> age = age ;
		this-> year = year ;
		this-> sec = sec ;
		this-> marks = marks ;
	}

	void show( void ){
		cout << "Name.: " << name << endl ;
		cout << "Age.: " << age << endl ;
		cout << "Year.: " << year << endl ;
		cout << "Section.: " << sec << endl ;
		cout << "Marks.: " << marks << endl ;
		cout << endl ;
	}
	
	friend float showM( Student * ) ;
};


float showM( Student stud[] ){

	return stud[ 0 ].marks + stud[ 1 ].marks + stud[ 2 ].marks + stud[ 3 ].marks ;
}

int main( ){
	
	Student stud[ 4 ] ;

	stud[ 0 ].assign( "Sam", 23, 2002, 'A', 67.87 ) ;
	stud[ 1 ].assign( "Dam", 26, 2001, 'B', 45.43 ) ;
	stud[ 2 ].assign( "Lam", 21, 2005, 'C', 12.94 ) ;
	stud[ 3 ].assign( "Tan", 25, 2003, 'D', 54.23 ) ;

	stud[ 0 ].show() ;
	stud[ 1 ].show() ;
	stud[ 2 ].show() ;
	stud[ 3 ].show() ;

	cout << "Total Marks.: " << showM( stud ) << endl ;

	return 0;
}





