#include<iostream>
using namespace std;

// write a c++ program to find area of cylinder hollow.
// we use Area=2πrh+2π(r*r) as we know π=3.14 so we use 3.14.

// Let's code

int main(){
    int radius,height;
    float Areaofcylinder;

cout<<"Enter Radious of cylinder : ";
cin>>radius;
cout<<"Enter Height of cylinder : ";
cin>>height;
    Areaofcylinder=(2*3.14*radius*height)+(2*3.14*(radius*radius));
    
cout<<"Area of cylinder is : "<<Areaofcylinder;
    return 0;
}