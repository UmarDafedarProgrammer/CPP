#include<iostream>

using namespace std;

int main()
{
  const char* ptrC="Hello"; // "Hello" is a const char*
  //ptrC points to the first elemen of a character array 'H'
  // To print the whole string use a pointer name
  const char* ptrC1="World";
  // ptrC1[1]='d'; //*(ptrC1+1) Readonly and can not modify the content pointed by a pointer
  const char* itr=ptrC;
  char Carray[]={'U','m','a','r','\0'};// Initializer list
  char Carray2[]="Uzma";
  while(*itr != '\0')
  {
    cout<<*itr<<" ";
    itr++;
  }
  cout<<endl;
  cout<<ptrC<<" "<<ptrC1<<endl;
  cout<<Carray<<" "<<Carray2<<endl;
  int i=0;
  while(Carray[i]!='\0')
  {
    cout<<Carray[i]<<*(Carray+i);
    i++;
  }
  cout<<endl;
  
  i=0;
  while(Carray[i]!='\0')
  {
    Carray[i]=*(Carray2+i);
    i++;
  }
  
  i=0;
  while(Carray[i]!='\0')
  {
    cout<<Carray[i];
    i++;
  }
  cout<<endl;
  char Carray3[]={'H','u','r','\0','a','i','n','\0'};
  cout<<Carray3<<endl;
  cout<<sizeof(Carray3)<<endl;
  
  char Carray4[]="Umar\0Dafedar\0";
  cout<<sizeof(Carray4)<<endl;
  cout<<Carray4<<endl;
  return 0;
}
