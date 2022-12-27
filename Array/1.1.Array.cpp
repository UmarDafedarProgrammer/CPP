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
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int Iarray[] = {1,3,4,5,6,2,3};
    cout<<"size of an Iarray : "<<sizeof(Iarray)<<endl;
    cout<<"Number of elements of in an Iarray : "<<sizeof(Iarray)/sizeof(Iarray[0])<<endl;

    return 0;
}
