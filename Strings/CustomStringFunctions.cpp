// ------------ CUSTOM C String handling functions / make your own unofficial str functions

#include<iostream>
using namespace std;

//pass a c string to our function or pointer to a c string
//  program to count the no of characters

int custom_strlen(char str[]) {

	int counter = 0;

	//while ith element is not equal to null character or while that statement is true execute the expression and then increase i++
	for (int i = 0; str[i] != '\0'; i++) {
		counter++;
	}
	return counter;
}


//--------------- Using a pointer to traverse through the character array
void replace(char* str, char searching, char replace) {
	while (*str != '\0') {
		if (*str == searching) {
			*str = replace;
			
		}
		str++;  // be careful where you put the braces.

	}
}

int main() {
	char state[] = "Mississippi";
	cout << state << endl;

	replace(state, 's', 't');
	cout << "The updated string is: " << state;


	return 0;
}