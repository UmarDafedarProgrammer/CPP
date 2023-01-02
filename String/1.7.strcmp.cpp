/******************************************************************************
Functions:
C string functions
1. strcmp(s1, s2); // Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2. 

- Its ASCII value comparison in chronological order

Possible outcomes : (-1,0,1)

1. if both the strings are same then function returns zero
2. if there is a difference between the strings, then first character difference will be compared and result is returned
3. -1 - s1 is smaller than s2
4. 1 - s2 is smaller than s1

*******************************************************************************/
#include <iostream>
#include <cstring>

using namespace std;


int main()
{
    cout<<"SCENARIO : Both string are of same length and same strings"<<endl;
    char str1[10] = "ABCDEFGHI", str2[10]="ABCDEFGHI";
	
	int strcmprson = strcmp(str1,str2); 
    if(strcmprson == 0 )
    {
    	cout<<"LOG: Both the strings are same"<<endl;	
		cout<<"LOG: str1 *"<<str1<<" "<<strlen(str1)<<endl;
		cout<<"LOG: str2 *"<<str2<<" "<<strlen(str2)<<endl;
	}
    else
    {
    	cout<<"Strings are not same"<<endl;
    	if(strcmprson>0)
    	{
    		cout<<"LOG: "<<"str1 is greater than str2 "<<endl;
		}
		else
		{
			cout<<"LOG: "<<"str1 is Smaller than str2 "<<endl;
		}
    	cout<<"LOG: str1 *"<<str1<<" "<<strlen(str1)<<endl;
		cout<<"LOG: str2 *"<<str2<<" "<<strlen(str2)<<endl;
	}
	
	cout<<"SCENARIO : Both string are of same length and Differ in characters"<<endl;
	char str3[10] = "ABCDABCDE", str4[10] = "ABCDEFGHI";
	strcmprson = strcmp(str3,str4);
	if(strcmprson == 0 )
    {
    	cout<<"LOG: Both the strings are same"<<endl;	
		cout<<"LOG: str3 *"<<str3<<" "<<strlen(str3)<<endl;
		cout<<"LOG: str4 *"<<str4<<" "<<strlen(str4)<<endl;
	}
    else
    {
    	cout<<"Strings are not same"<<endl;
    	if(strcmprson>0)
    	{
    		cout<<"LOG: "<<"str3 is greater than str4 "<<endl;
		}
		else
		{
			cout<<"LOG: "<<"str3 is Smaller than str4 "<<endl;
		}
    	cout<<"LOG: str3 *"<<str3<<" "<<strlen(str3)<<endl;
		cout<<"LOG: str4 *"<<str4<<" "<<strlen(str4)<<endl;
		cout<<strcmprson<<endl<<endl;
	}
	
	cout<<"SCENARIO : Both string are of same length and Differ in characters"<<endl;
	char str5[10] = "ABCDEFGHI", str6[10] = "ABCDABCDE";
	strcmprson = strcmp(str5,str6);
	if(strcmprson == 0 )
    {
    	cout<<"LOG: Both the strings are same"<<endl;	
		cout<<"LOG: str5 *"<<str5<<" "<<strlen(str5)<<endl;
		cout<<"LOG: str4 *"<<str6<<" "<<strlen(str6)<<endl;
	}
    else
    {
    	cout<<"Strings are not same"<<endl;
    	if(strcmprson>0)
    	{
    		cout<<"LOG: "<<"str5 is greater than str6 "<<endl;
		}
		else
		{
			cout<<"LOG: "<<"str5 is Smaller than str6 "<<endl;
		}
    	cout<<"LOG: str5 *"<<str5<<" "<<strlen(str5)<<endl;
		cout<<"LOG: str4 *"<<str6<<" "<<strlen(str6)<<endl;
		cout<<strcmprson<<endl<<endl;
	}
	
	cout<<"SCENARIO : Strings are of different length and Differ in characters"<<endl;
	char str7[10] = "ABCDEFGHI", str8[6] = "ABCDZ";
	strcmprson = strcmp(str7,str8);
	if(strcmprson == 0 )
    {
    	cout<<"LOG: Both the strings are same"<<endl;	
		cout<<"LOG: str5 *"<<str7<<" "<<strlen(str7)<<endl;
		cout<<"LOG: str4 *"<<str8<<" "<<strlen(str8)<<endl;
	}
    else
    {
    	cout<<"Strings are not same"<<endl;
    	if(strcmprson>0)
    	{
    		cout<<"LOG: "<<"str7 is greater than str8 "<<endl;
		}
		else
		{
			cout<<"LOG: "<<"str7 is Smaller than str8 "<<endl;
		}
    	cout<<"LOG: str7 *"<<str7<<" "<<strlen(str7)<<endl;
		cout<<"LOG: str8 *"<<str8<<" "<<strlen(str8)<<endl;
		cout<<strcmprson<<endl<<endl;
	}
	return 0;
}
