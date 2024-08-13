// I don't completely understand this.
#include<iostream>
#include<fstream> //when working with reading or writing files

using namespace std;

void showState(fstream& f) {

	cout << "eofbit state: " << f.eof() << endl;
	cout << "failbit state: " << f.fail() << endl;
	cout << "badbit state: " << f.bad() << endl;
	cout << "goodbit state: " << f.good() << endl;
	f.clear();
}


int main() {


	//ios::eof bit      oef()             gets set when you get to the end of the file
	//ios::failbit      fail()            when attempted operation is failed
	//ios::badbit       bad()             set when an invalid operation has occurred 
	//ios::goodbit      good()            when all the above are not set its good
	//clear()
						  
	fstream f("data", ios::out);
	f << 89 << endl;
	f << 26 << endl;
	f << 78 << endl;

	showState(f); //calls the showstate function with f as argument
	f.close();

	f.open("data", ios::in);

	int x;
	 
	while (f >> x) { // right shift f by x bits and returns a boolen true for 1 false for zero
		cout << x << "\n";
		}
	f.close();
	showState(f);

	f.close();

	f.open("data", ios::in);
	f >> x;
	cout << x << endl;

	showState(f);

	f.close();

	f.open("data", ios::out);

	showState(f);
	f.clear(ios::failbit);
	showState(f);

	f.close();
		
	return 0;

}
