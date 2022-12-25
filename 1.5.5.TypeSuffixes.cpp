/******************************************************************************
Type Suffixes

 - By default, all integer literal constants are of type int. However, you can use suffix to modify the type
        - U - unsigned int
        - L - long
        - UL - unsigned long
        - LL - long long
    - the suffix can be specified using either upper or lowercase letters.
    
- Floting Numers
    - F - float
    - L - long double
- Character literals are presented in a single quote
    Prefix	Character type
    u	char16_t
    U	char32_t
    L	wchar_t
    u8	The string literal is encoded in the executable using UTF-8
    R	The string literal is a raw string

*******************************************************************************/
#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    int si=10u;
    unsigned int ui=20ul;
    cout<<"si: "<<si<<endl;
    cout<<"ui: "<<ui<<endl;
    cout<<"int          :"<<typeid(20).name()<<endl;
    cout<<"unsigned int :"<<typeid(20u).name()<<endl;
    cout<<"signed long  :"<<typeid(20l).name()<<endl;
    cout<<"unsigned long:"<<typeid(20ul).name()<<endl;
    cout<<"double       :"<<typeid(0.0d).name()<<endl;
    cout<<"float        :"<<typeid(0.0f).name()<<endl;
    
    return 0;
}
