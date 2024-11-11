//FUNCTION POINTER

#include <iostream>


using namespace std;

int add(int x, int y) {
	return x + y;
}

int multiply(int x, int y) {
	return x * y;
}

int main() {
	int(*func_point)(int, int);

	func_point = add; // this will make the func point, point to the add function. IDK how just that's how it is.

	cout << "Addding 2 + 3 = " << func_point(2, 3) << endl;


	func_point = multiply;
	cout << "Multiply 2 x 3 = " << func_point(2, 3) << endl;
}
