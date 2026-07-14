#include<iostream>
using namespace std;

// Passing reference variable as an argument (PASS BY REFERENCE)
// No new memory is created in this case
void update2(int &n){
    n = n/2;
}

// Passing a copy of variable as an argument (PASS BY VALUE)
// New memeory is created in this case for copy variable
void update(int n){
    n = n/2;
}

int main(){

    int a = 10;

    cout<<"Value of a before function call: "<<a<<endl;
    update(a);
    cout<<"Value of a after function call: "<<a<<endl;

    int b = 20;
    cout<<"Value of b before function call: "<<b<<endl;
    update2(b);
    cout<<"Value of b after function call: "<<b<<endl;

    return 0;
}
