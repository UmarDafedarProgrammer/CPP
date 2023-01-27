/******************************************************************************
using enum:

- using enum will enable to access the enumerators/named constants without using 
its specifier

*******************************************************************************/
#include <iostream>
using namespace std;

enum class Fruits {Orange,Apple,Banana};
enum class Color {Orange,Red,Blue,Green,Black,White};

int main()
{
    // using enum Fruits;
    // using enum Color;
    Color FavColor = Color::Orange;
    
    if(FavColor == Color::Orange)
        cout<<"Color is Orange"<<endl;
    
    return 0;
}
