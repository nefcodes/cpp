#include<iostream>
#include<vector>

using namespace std;

int main() {
	// 2d array
	vector<vector<int>> list = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};


	list[2].push_back(10); //add to the 2 index of list

	// for every first element, iterate inside that first element which is also an array.
	for (int x = 0; x < list.size(); x++) {
		for (int element : list[x]) {
			cout << element << ", ";
		}
		cout << endl;
	}


	return 0;
}
