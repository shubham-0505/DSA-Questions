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

void print(node* &tail){

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

    return 0;
}
