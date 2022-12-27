/******************************************************************************
Infinity

For infinite number, data type has to be float, double or long double
*******************************************************************************/
#include <iostream>
#include <cfloat>
#include <cmath>

using namespace std;

int main()
{
    float f = 3.142/0;
    double i = 10.0 /0;
    if(isinf(f))
        cout<<"infinte number"<<endl;
    cout<<"Next"<<endl;
    if(isinf(i))
        cout<<"infinite number"<<endl;
    return 0;
}
