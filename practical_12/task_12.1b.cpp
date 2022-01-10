#include <iostream>
using namespace std;

class M{
    
    int x ;
    
    public:
        int y ;
    
    void set(   ){
        x = 5;
        y = 6;
        z = 7;
    }
    
    protected:
        int z ;
        
};

class N: public M {
/*
    int a ;
    
    public:
        int b ;
        
    protected:
        int c ;
*/
    public:

        void show(  ){
            
            cout << "x: " << "not inherited" << " y: " << y << " z: " << z << endl;
        }

};

int main(){
    
    N obj;
    obj.set(    );
    
    // cout << obj.x << endl;  //  Can't access private mem.
    cout << obj.y << endl;
    // cout << obj.z << endl;  //  Can't access protected mem.
    
    return 0;
}









