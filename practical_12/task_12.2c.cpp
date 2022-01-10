#include <iostream>
using namespace std;

class A{
    
    public:
    int x;
    
        A( int y ){
            x = y;
        }
};
class B : public A{
    public:
    int y;
        B( int a, int b): A( a ){
            
            y = b;
        }
    };

int main(){
    
    B obj( 5, 7 );
    cout << "x: " << obj.x << " y: " << obj.y << endl;
}
