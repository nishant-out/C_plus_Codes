#include <iostream>
using namespace std;

class Mammals{
    public:
        
        void id(  ){
            cout << "I'am Mammal" << endl;
        }
};
class MarineAnimals{
    public:
        
        void id(  ){
            cout << "I'am MarineAnimal" << endl;
        }
};

class BlueWhale: public Mammals, public MarineAnimals {
    public:
        
        void id(  ){
            cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;
        }
};

int main(){
    
    Mammals M ;
    MarineAnimals MA ;
    BlueWhale BW ;

    M.id();
    MA.id();
    BW.id();

    BW.Mammals ::id();
    BW.MarineAnimals ::id();

    return 0;
}
