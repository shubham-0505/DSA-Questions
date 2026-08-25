#include<iostream>
using namespace std;

// Creating node of doubly linked list
class node{

    public:
    int data;
    node* next;
    node* prev;

    node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

// Printing nodes of doubly linked list
void print(node* &head){

    node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){

    node* newNode = new node(5);

    node* head = newNode;
    node* tail = newNode;

    print(head);

    return 0;
}
