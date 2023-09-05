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
getline(cin,filename);
string line;
inputFile.open(filename);
if(inputFile.is_open()){
	while (getline(inputFile,line))
	{
		cout << line << endl;
	}
	
}


	return 0;
}
