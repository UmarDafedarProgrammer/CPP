/******************************************************************************
Overflow of Value:
    Data overflow occurs when the value assigned is greater than the maximum value variable can hold
*******************************************************************************/
#include <iostream>
#include <limits>
#include <bitset>

using namespace std;

int main()
{
  cout<<"Oveflow of the value   "<<endl;
  cout<<"-----------------------"<<endl;
  
  // unsigned char - positive data overflow
  /*
  Get the value of 300   ->     0000000100101100
  Since, char is 1 byte ->      Ignore(00000001) | 00101100 (Consider Lower byte)
  */
  char uc = 'a';
  cout<<"Limits for the unsigned char :"<<int(numeric_limits<unsigned char>::min())<<" to "<<int(numeric_limits<unsigned char>::max())<<endl;
  cout<<"uc:"<<uc<<endl;
  uc=300; //warning: unsigned conversion from ‘int’ to ‘unsigned char’ changes value from ‘300’ to ‘44’ [-Woverflow]
  bitset<16> b8uc(uc);
  bitset<16> bOuc(300);
  cout<<"bOuc:"<<bOuc<<endl;
  cout<<"b8uc:"<<b8uc<<" "<<uc<<endl;
  
  // unsigned - negative value overflow
  char Uc1=-300;
  bitset<16> b8uc1(Uc1);
  bitset<16> bOuc1(-300);
  cout<<"bOuc1:"<<bOuc1<<endl;
  cout<<"b8uc1:"<<b8uc1<<" "<<int(Uc1)<<endl;
  /*
  0000000100101100 -> 300
  -300
  Get the value of 300 with sign  ->     0000000100101100
  Since, char is 1 byte ->      Ignore(00000001) | 00101100 (Consider Lower byte) with sign as -ve
  */
  return 0;
}
