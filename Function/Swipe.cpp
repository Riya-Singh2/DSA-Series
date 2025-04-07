#include<iostream>
using namespace std;

int swipe(int &x, int  &y){
  int temp;
  temp=x;
  x=y;
  y=temp;
  cout<<"Swipe two number: "<< x,y;
 
  return 0;
}
int main(){

  int a,b;
  cout<<"enter the number a and b: ";
  cin>>a;
  cin>>b;
 swipe(a,b);
  
  cout<<a,b;



}