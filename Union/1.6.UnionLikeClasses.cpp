#include <iostream>
#include "C:\Users\user\Source\Repos\ConsoleApplication1\SourceHeader.h"

using namespace std;

/*
Union Like Classes:
	A union or non-union class which has atleast one anonymous union is called union-like class

*/

struct S
{
    enum { CHAR, INT, DOUBLE } tag;
    union
    {
        char c;
        int i;
        double d;
    };
};

void print_s(const S& s)
{
    switch (s.tag)
    {
    case S::CHAR: std::cout << s.c << '\n'; break;
    case S::INT: std::cout << s.i << '\n'; break;
    case S::DOUBLE: std::cout << s.d << '\n'; break;
    }
}

void Union()
{
    S s = { S::CHAR, 'a' };
    print_s(s);
    s.tag = S::INT;
    s.i = 123;
    print_s(s);
}
