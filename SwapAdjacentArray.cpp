#include<iostream>
using namespace std;

void swapAdj(int arr[],int n){

    for(int i=0;i<n;i=i+2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
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

    int num1[]={1,3,5,7,9};
    int num2[]={2,4,6,8,10,12};

    swapAdj(num1,5);
    swapAdj(num2,6);

    printArray(num1,5);
    printArray(num2,6);

    return 0;
}
