// ch12numericDollarFormat.cpp : This file contains the 'main' function.
//

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;

// Function prototypes
string dollarFormat(string);
string dollarFormat(double);

int main()
{
    cout << "Chapter 12 Dollar Formatter by Kevin Bell\n\n";
	double input = 76543.21;

	cout << fixed << showpoint << setprecision(2);
	cout << "Original value: " << input << endl;
	//cout << "Enter a dollar amount in the form of nnnnn.nn: ";
	//cin >> input;

	//display the formatted dollar amount
	cout << "Formatted amount: " << dollarFormat(input) << endl;
	
	system("pause");
	return 0;
} // end main


//**************************************************************
// Returns a $-formatted version of the input string.          *
//**************************************************************
string dollarFormat(string original)
{
	string formatted = original; // formatted string to return
	int decimalPos = formatted.find('.'); // position of decimal
	int pos = decimalPos; // position to insert commas

	while (pos > 3) // insert commas until pos is less than 3
	{
		pos -= 3; // move pos back 3 spaces
		formatted.insert(pos, ","); // insert comma
	} // end while loop
	formatted.insert(0, "$"); // insert dollar sign
	return formatted; // return formatted string
} // end dollarFormat


//**************************************************************
// Returns a $-formatted version of the input double.          *
//**************************************************************
string dollarFormat(double value) {

	//creat ostringstream oject
	ostringstream ostr;
	
	//set format flags
	ostr << fixed << setprecision(2);
	
	//insert value into stream
	ostr << value;
	
	//return formatted string
	return dollarFormat(ostr.str());
} // end dollarFormat
