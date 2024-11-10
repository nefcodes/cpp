#include<iostream>

using namespace std;


// return int* (pointer) 
int* allocateMemory() {
	return new int;   //new int, this gives the memory location allocated by the heap.

}
int main() {
	int* x = allocateMemory();


	delete x;


	return 0;

}
