
// DIFFERENCE BETWEEN POINTERS vs REFERENCES and L values vs R values.
/*
	L value = something that has an address
	R Value = only magnitude.

	References can't be nullptr, can't point to a magnitude. only when "Const int& ref_name" allows magnitude

*/

#include<iostream>

using namespace std;

int main() {
	int var = 10;  //var is L value, 10 is R value

	int* point = &var;

	int& ref_to_pointer = *point; // dereference the value at the address of *point and store that as a reference.
	 
	cout << ref_to_pointer;  // interesting.


}
