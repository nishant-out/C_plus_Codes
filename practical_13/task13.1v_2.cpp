#include <iostream>
using namespace std;

class Base{
    public:
    
    int add( int x, int y ){
        return x + y;
    }
    
    float add( float x, float y ){
        return x + y;
    }
};
class Child: public Base{
    public:
    using Base:: add;
    int add( int x, int y ){
        return x + y +1;
    }
};

int main(){
    
    Child obj;
    cout << "sum: " << obj.add( 5, 5 ) << endl;
    cout << "sum: " << obj.add( 5.8f, 5.5f ) << endl;
}





