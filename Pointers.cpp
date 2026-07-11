#include<iostream>
using namespace std;

int main(){

    int num = 50;

    // Creating a pointer that will store the address of num
    int *p = &num;

    cout<<"Address of num is: "<<&num<<endl;
    cout<<"Value of num is: "<<*p<<endl;

    cout<<"The size of integer is: "<<sizeof(num)<<endl;
    cout<<"The size of pointer to the integer is: "<<sizeof(p)<<endl;

    // Copying one pointer into another
    int *q = p;
    cout<<"The value of second pointer is: "<<*q<<endl;
    cout<<"The address stored in second pointer is: "<<q<<endl;

    // Incrementing a pointer
    *p = *p + 1;
    cout<<"New value of num is: "<<*p<<endl;

    return 0;
}
