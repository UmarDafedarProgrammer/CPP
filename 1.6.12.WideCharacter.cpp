#include <cwchar>
#include <clocale>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "en_US.utf8");
	
	wchar_t str[] = L"parrot,owl,sparrow,pigeon,crow";
	wchar_t delim[] = L"\u002c";// unicode for comma
	wchar_t *ptr;
	
	wcout << L"The tokens are:" << endl;
	wchar_t *token = wcstok(str,delim,&ptr);
	
	while (token)
	{
	  wcout<<ptr<<endl;
	  wcout<<str;
		wcout << token << endl;
		token = wcstok(NULL,delim,&ptr);
	}
	
	return 0;
}
