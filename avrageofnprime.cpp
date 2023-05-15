#include<iostream>
using namespace std;

int main(){

    int in,total,avr,i,b=0;
cout<<"Enter value ; ";
cin>>in;

    for(int i=0;i<=in;i++){
if(in%i==0){
    ++b;
}}
cout<<i;
if(b==2){
 total=i+total;   
}
avr=total/b;
cout <<avr;
    return 0;
}