#include<iostream>
using namespace std;

// Program to print unique pairs in an array
void print_unique_pairs(int anyArray[], int no_of_el) {

	for (int x = 0; x < no_of_el; x++) {
		int xthItem = anyArray[x]; // xth item

		for (int y = x + 1; y < no_of_el; y++) {
			int ythItem = anyArray[y]; // yth item

			// print unique pairs
			cout << xthItem << ", " << ythItem << endl;
		}
		cout << endl;

	}
}

int main() {

	int egArray[] = { 10, 20, 40, 60, 70 };

	int n_items = sizeof(egArray) / sizeof(int);

	cout << "-------------These are the unique pairs-------------" << endl;
	print_unique_pairs(egArray, n_items);
}
