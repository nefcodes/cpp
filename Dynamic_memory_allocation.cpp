#include <iostream>


/*	Malloc() allocates memory but doesn't initialize it. [expects only the size / sizeof(data type)]
	Calloc() allocates and initializes to 0. [expects no of items, and their data type]
 	Realloc() rellocates existing memory on heap to a bigger space.

  	free() expects a pointer(mem. address) to clear our memory from heap.
   	AFTER YOU FREE THE MEMORY assign NULL to the pointer.

  
*/

using namespace std;

	int main() {
		size_t size{ 0 }; // initialize a size_t (unsinged integer) type variable
		double* temp_ptr{ nullptr }; // create a pointer to store the address

		cout << "How manys values?: ";
		cin >> size;

		temp_ptr = new double[size]; // allocate memory on the heap for an array --- STORE THE ADDRESS OF FIRST VALUE as a pointer on the heap.
		/* which will have double values
		and store the address of first array item to temp_ptr */

		cout << temp_ptr << endl; // show the address of first array item on the heap.

		// NOTE: If you do lose the address of the first value, that is memory leak. do not set temp_pt = nullptr before 
		// freeing up the space.
		delete[] temp_ptr;

		return 0;
	}
