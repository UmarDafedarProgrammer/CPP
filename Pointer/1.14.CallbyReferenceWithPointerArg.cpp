/*
Call By Reference Using pointer argument

Address of *inp in callByReference() is the same as inp in main() 

*/

#include <iostream>
#include <typeinfo>

using namespace std;

void callByReference(int* inp)
{
	cout<<"callByReference: Address of inp: "<<&inp<<endl;
	*inp=34;
	cout<<"callByReference: value is changed to : "<<*inp<<endl;
}

int main()
{
	cout<<"Main Func"<<endl;
	
	int inp=786;
	
	cout<<"Main: Address of inp : "<<&inp<<endl;
	cout<<"Main: Value of inp Before call: "<<inp<<endl;
	callByReference(&inp);
	cout<<"Main: Value of inp After callByValue call: "<<inp<<endl;
	cout<<endl<<endl<<endl<<endl;
	return 0;
}
