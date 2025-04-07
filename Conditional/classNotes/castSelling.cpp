#include<iostream>
using namespace std;
int main(){
  int cp , sp;
  cout<<"Enter the Cost Price : ";
  cin>>cp;
  cout<<"Enter the Selling Price : ";
  cin>>sp;

  if(cp>sp){
    cout<<"loss : "<<cp-sp;
  }
  else{
    cout<<"Profit : "<<sp-cp;
  }

  
}