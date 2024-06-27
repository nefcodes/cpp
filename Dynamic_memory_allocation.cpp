#include <iostream>

using namespace std;

	int main() {
		size_t size{ 0 }; // initialize a size_t (unsinged integer) type variable
		double* temp_ptr{ nullptr }; // create a pointer to store the address

		cout << "How manys values?: ";
		cin >> size;

		temp_ptr = new double[size]; // allocate memory on the heap for an array
		/* which will have double values
		and store the address of first array item to temp_ptr */

		cout << temp_ptr << endl; // show the address of first array item on the heap.
		delete[] temp_ptr;

		return 0;
	}
