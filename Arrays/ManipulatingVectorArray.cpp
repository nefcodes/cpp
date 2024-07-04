#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<double> v{ 1.2, 4.6, 6.7, 0.4, 7.7 };

	v.push_back(3.7);
	v.push_back(8.3);  // appends item to the end of vector array

	for (double i : v) {
		cout << i << "\n";
	}

	cout <<"\nvector has a size of: " << v.size() << endl; // find outs the no of items in vector array


	for (int x = 0; x < v.size(); x++) {
		v[x] = v[x] + 1;
	}

	cout << "\nThis is array after modifying it.\n";

	for (double j : v) {
		cout << j << "\n";
	}

	cout << "\nmodified vector has a size of: " << v.size() ;
	return 0;
}
