#include<iostream>

/*
	Creating arrau with new operator is a bit different.
	the array size/ no of items. must be defined


*/

using namespace std;


void new_operator_array() {
	int* p = new int[5]; //create an array of int typen the heap for 5 items and store
	//	the address in p pointer

	char* meow = new char[4]; // create char array on heap to store 3 digit string, last digit for null character
	// we did nothing,  and deleted pointer, but the value remains at the address.
	delete[] meow; 
	




//Instead of initializing array with for loop you could also have written:
//	int* p = new int[5]{1, 2, 3, 4, 5};



//set and display all 
	for (int i = 0; i < 5; ++i) {
		p[i] = i;
		cout << p[i] << ", ";
	}
	delete[]p; // frees the array memory from the heap.
	// but the pointer will still contain the address

	// but since it's inside a function p will be automatically destroyed after returning from a function.
}
int main() {
	new_operator_array();

	return 0;
}
