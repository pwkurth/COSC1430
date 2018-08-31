#include <iostream> 
#include <stdlib.h>

using namespace std;



int main()
{

	const int size = 10;
	double classA[size];
	double classB[size];
	int seed_value;
	
	cin >> seed_value;
	srand(seed_value); 
		for (int i = 0; i < size; i++) {
			classA[i] = rand() %100;
			srand();
			cout << classA[i] << endl;
	}
	
	system("PAUSE");

	return 0;
}
