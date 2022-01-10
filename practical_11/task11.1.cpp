#include <iostream>
using namespace std;

class A{
    public:
        
        void func(  ){
            cout << "In Class A" << endl;
        }
};

class B: public A {
    public:
        
        void func2(  ){
            func();
            cout << "In Class B" << endl;
        }
};

int main(){
    
    B obj;
    obj.func2();

    return 0;
}
