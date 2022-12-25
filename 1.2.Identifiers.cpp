/******************************************************************************
Identifiers:

- Identifier is used to uniquely identify/name the programming entities (variables, class, objects, functions etc)
- In C++, as it is case sensitive - identifiers which differs in case are considered two different identifiers
    VAR is not same as var/Var/VAr/vaR/vAR etc
- Valid identifier contains a sequence of characters, digits and/or underscore(_)
- Identifiers shall always begin with characters, or underscores
- Identifiers should not be begin with digits
- No other special characters to be included
- Identifiers, which begin with underscore mainly used to declare compiler specific keywords
- Keywords can not be used as identifiers
- Maximum length for the identifier name is 2048 characters

*******************************************************************************/
#include "iostream"

using namespace std;

int main()
{
    cout<<"Identifiers :.............. "<<endl;
    int ivar = 10;
    char _cvar = 'a';
    string abjflfksjcksjhfocjfshccsha808908908908098080jhacjkshcsajfjch12345678899999999999999999999999999999999999 = "Hello";
    cout<<ivar<<" "<<_cvar<<" "<<abjflfksjcksjhfocjfshccsha808908908908098080jhacjkshcsajfjch12345678899999999999999999999999999999999999<<endl;
    
    // error: unable to find numeric literal operator ‘operator""value’
    // int 10value = 10; // Identifier can nto start with a digit
     
    int var__var__var =20;
    cout<<var__var__var<<endl;
    
    // error: expected unqualified-id before ‘if’
    // int if =20; // keyword if can not be used as identifier
    
    int __var = 44;
    cout<<__var<<endl;
    
    return 0;
}
