#include<iostream>
using namespace std;
// write a c++ program to find the sum of number is equal to input.

// let's code

int main(){
    int a;
  int b;
  int c;
  cout<<"enter number  betn 0 to 9 ";
  cin>>a;
  for(b=0;b<10;b++){
    for(c=0;c<b;c++){
if(a==b+c){
    cout<<b<<" "<<c<<endl;
}}}
return 0;
}