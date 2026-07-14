#include<iostream>
using namespace std;

void printArray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    
    // Dynamic memory allocation using new keyword
    int *arr = new int[n];

    // Taking input for the array
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"The elements of the array are: ";
    printArray(arr,n);

    // Delete heap memory manually allocated for array
    cout<<"Releasing the heap memory for array..."<<endl;
    delete []arr;
    cout<<"Heap memory released!"<<endl;
  
    return 0;
}
