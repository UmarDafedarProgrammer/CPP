/******************************************************************************
Character Data Type

signe char -> char -> 1 byte -> MSB for identifying the sign
unsigne char -> 1 byte
*******************************************************************************/
#include <iostream>

using namespace std;


int main()
{
    char c; // Default value is null - '\0'
    cout<<"Without Initialization - c : "<<c<<endl;
    int i=c; // implicit conversion from char to int
    cout<<"ASCII equivalent default value for character -"<<i<<endl;
    
    c='a'; cout<<"c: "<<c<<endl;
    
    cout<<"Size of character "<<sizeof(char)<<endl; // 1 byte
    cout<<"Type of character "<<typeid(char).name()<<endl; //c for character
    cout<<"Range : "<<int(numeric_limits<char>::min())<<" to "<<int(numeric_limits<char>::max())<<endl;
    
    // float to char
    c = 94.37; cout<<"Assign 94.37 to character$ "<<c<<", ASCII$ "<<int(c)<<endl;
    c = 3.1e1; cout<<"Assign 3.1e1 to character$ "<<c<<", ASCII$ "<<int(c)<<endl;
    // c="s"; ERROR: invalid conversion from ‘const char*’ to ‘char’ [-fpermissive]
    
    cout<<endl;
    unsigned char uc='9';
    cout<<"ASCII equivalent value for character '9'$  "<<int(uc)<<endl;
    cout<<"Size of unsigned character "<<sizeof(uc)<<endl; // 1 byte
    cout<<"Type of unsigned character "<<typeid(uc).name()<<endl; //h for unsigned character
    cout<<"Range : "<<int(numeric_limits<unsigned char>::min())<<" to "<<int(numeric_limits<unsigned char>::max())<<endl;
    
    
    return 0;
}
