#include <iostream>
#include <vector>

using namespace std;

int main() {
	//Demo vector
	vector<int> arr = { 1, 2, 4, 5, 7, 19 };

	//fill constructor 
	vector<double> x(100, 0.1); // 100 elements of 0.1 value

	// add to end of vector
	arr.push_back(18);

	//length of vector
	cout << "length of vector: " << arr.size() << endl;

	//size on disk
	cout <<"size of vector: " << arr.capacity() << endl;

	// in previous version of c++, the vector would double in size, but right now it doesn't double completely.


	//print all elements of vector
	for (int element : arr) {
		cout << element << endl;
	}

	for (int element : x) {
		cout << element << ", ";
	}

	return 0;
}
