#include<iostream> // cout, cin
#include<cctype>// isalpha, isalnum, isdigit, islower, isprint, ispunct (punctuation), isupper, isspace

using namespace std;

void convert2Upper(char str1[], int size) {
	
	for (int i = 0; i < size; i++) {
		str1[i] = toupper(str1[i]); // upper ith element and store it in the iTH place.
	}
}

void convert2Lower(char str1[], int size) {
	for (int i = 0; i < size; i++) { // lower ith element and store it in the iTH place.
		str1[i] = tolower(str1[i]);
	}
}

int main() {

	char c = 104; // ASCII code for H
	cout << c << endl;
	cout << static_cast<char>(toupper(104)) << endl; // you can also put the Actual letter inside the toupper or ASCII number


	// convert lowercase to uppercase by function
	
	char name[] = "tanishk";

	convert2Upper(name, 7);

	for (auto c : name)
		cout << c;

	cout << endl;


	return 0;


}