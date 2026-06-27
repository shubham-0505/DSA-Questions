#include<iostream>
using namespace std;

void merge(int arr1[],int m,int arr2[],int n,int arr3[]){
    
    int i = 0;
    int j = 0;
    int k = 0;

    while(i<m && j<n){

        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    while(i<m){
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while(j<n){
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int num1[5] = {1,3,5,7,9};
    int num2[4] = {2,4,6,8};

    int num3[9] = {0};

    cout<<"The first array is: ";
    printArray(num1,5);

    cout<<"The second array is: ";
    printArray(num2,4);

    cout<<"The sorted merged array is: ";
    merge(num1,5,num2,4,num3);
    printArray(num3,9);

    return 0;
}
