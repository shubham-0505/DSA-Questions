#include<iostream>
using namespace std;

int getUnique(int arr[],int n){
    int ans=0;

    for(int i=0;i<n;i++){
        ans = ans^arr[i];
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

    int num[] = {1,3,12,3,14,14,1};

    printArray(num,7);

    int value = getUnique(num,7);
    cout<<"The unique element in the array is: "<<value<<endl;

    return 0;
}
