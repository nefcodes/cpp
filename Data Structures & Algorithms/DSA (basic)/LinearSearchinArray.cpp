#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key) // (array, n items in array, 
{
	for (int i = 0; i < n; i++) {
		if (arr[i] == key) {
			return i;
		}
	}
	// if no match
	return -1;
}

int main() {
	int EgArray[] = { 1, 2, 5, 12, 7, 62, 72, 3, 83, 3, 7, 45 };

	int no_of_items = sizeof(EgArray) / sizeof(int);

	int item_to_search;

	cout << "Enter the item you want to search: " << endl;
	cin>> item_to_search;

	int index = linear_search(EgArray, no_of_items, item_to_search);

	if (index != -1) {
		cout << item_to_search <<" is present at index: " << index << endl;
	}
	else {
		cout << item_to_search << " is not found." << endl;
	}




}
