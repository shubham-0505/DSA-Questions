#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){

    for(int i=0;i<n-1;i++){

        int minIndex = i;

        for(int j=i+1;j<n;j++){

            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}

void printArray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int num[5] = {4,3,2,0,11};

    cout<<"The given array is: ";
    printArray(num,5);

    selectionSort(num,5);
    cout<<"The sorted array using selection sort is: ";
    printArray(num,5);

    return 0;
}

