#include <iostream>
using namespace std;

class Base{
    public:
    
    ~Base(){
        cout << "In Base Destructor" << endl;
    }
};
class Child: public Base{
    public:
    
    ~Child(){
        cout << "In Child Destructor" << endl;
    }
};

int main(){
    
    Base *p = new Child() ;     //  Used DMA because static can't get deleted

    delete p;
    
    //  without virtual
    //  Memory leak for Child object
    //  Only Base Destructor is called
    
}







