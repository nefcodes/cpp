/*
  Complete classes: usually when classes are created they are stored in a (.h) header file
  and then implemented in a separate .cpp implementation file
  if the function is small you can just use an inline function

*/
#include <iostream>

#include "rectangle.h"  // the diff bw  (<> vs " ") is that <> is for c++ predefined header files

using namespace std;

int main() {
	rectangle rec1;
	rec1.setlength(3.6);
	rec1.setwidth(2.3);
	
	cout << "The area of the rectangle is: " << rec1.getarea();
}
