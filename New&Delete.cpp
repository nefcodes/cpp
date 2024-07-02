#include<iostream>


/*
	new operator doesn't require the size.
	syntax:	new dtype (essentially returns an address, since pointer can only store addresses).
	memory that is allocated must be freed with delete.
*/
using namespace std;

int main() {
	int* p = new int; // create a memory location on the heap for int type 
					//and store the address in pointer p
					// you can also initialise memory as  --    int * p = new int(12);
	*p = 12;
	cout << *p;
	delete p;

	return 0;
}

// New not only allocates but also initialize which malloc and calloc can't.
// new can also call constructor, malloc can't.
