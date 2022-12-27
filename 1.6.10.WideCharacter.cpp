#include<iostream>

using namespace std;

int main()
{
  wchar_t wc=L'a';
  wchar_t* wptr=new wchar_t(L'b');
  
  wcout<<wc<<" "<<*wptr<<endl;
  
  wchar_t warray[]=L"Hello World";
  wcout<<warray<<endl;
  
  for(int i=0;i<sizeof(warray)/sizeof(warray[0]);i++)
  {
    wcout<<*(warray+i);
  }
  wcout<<endl;
  
  for(int i=0;i<sizeof(warray)/sizeof(warray[0]);i++)
  {
    wcout<<warray[i];
  }
  wcout<<endl;
  
  const wchar_t* Sptr=L"Umar Dafedar";
  for(int i=0;Sptr[i]!='\0';i++)
  {
    wcout<<*(Sptr+i);
  }
  wcout<<endl;
  
  for(int i=0;Sptr[i]!='\0';i++)
  {
    wcout<<Sptr[i];
  }
  wcout<<endl;
  
  wcout<<Sptr<<endl;
  
  wcout<<"wide character functions"<<endl;
  wcout<<"wcslen()-> size_t wcslen(const wchar_t* wstring)"<<endl;
  wcout<<wcslen(Sptr)<<" "<<wcslen(warray)<<endl;
  
  wchar_t* dest=new wchar_t[11];
  wcout<<"wcscpy()-> wchar_t* wcscpy(wchar_t* Dest,const wchar_t* Src) "<<endl;
  wcscpy(dest,L"How are you doing?");
  wcout<<dest<<endl;
  wcscat(dest,L" Umar Dafedar.");
  wcout<<dest<<endl;
  wcsncpy(dest,L"Umar Dafedarrrrrrrrrrr",100);
  wcout<<dest<<" "<<wcslen(dest)<<endl;
  wcsncpy(dest,L"Umar Dafedar",100);
  wcout<<dest<<" "<<wcslen(dest)<<endl;
  wcsncpy(dest,L"Umar Dafedar111",1000);
  wcout<<dest<<" "<<wcslen(dest)<<endl;
  return 0;
}

