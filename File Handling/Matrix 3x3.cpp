#include<iostream> // cout, cin
#include<iomanip> //setprecision, setw, fixed, showpoint, left, right
#include<fstream> // to deal with files

using namespace std;
 
int main() {
	ofstream fout; //allows you to create .txt files

	double matrix[][3] = {
		{12.5267, 6.1235, 71.2346}, 
		{62.1512, 16.1235, 62.1235}, 
		{13.2462, 27.1235, 84.1325}
	};

	//attempt to open the file
	fout.open("The Matrix");

	//verify it opens
	if (fout.is_open()) {

		fout << fixed
			<< setprecision(2);

		for (int r = 0; r < 3; r++) {
			for (int c = 0; c < 3; c++) {
				fout << setw(10) << right << matrix[r][c]; //right allign and set a soace of 10 characters for every field
			}
			fout << "\n"; // new line in text file
		}

	}
	else {
		// print error
		cout << "oh no there is an error!";
	}
}