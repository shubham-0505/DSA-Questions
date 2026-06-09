#include<iostream>
using namespace std;

void reverseArray(int arr[],int n){

    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[],int n){
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){

    int num[5] = {10,21,65,43,27};
    int num2[4] = {12,14,1,5};

    reverseArray(num,5);
    printArray(num,5);

    cout<<endl;
    
    reverseArray(num2,4);
    printArray(num2,4);

    return 0;
}
