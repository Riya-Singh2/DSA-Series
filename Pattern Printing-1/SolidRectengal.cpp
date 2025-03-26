//* * *
//* * *
//* * *

#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter the Row: ";
cin>>n;

int m;
cout<<"Enter the Coloms: ";
cin>>m;

for( int i=1; i<=n; i++){
  for(int i=1; i<=m; i++){
    cout<<"*";
  }
  cout<<endl;
}
}