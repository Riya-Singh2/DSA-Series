#include<iostream>
using namespace std;
int main()
{
  char ch;
  cout<<"Enter the charecter: ";
  cin>>ch;
  int p;

  p=(int)ch;

  if(p>=97 && p<=112){
    cout<<"It is Lower case";
  }
  else if (p>=65 && p<=90)
  {
    cout<<"Upper case Alphabet";
  }
  else
  {
    cout<<"it is not any char";
  }
  



}