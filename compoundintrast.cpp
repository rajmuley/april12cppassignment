#include<iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

// Write a C++ program to calculate total calculate the compound intreast from given data.
// to find total principle we need the input of how much amount is given, on which rate of intreast and for how many period of time 
// so we will take input from user and work on it and print the ans

// let's code

int main(){

int a,b,c,interest,amount,n;
     cout<<"enter principal: ";
     cin>>a;
     cout<<"enter rate: ";
     cin>>b;
     cout<<"enter time: ";
     cin>>c;
     cout<<"enter no of times interest repeat: ";
     cin>>n;
     
     amount = a*(1+b/n)^n*c;
     cout<<amount;

    return 0;
}

