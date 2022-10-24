// ch12numericDollarFormat.cpp : This file contains the 'main' function.
//

#include <iostream>
#include <string>
using namespace std;

string dollarFormat(string); // function prototype

int main()
{
    cout << "Chapter 12 Dollar Formatter by Kevin Bell\n\n";
	string input; // user input
	
	//get the dollar amount from the user
	cout << "Enter a dollar amount in the form of xxxxx.xx: ";
	cin >> input;

	//display the formatted dollar amount
	cout << "Formatted amount: " << dollarFormat(input) << endl;
	
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