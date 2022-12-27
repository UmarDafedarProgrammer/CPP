#include<iostream>

using namespace std;

int main()
{
  const wchar_t* wc=L"Hello World, Umar Dafedar";
  
  int cmp=wcscmp(wc,L"Umar Dafedar");
  cout<<cmp<<endl;
  
  cmp=wcscmp(L"Umar",L"Uzma");
  cout<<cmp<<endl;
  
  cmp=wcscmp(L"Umar",L"Umar");
  cout<<cmp<<endl;
  
  cmp=wcscmp(L"Uzma",L"Umar");
  cout<<cmp<<endl;
  
  wchar_t warray[]=L"Hello world Umar Dafedar";
  wchar_t* ptr;
  ptr=wcsstr(warray,L"Umar");
  wcout<<ptr<<endl;
  wcsncpy(ptr,L"Uzma",4);
  wcout<<warray<<endl;
  
  return 0;
}
