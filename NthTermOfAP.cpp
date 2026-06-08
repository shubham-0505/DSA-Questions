#include<iostream>
using namespace std;

int nthTerm(int a,int b,int c){
    int ans = a + ((c-1)*b);
    return ans;
}

int main(){

    int x,y,n;
    cout<<"Enter the first term of an A.P: ";
    cin>>x;

    cout<<"Enter the common difference of an A.P: ";
    cin>>y;

    cout<<"Enter the number of term to find: ";
    cin>>n;

    int value = nthTerm(x,y,n);
    cout<<"The "<<n<<"th"<<" term of the sequence is: "<<value<<endl;

    return 0;
}
