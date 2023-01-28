#include <iostream>

using namespace std;


/*
Union:
	Union is a user defined data type
	Union can hold only one of its non-static data members at a time.
	The union is at least as big as necessary to hold its largest data member, but is usually not larger
	The other data members are intended to be allocated in the same bytes as part of that largest member
	It is undefined behavior to read from the member of the union that wasn't most recently written

	Declaration:
	union attr class-head-name { member-specification }

	A union can have member functions (including constructors and destructors), but not virtual functions.
	A union cannot have base classes and cannot be used as a base class.
	A union cannot have non-static data members of reference types.
	
	Just like in struct declaration, the default member access in a union is public.
	Each member is allocated as if it is the only member of the class.

*/
void Union()
{
	cout << "Union Data Type \n";
	union Data
	{
		int i;
		float f;
		char c;
		long long l;
	};

	Data d;
	d.i = 98;
	cout << d.i <<" "<<d.f<<" "<<d.c<<" "<<d.l<< endl;
	d.c = 559;
	cout << d.i << " " << d.f << " " << d.c << " " << d.l << endl;
	cout << "Size of the Union " << sizeof(Data) << endl;
	cout << "Size of int " << sizeof(int) << endl;
	cout << "Size of long " << sizeof(long long) << endl;
	return;
}
