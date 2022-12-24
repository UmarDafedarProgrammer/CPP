/******************************************************************************
Constant:
Declaration: 
    const <type> variable = value;
    or
    <type> const variable = value;

- Constant has to be initialized at the time of declaration
- Value can not be modified once declared
- Constant are the expressions with a fixed value
- literals are an example for constants
    - interger literals (integer constants) - ex: 1, 789, 0
    - float literals (real numbers)- ex: 1.2e10, 9.9e-20, 1.0, 3.222
    - character literals (characters)- ex: 'a', 'c', '9'
    - string literals (strings)- ex: "Hello", "Umar Dafedar"
    - Three keyword literals exist in C++
        - true, false, nullptr
    - pointers

- integer literal constants:
    - Decimal Numbers - ex:789
    - Octal Numbers(Stat with 0) - ex: 0898
    - Hexadecimal Numbers (starts with 0x) - ex:0x567
    - By default, all integer literal constants are of type int. However, you can use suffix to modify the type
        - U - unsigned int
        - L - long
        - UL - unsigned long
        - LL - long long
    - the suffix can be specified using either upper or lowercase letters.
    
- Floting literal constants
    - F - float
    - L - long double

- Character literals are presented in a single quote
    Prefix	Character type
    u	char16_t
    U	char32_t
    L	wchar_t
    u8	The string literal is encoded in the executable using UTF-8
    R	The string literal is a raw string

- string literals are enclosed in double quotes and by default end with null
- true, false and nullptr are keyword literals
*******************************************************************************/
#include <iostream>

using namespace std;

int
main ()
{
  // declare a const variable without initialization
  // ERROR: uninitialized const ‘cvarnotinit’ [-fpermissive]
  // const int cvarnotinit;
  
  // declare a const variable of type int and initialize it
  const int cint = 10;
  
  cout<<"value of a const variable cint$ "<<cint<<endl;
  
  // ERROR: assignment of read-only variable
  // cvar =30;
  
  char const cchar = 'a';
  cout<<"value of char constant assigned is$ "<<cchar<<endl;
  
  char const cchar2 = u'a';
  cout<<"value of char constant assigned is$ "<<cchar2<<endl;
  
  float const cfloat = 3.2e12;
  cout<<"value of float constat assigned is$ "<<cfloat<<endl;
  
  string const cname="Umar Dafedar";
  cout<<"Name of the coder$ "<<cname<<endl;
  
  int* const ptr =nullptr;
  cout<<"Address pointed by pointer ptr$ "<<ptr<<endl;
  return 0;
}
