/******************************************************************************
Functions:
C string functions
1. strcat(s1, s2); // Concatenates string s2 onto the end of string s1.
*******************************************************************************/
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    cout<<"SCENARIO:"<<" strcat - Concatenates the string to another string"<<endl;
    char str[7] = "Chrome",str2[6]="Cream";
    cout<<"LOG:str *"<<str<<" Size: "<<sizeof(str)<<endl;
    cout<<"LOG:str2 *"<<str2<<" Size: "<<sizeof(str2)<<endl;
    strcat(str,str2);
    cout<<"LOG:str *"<<str<<" Size: "<<sizeof(str)<<endl;
    cout<<"LOG:str2 *"<<str2<<" Size: "<<sizeof(str2)<<endl<<endl;
    
    cout<<"SCENARIO:"<<" strcat - Concatenates the string to another string literal"<<endl;
    char str3[7] = "Chrome";
    cout<<"LOG:str3 *"<<str3<<" Size: "<<sizeof(str3)<<endl;
    strcat(str3," Browser");
    cout<<"LOG:str3 *"<<str3<<" Size: "<<sizeof(str3)<<endl<<endl;
    
    return 0;
}
