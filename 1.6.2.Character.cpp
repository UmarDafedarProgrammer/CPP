/******************************************************************************
Character - const, pointer, const pointer, array

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    // Signed Character
    char c='c'; c='d'; cout<<"c :"<<c<<endl;
  
    // Pointer to Signed Character
    char* cptr = new char('e'); cout<<"*cptr :"<<*cptr ; *cptr = 'f'; cout<<" cptr:"<<cptr<<endl;
  
    // Const character Variable
    const char Cc='g'; cout<<"Cc: "<<Cc<<endl;
    // Cc='h'; Can not modify the value of the constant variable
    
    // Pointer pointing to a memory location/variable which is constant
    const char* Ccptr=new char('k');
    // *Ccptr='i'; cout<<"Ccptr: "<<*Ccptr<<endl; ERROR: assignment of read-only location ‘* Ccptr’ 
    cout<<"Ccptr: "<<Ccptr<<endl;
    
    cptr= &c; *cptr='z';cout<<"cptr: "<<*cptr<<endl; // We can assign the address of variable created on stack to pointer.
    cout<<c<<endl;  
    // delete cptr; // can not delete memory location from stack. c is created on stack. But we can not free it by using delete
    cptr = new char('k');
    
    char carray[] = {'1','h','o','n','e','y','\0'};
    cout<<carray<<endl;
    cout<<*carray<<endl;
    
    for(int i=0;i<7;i++)
        cout<<carray[i];
    cout<<endl;
    
    for(int i=0;i<7;i++)
        cout<<*(carray+i);
    cout<<endl;
    
    for(int i=0;i<7;i++)
        cout<<(carray+i)<<" ";
    cout<<endl;
    
    char carray1[] = "HelloWorld"; cout<<carray1<<endl;
    
    delete cptr;
    delete Ccptr;
    cout<<"Freed"<<endl;
    
    return 0;
}
