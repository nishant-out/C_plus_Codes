#include<iostream>
#include<fstream>
#include<string>
using namespace std ;

int main()
{
	fstream myfile;
	myfile.open("text.txt");
	
    if(!myfile)
        cout<<"file not created";
    else
        myfile<<"  This is appended ";
	
	myfile.close();
	
	return 0;
}
