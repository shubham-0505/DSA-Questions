#include<iostream>
using namespace std;

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

    ~node(){

        int value = this->data;

        if(next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory freed for node with value: "<<value<<endl;
    }
};

// Inserting node at the start of doubly linked list
void insertAtHead(node* &head, node* &tail, int value){

    node* temp = new node(value);

    if(head == NULL){
        head = temp;
        tail = temp;
        return;
    }
    else{
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// Inserting node at the end of doubly linked list
void insertAtTail(node* &head, node* &tail, int value){

    node* temp = new node(value);

    if(tail == NULL){
        head = temp;
        tail = temp;
        return;
    }
    else{
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
}

// Inserting node at a given position in doubly linked list
void insertAtPosition(node* &head, node* &tail, int position, int value){

    // Inserting at first position
    if(position == 1){
        insertAtHead(head,tail,value);
        return;
    }

    node* temp = head;
    int count = 1;

    while(count < position-1){

        temp = temp->next;
        count++;
    }

    // Inserting at last position
    if(temp->next == NULL){
        insertAtTail(head,tail,value);
        return;
    }

    node* nodeToInsert = new node(value);

    nodeToInsert->next = temp->next;
    nodeToInsert->prev = temp;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
}

// Deleting node in doubly linked list
void deleteNode(node* &head, node* &tail, int position){

    if(head == NULL && tail == NULL){
        cout<<"Nothing to delete!"<<endl;
        return;
    }

    if(position == 1){

        node* temp = head;
        head = temp->next;
        temp->next->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    else{

        node* prev = NULL;
        node* curr = head;

        int count = 1;

        while(count < position){
            prev = curr;
            curr = curr->next;
            count++;
        }

        if(curr->next == NULL){
            tail = prev;
        }
        
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    }
}

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

    node* head = NULL;
    node* tail = NULL;

    insertAtHead(head,tail,10);
    print(head);

    insertAtHead(head,tail,8);
    print(head);

    insertAtTail(head,tail,12);
    print(head);

    insertAtPosition(head,tail,3,11);
    print(head);

    insertAtPosition(head,tail,5,15);
    print(head);

    insertAtPosition(head,tail,1,0);
    print(head);

    deleteNode(head,tail,1);
    print(head);

    deleteNode(head,tail,5);
    print(head);

    cout<<"Head is pointing to: "<<head->data<<endl;
    cout<<"Tail is pointing to: "<<tail->data<<endl;

    return 0;
}
