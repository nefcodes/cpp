#include<iostream>

using namespace std;

int main() {
   int y = 6;
   int z = 60;
   
   cout << ++y << endl; // Increase y before executing y = 7 and then executed;
   cout << y << endl; // y is still 7
   
   cout << z++ << endl; // increase z after execution of statement so this line gives 60
   cout << z << endl; // z was increased previously so now z is 61
   
   return 0;
}
