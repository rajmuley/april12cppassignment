#include<iostream>
using namespace std;


// write a code to find the distaance between two points on earth.

int main()
{
    float distance,radious,angle;

cout<<"Enter Radious ";
cin>>radious;
cout<<"Enter angle ";
cin>>angle;
    distance=2*3.14*radious*(angle/360);
cout<<distance;
    return 0;
}