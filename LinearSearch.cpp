#include<iostream>
using namespace std;

bool getElement(int arr[],int n,int value){

    for(int i=0;i<n;i++){

        if(arr[i]==value){
            return 1;
        }
    }
    return 0;
}

int main(){

    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int num[size];

    for(int i=0;i<size;i++){
        cout<<"Enter "<<i<<"th element: ";
        cin>>num[i];
    }

    int val;
    cout<<"Enter the element to search for: ";
    cin>>val;

    getElement(num,size,val);

    if(getElement(num,size,val)){
        cout<<"The element is present in the array!"<<endl;
    }
    else{
        cout<<"The element is absent in the array!"<<endl;
    }
  
    return 0;
}
