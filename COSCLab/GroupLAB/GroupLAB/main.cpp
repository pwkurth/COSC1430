#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
	int size = 2; 
	int *dArray = new int[size]; ///Dybanic Array///
	
	
	char option;
	int element;


	///Menu///
	cout << "(p): Print elements" << endl;
	cout << "(a): Add element" << endl;
	cout << "(d): Delete element" << endl;
	cout << "(r): Return size" << endl;
	cout << "(e): Exit" << endl;

	cout << "Enter option:";
	cin >> option;

	while(option != 'e') {
		
		cout << "(p): Print elements" << endl;
		cout << "(a): Add element" << endl;
		cout << "(d): Delete element" << endl;
		cout << "(r): Return size" << endl;
		cout << "(e): Exit" << endl;
		
		cout << "Enter option:";
		cin >> option;
		if (option == 'p') {

			cout << "Enter element:";

		}
		else if (option == 'a');

		else if (option == 'd');

		else if (option == 'r');

		else
			cout << "Error";
	}


	
	///Else statement///
	system("PAUSE");

	return 0;
}