#include<iostream>

using namespace std;

//---------- C style strings -------------
// "dog" is actually "d o g \0" null character also takes 1 unit of char space

int main() {
	const int SIZE = 20;
	char name[SIZE];


	// cin >> name;
	//cout << "You are " << name; // cin ignores everything after white space
	//cout << "Again, name? :  " << endl;



	cout << "Enter name: ";
	cin.getline(name, SIZE); // this also includes spaces
	cout << "You are " << name; //

	return 0;
}
