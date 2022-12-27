/******************************************************************************
void type

- void is incomplete type
- We can not declare variables with type void
- pointer for the type void can be created
- void can be used to specify return type of a function if function does not return any value
- can not dereference void pointer
- Freeing the memory pointed by void pointer gives warning
*******************************************************************************/
#include <iostream>

using namespace std;

// Specifies no return value form a function
void DisplayHello()
{
    cout<<"Hello Folks!!"<<endl;
}

int main()
{
    void* ptr; //void pointer
    // void var; ERROR: variable or field ‘var’ declared void
    cout<<"Pointer address - "<<ptr<<endl;
    cout<<"Type of a pointe ptr "<<typeid(ptr).name()<<endl; //Pv
    cout<<"Size of void Pointer "<<sizeof(ptr)<<endl; // 8 bytes
    cout<<"ptr "<<ptr<<endl;
    cout<<"&ptr "<<&ptr<<endl;
    // cout<<"*ptr "<<*ptr<<endl; dereferencing void pointer is not allowed
    ptr = new int(30);
    int* iptr = (int*)ptr;
    cout<<*iptr<<endl;
    
    DisplayHello();
    // Free the pointers
    // delete ptr; // ptr is of incomplete type of void. So warning of delete-incomplete 
    delete iptr;
    return 0;
}
