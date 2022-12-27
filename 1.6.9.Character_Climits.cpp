#include<iostream>
#include<bits/stdc++.h>
#include<climits>

using namespace std;



int main()
{
  char ch='a';
  cout<<"type "<<typeid(ch).name()<<endl;
  cout<<"size "<<sizeof(ch)<<endl;
  cout<<ch<<endl;
  cout<<bitset<8>(ch).to_string()<<endl;
  
  wchar_t wc=L'C';
  cout<<"type "<<typeid(wc).name()<<endl;
  cout<<"size "<<sizeof(wc)<<endl;
  wcout<<wc<<endl;
  cout<<bitset<32>(wc).to_string()<<endl;
  
  cout << "SCHAR_MIN is : " << SCHAR_MIN  << "\n";
  cout << "SCHAR_MAX is : " << SCHAR_MAX  << "\n";
  cout << "UCHAR_MAX is : " << UCHAR_MAX  << "\n";
  cout << "CHAR_MIN is  : " << CHAR_MIN  << "\n";
  cout << "CHAR_MAX is  : " << CHAR_MAX  << "\n";
  return 0;
}
