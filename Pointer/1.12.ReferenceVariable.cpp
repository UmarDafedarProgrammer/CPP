/*
Reference:
	Reference is an alias name to already existing variable
	datatype& alias = Var;
	
*/

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	long long int n1 = 8;
	long long int& n2 = n1; // alias name to n1
	cout<<n1<<" "<<n2<<endl;
	n2=30;
	cout<<n1<<" "<<n2<<endl;
	n1=55;
	cout<<n1<<" "<<n2<<endl;
	
	cout<<"Type of n1:"<<typeid(n1).name()<<" Size of n1:"<<sizeof(n1)<<" Address of n1:"<<&n1<<endl;
	cout<<"Type of n2:"<<typeid(n2).name()<<" Size of n2:"<<sizeof(n2)<<" Address of n2:"<<&n2<<endl;
	return 0;
}
