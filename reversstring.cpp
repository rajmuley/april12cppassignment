#include<iostream>
using namespace std;

// Write a C++ program to to revers the string.
// for that we use for loop

// Lets's code

int main(){

    string name;
    cout<<"Enter Name to Be revers : ";
    cin>>name;
    for(int i=name.length()-1;i<=name.length();i--){
        cout<<name[i];
    }  
    return 0;
}