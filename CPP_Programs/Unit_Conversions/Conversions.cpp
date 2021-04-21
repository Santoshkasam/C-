#include <iostream>

// Importing headerfiles of all classes
#include"C_to_F.h"
#include"F_to_C.h"
#include"EU_to_US.h"
#include"US_to_EU.h"
#include"K_to_M.h"
#include"M_to_K.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int input = 0;
	char option = 0;

	// Creating objects of imported classes
	F_to_C a;
	C_to_F b;
	M_to_K c;
	K_to_M d;
	EU_to_US e;
	US_to_EU f;

	// Printing the features of the application
	cout << "Following are the options for conversions: " << endl;
	cout << "a. Fahrenheit to Celsius \n" << endl;
	cout << "b. Celsius to Fahrenheit \n" << endl;
	cout << "c. Miles to Kilometers \n" << endl;
	cout << "d. Kilometers to Miles \n" << endl;
	cout << "e. Euros to US Dollars  \n" << endl;
	cout << "f. US Dollars to Euros  \n" << endl;
	cout << "Q. Quit the application \n" << endl;
	
	// While loop to impliment the imput, calculation and output processes
	while (true)
	{
		cout << "\nPlease enter your desired option: "; 
		cin >> option;

		// This if statements breaks the loop if user enters 'Q' as their desired option
		if (option == 'Q')
		{
			break;
		}

		// If a valid option is choosed, request for Input is prompted
		cout << "Please enter the value you want to convert: ";
		cin >> input;
		
		// This switch statement impliments the desired conversion and prints the output
		switch (option)
		{
		case 'a': cout << "The converted value is: " << a.cal(input) << endl;
			break;
		case 'b': cout << "The converted value is: " << b.cal(input) << endl; 
			break;
		case 'c': cout << "The converted value is: " << c.cal(input) << endl;
			break;
		case 'd': cout << "The converted value is: " << d.cal(input) << endl;
			break;
		case 'e': cout << "The converted value is: " << e.cal(input) << endl;
			break;
		case 'f': cout << "The converted value is: " << f.cal(input) << endl;
			break;
		default:
			break;
		}

		
	}
}
