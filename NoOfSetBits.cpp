#include<iostream>
using namespace std;

int setBitsCount(int n){

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

    int x,y;
    cout<<"Enter first number: ";
    cin>>x;

    cout<<"Enter second number: ";
    cin>>y;

    int value1 = setBitsCount(x);
    int value2 = setBitsCount(y);

    int result = value1+value2;

    cout<<"The number of set bits in both the numbers are: "<<result<<endl;

    return 0;
}
