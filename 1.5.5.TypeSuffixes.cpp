/******************************************************************************
Type Suffixes
*******************************************************************************/
#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    int si=10u;
    unsigned int ui=20ul;
    cout<<"si: "<<si<<endl;
    cout<<"ui: "<<ui<<endl;
    cout<<"int          :"<<typeid(20).name()<<endl;
    cout<<"unsigned int :"<<typeid(20u).name()<<endl;
    cout<<"signed long  :"<<typeid(20l).name()<<endl;
    cout<<"unsigned long:"<<typeid(20ul).name()<<endl;
    cout<<"double       :"<<typeid(0.0d).name()<<endl;
    cout<<"float        :"<<typeid(0.0f).name()<<endl;
    
    return 0;
}
