/*
Pointer and constant:
	const int -> Integer constant
		Value can be modified
	
  const int* -> Pointer pointing to integer constant
		Since, pointer is not constant, it can be modified to point to different variables.But it can not modify the content of the variables it is pointing to
    
	int * const -> constant pointer to integer variable
	  Since, pointer is constant it can point to only one variable. Since, variable it is pointing to is not constant, it can modify the content of the variable it
      is pointing to.
      
	const int * const -> constant pointet to constant integer variable
    Since, pointer and variable it is pointing to both are constant, it can point to only one variable and variable it is pointing to can not modify the data
*/

#include <iostream>

using namespace std;

int main()
{
	const int ci = 20; // Has to be initialized at the time of declaration
	// ci=20; Constant integer variable can not be modified once declared
	cout<<"constant integer variable "<<ci<<endl;
	
	int i =33; // non-constnat integer variable
	
	const int* ptr = &ci;
	cout<<"ptr is pointing to :"<<*ptr<<endl;
	// *ptr=33; Pointer pointing to constant integer and can not modify the value of the variable it is poitning to. 
	// Since pointer is not constant, it can point to another variable (constant or non constant variable)
	ptr=&i;
	// *ptr=786; Since, pointer is of type const int*, it can not modify the content of the variable it is pointing to.
	cout<<"ptr is pointing to :"<<*ptr<<endl;
	
	int* const cptr = &i;
	*cptr =8989;
	cout<<*cptr<<endl;
	
	
	const int* const cptrc =new int(786);
	cout<<*cptrc<<endl;
	
	return 0;
}
