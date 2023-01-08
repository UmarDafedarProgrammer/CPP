/*
Size of the pointer type:
	- Size of the pointer depends up on the processor
	- For the 32 bit processor, the size is 4 bytes
	- For the 64 bit processor, the size is 8 bytes
*/
#include <iostream>

using namespace std;


int main()
{
	int* ptr = NULL;
	char* cptr = NULL;
	string* sptr = NULL;
	int** iptr = &ptr;
	cout<<"Sizeof integer pointer	:"<<sizeof(ptr)<<endl;
	cout<<"Sizeof character pointer	:"<<sizeof(cptr)<<endl;
	cout<<"Sizeof pointer pointer	:"<<sizeof(iptr)<<endl;
	cout<<"Sizeof String pointer	:"<<sizeof(sptr)<<endl;
	return 0;
}
