#include <iostream>
using namespace std;


int main(){ 

    int a = 20 ;
    
    //  V1.
    
    int *p ;
    p = &a ;
    
    int **q = &p ;
    
    cout << *p << endl ;
    cout << **q << endl ;

    //  V2.

    **q = 10 ;
    
    cout << a << endl ;

    return 0 ;
}

