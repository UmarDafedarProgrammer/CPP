/******************************************************************************
Variable:
    - Variable are used to store data
    - Unique identifier is used to identify every Variable
    - keyword can not be used as a identifier for the Variable
    - Data type specifies the amount of memory allocated for the variable
    - Data type specifies the type of data a variable can be stored
    - Data can be accessed either using identifier or by the address
   
Initialization:
1. c like initialization
2. constructor initialization
3. uniform initialization
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    cout<<"Variable:.................."<<endl;
    
    // Variable declaration
    int var;
    var=20; // Initialization
    cout<<var<<endl;
    
    // Variable declaration and initialization
    // c like initialization
    char c='c';
    cout<<c<<endl;
    
    // Constructor initialization
    string str("C++");
    cout<<str<<endl;
    
    //uniform initialization
    float f {1.234};
    cout<<f<<endl;

    return 0;
}
