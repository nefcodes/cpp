// -- Detect highest in array

#include<iostream>

using namespace std;

int main() {

	int a[] = { 3, 5, 6, 7, 6, 8, 1, 134, 25 };

	int high = a[0];
	int low = a[0];

	for (int i = 1; i < 9; i++) {
		if (a[i] > high) 
			high = a[i];
		
	}

	cout << "The highest value in the array is: " << high << endl;

	for (int j = 1; j < 9; j++) {
		if (a[j] < low) {
			low = a[j];
		}
	}

	cout << "The lowest value in the array is: " << low << endl;

	return 0;
}