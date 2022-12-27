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
    
    std::cout << std::boolalpha
              << "isinf(NaN) = " << std::isinf(NAN) << '\n'
              << "isinf(Inf) = " << std::isinf(INFINITY) << '\n'
              << "isinf(0.0) = " << std::isinf(0.0) << '\n'
              << "isinf(exp(800)) = " << std::isinf(std::exp(800)) << '\n'
              << "isinf(DBL_MIN/2.0) = " << std::isinf(DBL_MIN/2.0) << '\n';
    return 0;
}
