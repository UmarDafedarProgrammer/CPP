#include<bits/stdc++.h>

using namespace std;

int main()
{
  char c=129;
  signed char sc=129;
  unsigned char uc=129;
  cout<<c<<" "<<sc<<" "<<uc<<endl;
  cout<<(int)c<<" "<<(int)sc<<" "<<(int)uc<<endl;
  // cout<<bitset<8>(129).to_string()<<endl;
  // cout<<bitset<16>(129).to_string()<<endl;
  
  c=-129;
  sc=-129;
  uc=-129;
  cout<<c<<" "<<sc<<" "<<uc<<endl;
  cout<<(int)c<<" "<<(int)sc<<" "<<(int)uc<<endl;
  
  c=255;
  sc=255;
  uc=255;
  cout<<c<<" "<<sc<<" "<<uc<<endl;
  cout<<(int)c<<" "<<(int)sc<<" "<<(int)uc<<endl;
  
  c=-255;
  sc=-255;
  uc=-255;
  cout<<c<<" "<<sc<<" "<<uc<<endl;
  cout<<(int)c<<" "<<(int)sc<<" "<<(int)uc<<endl;
  
  c=256;
  sc=256;
  uc=256;
  cout<<c<<" "<<sc<<" "<<uc<<endl;
  cout<<(int)c<<" "<<(int)sc<<" "<<(int)uc<<endl;
  
  c=-257;
  sc=-257;
  uc=-257;
  cout<<c<<" "<<sc<<" "<<uc<<endl;
  cout<<(int)c<<" "<<(int)sc<<" "<<(int)uc<<endl;
  
  c=-1257;
  sc=-1257;
  uc=-1257;
  cout<<c<<" "<<sc<<" "<<uc<<endl;
  cout<<(int)c<<" "<<(int)sc<<" "<<(int)uc<<endl;
  
  c=1257;
  sc=1257;
  uc=1257;
  cout<<c<<" "<<sc<<" "<<uc<<endl;
  cout<<(int)c<<" "<<(int)sc<<" "<<(int)uc<<endl;
  
  cout<<(-1257+256)%256<<endl;
  cout<<bitset<16>(-1257).to_string()<<endl;
  
  return 0;
}
