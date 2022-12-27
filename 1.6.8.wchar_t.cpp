#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  char16_t c16='a';
  char32_t c32='b';
  char8_t c8='c';
  char c='d';
  cout<<sizeof(c8)<<" "<<sizeof(c16)<<" "<<sizeof(c32)<<endl;
  cout<<c8<<" "<<c16<<" "<<c32<<" "<<c<<endl;
  wcout<<wchar_t(c8)<<" "<<wchar_t(c16)<<" "<<wchar_t(c32)<<" "<<c<<endl;
  cout<<bitset<8>(c8).to_string()<<" "<<bitset<16>(c16).to_string()<<" "<<bitset<32>(c32).to_string()<<endl;
  unsigned char uc=99;
  signed char sc=-99;
  
  cout<<uc<<" "<<sc<<endl;
  cout<<(int)sc<<" "<<bitset<8>(99).to_string()<<" "<<bitset<8>(sc).to_string()<<endl;
  
  return 0;
}
