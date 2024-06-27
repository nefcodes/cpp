#include <iostream>
#include<vector>

using namespace std;

	int main() {
		int* p1{nullptr};
		double* p2{ nullptr };
		unsigned long long* p3{ nullptr };
		vector<string>* p4{ nullptr };
		string* p5{ nullptr };


		cout << "Size of int: " << sizeof(p1) << " Bytes." << endl;
		cout << "Size of double: " << sizeof(p2) << " Bytes." << endl;
		cout << "Size of unsinged long long: " << sizeof(p3) << " Bytes." << endl;
		cout << "Size of vector<string>: " << sizeof(p4) << " Bytes." << endl;
		cout << "Size of string " << sizeof(p5) << " Bytes." << endl;
		return 0;
	}
