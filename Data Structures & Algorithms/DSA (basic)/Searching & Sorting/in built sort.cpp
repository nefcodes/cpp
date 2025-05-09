#include<iostream>
#include<algorithm> 

using namespace std;

int main() {
	int egArray[] = { 10, 3, 4, 6, 1, 2, 8, 4, 6 };

	int length = sizeof(egArray) / sizeof(int);

	//in built sorting function
	// sort(start, arrayname + (end index + 1));
	sort(egArray, egArray + length);


	for (auto x : egArray) {
		cout << x << endl;
	}
}
