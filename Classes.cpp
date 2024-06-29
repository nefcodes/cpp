#include <iostream>

using namespace std;


class car {
public:
	string name;
	string year;
	int hp;

/* create a method and set values*/
	car(string x, string y, int z) {
		name = x;
		year = y;
		hp = z;
	}
};

int main() {
	car car1("koenigsegg: regera", "2023", 1800);

	cout << car1.name << " was made in " << car1.year << " with " << car1.hp << " horsepower" << endl;

}
