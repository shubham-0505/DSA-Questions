#include<iostream>
using namespace std;

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

void insertNode(node* &tail, int element, int value){

    // If the circular linked list is empty
    if(tail == NULL){

        node* newNode = new node(value);

        tail = newNode;
        newNode->next = newNode;
        return;
    }
    // If the circular linked list is not empty
    else{

        node* curr = tail;

        // Assuming that the element is present in circular linked list
        while(curr->data != element){
            curr = curr->next;
        }

        node* temp = new node(value);
        temp->next = curr->next;
        curr->next = temp;
    }
}

// Deleting node in circular linked list
void deleteNode(node* &tail, int value){

    node* prev = tail;
    node* curr = prev->next;

    if(tail == NULL){
        cout<<"Circular linked list is empty, nothing to delete!"<<endl;
        return;
    }
    else{

        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }

        if(prev == curr){
            tail = NULL;
        }

        else if(tail == curr){
            tail = prev;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(node* &tail){

    if(tail == NULL){
        cout<<"Circular linked list is empty, nothing to print!"<<endl;
        return;
    }

    node* temp = tail;

    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }
    while(tail != temp);
    cout<<endl;
}

int main(){

    node* tail = NULL;

    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,9);
    print(tail);

    insertNode(tail,5,7);
    print(tail);

    deleteNode(tail,3);
    print(tail);

    return 0;
}
