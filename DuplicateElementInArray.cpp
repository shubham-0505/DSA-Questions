#include<iostream>
using namespace std;

int getDuplicate(int arr[],int n){
    int ans = 0;

    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    for(int i=1;i<n;i++){
        ans = ans^i;
    }
    return ans;
}

void printArray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int num[]={1,2,3,3,4,5};

    printArray(num,6);

    int value = getDuplicate(num,6);
    cout<<"The duplicate element in the array is: "<<value<<endl;

    return 0;
}
