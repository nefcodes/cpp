#include<iostream>
using namespace std; 

//define function for binary search
int binary_search(int arr[], int no_of_items, int value_to_search) {

	int start = 0;
	int end = no_of_items - 1; // bcz index starts at 0, n-1 is last element

	while (start <= end) {
		int mid = (start + end) / 2; // even if mid point is decimal, it would always be integer

		if (arr[mid] == value_to_search){
			return mid;
		} 

		// if mid value is more than value to search
		else if(arr[mid] > value_to_search) {
			end = mid - 1;
		}
		// and if mid value is less than value we are searching
		else {
			start = mid + 1;
		}
	}

	// if no match
	return -1;
}

int main() {

	//binary search works on sorted array
	int EgArray[] = { 1, 4, 23, 36, 52, 72, 89, 91, 101 };

	int no_of_items = sizeof(EgArray) / sizeof(int);
	
	int item_to_search;
	cout << "Enter item to search: ";
	cin >> item_to_search;

	int index = binary_search(EgArray, no_of_items, item_to_search);

	if (index != -1) {
		cout << item_to_search << " is present." << endl;
	}
	else {
		cout << item_to_search << " is NOT found." << endl;
	}

	return 0;
}
