#include<iostream>
using namespace std;

void reverse(char ch[],int n){

    int i = 0;
    int j = n-1;

    while(i<j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
}

int getLength(char ch[]){

    int count = 0;

    for(int i=0;ch[i] != '\0';i++){
        count++;
    }
    return count;
}

int main(){

    char ch[10];

    cout<<"Enter a string: ";
    cin>>ch;

    int length = getLength(ch);
    reverse(ch,length);

    cout<<"The reversed string is: "<<ch<<endl;

    return 0;
}
