#include<iostream>

using namespace std;

int main()
{
  char c1='a';
  const char c2='b';
  char* ptr=new char; *ptr='c';
  const char* ptrC=new char('d');
  char* const Cptr=new char; *Cptr='e';
  const char* CptrC=new char('f');
  char *ac; ac=new char(99); *ac=103;
  
  cout<<c1<<" "<<c2<<" "<<*ptr<<" "<<*ptrC<<" "<<*Cptr<<" "<<*CptrC<<" "<<*ac<<endl;
  return 0;
}
