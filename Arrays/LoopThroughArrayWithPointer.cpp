#include <iostream>

using namespace std;

int main() {
	int scores[]{ 203, 152, 632, 516, 256, -2 };

	int* point_to_score{scores}; // points to the first item in the array 'score'
    
    
    /* dereference oeprator "*" returns a value not an address
    so while the value is not equal to -2 do the expression*/
	while (*point_to_score != -2) {
		cout << *point_to_score << endl;
		point_to_score++;  // increase the address by the value of the type of array, in this case "INT" having 4 or 8 bytes depending on your computer 
	// this and (*point_to_score)++ means different things, here in the example only the actual value is being dereferenced, not the actual code.

	}
	return 0;

}
