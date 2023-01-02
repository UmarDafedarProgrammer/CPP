/******************************************************************************
Functions:
C string functions
1. strcpy(s1, s2); // Copies string s2 into string s1.
*******************************************************************************/
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    cout<<"SCENARIO:"<<" strcpy - Both the strings of same size"<<endl;
    char str[7] = "Chrome",str2[6]="Cream";
    cout<<"LOG:str *"<<str<<" Size: "<<sizeof(str)<<endl;
    cout<<"LOG:str2 *"<<str2<<" Size: "<<sizeof(str2)<<endl;
    strcpy(str,str2);
    cout<<"LOG:str *"<<str<<" Size: "<<sizeof(str)<<endl;
    cout<<"LOG:str2 *"<<str2<<" Size: "<<sizeof(str2)<<endl<<endl;
    
    cout<<"SCENARIO:"<<" strcpy - Source string is smaller than dest string"<<endl;
    char str1[7] = "Chrome",str21[4]="Cup";
    cout<<"LOG:str1 *"<<str1<<" Size: "<<sizeof(str1)<<endl;
    cout<<"LOG:str21 *"<<str21<<" Size: "<<sizeof(str21)<<endl;
    strcpy(str1,str21);
    cout<<"LOG:str1 *"<<str1<<" Size: "<<sizeof(str1)<<endl;
    cout<<"LOG:str21 *"<<str21<<" Size: "<<sizeof(str21)<<endl<<endl;
    
    cout<<"SCENARIO:"<<" strcpy - Source string is greater than dest string"<<endl;
    char str3[7] = "Chrome",str4[8]="Greater";
    cout<<"LOG:str3 *"<<str3<<" Size: "<<sizeof(str3)<<endl;
    cout<<"LOG:str4 *"<<str4<<" Size: "<<sizeof(str4)<<endl;
    strcpy(str3,str4);
    cout<<"LOG:str3 *"<<str3<<" Size: "<<sizeof(str3)<<endl;
    cout<<"LOG:str4 *"<<str4<<" Size: "<<sizeof(str4)<<endl<<endl;
    
    cout<<"SCENARIO:"<<" strcpy - Source string is smaller than dest string"<<endl;
    char str5[6] = "Chrom",str6[8]="Greater";
    cout<<"LOG:str5 *"<<str5<<" Size: "<<sizeof(str5)<<endl;
    cout<<"LOG:str6 *"<<str6<<" Size: "<<sizeof(str6)<<endl;
    strcpy(str6,str5);
    cout<<"LOG:str5 *"<<str5<<" Size: "<<sizeof(str5)<<endl;
    cout<<"LOG:str6 *"<<str6<<" Size: "<<sizeof(str6)<<endl;
    str6[5]='a';
    cout<<"LOG:str5 *"<<str5<<" Size: "<<sizeof(str5)<<endl;
    cout<<"LOG:str6 *"<<str6<<" Size: "<<sizeof(str6)<<endl<<endl;
    
    return 0;
}
