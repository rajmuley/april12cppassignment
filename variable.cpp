#include<iostream>
using namespace std;

int main(){
    
    int a=10,b=20;

    int *c=&a;
    int *d=&b;

    cout<<"Address of A is ; "<<&a<<endl;
    cout<<"Address of B is ; "<<&b<<endl;
       c=&b;
       d=&a;
       cout<<"Address after of A is ; "<<c<<endl;
       cout<<"Address after of B is ; "<<d<<endl;

    return 0;
}