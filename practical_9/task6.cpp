#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
   cout<<"enter our choice"<<endl;
   cout<<"1.come to next line \n2.setting  field with \n3.fill string with * after setw(15) function" <<endl;
   int n;

   long str=123456789;
   cout<<"before before any operation "<<str;

   while(1){

      cout<<endl;
      cin>>n;

      switch(n)
      {
         case 1 : 
         cout<<"before going to next line "<<str;
         cout<<endl;
         cout<<str;
         break;

         case 2: 
         cout<<"after setting field width"<<str<<endl;
         cout<<setw(15);
         cout<<str;
         break;

         case 3:
         cout<<"before setfill "<<str<<endl;
         cout<<setfill('*')<<setw(15);
         cout<<str;
         break;

         default : return 0;
      }
   }
   return 0 ;
}