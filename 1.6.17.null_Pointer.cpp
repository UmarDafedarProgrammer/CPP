/******************************************************************************

Null pointer - nullptr_t

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int* ptr;// by default, pointer variable will be initialized with nullptr
    if(ptr == nullptr )
        cout<<"Pointer ptr is not initialized"<<endl;
    cout<<nullptr<<endl;
    return 0;
}
