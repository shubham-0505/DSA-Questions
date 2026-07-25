#include<iostream>
using namespace std;

int power(int x,int y){

    if(y==0){
        return 1;
    }
    if(y==1){
        return x;
    }

    int ans = power(x,y/2);
    
    if(y%2 == 0){
        return ans*ans;
    }
    else{
        return x*ans*ans;
    }
}

int main(){

    int a;
    int b;

    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    int ans = power(a,b);

    cout<<a<<" to the power "<<b<<" is: "<<ans<<endl;

    return 0;
}
