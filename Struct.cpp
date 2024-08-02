#include <iostream>

using namespace std;


struct ok { //Structs are less complex than classes, polymorphism and inheritance is not used. 
	
	int x;
	float z; 

};
int main() {

	ok A, B;


	A.x = 1;
	B.x = 2;

	cout << "Value of A.x: " << A.x << endl;
	cout << "Value of B.x: " << B.x << endl;


	if (A.x == B.x) {
		cout << "They are the same!" << endl;
	}
	else {
		cout << "They are different" << endl;
	}

	return 0;

	

}
