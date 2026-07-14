#include<iostream>
using namespace std;

void printArray(int **arr,int n,int m){

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;

    int col;
    cout<<"Enter the number of columns: ";
    cin>>col;

    // Declaring 2D array dynamically
    int **arr = new int *[row];

    // Creating 2D array. We are basically creating a column array for each row
    for(int i=0;i<row;i++){
        arr[i] = new int[col];
    }

    // Taking input for the array
    cout<<"Enter elements: ";
    for(int i=0;i<row;i++){

        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    printArray(arr,row,col);

    // Delete heap memory manually allocated for array
    // 1st: Deleting heap memory for column arrays
    cout<<"Releasing the heap memory for array..."<<endl;
    for(int i=0;i<row;i++){
        delete []arr[i];
    }

    // 2nd: Deleting heap memory for row array
    delete []arr;
    cout<<"Heap memory released!"<<endl;

    return 0;
}
