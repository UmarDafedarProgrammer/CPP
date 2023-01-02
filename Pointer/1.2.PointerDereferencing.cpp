/******************************************************************************
Derived Data Type
	- Derived data types are created using primitive data types
	- Pointer, Reference, Array,Function
	
Pointer -
	- Pointer data type stores the address of another variable
	- Size of Pointer data type depends on the processor. For 32 bit processor, it will be 4 byte
	  And for 64 bit processor, it will be 8 bytes
	- Data type has to be specified to identify which data type variable's address a pointer variable is storing
	- Pointer arithmentic is possible
	- Depends up on the data type, pointer variable is pointing to, increment/decrement by 1 increases with the number of bytes for the data type
	Ex: if pointer is pointing to char, Ptr+1 will point to next byte
		if pointer is pointing to int, Ptr+1 will point to the memory location after 4 bytes
	- The name of an array is a constant pointer, pointing to first element of an array
	- Pointers are needed to pass the values to the functions by reference
	- Unary operator - & is used to get the address of a variable
	- Unary Operatot - * is used to dereference the value from a pointer
	- NULL Specifies that, pointer is not poitning to any valid address
*******************************************************************************/
#include <iostream>
#include <cstring>

using namespace std;


int main()
{
	// Pointer ptr of data type int
	int *ptr = NULL; // NULL Pointer
	
	if(ptr == NULL)
		cout<<"LOG: Pointer is null"<<endl;
	else
		cout<<"LOG: Value pointed by ptr is #"<<*ptr<<endl; // dereferencing operator
	
	// Variable of type int with value 30
	int var = 30;
	
	// Assign address od var to ptr (ptr will be pointing to variable var)
	ptr = &var; // address of var(Reference)
	
	if(ptr == NULL)
		cout<<"LOG: Pointer is null"<<endl;
	else
		cout<<"LOG: Value pointed by ptr is #"<<*ptr<<endl<<"LOG: Address pointed by ptr is #"<<ptr<<endl<<"LOG: Address of a pointer variable ptr #"<<&ptr<<endl; // dereferencing operator
 	return 0;
}
