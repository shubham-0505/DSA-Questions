#include<iostream>
using namespace std;

bool linearSearch(int *arr,int n,int k){

    if(n==0){
        return false;
    }

    if(arr[0] == k){
        return true;
    }
    else{
        linearSearch(arr+1,n-1,k);
    }
}

int main(){

    int arr[5] = {2,4,6,8,10};
    int size = 5;

    int key;
    cout<<"Enter the element to search: ";
    cin>>key;

    int ans = linearSearch(arr,size,key);

    if(ans){
        cout<<"The element is present in the array!"<<endl;
    }
    else{
        cout<<"The element is not present in the array!"<<endl;
    }

    return 0;
}
