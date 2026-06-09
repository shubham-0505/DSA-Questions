#include<iostream>
using namespace std;

int isPow(int n){

    int count = 0;

    while(n!=0){
        int bit = n&1;

        if(bit==1){
            count++;
        }
        n = n>>1;
    }
    return count;
}

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int result = isPow(n);
    if(result==1){
        cout<<"The given number is a power of 2"<<endl;
    }
    else{
        cout<<"The given number is not a power of 2"<<endl;
    }
    return 0;
}
