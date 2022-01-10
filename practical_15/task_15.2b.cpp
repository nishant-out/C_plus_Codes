#include<iostream>
#include<fstream>
#include<string>
using namespace std ;

int main()
{
	fstream myfile;
	myfile.open("text.txt");
	
	myfile<< "writing in a file using fstream";
	myfile.close();
	
	return 0;
}

