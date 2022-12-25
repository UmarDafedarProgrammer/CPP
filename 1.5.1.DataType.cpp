/******************************************************************************

Data Type:
    - Data Type specifies the type of information variable can hold
    - It also specifies the size of the memory to be allocated for the variable
    - It also specifies the type of operation that can be performed on the variable

1. Primitive Data Types
    - int, floating point numbers, character, boolean,double floating point, void
    
int :
    short -> short int -> short signed int -> 2 bytes (MSB is used for sign)
    unsigned short -> unsigned short int -> 2 bytes
    int -> signed -> signed int -> signed 4 bytes (MSB is used for sign)
    unsigned -> unsigned int -> 4 bytes
    long -> signed long -> long int -> signed long int -> 8 bytes (MSB is used for sign)
    unsigned long -> unsigned long int -> 8bytes
    long long -> signed long long -> long long int -> signed long long int -> 8/16 bytes (MSB is used for sign)
    unsigned long long -> unsigned long long int -> 8/16 bytes
    
    Default value is zero
    
character:
    - character used to store ASCII values
    - Requires one byte of data to store the information
    - its unsigned 1 byte
    - Implicit conversion between int and char is possible
    char -> signed char -> 1 byte (MSB is used for sign)
    unsigned char -> 1 byte

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    cout<<"Primitive / Built in Data types \n";
    cout<<"1. Integer data types"<<endl;
    // declare a type int. a is holding default value of 0 and b is initialized to 20
    int a,b =20;
    cout<<"a:"<<a<<" b:"<<b<<endl;
    
    auto c = b; // c like initialization
    auto d(b*20); // constructor initialization
    auto e {d}; // uniform initialization
    cout<<"c:"<<c<<" d:"<<d<<" e:"<<e<<endl;
    
    decltype(b) f=30.69; // decltype(expression) variable =value
    decltype(b) g(30.69);
    //decltype(b) h {30.69}; ERROR: narrowing conversion of ‘3.0690000000000001e+1’ from ‘double’ to ‘int’ [-Wnarrowing]
    decltype(b) h {int(30.60)}; //implicit conversion from float to int did not happen
    cout<<"f:"<<f<<" g:"<<g<<" h:"<<h<<endl;
    
    cout<<"Size of the integer data types"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"int :"<<sizeof(int)<<endl;
    cout<<"signed int :"<<sizeof(signed int)<<endl;
    cout<<"unsigned int :"<<sizeof(unsigned int)<<endl;
    cout<<"long int :"<<sizeof(long int)<<endl;
    cout<<"long :"<<sizeof(long)<<endl;
    cout<<"unsigned long int :"<<sizeof(unsigned long int)<<endl;
    cout<<"unsigned long :"<<sizeof(unsigned long )<<endl;
    cout<<"long long int :"<<sizeof(long long int)<<endl;
    cout<<"long long :"<<sizeof(long long)<<endl;
    cout<<"unsgined long long :"<<sizeof(unsigned long long)<<endl;

    cout<<"Default Value is zero "<<endl;

    cout<<"2. Character Data type"<<endl;
    char cc; // Default value is null
    cout<<"cc:"<<cc<<endl;
    cc=0; // 0 is the ascii value for null
    cout<<"cc:"<<cc<<"a"<<endl;
    cc=64;
    cout<<"cc:"<<cc<<"gmail.com"<<endl;
    int x=cc; // implicit conversion from char to int
    cout<<"x:"<<x<<" <-After the implicit conversion from char to int"<<endl;
    char cy = x; // implicit conversion from int to char
    cout<<"cy:"<<cy<<" <-After the implicit conversion from int to char"<<endl;
    signed char sc=130;
    cout<<"sc:"<<sc<<" <-Signed char can take values from -128 to 127"<<endl;
    cout<<"Size of character"<<endl;
    cout<<"-----------------"<<endl;
    cout<<"char: "<<sizeof(char)<<endl;
    cout<<"unsigned char: "<<sizeof(unsigned char)<<endl;
    cout<<"signed char: "<<sizeof(signed char)<<endl;
    cout<<"Default value is null"<<endl;
    
    return 0;
}
