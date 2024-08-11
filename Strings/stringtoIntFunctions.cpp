#include<iostream> // used for => cin, cout
#include<cstdlib> //used for => atoi, atof, atol
#include<string> // used for converting string data type to numbers	


using namespace std;
// atoi() expects c style string => then it returns an int. Similarly atof expects float, atol = long

int main() {

	char num[] = "123"; // this is just a char array
	int num2;
	num2 = atoi(num);

	cout << num2 << endl;

	//---------------- String to double
	double d;
	string line = "5781";
	d = stod(line);

	cout << d << endl;
	d = d + 10;   // testing out if it converted to double.

	cout << d;

	line = to_string(d); //  converts num to string
	line = line + "Doesn't  matter"; // string concatenation very easy
	cout << "\n" << line;


	return 0;

}