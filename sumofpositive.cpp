#include<iostream>
using namespace std;

// write a program to sum all positive numbers in an array

int main(){
    int array[5]={-10,11,15,-2,5};
    int sum;

for(int i=0;i<(sizeof(array)/sizeof(int));i++){
    if(array[i]>0){
        sum=sum+array[i];
    }}
    cout<<sum;

    return 0;
}