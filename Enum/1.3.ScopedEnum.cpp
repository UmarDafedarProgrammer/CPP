/******************************************************************************
Scoped enum:
    enum class/struct [identifier] [: type] {enum-list};

Scoped enum can only be accessed using the enumerator qualifier
This is to avoid the conflicts of having two different enumerators with same name


enum struct|class name { enumerator = constexpr , enumerator = constexpr , ... }	(1)	
enum struct|class name : type { enumerator = constexpr , enumerator = constexpr , ... }	(2)	
enum struct|class name ;	(3)	
enum struct|class name : type ;	(4)	
1) declares a scoped enumeration type whose underlying type is int (the keywords class and struct are exactly equivalent)
2) declares a scoped enumeration type whose underlying type is type
3) opaque enum declaration for a scoped enumeration whose underlying type is int
4) opaque enum declaration for a scoped enumeration whose underlying type is type
Each enumerator becomes a named constant of the enumeration's type (that is, name), 
which is contained within the scope of the enumeration, and can be accessed using scope resolution operator. 
There are no implicit conversions from the values of a scoped enumerator to integral types, 
although static_cast may be used to obtain the numeric value of the enumerator.
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
