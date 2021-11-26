#include<iostream>
using namespace std;

class A{

  int num;
  public:
    A(int x){

      this-> num = x;
    }

    void operator +( A obj ){

      cout << "Sum.: " << num +obj.num << endl ; 
    }

};
int main(){

    A obj1(10);
    A obj2(20);

    obj1 +obj2;

  return 0;
}