/******************************************************************************
Functions:
C string functions
1. strchr(s1, ch); // Returns a pointer to the first occurrence of character ch in string s1.

If no character is found then returns a null pointer

*******************************************************************************/
#include <iostream>
#include <cstring>

using namespace std;


int main()
{
    cout<<"SCENARIO : Returns the pointer to the first occurence of character in string"<<endl;
    char str1[10] = "ABCDEFGHI", str2='C';
    char* ptr_init = &str1[0];
    cout<<ptr_init<<endl;
	for(int i=0;i<strlen(str1)+1;i++)
		cout<<str1[i]<<" - "<<*(str1+i)<<" - "<<(str1+i)<<" - "<<&str1[i]<<endl;
	
	char* ptr=strchr(str1,str2);
	cout<<*ptr<<" - "<<ptr<<" - "<<&ptr<<endl;
	cout<<"If the character is not present in the string"<<endl;
	ptr = strchr(str1,'z');
	if( ptr == NULL)
		cout<<"It is a null pointer"<<endl;
	else
		cout<<*ptr<<" - "<<ptr<<" - "<<&ptr<<endl;
	return 0;
}
