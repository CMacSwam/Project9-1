#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

	int array[10];
	srand(static_cast<unsigned int>(time(0)));

	cout << "Element in Array: ";

	for (int i = 0; i < 10; i++) {

		array[i] = rand() % 10000 + 1000;

		cout << array[i] << " ";

		
	}

	cout << "Even indices: ";

	for (int even = 0; even < 10; even++) {

		

		if (even % 2 == 0) {

			cout << array[even] << " ";

		}
	}

	cout << "Even values: ";

	for (int j = 0; j < 10; j++) {

		

		if (array[j] % 2 == 0) {

			cout << array[j] << " ";
		}
	}

	cout << "Reversed order: ";

	for (int reverse = 9; reverse >= 0; reverse--) {
		
		cout << array[reverse] << " ";
		
	}

	cout << "First and last: " << array[0] << " " << array[9];
}

