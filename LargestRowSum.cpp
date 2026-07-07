#include<iostream>
#include<climits>
using namespace std;

int largestRowSum(int arr[][4],int row,int col){

    int maxSum = INT_MIN;
    int rowIndex = -1;

    for(int row=0;row<3;row++){

        int sum = 0;
    
        for(int col=0;col<4;col++){
            sum = sum + arr[row][col];
        }
        if(sum > maxSum){
            maxSum = sum;
            rowIndex = row;
        }
    }
    return rowIndex;
}

void print(int arr[][4]){

    for(int row=0;row<3;row++){

        for(int col=0;col<4;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    int num[3][4];

    cout<<"Enter 12 elements in 2D array: ";

    for(int row=0;row<3;row++){

        for(int col=0;col<4;col++){
            cin>>num[row][col];
        }
    }

    cout<<"The elements of the array are: "<<endl;
    print(num);

    int ans = largestRowSum(num,3,4);
    cout<<"The maximum row sum is present at index: "<<ans<<endl;

    return  0;
}
