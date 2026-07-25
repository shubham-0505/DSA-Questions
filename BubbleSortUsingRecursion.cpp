#include<iostream>
using namespace std;

void bubbleSort(int *arr, int n){

    if(n==0 || n==1){
        return;
    }

    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    bubbleSort(arr,n-1);
}

void printArray(int *arr,int n){
  
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int num[5] = {10,6,7,14,2};

    cout<<"The given array is: ";
    printArray(num,5);

    bubbleSort(num,5);
    cout<<"The sorted array using bubble sort is: ";
    printArray(num,5);

    return 0;
}
