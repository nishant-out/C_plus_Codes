#include <iostream>
using namespace std;

class Student{
    public:
    
        int roll_no ;
        
        void set_R( int x ){
            roll_no = x ;
        }
        
        int get_R(  ){
            return roll_no;
        }
};

class Theory: virtual public Student {
    public:
    
        int t ;
        
        void set_T(  ){
            t = 80;
        }
};
class Sports: public virtual Student {         //  Can write public and virtual either way
    public:
        
        int s ;
        
        void set_S(  ){
            s = 70;
        }
};

class result: public Theory, public Sports {
    public:
        
        int total;
        
        void display(   ){
            
            total = t + s;
            
            cout << "roll_no: " << get_R() << endl ;
            cout << "Total: " << total << endl;
        }
};

int main(){
    
    result obj;
    
    obj.set_R( 35 );
    obj.set_S( );
    obj.set_T( );
    
    obj.display(    );
    
    return 0;
}









