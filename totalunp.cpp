#include<iostream>
using namespace std;


// write a code to find the sum of unit price in the list given by user

int main(){

    int UNP,total;
    int QTY,totalqty;
    string Name_of_iteam;

    for(int i=0;i<2;i++){
        cout<<"Enter the name of iteam ; ";
        cin>>Name_of_iteam;
        cout<<"Enter the Unit price of iteam ; ";
        cin>>UNP;
        cin>>QTY;

        total=total+UNP;
    }
    cout<<"Total unit sale price is ; "<<total<<endl;
    return 0;
}