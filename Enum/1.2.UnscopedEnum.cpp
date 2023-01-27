/******************************************************************************
Unscoped enum:
    enum [identifier] [: type] {enum-list};

Unscoped enum can directly be accessed within the scope where it is declared
*******************************************************************************/
#include <iostream>

using namespace std;

// Forward declaration of enumerations  (C++11):
enum Day : char; // non-scoped enum must have type specified

int main()
{
    enum Day {Mon,Tue,Wed,Thu,Fri,Sat,Sun};
    
    Day Weekend=Mon;
    if(Weekend == Sun)
        cout<<"Yes !!, its a Weekend"<<endl;
    else
        cout<<"Hold on, Its still not a weekend"<<endl;
    return 0;
}
