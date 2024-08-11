#include<iostream> // cout, cin
#include<cctype>// isalpha, isalnum, isdigit, islower, isprint, ispunct (punctuation), isupper, isspace

using namespace std;

int main() {

	if (isalpha('a'))
		cout << "Yes, it's alphabetic.";
	 
	// ternary operator
	cout << "\n" << (islower('z') ? "yes, it's lowercase" : "no it's not lower");


	return 0;


}