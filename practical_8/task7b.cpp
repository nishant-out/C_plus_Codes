#include<iostream>
using namespace std ;

void swap(int &a,int &b)
{
    int t=a;
    a=b;
    b=t;
}

int main(){

  int a=10,b=20;
  
  cout<<"Values before swap: "<<a<<"\t"<<b<<endl;
  
  swap( a,b );
  
  cout<<"Values after swap: "<<a<<"\t"<<b<<endl;
  
  return 0;
}

