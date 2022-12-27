/******************************************************************************
Character Array
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    // char c[10]="HelloWorld"; //error: initializer-string for array of chars is too long [-fpermissive]
    char c[]="GeekForGeeks";
    cout<<"Type of char c[11] : "<<typeid(c).name()<<endl; //A13_c
    
    for(int i=0;i<12;i++)
        cout<<*(c+i)<<" ";
    cout<<endl;
    
    cout<<c<<endl;// For the character array,we can use array identifier to print the whole array.
    // It considers till it finds a null character
    
    const char* cptr = "Hello \0 World";
    cout<<cptr<<endl;
    return 0;
}
