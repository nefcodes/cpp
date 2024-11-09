#include <iostream>
using namespace std;

void valuechange1(int x); // pass by value only creates a copy and doesn't change the actual argument passed in
void valuechange2(int& x);// Corrected function declaration

int main() {
    int num{};

    cout << "This is the original value: " << num << endl;

    // we are trying to change the variable num.
    valuechange1(num);
    cout << "This is the value of num after call by value: " << num << endl;

    valuechange2(num);
    cout << "This is the value of num after call by reference: " << num << endl;


    return 0;
}

void valuechange1(int x) {
    x = 5;
    cout << "This is not set to our desired value just displaying the result: " << x << endl;
}

void valuechange2(int& x) {
    x = 5;
    cout << "This actually changes the value of a variable: " << x << endl;
}
