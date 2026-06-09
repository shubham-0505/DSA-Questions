#include<iostream>
using namespace std;

int getMax(int arr[],int size){
    int max = INT8_MIN;

    for(int i=0;i<size;i++){

        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[],int size){
    int min = INT8_MAX;

    for(int i=0;i<size;i++){

        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int main(){

    int number[5];

    for(int i=0;i<5;i++){
        cout<<"Enter "<<i<<"th element: ";
        cin>>number[i];
    }

    cout<<"Maximum element in the array is: "<<getMax(number,5)<<endl;
    cout<<"Minimum element in the array is: "<<getMin(number,5)<<endl;

    return 0;
}
