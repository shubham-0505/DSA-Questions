#include<iostream>
using namespace std;

bool search(int arr[][3],int row,int col,int k){

    for(int row=0;row<3;row++){

        for(int col=0;col<3;col++){
            if(arr[row][col] == k){
                return true;
            }
        }
    }
    return false;
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

    cout<<"The elements of the arrays are: "<<endl;
    print(num);

    cout<<"Enter the element to search: ";
    int val;
    cin>>val;

    if(search(num,3,3,val)){
        cout<<val<<" is present in the array!"<<endl;
    }
    else{
        cout<<val<<" is not present in the array!"<<endl;
    }
    return 0;
}
