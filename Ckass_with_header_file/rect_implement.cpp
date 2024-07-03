// This is where definitions will go	
#include"rectangle.h" // use the .h file where you defined class members and now here implement functions


// setters
void rectangle::setlength(double l) {
	length = l;
}

void rectangle::setwidth(double w) {
	width = w;
}



//accesors
double rectangle::getlength() const {
	return length;
}

double rectangle::getwidth() const {
	return width;
}


double rectangle::getarea() const {
	return length * width;  //by doing this we don't have to store the value of the data.
}


