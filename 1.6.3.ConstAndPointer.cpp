/******************************************************************************
char       *      mutable_pointer_to_mutable_char;
char const *      mutable_pointer_to_constant_char;
char       *const constant_pointer_to_mutable_char;
char const *const constant_pointer_to_constant_char;
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
//1.  Pointer variable and the int variable are not const
    int* ptr =new int(10);
    cout<<"Address of the memory location, where the value 10 is stored : "<<ptr<<endl;
    cout<<"Value pointed by pointer ptr : "<<*ptr<<endl;
    cout<<"Adress of memory location where pointer is stored : "<<&ptr<<endl;
    
    int* ptr1 =ptr; // Assign the memory address pointed by ptr to ptr1
    delete ptr;// Free up the memory in heap and assign a nullptr to pointer
    cout<<ptr1<<" "<<*ptr1<<" "<<&ptr1<<endl; // Sinc, previous statement cleared the memory pointed by both ptr and ptr1
    // heap is cleared and have value zero
    // delete ptr1; // Since, memory location was cleared by ptr, it will not allow to deallocate the memory location again by ptr1
    ptr = new int(20); // ptr is now pointing to different memory location
    cout<<*ptr<<" "<<ptr<<" "<<&ptr<<endl;
    
//2.  Pointer is not constant, However, the memory location pointed by pointer is constant
    // *ptrToconstVar is read-only
    const int* ptrToconstVar;
    // *ptrToconstVar = 30; error: assignment of read-only location ‘* ptrToconstVar’
    cout<<*ptrToconstVar<<endl;
    ptrToconstVar = new int(45);
    cout<<*ptrToconstVar<<endl;
    // *ptrToconstVar = 60; cout<<*ptrToconstVar<<endl;
    // Not allowed; error: assignment of read-only location ‘* ptrToconstVar’
    
//3.  Pointer is pointing to const variable
    // int* const constptrToVar; ERROR: uninitialized const ‘constptrToVar’ [-fpermissive]
    int* const constptrToVar = new int(70);
    cout<<*constptrToVar<<endl;
    *constptrToVar = 99;
    cout<<*constptrToVar<<endl;
    // We can modify the value pointed by pointer but not the pointer value
    // constptrToVar = new int(90);  ERROR: error: assignment of read-only variable ‘constptrToVar’
    
//4.  Const pointer poitning to const variable
    const int* const cptrcvar = new int(120);
    cout<<*cptrcvar<<endl;
    // cptrcvar = new int(111); ERROR: assignment of read-only variable ‘cptrcvar’
    // *cptrcvar = 1222; ERROR: assignment of read-only location ‘*(const int*)cptrcvar’
    return 0;
}
