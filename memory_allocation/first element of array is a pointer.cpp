//--> FIRST ELEMENT OF ARRAYS IS A POINTER and the next value could be added by inc+ the data type size in bytes

#include <iostream>

using namespace std;

int main() {
	int array[] = { 1, 4, 7, 10 };

	int* pointer = array;  // even though we didn't specify & operator, the first element of an array is stil a pointer.
	
	cout << "Some address:  " << pointer  << " of pointer." << endl;

	// deference, fetch the value at the address 
	cout << "This is where pointer points at: " << *pointer << endl << endl << endl;

	
	//cout the array
	cout << "THE COMPLETE ARRAY: " << endl;
	for (int x = 0; x < sizeof(array) / sizeof(array[0]); x++) {
		cout << array[x] << ", ";
	}


	// alternatively
	cout << "\n \n \nmanual method: " << endl;
	cout << *(pointer + 0) << endl;
	cout << *(pointer + 1) << endl;
	cout << *(pointer + 2) << endl;
	cout << *(pointer + 3) << endl;

	return 0;


}
