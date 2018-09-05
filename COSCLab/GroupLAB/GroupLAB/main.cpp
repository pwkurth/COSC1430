#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
	const int size = 2;
	int dArray[size];
	int option;
	int element;


	///Menu///
	cout << "(p): Print elements" << endl;
	cout << "(a): Add element" << endl;
	cout << "(d): Delete element" << endl;
	cout << "(e): Exit" << endl;

	cout << "Enter option:";
	cin >> option;

	if (option != 'a') {
		cout << "Enter a";
	}
	
	 ///Make sure to remove///

	return 0;
}