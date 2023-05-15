#include<iostream>
using namespace std;

// write a code to convert upper case to lower cases

int main(){

    string str="WER";
    int size=str.length();

    for(int i=0;i<size;i++){
        str[i]=str[i]+32;
            cout<<str[i];
    }
    return 0;
}