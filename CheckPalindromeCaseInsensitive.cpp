#include<iostream>
using namespace std;

char toLowercase(char ch){

    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp;
        temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isPalindrome(char ch[],int n){

    int i = 0;
    int j = n-1;

    while(i<=j){

        if(toLowercase(ch[i]) != toLowercase(ch[j])){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
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

    if(isPalindrome(ch,length)){
        cout<<"The given string is a palindrome!"<<endl;
    }
    else{
        cout<<"The given string is not a palindrome!"<<endl;
    }
    return 0;
}
