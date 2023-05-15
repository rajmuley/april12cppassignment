#include<iostream>
using namespace std;

// write a code to fint the factors of given number 

int main(){
  int a;
  int b;
  int c;
  cout<<"enter number ";
  cin>>a;
  for(b=0;b<=a;b++){
    for(c=0;c<b;c++){
if(a==b*c){
    cout<<b<<" "<<c<<endl;
}}}
    return 0;
}