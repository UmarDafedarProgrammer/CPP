/*
Call By Reference with reference argument

*/

#include <iostream>
#include <typeinfo>

using namespace std;

void callByValue(int inp)
{
	cout<<"callByValue: Address of inp: "<<&inp<<endl;
	inp=33;
	cout<<"callByValue: Value is changed to : "<<inp<<endl;
}

void callByReference(int& inp)
{
	cout<<"callByReference: Address of inp: "<<&inp<<endl;
	inp=34;
	cout<<"callByReference: value is changed to : "<<inp<<endl;
}

int main()
{
	cout<<"Main Func"<<endl;
	
	int inp=786;
	
	cout<<"Main: Address of inp : "<<&inp<<endl;
	cout<<"Main: Value of inp Before call: "<<inp<<endl;
	callByValue(inp);
	cout<<"Main: Value of inp After callByValue call: "<<inp<<endl;
	cout<<endl<<endl<<endl<<endl;
	cout<<"Main: Address of inp : "<<&inp<<endl;
	cout<<"Main: Value of inp Before call: "<<inp<<endl;
	callByReference(inp);
	cout<<"Main: Value of inp After callByValue call: "<<inp<<endl;
	cout<<endl<<endl<<endl<<endl;
	return 0;
}
