#include<iostream>

using namespace std;

//write a C++ program to calculate volume of cylinder.
// To find this we require height and Radius of cylinder
// formula for that is v=3.14*(r*r)*h

// Let's code

int main(){
     int Height;
     int Radious;
     float Volume;

    cout<<"Enter Height of Cylinder : ";
    cin>>Height;
    cout<<"Enter Height of Radious : ";
    cin>>Radious;
    Volume=3.14*(Radious*Radious)*Height;
    cout<<"Volume of Cylinder is : "<<Volume;
    return 0;
}