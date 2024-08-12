#include<iostream> // cout, cin
#include<fstream> // to deal with files
#include<string>

using namespace std;
 

bool openFile(ofstream&, string);

void writeToFile(ofstream&, string);

int main() {
	ofstream fout;

	bool result = openFile(fout, "output.txt");

	if (result == true) {
		writeToFile(fout, "hello, everynyan!");
	}
	else {
		cout << "Error! file failed to open! \n"; 
	}




		return 0;
}

bool openFile(ofstream& fout, string fileName) {
	fout.open(fileName);

	if (fout.is_open()) {
		return true;
	}
	else {
		return false;
	}
}

void writeToFile(ofstream& fout, string str) {
	fout << str;
	fout.close();
}
