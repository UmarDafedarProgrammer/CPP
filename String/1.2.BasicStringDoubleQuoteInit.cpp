/******************************************************************************
C String
- Initialize the string variable using double quote
*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    cout<<"SECTION:"<<"Case1: Array Size is 8, Number of characters is less than the size"<<endl;
    char str[8]="Hello";
    cout<<"LOG:"<<str<<endl;
    int size = strlen(str); 
    cout<<"LOG:"<<"string length : "<<size<<endl;
    int arraysize = sizeof(str)/sizeof(str[0]);
    cout<<"LOG:"<<"Array size is : "<<size<<endl;
    cout<<endl;
    
    cout<<"SECTION:"<<"Case2: Array Size is 8, Number of characters is 7, in between null character is included"<<endl;
    char str1[8]="Hello\0D";
    cout<<"LOG:"<<str1<<endl;
    // When we are giving the size of character array, 
    // the character string size should not exceed the size-1(Automatically consiered for null character at the end)
    size = strlen(str1); 
    cout<<"LOG:"<<"string length : "<<size<<endl;
    arraysize = sizeof(str1)/sizeof(str1[0]);
    cout<<"LOG:"<<"Array size is : "<<size<<endl<<endl;
    
    cout<<"SECTION:"<<"Case3: Array Size is 8, Number of characters is 8, in between null character is included"<<endl;
    cout<<"LOG:"<<"initializer-string for array of chars is too long [-fpermissive]"<<endl<<endl;
    
    cout<<"SECTION:"<<"Case4: Array Size is 8, Number of characters is 8, last character is null character mentioned explicitly"<<endl;
    cout<<"LOG:"<<"initializer-string for array of chars is too long [-fpermissive]"<<endl<<endl;
    
    cout<<"SECTION:"<<"Case5: Array Size is not mentioned, Number of characters is 8, last character is null character mentioned explicitly"<<endl;
    char str3[]="HelloDV\0";
    cout<<"LOG:"<<str3<<endl;
    size = strlen(str3); 
    cout<<"LOG:"<<"string length : "<<size<<endl;
    arraysize = sizeof(str3)/sizeof(str3[0]);
    cout<<"LOG:"<<"Array size is : "<<size<<endl<<endl;
    
    
    cout<<"SECTION:"<<"Case6: Array Size is not mentioned, Number of characters is 8, null character is included in between"<<endl;
    char str4[]="Hello\0DV";
    cout<<"LOG:"<<str4<<endl;
    size = strlen(str4); 
    cout<<"LOG:"<<"string length : "<<size<<endl;
    arraysize = sizeof(str4)/sizeof(str4[0]);
    cout<<"LOG:"<<"Array size is : "<<size<<endl<<endl;
    
    cout<<"SECTION:"<<"Case7: Array Size is not mentioned, Empty String"<<endl;
    char str5[]="";
    cout<<"LOG:"<<str5<<endl;
    size = strlen(str5); 
    cout<<"LOG:"<<"string length : "<<size<<endl;
    arraysize = sizeof(str5)/sizeof(str5[0]);
    cout<<"LOG:"<<"Array size is : "<<size<<endl<<endl;
    
    cout<<"SECTION:"<<"Case7: Array Size is 8, Initialized with Empty String"<<endl;
    char str6[8]="";
    cout<<"LOG:"<<str6<<endl;
    size = strlen(str6); 
    cout<<"LOG:"<<"string length : "<<size<<endl;
    arraysize = sizeof(str6)/sizeof(str6[0]);
    cout<<"LOG:"<<"Array size is : "<<size<<endl<<endl;
    
    return 0;
}

/*
OUTPUT:
SECTION:Case1: Array Size is 8, Number of characters is less than the size
LOG:Hello
LOG:string length : 5
LOG:Array size is : 5

SECTION:Case2: Array Size is 8, Number of characters is 7, in between null character is included
LOG:Hello
LOG:string length : 5
LOG:Array size is : 5

SECTION:Case3: Array Size is 8, Number of characters is 8, in between null character is included
LOG:initializer-string for array of chars is too long [-fpermissive]

SECTION:Case4: Array Size is 8, Number of characters is 8, last character is null character mentioned explicitly
LOG:initializer-string for array of chars is too long [-fpermissive]

SECTION:Case5: Array Size is not mentioned, Number of characters is 8, last character is null character mentioned explicitly
LOG:HelloDV
LOG:string length : 7
LOG:Array size is : 7

SECTION:Case6: Array Size is not mentioned, Number of characters is 8, null character is included in between
LOG:Hello
LOG:string length : 5
LOG:Array size is : 5

SECTION:Case7: Array Size is not mentioned, Empty String
LOG:
LOG:string length : 0
LOG:Array size is : 0

SECTION:Case7: Array Size is 8, Initialized with Empty String
LOG:
LOG:string length : 0
LOG:Array size is : 0


*/
