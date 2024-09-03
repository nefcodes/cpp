#include <iostream>

using namespace std;

int main() {

	// a pointer is just a variable that holds a memory address.

	int* adrs; // create a variable to store address of int type variable.

	int z = 1;

	
	adrs = &z; // store the address of z in adrs variable

	cout << "The location of z is: " << &z << endl;
	cout << "The value inside adrs is: " << adrs << endl;


	// modyfying values with pointers

	*adrs = 23; // will put 23 in place of z

	cout << "The new value of z is: " << z << " By dereference operator * it is: " << *adrs << endl;

 
}
