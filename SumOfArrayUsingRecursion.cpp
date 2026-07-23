#include<iostream>
using namespace std;

int getSum(int *arr,int n){

    if(n==0){
        return 0;
    }

    if(n==1){
        return arr[0];
    }

    int nextPart = getSum(arr+1,n-1);
    int sum = arr[0] + nextPart;

    return sum;
}

int main(){

    int arr[5] = {3,1,4,5,6};
    int size = 5;

    int ans = getSum(arr,size);
    
    cout<<"The sum of elements in the array is: "<<ans<<endl;

    return 0;
}
