#include <iostream> 
#include <stdlib.h>
#include <iomanip>

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
		cout << fixed;
		cout << "Class A average is: " << setprecision(2) << avgA << endl;
		cout << "Class B average is: " << setprecision(2) << avgB << endl;
		cout << "Class A wins!" << endl;
		}
	else {
		cout << fixed;
		cout << "Class A average is: " << setprecision(2) << avgA << endl;
		cout << "Class B average is: " << setprecision(2) << avgB << endl;
		cout << "Class B wins!" << endl;
	}

	return 0;
}
