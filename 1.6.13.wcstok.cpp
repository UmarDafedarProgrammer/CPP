#include <cwchar>
#include <clocale>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "en_US.utf8");
	
	wchar_t str[] = L"Geek,Greek,Americano,Indian,British";
	wchar_t delim[] = L"\u002c";// unicode for comma
	wchar_t *ptr;
	
	wcout<<wcslen(str)<<endl;
	wcout<<str<<endl;
	wcout << L"The tokens are:";
	wchar_t *token = wcstok(str,delim,&ptr);
	wcout<<wcslen(str)<<endl;
	while (token!=nullptr)
	{
	  wcout<<"**********"<<endl;
	  wcout<<str<<endl;
	  wcout << token << endl;
	  wcout<<ptr<<endl;
		token = wcstok(NULL,delim,&ptr);
	}
	
	return 0;
}
