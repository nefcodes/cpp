#include<iostream>

using namespace std;

int main() {
  int x = 10;
  
  int *ptr = &x; // initialize a pointer with the address of x
  
  *ptr = 11; // assign 11 at the address of the pointer.
  
  cout << x << "\n \n";
  
  
    void *ptrz = nullptr; // init a poitner to 0
    cout << ptrz // but you cant *ptrz (read the address of a nullpointer) // neither can you set value to a nullptr
    
    
}
