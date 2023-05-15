#include<iostream>
using namespace std;
int main(){
    int n,p;
    cout<<"enter limit: ";
    cin>>n;
    int number[n];

    cout<<"enter numbers: ";
    for(int i=0;i<n;i++){
        cin>>number[i];
    }
    for(int j=0;j<n;++j){
        p=number[j]+p;
    }    
    cout<<p/2;
}