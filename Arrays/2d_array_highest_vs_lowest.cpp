// ------------ to find the lowest and highest in a 2d array.

#include<iostream>

using namespace std;

int main() {

	double arr[3][3] = { {1, 2, 3 }, {0.5, 5, 6}, {10, 25, 8} };

	double biggest_num = arr[0][0];
	double lowest_num = arr[0][0];


	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++){
			if (arr[i][j] > biggest_num) {
				biggest_num = arr[i][j];
			}
		}
	}

	for (int i = 0; i < 3; i++) {   // the outer i will run frmo 0, 1, 2 for every z = 0, 1, 2 
		for (int z = 0; z < 3; z++) {  
			if (arr[i][z] < lowest_num) {
				lowest_num = arr[i][z];
			}
		}
	}

	cout << "The biggest number is: " << biggest_num << endl;
	cout << "The smallest number is: " << lowest_num << endl;

	return 0;
}

