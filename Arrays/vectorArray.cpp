#include<iostream>
#include<array>

using namespace std;

int main () {
    array<int, 5> items;
    
    for (int i: items) {
        cout << i << "\n";
    }
    
    return 0;
}
