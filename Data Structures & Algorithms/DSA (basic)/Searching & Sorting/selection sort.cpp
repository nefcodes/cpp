// Insertion sort
/*
	consider an array [a0, a1, a2, a3 .... a(n-1)]

	we consider a0 to be sorted and sort from a1 to a(n-1)
	

  The key concept is:
" Shifting elements to the right to make space
  for the current (unsorted) element in its correct sorted position."

*/

#include<iostream>

using namespace std;

//sort the elements in increasing order
void insertion_sort(int givenArray[], int length) {
	for (int p = 0; p <= length - 1; p++) {

		int current = givenArray[p]; // the one that we want to put in the sorted array
		int prev = p - 1;

		while (prev >= 0 and givenArray[prev] > current) {
			givenArray[prev + 1] = givenArray[prev]; // copy the top right from the sorted array to the unsorted array position, bcz the prev is bigger than the current (unsorted)
			prev = prev - 1; // then we check an element before the most right in our sorted array 
			// similary in the next iteration the unsorted(current element) would be checked with (prev - i)(2nd iteration)
		}
		givenArray[prev + 1] = current;
	}
}

int main() {
	int egArray[] = { -2, -3, 1, 6, 23, 7, 8, 9 };
	int length = sizeof(egArray) / sizeof(int);

	insertion_sort(egArray, length);

	for (auto x : egArray) {
		cout << x << " ,";

	}

	return 0;
}
