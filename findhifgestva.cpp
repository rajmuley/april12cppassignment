#include<iostream>
using namespace std;

// write a c++ program to find the higest value in the array.

int main(){
int line[5]={25,10,36,25,55};
int higest=line[0];

for(int i=0;i<(sizeof(line)/sizeof(int));i++){
    higest=line[i];
}

cout<<"Higest Value is : "<<higest;

    return 0;
}