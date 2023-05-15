#include<iostream>
using namespace std;

// Write a C++ program to calculate total calculate the total principle rate for given data.
// to find total principle we need the input of how much amount is given, on which rate of intreast and for how many period of time 
// so we will take input from user and work onit and print the ans

// let's code

int main(){

int Amount_of_Intreast;
int Amount_of_Principle;
float Rate_of_interest;
int Time_period;
cout<<"Enter Principle : ";
cin>>Amount_of_Principle;
cout<<"Enter Rate Of Intrest : ";
cin>>Rate_of_interest;
cout<<"Enter Time Period(in months) : ";
cin>>Time_period;

Amount_of_Intreast=Amount_of_Principle*Rate_of_interest*Time_period/12;

cout<<"Total Intreast for given amount is : "<<Amount_of_Intreast;
    return 0;
}

