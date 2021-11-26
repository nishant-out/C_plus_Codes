#include<iostream>
using namespace std;

class rem{

  int a,b;

  public:
  rem(int a,int b){

      this-> a = a ;
      this-> b = b ;

      cout << "\nans.: " << this-> a % this-> b << endl ; 
  }
};

int main(){

    rem obj( 14, 3 ) ;

    return 0;
}