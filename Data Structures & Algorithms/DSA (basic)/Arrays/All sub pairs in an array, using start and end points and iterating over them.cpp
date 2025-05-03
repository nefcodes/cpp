#include <iostream>
using namespace std;

//find all pairs (not unique), but should be continous from start to end
void printAllPairs(int anyArray[], int no_of_items) {

	for (int start = 0; start < no_of_items; start++) {
		for (int end = 0; end < no_of_items; end++) {

			/*
			these start and end loops wil gives us pairs like
			(0,0), (0, 1) (0,2) (0,3) ....(0, no_of_items)
			(1, 0) (1, 1).............................
			.................
			(n, 0) (n, 1) ......................... (n, n)
			*/
			
			// No we will take a variable and iterate for each of these (start, end) points. which would give us subarrays of each pair
			for (int z = start; z <= end; z++) {
				cout << anyArray[z] << ", ";
			}  

			cout << endl;
		}
		cout << endl;
	}
	
}

int main() {

	int egArray[] = { 10, 20, 30, 40, 50, 60 };

	int n_items = sizeof(egArray) / sizeof(int);

	printAllPairs(egArray, n_items);

	return 0;
}
