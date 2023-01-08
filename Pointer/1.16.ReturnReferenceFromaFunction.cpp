/*
Return a reference from a function
Since, a variable localVar is local to ReturnReference() fuction. Once, the execution of the ReturnReference function is completed,
processor unwinds all the local variables created on the stack.
So, you can not return a reference.
*/

#include<iostream>

using namespace std;

int& ReturnReference()
{
    int localVar = 10;
    return localVar;
}


int main()
{
    int mainVar = ReturnReference();
    cout<<"Main :"<<mainVar<<endl;
    return 0;
}
