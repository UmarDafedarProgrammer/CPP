#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{ 
   char c=99;
  cout<<c<<" "<<bitset<8>(c).to_string()<<" "<<int(c)<<endl;
  
  c=-99;
  cout<<c<<" "<<bitset<8>(c).to_string()<<" "<<int(c)<<endl;
  
  c=129;
  cout<<c<<" "<<bitset<8>(c).to_string()<<" "<<int(c)<<" "<<bitset<8>(129).to_string()<<endl;
  
  c=-127;
  cout<<c<<" "<<bitset<8>(c).to_string()<<" "<<int(c)<<endl;
  
  c=259;
  cout<<c<<" "<<bitset<8>(c).to_string()<<" "<<int(c)<<endl;
  
  c=-259;
  cout<<c<<" "<<bitset<8>(c).to_string()<<" "<<int(c)<<endl;
  
  return 0;
}
