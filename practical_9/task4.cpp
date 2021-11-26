#include <iostream>
using namespace std ;

class Student {
	string name ;
	short age ;
	float marks ;

public:

	friend void Make( Student *, string, short, float ) ;
	friend void show( Student ) ;
	friend float showM( Student *, int ) ;
};

void Make( Student *obj, string name, short age, float marks ){
	obj-> name = name ;
	obj-> age = age ;
	obj-> marks = marks ;
}

void show( Student obj ){

	cout << "Name.: " << obj.name << endl ;
	cout << "Age.: " << obj.age << endl ;
	cout << "Marks.: " << obj.marks << endl ;
	cout << endl ;
}

float showM( Student stud[], int n ){
	float ans = 0.0f ;

	for( int i = 0; i < n; i++ ){

		ans += stud[ i ].marks ;
	}
	return ans ;
}

int main( ){
	
	Student stud[ 3 ] ;

	Make( &stud[ 0 ], "Sam", 23, 67.87 ) ;
	Make( &stud[ 1 ], "Dam", 26, 45.43 ) ;
	Make( &stud[ 2 ], "Lam", 21, 12.94 ) ;

	show( stud[ 0 ] ) ;
	show( stud[ 1 ] ) ;
	show( stud[ 2 ] ) ;

	cout << "Total Marks.: " << showM( stud, 3 ) << endl ;

	return 0;
}





