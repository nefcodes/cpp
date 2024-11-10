// HOW TO DYNAMICALLY ALLOCATE MEMORY FOR N NUMBER OF ITEMS IN AN ARRAY.

#include<iostream>

using namespace std;

int main() {

	int no_of_stu{}; // init to 0

	cout << "Enter the number of students: ";
	cin >> no_of_stu;

	// int studentIDs[no_of_stu];                           // might not run on some compilers, instead use
	int* studentIDs = new int[no_of_stu];


	for (int x = 0; x < no_of_stu; x++) {
		studentIDs[x] = x;

	}


	// go from 0th to no_of_stu th element of studentID array.
	for (int x = 0; x < no_of_stu;  x++) {
		cout << studentIDs[x] << ", ";
	}


	delete[] studentIDs;  // release the heap memory, very important or might lead to memory leak

	return 0;
}
