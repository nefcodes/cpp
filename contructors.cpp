/* CONTRUCTORS & DESTRUCTORS
- contructors are method used to create instances (objects) of classes
can overload contructors.

++ Only one destructor without parameters exist.
*/

#include<iostream>

using namespace std;

class player {
public:
	string name;
	int age;

	//contructors
	player(string x, int y) {
		name = x;				//argument expecting contructor
		age = y;
	}


	player() {
		name = "anonmyous";  // This is a default contructor	
		age = 0;
	}

	//destructor are called when the instance is removed from the memory.
	~player() {
		cout << endl;
		cout << "destructor has been applied";
	}
};


int main()
{
	player p1{ "Tony", 23 };
	cout << "p1 name is: " << p1.name << ", and age is: " << p1.age;

	player p2{};
	cout << endl << p2.name;

	return 0;
}
