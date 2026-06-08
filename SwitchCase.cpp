#include<iostream>
using namespace std;

int main(){

    int a;
    cout<<"Enter first number: ";
    cin>>a;
    int b;
    cout<<"Enter second number: ";
    cin>>b;

    char value;
    cout<<"Enter the operation you would like to perform on these two numbers (+/-/*///%): ";
    cin>>value;

    switch(value){
        case '+':
        cout<<"The addition of given numbers is: "<<a+b<<endl;
        break;

        case '-':
        cout<<"The subtraction of given numbers is: "<<a-b<<endl;
        break;

        case '*':
        cout<<"The multiplication of given numbers is: "<<a*b<<endl;
        break;

        case '/':
        cout<<"The division of given numbers is: "<<a/b<<endl;
        break;

        case '%':
        cout<<"The mod of given numbers is: "<<a%b<<endl;
        break;

        default:
        cout<<"Please enter a valid opeartion!"<<endl;
    }
}
