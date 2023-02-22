/*
  Inheritance:
    It allows a class to inherit the properties of another class.
    It allows us to reuse the code
    Derived class can inherit public and protected memebrs of the base class
    
    class Derived:<Inheritance Level> Base;
    
    Base class can be inherited with public, private or protected inheritance levels
*/

#include<iostream>

using namespace std;

class Base
{
  public:
    Base();
    ~Base();
    int BaseVar;
    
};

class Derived:public Base
{
  public:
  Derived();
  ~Derived();
  int DerivedVar;
};

Base::Base()
{
  cout<<"Base Constructor is called"<<endl;
  BaseVar=10;
}

Base::~Base()
{
  cout<<"Base Destructor is called"<<endl;
  BaseVar=0;
}

Derived::Derived()
{
  cout<<"Derived Constructor is called"<<endl;
  DerivedVar=21;
}

Derived::~Derived()
{
  cout<<"Derived Destructor is called"<<endl;
  DerivedVar=0;
}


int main()
{
  Derived DObj;
  cout<<DObj.DerivedVar<<endl;
  cout<<DObj.BaseVar<<endl;
  return 0;
}
