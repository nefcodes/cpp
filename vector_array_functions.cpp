#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main () {
    vector<string> names;
    
    names.push_back("Tony");
    names.push_back("kony");
    names.push_back("brownie");
    names.push_back("meowzie");
    names.push_back("muffler");
    
    // Inserting element in the vector array
    
    names.insert(names.begin() + 3, "Imposter");
    names.pop_back();
    
    for (string each_element: names) {
        cout << each_element << endl;
    }
    return 0;
}
