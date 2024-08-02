#include <iostream>

using namespace std;

//Create a struct named player
struct player {
	
	string name;
	int age;
	bool active;
	
};

int main() {

	//List initialization, each item corresponds to struct data type from top to bottom
	player cassie = { "Cassie", 25, true };
	
	//player cassie = { "Cassie", , true }; you could skip positions 
	
	cout << "Name: " << cassie.name << endl;
	cout << "Age: " << cassie.age << endl;
	cout << "Activity status: " << cassie.active << endl;


	return 0;

	

}