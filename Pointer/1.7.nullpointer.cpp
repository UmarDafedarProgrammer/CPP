/*
Null pointer
	Null pointer does not point to any valid address
	Null pointer can be created by assigning value NULL/0
	
	Type* ptr = NULL;
	Type* ptr = 0;
	Type* nptr = nullptr;
	
	Derefencing a null pointer is undefined behavior
	
*/

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	int* ptr = nullptr;
	int* nptr = NULL;
	int* ptr0 = 0;
	
	cout<<*ptr<<" "<<*nptr<<" "<<ptr0<<endl;
	
	return 0;
}
