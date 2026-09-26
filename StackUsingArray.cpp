#include<iostream>
using namespace std;
    
class stack{

    public:

    int* arr;
    int size;
    int top;

    // Constructor
    stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // Push operation
    void push(int element){

        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack overflow!"<<endl;
        }
    }

    // Pop operation
    void pop(){

        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack underflow!"<<endl;
        }
    }

    // Peek operation (top element in stack)
    int peek(){

        if(top >= 0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty!"<<endl;
            return -1;
        }
    }

    // Empty operation
    bool isEmpty(){

        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

    // Destructor
    ~stack(){
        delete[] arr;
    }
};

int main(){

    stack s1(5);

    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout<<s1.peek()<<endl;

    s1.pop();

    cout<<s1.peek()<<endl;

    s1.pop();
    s1.pop();

    if(s1.isEmpty()){
        cout<<"The stack is empty!"<<endl;
    }
    else{
        cout<<"The stack is not empty!"<<endl;
    }

    return 0;
}
