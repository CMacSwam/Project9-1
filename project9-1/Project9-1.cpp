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
	

}

