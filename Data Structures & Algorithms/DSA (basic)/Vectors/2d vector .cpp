#include <iostream>
#include <vector>

using namespace std;

int main() {
	// 2D vector, vector of vector items
	//each item is a row, can have any no. of items

	vector <vector <int> > twoD_vector = {
		{1, 2, 3},
		{4, 6, 7, 8},
		{3, 6, 7, 8}
	};

	for (int i = 0; i < twoD_vector.size(); i++) {
		for (int item : twoD_vector[i]) {
			cout << item;
		}
		cout << endl;
	}
}
