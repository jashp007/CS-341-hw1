//
// Homework 1
// CS 341 Fall 2023
// Jash Patel
//
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
ifstream inputFile;
string filename;
getline(cin,filename); // getting the line by taking filename input
string line;
inputFile.open(filename); // opening the file
// if will be executed if and only if the file opens otherwise it will go to else condition where it will print the error message
if(inputFile.is_open()){
	while (getline(inputFile,line))
	{
		cout << line << endl;
	}
	
}
else{
	cout << "Error: cannot open file" << endl;
}


	return 0;
}
