// ----------------------- Basic class example --------------------------- 

#include<iostream>

using namespace std;

class Rectangle
{
private:
	double width;
	double length;

public:
	void setWidth(double);
	void setLength(double);

	// method/function prototypes
	double getWidth();  //accessor
	double getLength(); //setter
	double getArea();

};

// you could define those functions right below here ---> or after the main function.

int main() {

	Rectangle r; //an object of rectangle type, this was created after creating and defining class and functions
	r.setWidth(5.2);
	r.setLength(9);
	cout << "This is the area of your rectangle, sir: " << r.getArea() << endl;

	return 0;
}

void Rectangle::setWidth(double w) { // you need to use the scope resolution operator to define class variables (::)
	width = w; // the width of the class would be set to
}

void Rectangle::setLength(double l) {
	length = l;

}

// now we define our accessors/getters
double Rectangle::getWidth() {
	return width;
}

double Rectangle::getLength() {
	return length;
}

double Rectangle::getArea() {
	return length * width;
}