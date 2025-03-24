// Take input of Principal , time , rate and find the simple interest
//SI=pRT/100;

#include<iostream>
using namespace std;
int main()
{
  int Pre;
  int time;
  int rate;

  cout<<"Enter the Principel: ";
  cin>>Pre;

  cout<<"enter the Time: ";
  cin>>time;

  cout<<"Enter the Rate: ";
  cin>>rate;

  float Si=(Pre*time*rate)/100;
  cout<<"Simple Interest is : "<<Si;



}