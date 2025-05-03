// ------- Largest sub array sum using prefix array approach
/*
* if we have an array [1, 2, 3, 6, -2]
* to calculate the highest sub array sum,
*
* we could create a prefix array which stores sum till now e.g. [1, 3, 6, 12, 10]
* to get the sum of any sub array,

	prefixArray[end] - prefixArray[start -1]   (for start >= 1)

	gives result in just constant time
*/

#include <iostream>

using namespace std;

int LargestSubArraySumUsingPrefixArrays(int givenArray[], int no_of_el) {

	//prefix sum
	int prefixArray[no_of_el] = { 0 };
	prefixArray[0] = givenArray[0];

	for (int x = 1; x < no_of_el; x++) {  //we didnt start x from 0, bcz its would cause givenArray[-1] + givenArray[0].. error
		prefixArray[x] = prefixArray[x - 1] + givenArray[x];
	}

	int largestSum = 0;

	for (int i = 0; i < no_of_el; i++) {
		for (int j = i; j < no_of_el; j++) {

			int subArraySum = i > 0 ? prefixArray[j] - prefixArray[i - 1] : prefixArray[j];

			//check if subArraySum > largestSum
			largestSum = max(largestSum, subArraySum);
		}
	}
	return largestSum;
}


int main() {
	int egArray[] = { 1, -2, 3, 5, 7, 126, -12, 63 };

	int length = sizeof(egArray) / sizeof(int);

	cout << LargestSubArraySumUsingPrefixArrays(egArray, length) << endl;

	return 0;

}
