/******************************************************************************
character Data Types
char - 1 byte (signed)
char8_t - 1 byte (unsigned)
unsigned char - 1 byte (unsigned)
char16_t - 2 byte (unsigned)
char32_t - 4 byte (unsigned)
wchar_t - 4 byte (signed)
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    char c = 'a';
    char8_t c8 = 'z';
    signed char sc = 'b';
    unsigned char uc ='c';
    char16_t c16 = 'd';
    char32_t c32 = 'e';
    
    wchar_t wc = 'g';
    cout<<"cout :"<<c<<" "<<sc<<" "<<uc<<" "<<c16<<" "<<c32<<" "<<wc<<endl;
    // char16_t, char32_t, wchar_t will print ASCII values in cout
    wcout<<"wcout with wchar_t conversion :"<<c<<" "<<wchar_t(sc)<<" "<<wchar_t(uc)<<" "<<wchar_t(c16)<<" "<<wchar_t(c32)<<" "<<wc<<endl;
    cout<<"cout with wchar_t conversion :"<<c<<" "<<wchar_t(sc)<<" "<<wchar_t(uc)<<" "<<wchar_t(c16)<<" "<<wchar_t(c32)<<" "<<wc<<endl;
    
    cout<<"Size of the character values and The max and min"<<endl;
    cout<<"char  : "<<sizeof(c)<<" Range: "<<int(numeric_limits<char>::min())<<" "<<int(numeric_limits<char>::max())<<endl;
    cout<<"signed char  : "<<sizeof(sc)<<" Range: "<<int(numeric_limits<signed char>::min())<<" "<<int(numeric_limits<signed char>::max())<<endl;
    cout<<"unsigned char  : "<<sizeof(uc)<<" Range: "<<int(numeric_limits< unsigned char>::min())<<" "<<int(numeric_limits<unsigned char>::max())<<endl;
    cout<<"char16_t  : "<<sizeof(c16)<<" Range: "<<int(numeric_limits<char16_t>::min())<<" "<<int(numeric_limits<char16_t>::max())<<endl;
    cout<<"char32_t  : "<<sizeof(c32)<<" Range: "<<int(numeric_limits<char32_t>::min())<<" "<<int(numeric_limits<char32_t>::max())<<endl;
    cout<<"wchar_t  : "<<sizeof(wc)<<" Range: "<<int(numeric_limits<wchar_t>::min())<<" "<<int(numeric_limits<wchar_t>::max())<<endl;
    cout<<"char8_t  : "<<sizeof(char8_t)<<" Range: "<<int(numeric_limits<char8_t>::min())<<" "<<int(numeric_limits<char8_t>::max())<<endl;
    
    return 0;
}
