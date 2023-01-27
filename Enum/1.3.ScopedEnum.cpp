/******************************************************************************
Scoped enum:
    enum class/struct [identifier] [: type] {enum-list};

Scoped enum can only be accessed using the enumerator qualifier
This is to avoid the conflicts of having two different enumerators with same name
*******************************************************************************/
#include <iostream>

using namespace std;

// Forward declaration of enumerations  (C++11):
enum class Day; // For scoped enumerators, default underlying type is int

int main()
{
    enum class Day {Mon,Tue,Wed,Thu,Fri,Sat,Sun};
    
    Day Weekend=Day::Mon;
    if(Weekend == Day::Sun)
        cout<<"Yes !!, its a Weekend"<<endl;
    else
        cout<<"Hold on, Its still not a weekend"<<endl;
    return 0;
}
