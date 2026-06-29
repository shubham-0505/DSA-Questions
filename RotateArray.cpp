#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int> &arr,int n,int k){

    vector<int> temp(n);

    for(int i=0;i<n;i++){
        temp[(i+k)%n] = arr[i];
    }

    arr = temp;
}

void printArray(vector<int> &arr,int n){
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> num = {1,2,3,4,5};

    cout<<"The given array is: ";
    printArray(num,5);

    int steps;
    cout<<"Enter the no of steps to rotate array: ";
    cin>>steps;

    rotate(num,5,steps);

    cout<<"The rotated array by "<<steps<<" steps is: ";
    printArray(num,5);

    return 0;
}
