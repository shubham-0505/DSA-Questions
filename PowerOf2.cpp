#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    bool isPow = 0;

    for(int i=0;i<=30;i++){
        int ans = pow(2,i);

        if(ans == n){
            isPow = 1;
        }
    }
    if(isPow){
        cout<<"The given number is a power of 2"<<endl;
    }
    else{
        cout<<"The given number is not a power of 2"<<endl;
    }
}
