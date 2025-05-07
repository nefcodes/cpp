#include<iostream>


using namespace std;

//bubble sort time complexity n square

void bubbleSort(int givenArray[], int length) {
	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < length - i - 1; j++) {
			if (givenArray[j] > givenArray[j + 1]) {
				swap(givenArray[j], givenArray[j + 1]);
			}
		}
	}
}

void printArray(int givenArray[], int length) {
	for (int i = 0; i < length; i++) {
		cout << givenArray[i] << endl;
	}
}

int main() {
	int n = 5;
	int egArray[] = { 7, 9, 2, 3, 1 };

	bubbleSort(egArray, n);
	printArray(egArray, n);
	
	return 0;
}
