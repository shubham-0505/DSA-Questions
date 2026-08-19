// Function overlaoding allows us to define multiple functions with the same name
// Only changing return type of funtion will not achieve function overloading
// To achieve function overloading we must change the number of arguments or type of arguments as below

#include<iostream>
using namespace std;

// Function add
void add(int a,int b){

    cout<<"Additon of two integers is: "<<a+b<<endl;
}

// Same function name but changing number of arguments
void add(int a,int b,int c){

    cout<<"Addition of three integers is: "<<a+b+c<<endl;
}

// Same function name but changing type of arguments
double add(double a,double b){

    cout<<"Addition of two doubles is: "<<a+b<<endl;
}

int main(){

    add(5,4);
    add(1,6,9);
    add(7.5,2.5);

    return 0;
}
