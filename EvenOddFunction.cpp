#include<iostream>
using namespace std;

bool isEven(int n){
    
    if(n%2==0){
        return 1;
    }
    return 0;
}

int main(){

    int a;
    cout<<"Enter a number: ";
    cin>>a;

    int ans = isEven(a);

    if(ans){
        cout<<"The given number is an even number"<<endl;
    }
    else{
        cout<<"The given number is an odd number"<<endl;
    }
}
