#include "GenStack.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//Corey Spielman
int main(int argc, char** argv){
	GenStack *myStack = new GenStack(100);
	string sourceLocation;
	cout << "_________________________________________" << endl;
	cout << "Enter the name of your file: " << endl;
//Begin directory input 
	getline( cin, sourceLocation );
	fstream file( sourceLocation.c_str() );
	cout << "--------------------------" << endl;
	if (!file){
//Error checking the file
		cout << "ERROR: Couldn't find that file...";
		cout << "--------------------------" << endl;
		return EXIT_FAILURE;
    }
	else{
		cout << "OKAY: Reading your file now...\n";
		cout << "--------------------------" << endl;
//File read was successful 
		string line;
		int count = 300;
		
		while ((count > 0) && getline( file, line )){
			if (line.size() == 0){
				cout << "This line is empty" << endl;
			}
			else{
				for (int i = 0; i <= 300; i++){
					myStack-> push(i);
					count--;
				}
			}
		}
		file.close();
		cout << "is stack empty? " << myStack->isEmpty() << endl;
		//while(!myStack->isEmpty()){
			//cout << "Now popping: " << myStack->pop() << endl;
		//}
    }
	//delete myStack;
	return 0;
}