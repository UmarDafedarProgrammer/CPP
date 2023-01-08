/*
Reference:
	Reference is an alias name to already existing variable
	datatype& alias = Var;
	
	- You cannot have NULL references. Reference must be pointing to valid variable
	- Once a reference is initialized to an object, it cannot be changed to refer to another object. Pointers can be pointed to another object at any time.
	- A reference must be initialized when it is created. Pointers can be initialized at any time.
	- Address of pointer is possible. Address of reference is not possible. It gives of the address of the variable.
	- Array of pointer is possible while array of references is not possible
	
*/

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	int n1 = 8;
	int& n2 = n1; // alias name to n1
	
	int n3 =44;
	n2=n3; // Even thought you are trying to assign n3 to n2, it updates the value of n3 to n2 and does not references n3
	// int& n4; [Error] 'n4' declared as reference but not initialized
	
	cout<<n1<<" "<<n2<<endl;
	n2=30;
	cout<<n1<<" "<<n2<<endl;
	n1=55;
	cout<<n1<<" "<<n2<<endl;
	
	cout<<"Type of n1:"<<typeid(n1).name()<<" Size of n1:"<<sizeof(n1)<<" Address of n1:"<<&n1<<endl;
	cout<<"Type of n2:"<<typeid(n2).name()<<" Size of n2:"<<sizeof(n2)<<" Address of n2:"<<&n2<<endl;
	return 0;
}
