/*
Pointer Arithmetic
	Since, the pointer type holds the address of another varible, arithmetic operations can be peroformed on the pointer variable
	Arithmetic operations are usefull in arrays to traverse the array
	Pointer arithmetic is meaningless unless performed on an array.
	+, -, +=, -=,  operations are valid
	
*/

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	int var1 =10, var2 =30;
	int *ptr1=&var1, *ptr2=&var2;
	
	cout<<"Pointer ptr1 is pointing to :"<<*ptr1<<" "<<&var1<<" "<<ptr1<<endl;
	cout<<"Pointer ptr2 is pointing to :"<<*ptr2<<" "<<&var2<<" "<<ptr2<<endl;
	
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	
	cout<<"Type of arr"<<typeid(arr).name()<<endl;
	
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" "<<&arr[i]<<" "<<(arr+i)<<" "<<*(arr+i)<<endl;
	}

	// array name is a pointer points to first element of an array and it is a constant pointer
	// arr++,arr-, arr+=, arr-=,arr*=, arr/= is not allowed
	// arr++; [Error] lvalue required as increment operand
	// cout<<*(arr * 2)<<endl; [Error] invalid operands of types 'int [10]' and 'int' to binary 'operator*'
	
	
	return 0;
}
