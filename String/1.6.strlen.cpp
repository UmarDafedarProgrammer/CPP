/******************************************************************************
Functions:
C string functions
1. strlen(s1); // Returns the length of string s1
// Length is the number of characters before the first null character encountered

*******************************************************************************/
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    cout<<"SCENARIO:"<<" strlen - Concatenates the string to another string"<<endl;
    char str[7] = "Chrome",str2[6]="Cream";
    cout<<"LOG:str *"<<str<<" Size: "<<strlen(str)<<endl;
    cout<<"LOG:str2 *"<<str2<<" Size: "<<strlen(str2)<<endl;
    strcat(str,str2);
    cout<<"LOG:str *"<<str<<" Size: "<<strlen(str)<<endl;
    cout<<"LOG:str2 *"<<str2<<" Size: "<<strlen(str2)<<endl<<endl;
    
    cout<<"SCENARIO:"<<" strlen - Concatenates the string to another string literal"<<endl;
    char str3[7] = "Chrome";
    cout<<"LOG:str3 *"<<str3<<" Size: "<<strlen(str3)<<endl;
    strcat(str3," Browser");
    cout<<"LOG:str3 *"<<str3<<" Size: "<<strlen(str3)<<endl<<endl;
    
    cout<<"SCENARIO:"<<" strlen - string conatains a null character in between"<<endl;
    char str5[20] = "Greater \0 Goods";
    cout<<"LOG:str5 *"<<str5<<" Size: "<<strlen(str5)<<endl;
    return 0;
}
