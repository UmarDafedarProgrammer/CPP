/*
Return Pointer from a function
*/

#include <iostream>
#include <typeinfo>

using namespace std;

int* ReturnAPointer()
{
	cout<<"ReturnAPointer : Function is called"<<endl;
	int Var = 10;
	cout<<"ReturnAPointer : Address of Var "<<&Var<<endl;
	
	// return &Var; // [Warning] address of local variable 'Var' returned [-Wreturn-local-addr]
	
	// int* vPtr = &Var; Still Returning the address of a variable created on the stack. Which will be cleared while function unwinding
	
	int* vPtr = new int(45);
	
	return vPtr;
}

int main()
{
	cout<<"Main : Function is called "<<endl;
	int* ptr;
	
	ptr=ReturnAPointer();
	cout<<"Main : "<<*ptr<<endl;
	*ptr = 30;
	cout<<"Main : "<<*ptr<<endl;
	return 0;
}
