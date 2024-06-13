//  ------------------------------------ Program to Concat Strings -------------------------------------  // 


#include<iostream>

using namespace std;

string concatStrings(string str1,  string str2);

int main()
{
    string firstName = "Tanishk";
    string lastName = "Shrivastava";
    string fullName = concatStrings(firstName, lastName);
    
    cout << "Hello, " << fullName;
    return 0;
}

string concatStrings(string str1, string str2) {
    return str1  + " " + str2;
}
