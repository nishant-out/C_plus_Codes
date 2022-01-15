#include <iostream>
using namespace std;

class A{
    public:
        A(){
            
            cout << "Execution of Class A Constructor" << endl;
        }
};
class B : public A{
    public:
        B(){
            
            cout << "Execution of Class B Constructor" << endl;
        }
    };

int main(){
    
    B obj;
}
