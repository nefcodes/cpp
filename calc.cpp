// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    char op;
    int num1;
    int num2;
    
    cout << "Choose an operator between + - / *\n";
    cin >> op;
    
    cout << "Enter first number ";
    cin >> num1;
    
    cout << "Enter second number ";
    cin >> num2;
    
    switch (op) {
        case '+':
        cout << "Your result is " << (num1 + num2);
        break;
        
        case '-':
        cout << "Your result is " << (num1 - num2);
        break;
        
        case '/':
        cout << "Your result is " << (num1 / num2);
        break;
        
        case '*':
        cout << "Your result is " << (num1 * num2);
        break;
        
        default:
        cout << "enter a valid operator.";
    }
    


    return 0;
}
