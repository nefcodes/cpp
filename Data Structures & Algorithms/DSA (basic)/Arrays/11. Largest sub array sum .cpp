#include<iostream>
using namespace std;

// Print largest sum of sub arrays from an array
int largestSubArraySum(int anyArray[], int no_of_elements) {
	int largestSum = 0;

	for (int start = 0; start < no_of_elements; start++) {
		for (int end = start; end < no_of_elements; end++) {
			int subArraySum = 0;

			// now from start to end point sum them up
			for (int z = start; z <= end; z++) {
				subArraySum += anyArray[z];  // for ex sum from (start, to end)
			}

			largestSum = max(largestSum, subArraySum);
		}
	}
	return largestSum;
}


int main() {

	int egArray[] = { 1, 5, -1, 5, 612, 71, 82 };

	int n_items = sizeof(egArray) / sizeof(int);

	cout << "The largest sub array sum is: " << endl;
	cout << largestSubArraySum(egArray, n_items);
	return 0;
}
