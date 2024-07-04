// ---------------- Sum of all array elements ----------------
#include<iostream>

using namespace std;

int SumArray(int xArray[], int ArraySize);

int main()
{   
    int newArray[]{2, 4, 6, 1, 5, 6, 1, 8};
    int sum = SumArray(newArray, 8);
    cout << sum;
    return 0;
}

int SumArray(int xArray[], int ArraySize) {
    int sum = 0;
    for (int i = 0; i < ArraySize; i++) {
        sum += xArray[i];
    }
    return sum;
}
    
