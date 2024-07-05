// Basics of a pointer

#include<iostream>

using namespace std;
int main() {

	int* p; //create a variable to store address
	int y = 5;


	p = &y; //& operator gets the address.

	cout << "This is inside the variable p which is a pointer: \n" << p << "\n\n";
	cout << "This is the value at the address of y: " << y << "\n\n";


	*p = 5; // change the value at address of p.
	cout << *p; // print the content at the address of p.

																							cout << "\n\n\n\n";
//you can't change the address of an array, bcz its a constant pointer, but you can change the address of 2nd element in the array
	int a[] = { 1, 2, 3 }; 

	cout << a[1] << endl; // these two are the same
	cout << *(a + 1) << endl;
	return 0;
}