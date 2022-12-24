/******************************************************************************
Escape sequence / Escape codes:

- These are used to represent certain special characters within string literals or character literals
\'	single quote	        byte 0x27 in ASCII encoding
\"	double quote	        byte 0x22 in ASCII encoding
\?	question mark	        byte 0x3f in ASCII encoding
\\	backslash	            byte 0x5c in ASCII encoding
\a	audible bell	        byte 0x07 in ASCII encoding
\b	backspace	            byte 0x08 in ASCII encoding
\f	form feed - new page	byte 0x0c in ASCII encoding
\n	line feed - new line	byte 0x0a in ASCII encoding
\r	carriage return	        byte 0x0d in ASCII encoding
\t	horizontal tab	        byte 0x09 in ASCII encoding
\v	vertical tab	        byte 0x0b in ASCII encoding

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    cout<<"Escape sequences "<<endl;
    
    cout<<"Print the Character S in singe quote$ \'S\'"<<endl;
    cout<<"Print the City Name in double quote$ \"Bangalore\""<<endl;
    cout<<"End the Question with ?Symbol$ \?"<<endl;
    cout<<"Audible bell \a"<<endl;
    cout<<"Directoy Name$ \\root\\user\\profile.txt"<<endl;
    cout<<"Backspace Check After \b $"<<"Backspace\b\bCheck"<<endl;
    cout<<"Form Feed \f Result Of Form Feed"<<endl;
    cout<<"line feed \n next line\n";
    cout<<"Starting here from the first \r Lets see what it is doi\n";
    
    cout<<"Horizontal tab"<<endl;
    cout<<"\twhat is happening"<<endl;
    cout<<"\v vertical tab"<<endl;
    
    return 0;
}

