#include<iostream>
using namespace std;

int partition(int *arr,int s,int e){

    int pivotElement = arr[s];

    int count = 0;

    for(int i=s+1;i<=e;i++){
        if(arr[i] <= pivotElement){
            count++;
        }
    }

    // Placing pivot element at the right index
    int pivotIndex = s + count;
    swap(arr[pivotIndex],arr[s]);

    // Elements to left of pivotIndex should be <pivotElement and right of pivotIndex should be >pivotElement
    int i=s;
    int j=e;

    while(i<pivotIndex && j>pivotIndex){

        while(arr[i] <= pivotElement){
            i++;
        }
        while(arr[j] > pivotElement){
            j--;
        }
      
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    
    return pivotIndex;
}

void quickSort(int *arr,int s,int e){

    if(s>=e){
        return;
    }

    // Partitioning the array s->pivot | pivot | pivot+1->end
    int p = partition(arr,s,e);

    // Sorting left subarray using recursion
    quickSort(arr,s,p-1);

    // Sorting right subarray using recursion
    quickSort(arr,p+1,e);
}

int main(){

    int arr[5] = {5,4,3,2,1};
    int n = 5;

    quickSort(arr,0,n-1);

    cout<<"The sorted array using quick sort is: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
