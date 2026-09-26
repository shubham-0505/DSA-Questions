#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack <int> st;

    // Push operation
    st.push(5);
    st.push(7);
    st.push(9);

    // Pop operation
    st.pop();
    st.pop();

    // Top operation
    cout<<"Top element of the stack is: "<<st.top()<<endl;

    // Empty operation
    if(st.empty()){
        cout<<"The stack is empty!"<<endl;
    }
    else{
        cout<<"The stack is not empty!"<<endl;
    }

    return 0;
}
