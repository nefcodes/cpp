#include <iostream>
#include <vector>
    
using namespace std; 

int main() {
    vector <int> vec1;
    vector <int> vec2;
    
    //add 10 and 20 to vectors
    vec1.push_back(10); 
    vec1.push_back(20);
    
    //display vec1 with at method
    cout << "\nvector1:" << endl;
    cout << vec1.at(0) << endl;
    cout << vec1.at(1) << endl;
    cout << "\n The vector 1 has a size of: " << vec1.size() << " Elements" << endl;
    
    // add 100 and 200 to vector 2 with pushback
    vec2.push_back(76);
    vec2.push_back(79);
    cout << "\n Vector 2 is: " << vec2.at(0) << endl;
    
    //vector of vectors
    vector <vector<int>> vector2d;
    
    vector2d.push_back(vec1);
    vector2d.push_back(vec2);
    
    
    // Displaying vector of vectors
    cout << "\nThe 2d vector is: " << endl;
    cout << vector2d.at(0).at(0) << " " << vector2d.at(0).at(1) << endl;
    cout << vector2d.at(1).at(0) << " " << vector2d.at(1).at(1) << endl;
    
    return 0;
}
