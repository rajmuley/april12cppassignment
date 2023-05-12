#include<iostream>
using namespace std;

// write a c++ program to find circumference cylinder.
// we use cylinder_circumference = 2 * π * cylinder_radius this formula as ve know π=3.14 so we use 3.14.

// Let's code

int main(){
    int cylinder_radius;
    float cylinder_circumference;

cout<<"Enter Radious of cylinder : ";
cin>>cylinder_radius;
    cylinder_circumference=(3.14*cylinder_radius)*2;
    
cout<<"cylinder circumference is : "<<cylinder_circumference<<" cm";
    return 0;
}