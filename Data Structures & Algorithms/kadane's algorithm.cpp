// ------- Kadane's algorithm
/*
		Kadane’s Algorithm is a famous method used to solve the Maximum Subarray Sum problem — that is,
		to find the contiguous subarray with the maximum sum in a one-dimensional array of integers.

		O(n) complexity linear (best method)

		[a1, a2, a3 ..... an]

		keep a running sum, if at any point it becomes -ve, discard it and make it zero.
*/


#include<iostream>
using namespace std;

int currentSum = 0;
int maxSum = 0;


int max_subarray_sum(int givenArray[], int length) {
	for (int index = 0; index < length; index++) {
		currentSum += givenArray[index];
		if (currentSum < 0) {
			currentSum = 0;
		}
		maxSum = max(currentSum, maxSum);
	}

	return maxSum;
}


int main() {
	int egArray[] = { 1, -2, 3, 5, 6, 7, -1,713 };
	int length = sizeof(egArray) / sizeof(int);

	cout << "The max subarray sum is: \n" << max_subarray_sum(egArray, length);

	return 0;
}
