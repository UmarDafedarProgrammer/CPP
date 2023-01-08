/*
Pointer comparisons
	== , !=, >, <, >=, <= are valid comparison operations allowed on pointer
	
*/

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	int var1 =10, var2 =30;
	int *ptr1=&var1, *ptr2=&var2;
	// Comparison operators
	if (ptr1 != ptr2)
		cout<<"true"<<endl;
	
	if(ptr1 == ptr2)
		cout<<"Both are equal"<<endl;
		
	if(ptr1 > ptr2)
		cout<<"ptr1 is holding the memory address greater than ptr2"<<endl;
	
	if(ptr1 < ptr2)
		cout<<"ptr1 is holding the memory address smaller than ptr2"<<endl;
	
	if(ptr1<= ptr2)
		cout<<"ptr1 is holding the memory address smaller than or equals to ptr2"<<endl;
	
	if(ptr1 >= ptr2)
		cout<<"ptr1 is holding the memory address greater than or equals to ptr2"<<endl;
	
	
	return 0;
}
