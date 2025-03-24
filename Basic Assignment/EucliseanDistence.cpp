// Write a Program to find the Euclidean Distence between two cooresponde. Take both the coordinater fromthe user as input
#include<math.h>
#include<iostream>
using namespace std;
int main(){
  int x1 , x2, y1,y2;
  cout<<"enter the x1 , x2, y1 ,and y2 :"<<endl;

  cout<<"Enter x1: ";

  cin>>x1,
  cout<<"Enter x2: ";
  cin>>x2;
  cout<<"Enter y1: ";
  cin>>y1;
  cout<<"Enter y2: ";
  cin>>y2;

  int s;
  s= (x2-x1)*(x2-x1);
  int t;
  t=(y2-y1)*(y2-y1);
  float p;
  p=sqrt(s+t);
cout<<"Distence is : "<<p;

}