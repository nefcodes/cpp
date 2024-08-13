 #pragma once
// this is where constructor prototypes will be written
// curly braces are used for class creation
class rectangle {
private:
	double length;
	double width;

public:
	// mutators or setters, which will update the object
	void setlength(double);
	void setwidth(double);

	// getter or accessor
	double getlength() const;
	double getwidth() const;
	double getarea() const;
};