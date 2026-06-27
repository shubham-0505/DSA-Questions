#include<iostream>
using namespace std;

void moveZeros(int arr[],int n){

    int i = 0;

    for(int j=0;j<n;j++){

        if(arr[j] != 0){
            swap(arr[j],arr[i]);
            i++;
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

    int num1[8] = {1,3,0,0,8,0,6,0};

    cout<<"The given array is: ";
    printArray(num1,8);

    moveZeros(num1,8);

    cout<<"The sorted array by moving zeros is: ";
    printArray(num1,8);

    return 0;
}
