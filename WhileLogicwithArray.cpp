#include<iostream>
#include<vector>

using namespace std;

int main () {
    
    vector<int> myVector;
    int input;
    
    cout << "Enter the value in integers:";
    cin >> input;
    
    while (input >=0) {
        myVector.push_back(input);
        cout << "Enter only positive integer: " << endl;
        cin >> input;
    }
    
    cout << "----------------- The program has completed ---------------" << endl;
    cout << "Your array is: " << endl;
    
    for (int item: myVector) {
        cout << item << ", ";
    }

    return 0;
}
   
