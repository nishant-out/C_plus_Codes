#include <iostream>
using namespace std;

class Base{
    public:
    
    virtual int add( int x, int y ){     // virtual keyword: complier will ignore fn during compile time
        return x + y;
    }

    virtual void pure() = 0;
};
class Child: public Base{
    public:
    
    int add( int x, int y ){
        return x + y +1;
    }
    
    void pure(  ){
        cout << "Def. of pure virtual fn" << endl;
    }
};

int main(){
    
    Base *p ;
    Child obj;
    
    p = &obj;

    cout << "sum: " << p-> add( 5, 5 ) << endl; 
    //  Due to virtual keyword o/p is 11 
    //  else 10
}







