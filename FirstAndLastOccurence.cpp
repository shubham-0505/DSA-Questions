#include<iostream>
using namespace std;

int firstOcc(int arr[],int n,int key){

    int start = 0;
    int end = n-1;

    int mid = start + (end-start/2);

    int ans = -1;

    while(start<=end){

        if(arr[mid] == key){
            ans = mid;
            end = mid -1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }

        mid = start + (end-start/2);
    }
    return ans;
}

int lastOcc(int arr[],int n,int key){

    int start = 0;
    int end = n-1;

    int mid = start + (end-start/2);

    int ans = -1;

    while(start<=end){

        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }

        mid = start + (end-start/2);
    }
    return ans;
}
int main(){

    int num[5]= {1,2,3,3,5};

    int ans = firstOcc(num,5,3);
    int ans2 = lastOcc(num,5,3);

    cout<<"First occurence of 3 is at index: "<<ans<<endl;
    cout<<"Last occurence of 3 is at index: "<<ans2<<endl;

    return 0;
}
