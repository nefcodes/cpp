#include<iostream>

using namespace std;

class Student {
public:
	string name;
	int age;

	//constructor
	Student(string set_name, int set_age) {


		// this is a pointer, which mentions the current object being created or modified.
		cout << "the value of this: " << this << endl;
		name = set_name;
		age = set_age;
	}
};


int main() {

	Student s1("tony", 23);

	cout << "s1 memory address:  " << &s1 << endl;

	return 0;
}
