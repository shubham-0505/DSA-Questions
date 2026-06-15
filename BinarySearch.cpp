#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){

    int start = 0;
    int end = n-1;

    int mid =  start + (end-start)/2;

    while(start<=end){

        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){

    int num1[6] = {2,4,6,8,10,12};
    int num2[5] = {1,3,5,7,9};

    int ans1 = binarySearch(num1,6,10);
    int ans2 = binarySearch(num2,5,1);
    
    cout<<"The element 10 is present at index: "<<ans1<<endl;
    cout<<"The element 1 is present at index: "<<ans2<<endl;

    return 0;
}
