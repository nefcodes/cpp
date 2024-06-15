// ------------------------------  Factorial program ------------------------------

#include<iostream>

using namespace std;

int facto (int x) {
    int sum{1};
    int i{};
    for (i=1; i<=x; i++) {
        sum = sum * i;
    }
    cout << sum << endl;
    return sum;
}

int main (){
    int x;
    cout << "Enter the value for a factorial: " << endl;
    cin >> x;
    cout << "\nFactorial is: " << endl;
    facto (x);
    return 0;
}
