#include<iostream>
#include<string>

using namespace std;

int main() {

	// string length function
	string text = "this";
	int length1 = text.size(); // will save 4
	int length2 = text.length(); //also 4

	cout << length1 << endl;
	cout << length2 << endl;

	//string append
	text.append(" furthermore....");

	//append 2nd form
	text.append(4, '*');

	cout << text << endl;

	// at method
	cout << ".at: " << text.at(0) << endl;
	cout << "[0]: " << text[0] << endl;

	// last character of the string
	cout << "last chara: " << text.back() << endl;

	//first character of the string
	cout << "first chara: " << text.front() << endl;

	// pointer to a c style string
	const char* point_to_string = text.c_str();  // this returns a pointer to a c style string.
	cout << "This is the location of text string: " << point_to_string << endl; // oddly enough this should give address. but it gives dereference.

	//clear the string
	text.clear();
	cout << "clear string: " << text;

	//strimg compare => .compare()  return 1 or -1
	string first = "A";
	string second = "B";

	int comparison = second.compare(first); // should return 1 if second comes before first,
	cout<< endl << "This is the comparison: " << comparison << endl;

	// Swap method
	first.swap(second);
	cout << "swapping words: " << first << second << endl;

	//erase certain parts (starting, no. of chara to delete)
	text = text + first;
	cout<< "This is the latest " << text << endl;
	text.erase(1, 3);
	cout << "This is erasing 3 characters from 1st position: " << text << endl;

	//find in a string
	string e = "Example";
	cout << "l in example is in: " << e.find('l', 0) << endl; //find e and start from 0th position;

	// insert in a string
	cout << e.insert(3, "8") << endl;




	cout << "\n\n\n\n\n";
	return 0;

}