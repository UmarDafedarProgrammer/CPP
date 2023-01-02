/******************************************************************************
C String
- One dimensional array of characters followed by a null character
- While reading a string processor tries to read the characters till it finds a null character '\0'
- Length of the string is number of characters in array till the null character is identified
- '\0' - Null character, ASCII value is 0
*******************************************************************************/
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    cout<<"SECTION:"<<"Case1: Array Size is 8, Number of characters is 7 (less than the length)"<<endl;
    char cstring[8] = {'B','a','s','i','c','1','H'};
    cout<<"LOG:"<<cstring<<endl;
    int size = strlen(cstring); 
    cout<<"LOG:"<<"string length : "<<size<<endl;
    
    int arraysize = sizeof(cstring)/sizeof(cstring[0]);
    cout<<"LOG:"<<"Array size is : "<<size<<endl;
    // what ever might be the character array size, the length is considered till the null character
    cout<<endl;
    cout<<"SECTION:"<<"Case2: Array Size is 8, Number of characters is 7 and null character is included before the valid character"<<endl;
    char cstring1[8] = {'B','a','s','i','c','\0','H'};
    // Considers the number of characters before a first null character in the string
    cout<<"LOG:"<<cstring1<<endl;
    size = strlen(cstring1); 
    cout<<"LOG:"<<"string length : "<<size<<endl;
    arraysize = sizeof(cstring1)/sizeof(cstring1[0]);
    cout<<"LOG:"<<"Array size is : "<<size<<endl;
    cout<<endl;
    
    cout<<"SECTION:"<<"Case3: Array Size is 8, First character itself is null character"<<endl;
    char cstring2[8] = {'\0','B','a','s','i','c','\0','H'};
    cout<<"LOG:"<<cstring2<<endl;
    size = strlen(cstring2); 
    cout<<"LOG:"<<"string length : "<<size<<endl;
    arraysize = sizeof(cstring2)/sizeof(cstring2[0]);
    cout<<"LOG:"<<"Array size is : "<<size<<endl;
    cout<<endl;
    
    cout<<"SECTION:"<<"Case4: Array Size is 8, Include null character as the 8th character"<<endl;
    char cstring3[8] = {'B','a','s','i','c','F','A','\0'};
    cout<<"LOG:"<<cstring3<<endl;
    size = strlen(cstring3); 
    cout<<"LOG:"<<"string length : "<<size<<endl;
    arraysize = sizeof(cstring3)/sizeof(cstring3[0]);
    cout<<"LOG:"<<"Array size is : "<<size<<endl;
    cout<<endl;
    
    cout<<"SECTION:"<<"Case5: Array Size is 8, Include null character as the 9th character"<<endl;
    cout<<"LOG:"<<"error: too many initializers for ‘char [8]’"<<endl;
    cout<<endl;
    
    cout<<"SECTION:"<<"Case6: Array Size is not defined, Include null character as the 9th character"<<endl;
    char cstring4[] = {'B','a','s','i','c','S','T','R','\0'};
    cout<<"LOG:"<<cstring4<<endl;
    size = strlen(cstring4); 
    cout<<"LOG:"<<"string length : "<<size<<endl;
    arraysize = sizeof(cstring4)/sizeof(cstring4[0]);
    cout<<"LOG:"<<"Array size is : "<<size<<endl<<endl;
    
    cout<<"SECTION:"<<"Case6: Array Size is not defined, Initialize With empty initializer list"<<endl;
    char cstring5[] = {};
    cout<<"LOG:"<<cstring5<<endl;
    size = strlen(cstring5); 
    cout<<"LOG:"<<"string length : "<<size<<endl;
    arraysize = sizeof(cstring5)/sizeof(cstring5[0]);
    cout<<"LOG:"<<"Array size is : "<<size<<endl<<endl;
    
    cout<<"SECTION:"<<"Case6: Array Size is 8, Initialize With empty initializer list"<<endl;
    char cstring6[8] = {};
    cout<<"LOG:"<<cstring6<<endl;
    size = strlen(cstring6); 
    cout<<"LOG:"<<"string length : "<<size<<endl;
    arraysize = sizeof(cstring6)/sizeof(cstring6[0]);
    cout<<"LOG:"<<"Array size is : "<<size<<endl<<endl;
    
    return 0;
}

/*
OUTPUT:
SECTION:Case1: Array Size is 8, Number of characters is 7 (less than the length)
LOG:Basic1H
LOG:string length : 7
LOG:Array size is : 7

SECTION:Case2: Array Size is 8, Number of characters is 7 and null character is included before the valid character
LOG:Basic
LOG:string length : 5
LOG:Array size is : 5

SECTION:Case3: Array Size is 8, First character itself is null character
LOG:
LOG:string length : 0
LOG:Array size is : 0

SECTION:Case4: Array Size is 8, Include null character as the 8th character
LOG:BasicFA
LOG:string length : 7
LOG:Array size is : 7

SECTION:Case5: Array Size is 8, Include null character as the 9th character
LOG:error: too many initializers for ‘char [8]’

SECTION:Case6: Array Size is not defined, Include null character as the 9th character
LOG:BasicSTR
LOG:string length : 8
LOG:Array size is : 8

SECTION:Case6: Array Size is not defined, Initialize With empty initializer list
LOG:
LOG:string length : 0
LOG:Array size is : 0

SECTION:Case6: Array Size is 8, Initialize With empty initializer list
LOG:
LOG:string length : 0
LOG:Array size is : 0
*/
