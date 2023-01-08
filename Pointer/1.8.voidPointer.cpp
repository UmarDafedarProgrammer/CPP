/*
void pointer:
	- A void pointer can hold the memory address of any type of variable
	- It does not have any associated data type with it
	- It can be typecasted to any type
	- malloc() and calloc() are the main use of void pointers
	- void pointers can not be dereferenced directly
	- void* keyword is used to declare a void pointer
	- pointer arithmetic is not allowed on the void pointer
	
*/

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	void* voidptr = NULL; // void null pointer
	// voidptr++; warning: ISO C++ forbids incrementing a pointer of type ‘void*’ [-Wpointer-arith]
	voidptr = new int(98); // void pointer pointing to a variable of type int. Since, data type is not associated with void pointer, you can not directly access it
	// cout<<*voidptr<<endl; [Error] 'void*' is not a pointer-to-object type
	// We can not directly dereference the pointers
	
	// Even though, voidptr pointing to integer variable, since we are converting it to char* pointer. The data pointed by voidptr is considered as character data
	char* ptr = (char*)voidptr; // 98 equivalent ASCII character will be considered
	
	cout<<*ptr<<endl;// b will be printed (character equivalent for the ASCII Code - 98)
	
	return 0;
}
