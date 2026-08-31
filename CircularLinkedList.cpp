#include<iostream>
using namespace std;

// Creating node of circular linked list
class node{

    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~node(){

        int value = this->data;

        if(next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory freed for node with value: "<<value<<endl;
    }
};

// Printing nodes of circular linked list
void print(node* &tail){

    node* temp = tail;

    do{
        cout<<tail->data<<" ";
        temp = temp->next;
    }
    while(tail != temp);
    cout<<endl;
}

int main(){

    node* tail = NULL;

    return 0;
}
