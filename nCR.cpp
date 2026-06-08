#include<iostream>
using namespace std;

int factorial(int a){
    int ans = 1;

    for(int i=1;i<=a;i++){
        ans = ans * i;
    }
    return ans;
}

int nCR(int n, int r){

    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n-r);

    return numerator/denominator;
}
  
int main(){

    int x,y;
    cout<<"Enter the value of n: ";
    cin>>x;

    cout<<"Enter the value of r: ";
    cin>>y;

    int answer = nCR(x,y);
    cout<<"The value of nCr is: "<<answer<<endl;
}
