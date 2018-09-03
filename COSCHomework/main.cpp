#include <iostream> 
#include <stdlib.h>


using namespace std;



int main()
{

	const int size = 10;
	double classA[size];
	double classB[size];
	double sumA = 0;
	double sumB = 0;
	double avgA = 0;
	double avgB = 0;
	int seed_value;

	cin >> seed_value;
	srand(seed_value);
	for (int i = 0; i < size; i++) {
		classA[i] = rand() % 101;
		classB[i] = rand() % 101;


		sumA = sumA + classA[i];
		sumB = sumB + classB[i];

		avgA = sumA / size;
		avgB = sumB / size;


	}
	if (avgA > avgB) {
		cout << "Class A average is:" << avgA << endl;
		cout << "Class B average is:" << avgB << endl;
		cout << "Class A wins!" << endl;
		}
	else {
		cout << "Class A average is:" << avgA << endl;
		cout << "Class B average is:" << avgB << endl;
		cout << "Class B wins!" << endl;
	}
	cout << avgB << endl;


	return 0;
}
