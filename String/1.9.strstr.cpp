/******************************************************************************
Functions:
C string functions
1. strstr(s1, s2); // Returns a pointer to the first occurrence of string s2 in string s1.

if s2 is not present in the s1 then null pointer is returned
*******************************************************************************/
#include <iostream>
#include <cstring>

using namespace std;


int main()
{
    cout<<"SCENARIO : Returns the pointer to the first occurence of string s2 in another string s1"<<endl;
    char s1[10] = "ABCDEFGHI", s2[3]="CD";
    char* ptr_init = &s1[0];
    cout<<ptr_init<<endl;
	for(int i=0;i<strlen(s1)+1;i++)
		cout<<s1[i]<<" - "<<*(s1+i)<<" - "<<(s1+i)<<" - "<<&s1[i]<<endl;
	
	char* ptr=strstr(s1,s2);
	cout<<*ptr<<" - "<<ptr<<" - "<<&ptr<<endl;
	ptr = strstr(s1,"EFGGHI");
	if( ptr == NULL)
		cout<<"It is a null pointer"<<endl;
	else
		cout<<*ptr<<" - "<<ptr<<" - "<<&ptr<<endl;
	return 0;
}
