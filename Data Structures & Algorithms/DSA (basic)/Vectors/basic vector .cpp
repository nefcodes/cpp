#include<iostream>
#include<vector>

using namespace std;

int main() {
	//demo vector
	vector<int> arr = { 1, 2, 3, 4, 5};

	// Push_Back 0(1)
	arr.push_back(26);

	//size of vector
	cout << arr.size() << endl;

	//capacity of vector
	cout << arr.capacity() << endl;


	// print all elements of the vector
	cout << "\n the elements are: " << endl;
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << endl;
	}


	cout << "\npop back el. " << endl;
	arr.pop_back();

	cout << "\n the elements are: " << endl;
		for (int i = 0; i < arr.size(); i++) {
			cout << arr[i] << endl;
		}


	//fill constructor 
		vector<int> fillarray(10, 8); // (no. of elements, item)


}
