#include<iostream>
using namespace std;

// Creating inline function
inline int getMax(int &a, int &b){
    return (a>b) ? a : b;
}

int main(){

    int a;
    cout<<"Enter first number: ";
    cin>>a;

    int b;
    cout<<"Enter second number: ";
    cin>>b;

    // Function call is replaced by one line code of inline function
    int ans = getMax(a,b);
    cout<<"The greater number among the two is: "<<ans<<endl;

    a++;
    b++;

    // Function call is replaced by one line code of inline function
    int ans2 = getMax(a,b);
    cout<<"The greater number among the two is: "<<ans2<<endl;

    return 0;
}
