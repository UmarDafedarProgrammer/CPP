/******************************************************************************
using enum:

- using enum will enable to access the enumerators/named constants without using 
its specifier

*******************************************************************************/
#include <iostream>
using namespace std;

// enum Fruits {Orange,Apple,Banana};
enum Color {Orange,Red,Blue,Green,Black,White};
//error: ‘Orange’ conflicts with a previous declaration

int main()
{
    Color FavColor = Color::Orange;
    
    if(FavColor == Color::Orange)
        cout<<"Color is Orange"<<endl;
    
    return 0;
}
