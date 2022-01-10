#include <iostream>
using namespace std;

class X{
    public:
        void displayX(  ){
            cout << "In Class X" << endl;
        }
};

class M: virtual public X {
    public:
        void displayM(  ){
            cout << "In Class M" << endl;
        }
};
class N: public virtual X {         //  Can write public and virtual either way
    public:
        
        void displayN(  ){
            cout << "In Class N" << endl;
        }
};

class P: public M, public N {
    public:
        
        int x;
};

int main(){
    
    P obj;
    obj.displayX();

    return 0;
}
