#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(string &str,int i,int j){

    if(i>j){
        return true;
    }

    if(str[i] != str[j]){
        return false;
    }
    else{
        return checkPalindrome(str,i+1,j-1);
    }
}

int main(){

    string name;
    cout<<"Enter a string: ";
    cin>>name;

    bool isPalindrome = checkPalindrome(name,0,name.length()-1);

    if(isPalindrome){
        cout<<"The given string is a palindrome!"<<endl;
    }
    else{
        cout<<"The given string is not a palindrome!"<<endl;
    }

    return 0;
}
