#include <iostream>
#include "C:\Users\user\Source\Repos\ConsoleApplication1\SourceHeader.h"

using namespace std;


/*
Union Having different types of variables as a data member:
	- Just like in struct declaration, the default member access in a union is public.
	- If the member variables of different type like string, int, vector,array then destructor will  be deleted and we need to explicitly provide the destructor
	- If members of a union are classes with user-defined constructors and destructors, to switch the active member, 
		explicit destructor and placement new are generally needed
		Error: 'Day': destructor was implicitly defined as deleted.
			 : 'Day::~Day': cannot define a compiler-generated special member function (must be declared in the class first)
	- The lifetime of a union member begins when the member is made active. If another member was active previously, its lifetime ends.
*/

union Day
{
	string DayName;
	int DayNumber;
	~Day(); // Explicitly need to be declared as the member data types of completely different data type string and int
};

Day::~Day()
{
	cout << "Destructor is called" << endl;
}

void Union()
{
	cout << "Union function is called" << endl;
	Day week = { "Monday" };
	cout << "Name of the weekday, " << week.DayName << endl;
	cout << "Number of the weekday, " << week.DayNumber << endl;
	week.DayName.~basic_string();
	week.DayNumber = 1;
	cout << "Name of the weekday, " << week.DayName << endl;
	cout << "Number of the weekday, " << week.DayNumber << endl;
	week.DayNumber.~int();
	return;
}
