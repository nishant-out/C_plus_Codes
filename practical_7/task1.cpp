#include <iostream>
using namespace std;

int main(){ 
    int ch ;

    cout<<"Enter\n1. To check current day\n2. To check current month\n3. To check current month\n";
    
    cout<<"Enter your choice: ";
    cin>>ch;
    
    switch(ch)
    { 
      case 1: cout<<"The current Day (Manually) is: "<<"MON"<<endl;
              break;

      case 2: cout<<"The Current Month(Manually) is: "<<"OCT"<<endl;
              break;
 
     case 3: cout<<"The Current Year(Manually) is: "<<2021<<endl;
             break;
             
     default: cout<<"Invalid Choice\n";
    } 
    return 0;
}

