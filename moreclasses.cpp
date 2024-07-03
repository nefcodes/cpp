#include<iostream>

// Using classes to find area of a rectangle. Object Oriented Programming, instead of individual code. We have reusable code.
using namespace std;


class rectangle {
private: // declaration of members of the class
	double width;
	double length;

public:

	// constructor prototypes
	void setwidth(double);
	void setlength(double);
	double getwidth() const;
	double getlength() const;
	double getarea()const;
};


int main() {
	rectangle rec1;
	rec1.setwidth(6);
	rec1.setlength(5);

	cout << rec1.getarea();


	return 0;
}


// defining the constructors
void rectangle::setwidth(double d) {   // the :: is scope resolution operator
	width = d;
}

void rectangle::setlength(double e) {   // the :: is scope resolution operator
	length = e;
}

double rectangle::getlength() const {
	return length;
}

double rectangle::getwidth() const {
	return width;
}

double rectangle::getarea() const {
	return length * width;
}
