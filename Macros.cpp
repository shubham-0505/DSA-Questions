#include<iostream>
using namespace std;

// Creating a macro
#define pi 3.14

int main(){

    double r;
    cout<<"Enter the radius of circle: ";
    cin>>r;

    // Using macro where needed
    double area = pi * r * r;
    cout<<"The area of circle with radius "<<r<<" is: "<<area<<endl;

    return 0;
}
