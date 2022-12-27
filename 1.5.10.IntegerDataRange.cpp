/******************************************************************************
Integer data types

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int i = 10;
    signed int si =-20;
    unsigned int ui = 300;
    int8_t i8 = 255;
    int16_t i16 = 90;
    int32_t i32 =32;
    int16_t ui8 = 20;
    
    short s = 100;
    short int shi = 200;
    short signed int ssi = 201;
    unsigned short us = 202;
    unsigned short int usi = 203;
    
    long l =30303030;
    long int li = 303030303;
    signed long sl = 20202030;
    signed long int sli = 303030303;
    
    unsigned long ul =3030030;
    unsigned long int uli = 9090909090;
    
    long long ll =303003;
    long long int lli =90;
    signed long long sll =90909;
    signed long long int slli = 909090;
    
    unsigned long long ull =90909;
    unsigned long long int ulli =909090;
    
    cout<<"Size of integer values "<<endl;
    cout<<"int  :"<<sizeof(int)<<" Range :"<<numeric_limits<int>::min()<<" "<<numeric_limits<int>::max()<<endl;
    cout<<"signed int  :"<<sizeof(signed int)<<" Range :"<<numeric_limits<signed int>::min()<<" "<<numeric_limits<signed int>::max()<<endl;
    cout<<"unsigned int  :"<<sizeof(unsigned int)<<" Range :"<<numeric_limits<unsigned int>::min()<<" "<<numeric_limits<unsigned int>::max()<<endl;
    cout<<"int8_t  :"<<sizeof(int8_t)<<" Range :"<<int(numeric_limits<int8_t>::min())<<" "<<int(numeric_limits<int8_t>::max())<<endl;
    cout<<"int16_t  :"<<sizeof(int16_t)<<" Range :"<<numeric_limits<int16_t>::min()<<" "<<numeric_limits<int16_t>::max()<<endl;
    cout<<"int32_t  :"<<sizeof(int32_t)<<" Range :"<<numeric_limits<int32_t>::min()<<" "<<numeric_limits<int32_t>::max()<<endl;
    cout<<"short  :"<<sizeof(short)<<" Range :"<<numeric_limits<short>::min()<<" "<<numeric_limits<short>::max()<<endl;
    cout<<"short int  :"<<sizeof(short int)<<" Range :"<<numeric_limits<short int>::min()<<" "<<numeric_limits<short int>::max()<<endl;
    cout<<"short signed int  :"<<sizeof(short signed int)<<" Range :"<<numeric_limits<short signed int>::min()<<" "<<numeric_limits<short signed int>::max()<<endl;
    cout<<"unsigned short  :"<<sizeof(unsigned short)<<" Range :"<<numeric_limits<unsigned short>::min()<<" "<<numeric_limits<unsigned short>::max()<<endl;
    cout<<"unsigned short int  :"<<sizeof(unsigned short int)<<" Range :"<<numeric_limits<unsigned short int>::min()<<" "<<numeric_limits<unsigned short int>::max()<<endl;
    cout<<"long  :"<<sizeof(long)<<" Range :"<<numeric_limits<long>::min()<<" "<<numeric_limits<long>::max()<<endl;
    cout<<"long int  :"<<sizeof(long int)<<" Range :"<<numeric_limits<long int>::min()<<" "<<numeric_limits<long int>::max()<<endl;
    cout<<"signed long  :"<<sizeof(signed long)<<" Range :"<<numeric_limits<signed long>::min()<<" "<<numeric_limits<signed long>::max()<<endl;
    cout<<"signed long int  :"<<sizeof(signed long int)<<" Range :"<<numeric_limits<signed long int>::min()<<" "<<numeric_limits<signed long int>::max()<<endl;
    cout<<"unsigned long  :"<<sizeof(unsigned long)<<" Range :"<<numeric_limits<unsigned long>::min()<<" "<<numeric_limits<unsigned long>::max()<<endl;
    cout<<"unsigned long int  :"<<sizeof(unsigned long int)<<" Range :"<<numeric_limits<unsigned long int>::min()<<" "<<numeric_limits<unsigned long int>::max()<<endl;
    cout<<"long long  :"<<sizeof(long long)<<" Range :"<<numeric_limits<long long>::min()<<" "<<numeric_limits<long long>::max()<<endl;
    cout<<"long long int  :"<<sizeof(long long int)<<" Range :"<<numeric_limits<long long int>::min()<<" "<<numeric_limits<long long int>::max()<<endl;
    cout<<"signed long long  :"<<sizeof(signed long long)<<" Range :"<<numeric_limits<signed long long>::min()<<" "<<numeric_limits<signed long long>::max()<<endl;
    cout<<"signed long long int  :"<<sizeof(signed long long int)<<" Range :"<<numeric_limits<signed long long int>::min()<<" "<<numeric_limits<signed long long int>::max()<<endl;
    cout<<"unsigned long long  :"<<sizeof(unsigned long long)<<" Range :"<<numeric_limits<unsigned long long>::min()<<" "<<numeric_limits<unsigned long long>::max()<<endl;
    cout<<"unsigned long long int  :"<<sizeof(unsigned long long int)<<" Range :"<<numeric_limits<unsigned long long int>::min()<<" "<<numeric_limits<unsigned long long int>::max()<<endl;
    return 0;
}
