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

int main(){

    int num[5] = {4,5,1,2,3};

    int ans = getPivot(num,5);

    cout<<"The index of pivot element in the array is: "<<ans<<endl;

    return 0;
}
