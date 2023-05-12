#include <iostream>
using namespace std;

// write a C++ program to calculate the Aea of an Equilateral triangle and also find the height of traingle.
// To calculate the area of tringle there are two formulas 1)0.5b*h 2)(1/4)*^3*a
// so i am using 0.5*b*h for that we required to finr the hreight of tringel the it is possable using h = √3 * a/2

// let's code now

int main(){

float side;
float height,area;

cout<<"Enter Length of side ";
cin>>side;
    cout<<"we will find the area by using height."<<endl;
    height=1.73205080757*(side/2);
    cout<<"Height of tringale is : "<<(height*side)*0.5<<endl;
    cout<<"we will find the area by only sides."<<endl;
    area=1.73205080757*((side*side)/4);
    cout<<"Aea of an Equilateral : "<<area;
    return 0;
}
