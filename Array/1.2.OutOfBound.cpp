/******************************************************************************
No Index Out of bound Checking:
There is no index out of bounds checking in C/C++
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int arrayI[9]= {1,2,3,4,5,6,7};
    
    for(int i=0;i<19;i++)
        cout<<"arrayI["<<i-7<<"] :"<<arrayI[i-7]<<endl;
    cout<<endl;
    
    
    // int array[2]={1,2,3,4,5,6}; //error: too many initializers for ‘int [2]’
     for(int i=0;i<6;i++)
        cout<<i<<"[arrayI] :"<<i[arrayI]<<endl;
    cout<<endl;
    return 0;
}
