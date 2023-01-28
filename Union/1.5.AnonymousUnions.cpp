#include <iostream>
#include "C:\Users\user\Source\Repos\ConsoleApplication1\SourceHeader.h"

using namespace std;

/*
Anonymous Union:
	An anonymous union is an unnamed union definition that does not simultaneously define any variables

Declaration:
	union { member-specification } ;		

Restrictions:
	- They cannot have member functions
	- cannot have static data members
	- all their data members must be public. 
	- The only declarations allowed are non-static data members and static_assert declarations
*/

/* Error: an anonymous union at global or namespace scope must be declared static
union
{
	int i;
	const char* p;

};
*/

// anonymous unions declared as a static if it is declared in the global scope 
static union
{
	int k;
	long l;
	int i;
};


void Union()
{
	// anonymous union declared within function scope(not global/namespace scope)
	union
	{
		int i;
		const char* p;
		int k; // There is a conflict between global unions member k. Still,no errors 
		/* member function not allowed in anonymous union
		void Display()
		{
			cout << "Display Function is called";
		};
		*/
	};
	
	/*
	union
	{
		int i; // redeclared and gives compilation error
		int m;
	};
	*/

	i = 10;
	cout << i << endl;
	cout << k << endl;
	k = 55;
	cout << i << endl;
	cout << k << endl;
	return;
}
