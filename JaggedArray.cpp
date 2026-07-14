#include<iostream>
using namespace std;

int main(){

    int row = 3;
    int colSize[] = {2,3,4};

    // Declaring jagged array dynamically
    int **arr = new int*[row];

    // Creating jagged array. We are basically creating a column array for each row
    for(int i=0;i<row;i++){
        arr[i] = new int[colSize[i]];
    }

    // Taking input for the array
    cout<<"Enter elements: ";
    for(int i=0;i<row;i++){

        for(int j=0;j<colSize[i];j++){
            cin>>arr[i][j];
        }
    }

    // Printing the array
    for(int i=0;i<row;i++){

        for(int j=0;j<colSize[i];j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

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
