#include <iostream>

using namespace std;

class Square; // Forward declaration for the Square class

class Shapes {
public:
    double findArea(const Square &); // Member function to find the area
};

class Square {
private:
    double side; // Private member variable
public:
    Square(double s = 0) : side(s) {} // Constructor with default value

    double getSide() const { return side; }

    // Making the Shapes class a friend to give access to private members
    friend class Shapes;
};

double Shapes::findArea(const Square &s) {
    // Since Shapes is a friend of Square, it can access private members
    return s.side * s.side;
}

int main() {
    Square sq1(5.1);
    Shapes s;

    cout << "Area of the square: " << s.findArea(sq1) << endl;

    return 0;
}
