/*
	Pointer to Pointer
	A pointer which is poiting to another pointer variable
	** -> To dereference the value pointed by pointer which is being pointed by another variable
	
*/

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	int i=101; // integer variable i
	int* ptr = &i; // Pointer ptr is pointing to integer variable i
	int** ptrToptr = &ptr; // Pointer to pointer
	cout<<"Value of i :"<<i<<" Address of i:"<<&i<<endl;
	cout<<"Value of ptr:"<<ptr<<" Value Pointer by ptr:"<<*ptr<<" Address of pointer ptr:"<<&ptr<<endl;
	cout<<"Value of ptrToptr:"<<ptrToptr<<" Value pointed by ptrToPtr:"<<*ptrToptr<<" Address of pointer ptrToptr:"<<&ptrToptr<<endl;
	cout<<"Print the value of i using ptrToptr:"<<**ptrToptr<<endl;
	cout<<"Type of i:"<<typeid(i).name()<<endl;
	cout<<"Type of ptr:"<<typeid(ptr).name()<<endl;
	cout<<"Type of ptrToptr:"<<typeid(ptrToptr).name()<<endl;
	return 0;
}
