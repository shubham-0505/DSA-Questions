#include<iostream>
using namespace std;

int columnSum(int arr[][3],int row,int col){

    for(int col=0;col<3;col++){

        int sum = 0;

        for(int row=0;row<3;row++){
            sum = sum + arr[row][col];
        }
        cout<<sum<<endl;
    }
}

void print(int arr[][3]){

    for(int row=0;row<3;row++){

        for(int col=0;col<3;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    int num[3][3];

    cout<<"Enter 9 elements in 2D array: ";

    for(int row=0;row<3;row++){

        for(int col=0;col<3;col++){
            cin>>num[row][col];
        }
    }

    cout<<"The elements of the array are: "<<endl;
    print(num);

    cout<<"The column wise sum of the array is: "<<endl;
    columnSum(num,3,3);

    return 0;
}
