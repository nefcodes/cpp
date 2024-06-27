#include <iostream>
#include<vector>

using namespace std;

int main() {
	vector<string> meow{ "zap", "cap", "tiny", "cheetos" };

	/* this does not change the actual value of array*/
	for (auto i: meow) {
		i = "woof!";
	}

	for (auto j : meow) {
		cout << j << endl;

	}

	cout << endl;

	/* this changes the actual value by reference "&" operator*/
	
	for (auto &x : meow) {
		x = "oink..";
	}

	for (auto k : meow) {
		cout << k << endl;
	}
	return 0;

}
