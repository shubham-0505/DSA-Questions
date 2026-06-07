#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int m = n;
    int mask = 0;

    // if(m==0){
    //     cout<<"Complement of 0 is: 1"<<endl;
    // }

    while(m!=0){
        mask = (mask<<1) | 1;
        m = m>>1;
    }
    int ans = (~n) & mask;
    cout<<"Complement of the given number is: "<<ans<<endl;
    return ans;
}