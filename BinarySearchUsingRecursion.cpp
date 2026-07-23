#include<iostream>
using namespace std;

bool binarySearch(int *arr,int s,int e,int k){

    if(s>e){
        return false;
    }

    int mid = s + (e-s)/2;

    if(arr[mid] == k){
        return true;
    }

    if(arr[mid] > k){
        return binarySearch(arr,s,mid-1,k);
    }
    else{
        return binarySearch(arr,mid+1,e,k);
    }
}

int main(){

    int arr[5] = {2,4,6,8,10};
    int size = 5;

    int key;
    cout<<"Enter the element to search: ";
    cin>>key;

    int ans = binarySearch(arr,0,4,key);

    if(ans){
        cout<<"The element is present in the array!"<<endl;
    }
    else{
        cout<<"The element is not present in the array!"<<endl;
    }

    return 0;
}
