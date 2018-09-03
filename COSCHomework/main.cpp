///PATRICK WILLIAM KURTH///
///COSC1430///
///C++ HOMEWORK///

#include <iostream> 
#include <stdlib.h>
#include <iomanip>

using namespace std;



int main() ///function to calculate averages///
{

	const int size = 10; ///we set this variable as const because of certain errors without///
	double classA[size]; ///notice array has size instead of hard coded number///
	double classB[size];
	double sumA = 0; ///double function is important for reading into 2 decimals///
	double sumB = 0;
	double avgA = 0;
	double avgB = 0;
	int seed_value; ///we need seed_value variable for srand///

	cin >> seed_value; ///user inputs number for seed_value///
	srand(seed_value);
	for (int i = 0; i < size; i++) { ///typical array counter///
		classA[i] = rand() % 101; ///array will have random numbers from 0-100///
		classB[i] = rand() % 101; ///we use 101 and not 100 because of computer logic///


		sumA = sumA + classA[i]; ///just adding the sum of the array together///
		sumB = sumB + classB[i];

		avgA = sumA / size; ///taking the average of the array from sum///
		avgB = sumB / size;


	}
	if (avgA > avgB) { ///if statement for which class wins///
		cout << fixed;
		cout << "Class A average is: " << setprecision(2) << avgA << endl;
		cout << "Class B average is: " << setprecision(2) << avgB << endl;
		cout << "Class A wins!" << endl;
		}
	else { ///simple else for if class B wins///
		cout << fixed;
		cout << "Class A average is: " << setprecision(2) << avgA << endl;
		cout << "Class B average is: " << setprecision(2) << avgB << endl;
		cout << "Class B wins!";
	}

	return 0;
}
