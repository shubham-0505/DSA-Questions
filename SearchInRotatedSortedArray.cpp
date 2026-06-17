#include<iostream>
using namespace std;

int getPivot(int arr[],int n){

    int start = 0;
    int end = n-1;

    int mid = start + (end-start)/2;

    while(start<end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int binarySearch(int arr[],int s,int e,int key){

    int start = s;
    int end = e;

    int mid = start + (end-start)/2;

    while(start<=end){

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]>key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int findPosition(int arr[],int n,int k){

    int pivot = getPivot(arr,5);

    if(k >= arr[pivot] && k<= arr[n-1]){
        return binarySearch(arr,pivot,n-1,k);
    }
    else{
        return binarySearch(arr,0,pivot-1,k);
    }
}

int main(){

    int num[5] = {12,15,18,2,4};

    int ans = findPosition(num,5,2);
    
    cout<<"The element 2 is present at index: "<<ans<<endl;

    return 0;
}
