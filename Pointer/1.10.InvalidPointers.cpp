/*
Invalid Pointers:
	Pointers are called invalied if they are not initialized
	In array, if the pointer is pointing to a memory address beyond the range then it is called invalid pointer
	Invalid pointers not necessarily generate compilation errors
*/

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	int* ptr; // ptr is not initialized and not pointing to correct memory address. Will have junk values
	cout<<ptr<<" "<<*ptr<<endl; // Having a junk value in it as it is not initialized. Invalid access
	
	int array1[10] = {1,2,3,4,5,6,7,8,9,10};
	int* invalidptr = array1+12; // Pointer array1+12 is pointing to the memory address beyond the range. Invalid access of the memory
	
	cout<<invalidptr<<" "<<*invalidptr<<endl;
	return 0;
}
