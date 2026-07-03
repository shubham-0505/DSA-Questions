#include<iostream>
#include<string>
using namespace std;

bool valid(char ch){

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return true;
    }
    return false;
}

char toLowercase(char ch){

    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return ch;
    }
    else{
        char temp;
        temp = ch -'A' + 'a';
        return temp;
    }
}

bool isPalindrome(string a){

    int i = 0;
    int j = a.length() - 1;

    while(i<=j){

        if(a[i] != a[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

int main(){

    string name;
    cout<<"Enter a string: ";
    getline(cin,name);


    string temp = "";

    // Remove non-alphanumeric characters
    for(int i=0;i<name.length();i++){
        if(valid(name[i])){
            temp.push_back(name[i]);
        }
    }

    // Convert to lowercase
    for(int i=0;i<temp.length();i++){
        temp[i] = toLowercase(temp[i]);
    }

    // Check palindrome
    if(isPalindrome(temp)){
        cout<<"The given string is a palindrome!"<<endl;
    }
    else{
        cout<<"The given string is not a palindrome!"<<endl;
    }
    return 0;
}
