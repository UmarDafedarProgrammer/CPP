/******************************************************************************
 Array:
 - Array is a derived data type
 - Stores elements of similar data type
 - Elements can be accessed/modified using the index(specifies the position)
 - Also, can be accessed using a name of an array as a pointer
 - Name of an array points to the first element of an array
 - Size of an array has to be specified during the declaration
 - Array elements are always counted from 0 (index value)
 - Elements are stored in a contiguous memory locations providing high i/o efficiency
 - Size does not change, during the execution once declared
 - Array identifier is the const pointer to first element of an array (rvalue)
 
Advantages of an Array in C/C++: 

Random access of elements using the array index.
Use of fewer lines of code as it creates a single array of multiple elements.
Easy access to all the elements.
Traversal through the array becomes easy using a single loop.
Sorting becomes easy as it can be accomplished by writing fewer lines of code.
Disadvantages of an Array in C/C++: 

Allows a fixed number of elements to be entered which is decided at the time of declaration. Unlike a linked list, an array in C is not dynamic.
Insertion and deletion of elements can be costly since the elements are needed to be managed in accordance with the new memory allocation.
Facts about Array in C/C++: 

Accessing Array Elements: 
Array elements are accessed by using an integer index. Array index starts with 0 and goes till the size of the array minus 1.
The name of the array is also a pointer to the first element of the array.
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int Iarray[] = {1,2,3,4,5,6,7}; // Initializer list
    cout<<"size of an Iarray : "<<sizeof(Iarray)<<endl;
    cout<<"Number of elements in an Iarray : "<<sizeof(Iarray)/sizeof(Iarray[0])<<endl;
    
    int IarrayDefault[9]; //Size is specified but not initialized.
    // By default, all elements will have junk value
    
    // int IarrayNoSize[]; error: storage size of ‘IarrayNoSize’ isn’t known
    
    string stringArray[3]= {"Hello","World","Umar"}; // Storage size is specified and initialized
    cout<<"Size of stringArray "<<sizeof(stringArray)<<endl;
    
    cout<<"Traverse an array "<<endl;
    size_t size = sizeof(Iarray)/sizeof(Iarray[0]);
    cout<<"Iarray["<<size<<"] :";
    for(int i=0;i<size;i++)
    {
        cout<<Iarray[i];
        if(i!=(size-1))
            cout<<", ";
    }
    cout<<endl;
    
    size = sizeof(IarrayDefault)/sizeof(IarrayDefault[0]);
    cout<<"IarrayDefault["<<size<<"] :";
    for(int i=0;i<size;i++)
    {
        cout<<IarrayDefault[i];
        if(i!=(size-1))
            cout<<", ";
    }
    cout<<endl;
    
    size = sizeof(stringArray)/sizeof(stringArray[0]);
    cout<<"stringArray["<<size<<"] :";
    for(int i=0;i<size;i++)
    {
        cout<<stringArray[i];
        if(i!=(size-1))
            cout<<", ";
    }
    cout<<endl;
    cout<<endl;
    
    cout<<"Traverse an array using pointer "<<endl;
    size = sizeof(Iarray)/sizeof(Iarray[0]);
    cout<<"Iarray["<<size<<"] :";
    for(int i=0;i<size;i++)
    {
        cout<<*(Iarray+i);
        if(i!=(size-1))
            cout<<", ";
    }
    cout<<endl;
    
    
    size = sizeof(IarrayDefault)/sizeof(IarrayDefault[0]);
    cout<<"IarrayDefault["<<size<<"] :";
    for(int i=0;i<size;i++)
    {
        IarrayDefault[i]=i*10;
        cout<<*(IarrayDefault+i);
        if(i!=(size-1))
            cout<<", ";
    }
    cout<<endl;
    
    size = sizeof(stringArray)/sizeof(stringArray[0]);
    cout<<"stringArray["<<size<<"] :";
    for(int i=0;i<size;i++)
    {
        cout<<*(stringArray+i);
        if(i!=(size-1))
            cout<<", ";
    }
    cout<<endl;
    
    //Iarray++;//error: lvalue required as increment operand
    //Iarray=Iarray+1; error: incompatible types in assignment of ‘int*’ to ‘int [7]’
    cout<<"Try Printing the name of an array identifier "<<Iarray<<endl;
    return 0;
}
