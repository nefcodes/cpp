#include <iostream>

using namespace std;
// ------ NESTED Structs

struct trunk {
	int x = 0;
}; // notice the semicolon

struct branch {
	trunk t1; //this defines a struct of name t1. which has a property x.
				// you can nest as many structs as you want
};


int main() {

	trunk t1;

	cout << t1.x;

	return 0;

}