/******************************************************************************
String - non scalar type
- const char*
- Default allocated size is 4 bytes
*******************************************************************************/
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string str = {'B','e','n','g','a','l','u','r','u'}; // default size is 4 bytes
    cout<<str<<endl;
    cout<<sizeof(str)/sizeof(str[1])<<endl;
    
    for(int i=0;str[i]!='\0';i++)
        cout<<str[i]<<" ";
    cout<<endl;
    
    string str1="Dharawad";
    cout<<sizeof(str1)<<endl;
    
    cout<<str1<<endl;
    return 0;
}
