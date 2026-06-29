#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int> &arr,int n){

    int count = 0;

    for(int i=1;i<n;i++){
        if(arr[i-1] > arr[i]){
            count++;
        }
    }
    if(arr[n-1] > arr[0]){
        count++;
    }

    if(count<=1){
        return true;
    }
    else{
        return false;
    }
}

void printArray(vector<int> &arr,int n){
  
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> num = {5,1,7,8,4};

    cout<<"The given array is: ";
    printArray(num,5);

    int ans = check(num,5);

    if(ans){
        cout<<"The given array is sorted and rotated"<<endl;
    }
    else{
        cout<<"The given arrays is not sorted and rotated"<<endl;
    }
    return 0;
}
