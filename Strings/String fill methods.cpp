#include<iostream>
#include<string>

using namespace std;

int main() {
	string dest;

	//cin << s; this will omit everything after space
	cout << "Enter string: ";
	

	//takes soaces lines
	getline(cin, dest);
	cout << "You typed: " << dest << endl;
	cout << "2nd element is: " << dest[1] << endl;


	// String fill method
	string fastBoi(20, '*');
	cout << "fill method: " << fastBoi << endl; // this will access 2nd element of the array
	

	// Subset initializer method
	string blue(fastBoi, 1, 3); // here 1 = actual 1st element.
	cout << "subset init: " <<  blue << endl;

	// string concat
	string c = "cool";
	string g = "guy";

	string cg = c + g;
	cout << "concat is " << cg;

	return 0;

}