// How to read/write a paragraph
#include<iostream>
#include<fstream>
#include<string> //  for getline()

using namespace std;

int main() {
	ifstream fin;
	fin.open("oop.txt");

	if (fin) {
		string input;
	/* method 1.
	* while (fin >> input) // this will take words without spaces (this is extraction operator not bitwise)
			cout << input;	
	*/	

	// method 2
		getline(fin, input);
		while (fin) {
			cout << input;
			getline(fin, input);
		}
		fin.close();
	}
	else {
		cout << "Error.";
	}

	return 0;
}
