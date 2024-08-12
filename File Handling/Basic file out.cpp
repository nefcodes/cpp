#include<iostream> // cout, cin
#include<iomanip> //setprecision, setw, fixed, showpoint, left, right
#include<fstream> // to deal with files

using namespace std;
 
int main() {
	ofstream fout; //allows you to create .txt files

	//attempt to open the file
	fout.open("output");

	//verify it opens
	if (fout.is_open()) {

		fout << setprecision(3) << fixed << 8.675309;
		fout << setw(8) << 8 << setw(8) << 9 << setw(8) << 7 << "\n";
		fout << setw(4) << left << 10 << setw(4) << right << 12 << setw(4) << right << 20 << "\n"; // create a column of 4 width and left or right allign
		fout.close();
		//process and close

	}
	else {
		// print error
		cout << "oh no there is an error!";
	}
}