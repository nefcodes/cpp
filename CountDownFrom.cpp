// ------------------- count down with recursion ---------------- 
#include<iostream>

using namespace std;
void countDownFrom(int x);

int main() {
    
    countDownFrom(5);
    
    return 0;
}

void countDownFrom(int x) {
    if (x >= 0) {
        cout << x << "..." << endl;
        countDownFrom(x - 1);
    }
}
