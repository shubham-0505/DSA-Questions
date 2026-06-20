#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){

    for(int i=0;i<n-1;i++){

        for(int j=0;j<n-i;j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void printArray(int arr[],int n){

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
