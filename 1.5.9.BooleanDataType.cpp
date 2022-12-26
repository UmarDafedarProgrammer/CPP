/******************************************************************************
Boolean
 Possible Valeus: True(1), False(0)
 Any value other than zero is treated as true
 Size - 1 byte
 
*******************************************************************************/
#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    cout<<"Boolean values"<<endl;
    bool decision; // By default, boolean variable will have false value
    
    if (!decision)
        cout<<"Default Value : "<<decision<<endl;
    
    decision = 10>5;
    if (decision)
        cout<<"10 is greater than 5 :"<<decision<<endl;
    else
        cout<<"10 is not greater than 5"<<endl;
    
    decision=true; //10 (true), -10(true), 0 (treated as false), 3.1456(true), "hello"(true)
    if (decision)
        cout<<"Other than 0 is treated as true :"<<decision<<endl;
    else
        cout<<"Any value other than 0 is not treated as true"<<endl;
    
    cout<<"Size of boolean :"<<sizeof(decision)<<endl; // 1 byte
    cout<<"Type "<<typeid(bool).name()<<endl; //b
    
    return 0;
}
