/*
	Smart pointers: it takes care of the new and delete[].

	you have to use #include<memory>

*/
#include<iostream>
#include<memory>
#include <vector>

using namespace std;
int main() {
	
	unique_ptr<double> p1(new double{0});   // you declare a unique_ptr of double type and then inside the round braces you
										// specify the location of the memory and value there init to 0.

	// creating an array of bools
	unique_ptr<bool[]> array_bool_pointer(new bool[4] {true, false, true, true});

	for (int i = 0; i < 4; i++) {
		cout << "The value at index " << i << " is: " << array_bool_pointer[i] << endl;
	}


	cout << "\n\n\n";
	/*
	Now some crazy stuff. Creating a smart pointer of vector array
*/


	unique_ptr <vector<int> > smart_pointer_for_vector(new vector<int>{ 8, 5, 4, 6, 2, 1 });

	for (int z : *smart_pointer_for_vector) {
		cout << z << "\n";
	}
	/*	note that smart_pointer_for_vector is still a pointer, you have to dereference it to acces the values by *.
		and also note that you didn't have to use delete[] to free up allocated heap storage
	*/


	return 0;
}


