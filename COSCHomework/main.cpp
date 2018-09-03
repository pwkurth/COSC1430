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
			classA[i] = rand() %101;
			classB[i] = rand() %101;

			cout << classA[i] << endl;
			cout << classB[i] << endl;
			sumA += size;
	}		
			for(int i=0; i<size; i++){
				sumA += classA[i];
				avgA += 1;
				avgA = sumA / size;
			}
		cout << avgA << endl;

	system("PAUSE");

	return 0;
}
