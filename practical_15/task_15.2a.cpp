#include<iostream>
#include<fstream>
#include<string>
using namespace std ;

int main(){
    
	fstream  readfile;
	char ch;
	readfile.open("text.txt");
	
	while(1){
	    
		readfile >> ch;
		
		if(readfile.eof())
			break;
			
		else
			cout << ch ;
	}
    cout << endl;

	readfile.close();
	return 0;
}
 

