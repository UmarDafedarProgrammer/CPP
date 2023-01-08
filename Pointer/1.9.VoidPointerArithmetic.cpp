/*
void pointer arithmetic:
	The C standard doesn’t allow pointer arithmetic with void pointers. However, in GNU C it is allowed by considering the size of void is 1.
	
*/

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	void* voidptr = new int(78989); // void pointer
	cout<<"Value :"<<*(int*)voidptr<<" Address:"<<voidptr<<" Type:"<<typeid(voidptr).name()<<endl;
	voidptr++; // Incremented by 1
	cout<<"After incrementing the value by 1"<<endl;
	cout<<"Value :"<<*(int*)voidptr<<" Address:"<<voidptr<<endl;
	return 0;
}
