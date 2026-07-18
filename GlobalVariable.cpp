#include<iostream>
using namespace std;

// Creating a global variable
int g = 10;

void a(){
    // Using global variable in function a
    cout<<"The value of g in function a is: "<<g<<endl;
}

void b(){
    // Using global variable in function b
    cout<<"The value of g in function b is: "<<g<<endl;
}

int main(){

    a();
    b();
    
    // Using global variable in function main
    cout<<"The value of g in function main is: "<<g<<endl;

    return 0;
}
