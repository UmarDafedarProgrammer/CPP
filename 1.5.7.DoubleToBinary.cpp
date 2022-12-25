/******************************************************************************
Floating point Numbers

*******************************************************************************/
#include <iostream>
#include <bitset>
#include <climits>

int main()
{
    union
    {
        double input; // assumes sizeof(float) == sizeof(int)
        long   output;
    } data;

    data.input = 2.25125;

    std::bitset<sizeof(double) * CHAR_BIT> bits(data.output);
    std::cout << bits << std::endl;

    // or
    std::cout << "BIT 4: " << bits[4] << std::endl;
    std::cout << "BIT 7: " << bits[7] << std::endl;
}
