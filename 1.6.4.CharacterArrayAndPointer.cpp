/******************************************************************************
Character array and pointers
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    const char* cptr="Umar";
    cout<<sizeof(cptr)<<endl; // 8 bytes: Size Of pointer
    const char* itr = cptr;
    cout<<itr<<endl;
    
    for(int i=0;*(cptr+i) != '\0';i++)
        cout<<*(cptr+i)<<" ";
    cout<<endl;
    
    for(int i=0;cptr[i]!='\0';i++)
        cout<<cptr[i]<<" ";
    cout<<endl;
    
    int i=0;
    while(cptr[i]!='\0')
    {
        cout<<(cptr+i)<<" ";
        i++;
    }
    cout<<endl;
    
    i=0;
    while(cptr[i]!='\0')
    {
        cout<<*cptr+i<<" ";
        i++;
    }
    cout<<endl;
    
    cout<<"cptr :"<<cptr<<endl;
    cout<<"*cptr :"<<*cptr<<endl;
    
    const char CharPtr[] = {'U','Z','M','A'}; // Const Array of Characters
    //CharPtr[0]='G';
    cout<<CharPtr<<endl;
    return 0;
}
