// FUNCTION POINTERS
#include<iostream>
using namespace std;


void print(int count, char ch) {
    for (int i = 0; i < count; ++i) {
        cout << ch;
    }
    cout << endl;
}

int main()
{
    print(5, '$'); // invoked normally
    
    void (*fptr_var)(int, char) = &print; // Create a variable "fptr_var" for pointer
                                           //     to store address of function 
    
    // 1. Method to invoke the function:
    (*fptr_var)(8, '1');
    
    // 2. Method
    fptr_var(5, '2');
    
    return 0;
}
