#include<iostream>
using namespace std;

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