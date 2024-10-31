#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {

	int array[10];
	srand(static_cast<unsigned int>(time(0)));

	cout << "The random integers: ";

	for (int i = 0; i < 10; i++) {

		array[i] = rand() % 10000 + 1000;

		cout << array[i] << " ";

		
	}

	cout << endl;

	cout << "Even indices: " << setw(11);

	for (int even = 0; even < 10; even++) {

		

		if (even % 2 == 0) {

			cout << array[even] << " ";

		}
	}

	cout << endl;

	cout << "Even values: " << setw(12);

	for (int j = 0; j < 10; j++) {

		if (array[j] % 2 == 0) {

			cout << array[j] << " ";
			
		}
	}

	cout << endl;

	cout << "Reversed order: " << setw(9);;

	for (int reverse = 9; reverse >= 0; reverse--) {
		
		cout << array[reverse] << " ";
		
	}

	cout << endl;

	cout << "First and last: " << setw(9) << array[0] << " " << array[9];
}

