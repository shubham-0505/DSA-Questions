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
};

// Inserting node at the start of linked list
void insertAtHead(node* &head, int value){

    node* temp = new node(value);

    temp->next = head;
    head = temp;
}

// Inserting node at the end of linked list
void insertAtTail(node* &tail, int value){

    node* temp = new node(value);

    tail->next = temp;
    tail = tail->next;
}

// Inserting node at a given position in linked list
void insertAtPosition(node* &head, node* &tail, int value, int position){

    node *temp = head;

    // Inserting at first position
    if(position == 1){
        insertAtHead(head,value);
        return;
    }

    node* nodeToInsert = new node(value);

    int count = 1;

    while(count < position-1){

        temp = temp->next;
        count++;
    }

    // Inserting at last position
    if(temp->next == NULL){
        insertAtTail(tail,value);
        return;
    }

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// Printing nodes of linked list
void print(node* &head){

    node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){

    node* newNode = new node(10);

    node* head = newNode;
    node* tail = newNode;

    insertAtHead(head,5);
    print(head);

    insertAtTail(tail,15);
    print(head);

    insertAtPosition(head,tail,18,4);
    print(head);

    insertAtPosition(head,tail,20,5);
    print(head);

    cout<<"Head is pointing to: "<<head->data<<endl;
    cout<<"Tail is pointing to: "<<tail->data<<endl;

    return 0;
}
