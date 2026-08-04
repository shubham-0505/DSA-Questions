#include<iostream>
using namespace std;

void mergeSortedArray(int *arr,int s,int e){

    int mid = s + (e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    int mainArrIndex = s;

    // Populate first array with elements from 0 to mid
    for(int i=0;i<len1;i++){
        arr1[i] = arr[mainArrIndex];
        mainArrIndex++;
    }

    mainArrIndex = mid+1;

    // Populate second array with elements from mid+1 to end
    for(int i=0;i<len2;i++){
        arr2[i] = arr[mainArrIndex];
        mainArrIndex++;
    }

    int i=0;
    int j=0;
    mainArrIndex = s;

  // Merge 2 sorted arrays arr1 and arr2 back into main array
    while(i<len1 && j<len2){

        if(arr1[i] < arr2[j]){
            arr[mainArrIndex] = arr1[i];
            mainArrIndex++;
            i++;
        }
        else{
            arr[mainArrIndex] = arr2[j];
            mainArrIndex++;
            j++;
        }
    }

    // Copy remaining elements from arr1 and arr2 into main array
    while(i<len1){
        arr[mainArrIndex] = arr1[i];
        mainArrIndex++;
        i++;
    }

    while(j<len2){
        arr[mainArrIndex] = arr2[j];
        mainArrIndex++;
        j++;
    }
}

void mergeSort(int *arr, int s,int e){

    if(s>=e){
        return;
    }

    int mid = s + (e-s)/2;

    // Sort left subarray
    mergeSort(arr,s,mid);

    // Sort right subarray
    mergeSort(arr,mid+1,e);

    // Merge two sorted subarrays
    mergeSortedArray(arr,s,e);
}

int main(){

    int arr[5] = {5,4,3,2,1};
    int n = 5;

    mergeSort(arr,0,n-1);

    cout<<"The sorted array using merge sort is: ";
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
