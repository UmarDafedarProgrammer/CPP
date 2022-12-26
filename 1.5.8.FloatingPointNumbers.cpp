/******************************************************************************
Floating Point Nummber
 - Floating point/ double data type are used to store real Numbers
 - Float data type - 4 Bytes
 - Double Data type - 8 bytes
 - long double data type - 16 bytes
 
 - Float Precision - 6 decimal points
 - Double Precision - 15 decimal points
 - long double - 15 decimal points
 
 suffixes:
 f/F -float
 d/D - double
 ld/LD - long double
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    cout<<"Floating Point Numbers"<<endl;
    float f;
    cout<<"f: "<<f<<endl;
    f = 3.123456789123456789;
    double d=3.123456789123456789;
    long double ld=3.123456789123456789;
    cout.precision(30);
    cout<<"f: "<<f<<endl;
    cout<<"d: "<<d<<endl;
    cout<<"ld: "<<ld<<endl;
    cout<<"size of float "<<sizeof(float)<<endl;
    cout<<"size of double "<<sizeof(double)<<endl;
    cout<<"size of long double "<<sizeof(long double)<<endl;
    return 0;
}
