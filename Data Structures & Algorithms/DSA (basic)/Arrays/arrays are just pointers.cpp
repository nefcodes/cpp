#include <iostream>
using namespace std;

	void printArray(int anyarray[]) { // expects array , not actual array just pointer
		cout << "Size of array1, outside main, in func: " << sizeof(anyarray ) << endl;

	}

	void printAllElementsofAnArrayEvenThoughYouExpectApointer(int anyarray[], int n) {
		for (int i = 0; i < n; i++) {
			cout << anyarray[i] << endl;
		}
	}



int main() {
	int array1[] = { 1, 2, 3, 4, 5, 6 };

	int no_of_el = sizeof(array1) / sizeof(int);

	cout << "Size of array1, in main: " << sizeof(array1) << endl;

	printArray(array1);

	cout << endl << "--------------" << "\nIterating elements through function, even though functions receive pointer in case of array, by providing extra no of elements information" << endl;
	printAllElementsofAnArrayEvenThoughYouExpectApointer(array1, no_of_el);
	

	return 0;
}
