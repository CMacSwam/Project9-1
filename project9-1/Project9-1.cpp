#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

	int array[10];
	srand(static_cast<unsigned int>(time(0)));

	for (int i = 0; i < 10; i++) {

		array[i] = rand() % 10000 + 1000;

		cout << "Element in Array: ";
		cout << array[i] << " ";

		
	}
	for (int even = 0; even < 10; even++) {

		cout << "Even indices: ";

		if (even % 2 == 0) {

			cout << array[even];

		}
	}

	for (int j = 0; j < 10; j++) {

		cout << "Even values: ";

		if (array[j] % 2 == 0) {

			cout << array[j];
		}
	}

	

}

