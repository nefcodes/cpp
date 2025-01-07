#include<iostream>

using namespace std;

// Since linkedList requires creating nodes very often, we create a separate node class

// a node has a value to store and the pointer to next node.

class node {
public:
	int value;
	node* next;

	//example to implement with or without this->

	node(int value) {
		this->value = value; // when the constructor is called, an instance would be created,
							// and set the value attribute of that instance to the thing passed to the method argument

		next = nullptr; //in this example we didn't use next-> bcz there is not argument called "next" so its not vague.
						// you can keep next-> or not its okay here!
	}

	/*		node(int val) {
				value = val;
	}*/

};

class LinkedList {
					private:
						node* head;
						node* tail;
						int length;

					public:
						LinkedList(int value) {
							node* newNode = new node(value); // create the first node, with the value passed in the LinkedList(argument)
							// new created pointer "newNode" points to the first node

							head = newNode; // transfer the address stored in newnode to head, cuz both are pointers.
							tail = newNode;
							length = 1;

						}

						void printList() {
							node* temp = head;
							while (temp != head) {
								cout << temp->value << endl; // print the value temp is pointing to.
								temp = temp->next;  //change the temp pointer to it's next value. 
													// bcz a temp is pointing to a node and nodes have next value.
							}
						}

						void getHead() {
							cout << "Head is: " << head->value << endl;
						}
						void getTail() {
							cout << "Tail is: " << tail->value << endl;
						}
						void getLength() {
							cout << "Length is: " << length << endl;
						}

};


int main() {

	LinkedList* myLinkedList = new LinkedList(4);

	myLinkedList->getHead();
	myLinkedList->getTail();
	myLinkedList->getLength();


	myLinkedList->printList();

	return 0;
}

