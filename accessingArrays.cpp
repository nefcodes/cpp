// Accessing Arrays with for loops & range based for loops

// #include<iostream>

// using namespace std;

// int main() {
//   int arr[]{1, 2, 3, 4, 5, 6};
   
//   for (int i = 0; i < 6; i++) {
//       cout << arr[i];
//   }
//   return 0;
// }

#include<iostream>

using namespace std;

int main() {
   int arr[] = {1, 2, 3};

    for (int item: arr) {
        cout << item << endl;
    }
   return 0;
}
