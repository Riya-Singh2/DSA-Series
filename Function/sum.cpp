#include<iostream>
using namespace std;
int sum();

int sum(int a,int b){
  int c=a+b;
  
  return c;

}
int mian(){
  int p=9 ,q=8;
  

  int d=sum(p,q);
  cout<<d;
}