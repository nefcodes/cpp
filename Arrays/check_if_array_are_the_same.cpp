/*	check if two array are the same
*	1. must have equal no. of items
*	2. equal values in same order
*/

#include <iostream>

using namespace std;

int main() {
	int ar1[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int ar2[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1};

	int len1, len2;

	len1 = sizeof(ar1) / sizeof(ar1[0]); // find size by diving total memory by indiviual memory == no of items.
	len2 = sizeof(ar2) / sizeof(ar2[0]);
	
	bool same = false; // you could also have used a true which is more efficient



	// when a for loop is set to i > 9, it will count from the initializer to 8 but not 9 in total 0 to 9 excluding 9 is still 9 values.
	for (int i = 0; i < 9; i++) {
		if (ar1[i] == ar2[i]) {
			same = true;
		}
		else {
			same = false;
			break;
		}

	}


	if (same == true && len1 == len2) {
		cout << "they are the same!";
	}
	else {
		cout << "they are not the same!";
	}
	return 0;
}