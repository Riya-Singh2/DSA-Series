//Write the Program to find the Sum of Squares of first n natural numbers Where n will be Provided by the user.
// sum= n*(n+1)*(2n+1)/6

#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the number";
  cin>>n;

  float sum;
  sum = n*(n+1)*(2*n+1)/6;
  cout<<sum;
}