#include<iostream>
using namespace std;

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
  
    cout<<"The length of string is: "<<getLength(ch)<<endl;

    return 0;
}
