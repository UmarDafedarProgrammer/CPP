
/******************************************************************************
Enumeration:

- It is a user defined data type
- Underying type will be integral type
- By default, underlying type is int. You can explicitly specify the type as signed or unsigned
    short, char, long, long long, int, int8_t,int16_t,int32_t
- The named integer constants are called as enumerators
- Value is restricted to range of values
- enum follows the same value, representation of theunderlying type

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    // enum name : underlying_type
    // alias_int is enum type which can take any values supported by char
    enum alias_int : char; 
    
    // alias_int i=10; //Error : Invalid Conversion from int to alias_int
    alias_int var = alias_int(10);
    cout<<"Sizeof alias_int is :"<<sizeof(alias_int)<<" Byte"<<endl;
    cout<<"Value of var of type alias_int is  :"<<var<<endl;
    
    enum Day : int8_t {Mon,Tue,Wed,Thu,Fri,Sat,Sun}; //Mon... Sun are the named constants
    
    // By default first named constant takes a value as 0, the next constants value will be incremented by 1 from the previous one
    for(int i=Mon;i<=Sun;i++)
    {
        cout<<"Value of i: "<<i<<" Size of i "<<sizeof(i)<<endl;
    }
    cout<<endl;
    
    Day WeekDay = Mon;
    if(WeekDay>Sun or WeekDay<Mon)
        cout<<"Not a Valid Day"<<endl;
    
    
    return 0;
}
