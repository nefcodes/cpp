/*
recursion example / countdown function and what is a stack overflow
*/

#include<iostream>

using namespace std;

int countdown(int x); //declaration

int main() {
	cout << countdown(10);

	return 0;

}

//func prototype 
int countdown(int x) {
	if (x == 0) {
		cout << "Go! Go! Go!";
		return 0; // if you dont put this here it will be stack overflow
		// stack overflow = the memory allocated 
		// for function calls and local variables) exceeds its limit

	}

	cout << x << endl;
	return countdown(x - 1);
}
