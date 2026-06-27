#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> &v,int m){

    int size = v.size();

    int start = m + 1;
    int end = size - 1;

    while(start<=end){
        swap(v[start],v[end]);
        start++;
        end--;
    }
}

void printVector(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> num;

    num.push_back(10);
    num.push_back(20);
    num.push_back(30);
    num.push_back(40);
    num.push_back(50);  
    
    cout<<"The given array is: ";
    printVector(num);

    int index;
    cout<<"Enter the index after which array should be reversed: ";
    cin>>index;

    cout<<"The reversed array after the index "<<index<<" is: ";
    reverse(num,index);
    printVector(num);

    return 0;
}
