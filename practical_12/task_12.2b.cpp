#include <iostream>
using namespace std;

class A{
    public:
        ~A(){
            
            cout << "Execution of Class A Destructor" << endl;
        }
};
class B : public A{
    public:
        ~B(){
            
            cout << "Execution of Class B Destructor" << endl;
        }
    };

int main(){
    
    B obj;
}
