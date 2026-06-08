#include<iostream>
using namespace std;

bool isPrime(int n){

    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){

    int x;
    cout<<"Enter a number: ";
    cin>>x;

    if(isPrime(x)){
        cout<<"The given number is a prime number"<<endl;
    }
    else{
        cout<<"The given number is not a prime number"<<endl;
    }
}   
