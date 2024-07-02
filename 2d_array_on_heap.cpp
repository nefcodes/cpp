// ------------ NEW operator of heap with 2D array


#include<iostream>
using namespace std;

int main() {

	//An array of 3 rows and 4 column
	int normal_array[3][4] = {
		1, 2, 3,
		4, 5, 6,
		7, 8, 9,
		10, 11, 12

	}; // 2d arrays are just 1d arrays in reality


/* To create arrays on the heap, it's a bit different
*/
	int* px = new int[3];  //will represent first row in the matrix supposedly
	int* py = new int[3];  // 2nd row in the matrix

	// to use these as 2d arrays, we have to store both of them in another arrays
	// which will be an array of int type pointers

	int** pdata = new int* [2]; // this will have each entry as row of a 2d array
	pdata[0] = px;
	pdata[1] = py;

	/*	now you can access data like normal 2d arrays
	*/
	pdata[0][2] = 6;
	cout << pdata[0][2]; // display 1st row, 3rd column	 

	// finally you have to free the memory in the chronological order you allocated it.
	delete[] px;
	delete[] py;
	delete[] pdata;
			



	return 0;
}
