#include <iostream>
using namespace std;

class Base{
    public:
    
    virtual int add( int x, int y ){     // virtual keyword: complier will ignore fn during compile time
        return x + y;
    }
    
    int prod( int x, int y ){
        return x * y;
    }
};
class Child: public Base{
    public:
    
    int add( int x, int y ){
        return x + y +1;
    }
    
    int prod( int x, int y ){
        return x * y +1;
    }
};

int main(){
    
    Base *p ;
    Child obj;
    
    p = &obj;

    cout << "sum: " << p-> add( 5, 5 ) << endl; 
    cout << "product: " << p-> prod( 5, 5 ) << endl; 


}







