// ------- Reverse an array -------

//Space and time complexity: the while loop only runs n/2 times to fully reverse the array
// the time complexity is O(n)
// big O ignores constants, it measures how the algorithm perform if scaled

#include<iostream>
using namespace std;

void ArrayMirrorImage(int anyArray[], int no_of_items) {
	int start = 0; // these start and end are index no.
	int end = no_of_items - 1;

	while (start < end) {
		swap(anyArray[start], anyArray[end]);

		start += 1;
		end -= 1;
	}
}

int main() {
	int EgArray[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int no_of_items_check = sizeof(EgArray) / sizeof(int);

	// print the output 
	for (int i = 0; i < no_of_items_check; i++) {
		cout << EgArray[i] << endl;
	} cout << endl;

	ArrayMirrorImage(EgArray, no_of_items_check);

	// print again
	for (int i = 0; i < no_of_items_check; i++) {
		cout << EgArray[i] << endl;
	} cout << endl;
}
