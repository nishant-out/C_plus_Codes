#include <iostream>
using namespace std;

int main(){ 

    int f, ch ,l, m;
    time_t curr;
    
    curr=time(NULL); 
    string c=ctime(&curr);
    f=c.find_first_of(" ");
    
    cout<<"Enter\n1. To check current day\n2. To check current month\n3. To check current Year\n";
    cout<<"Enter your choice: ";
    cin>>ch;
    
    switch(ch){
     
      case 1: cout << "The current Day (using ctime) is: " << c.substr(0,f) << endl;
              break;

      case 2: m = (c.substr(f+1)).find_first_of(" ");
              cout<<"The Current Month(Using Ctime) is:"<< c.substr(f,m+1) <<endl;
              break;
 
     case 3: l = c.find_last_of(" ");
             cout<<"The current year(Using ctime) is: "<< c.substr(l+1) <<endl;
             break;
             
     default: cout<<"Invalid Choice\n";
     
    } 
    
    cout << endl ;
    return 0 ;
}

