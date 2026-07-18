#include<iostream>
using namespace std;

// Here start is the default argument
// It will print the array starting from 0 if nothing is passed 
void printArray(int arr[], int n, int start=0){

    for(int i=start;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {2,4,6,8,10};
    int size = 5;

    // Start is not passed in function call
    printArray(arr,5);

    return 0;
}
