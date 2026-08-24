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

    // Destructor for deallocating memory
    ~node(){
        
        int value = this->data;

        if(this->next != NULL){
            
            delete next;
            this->next = NULL;
        }
        cout<<"Memory freed for node with value: "<<value<<endl;
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

// Deleting node in linked list
void deleteNode(node* &head, node* &tail, int position){

    // Deleting first node
    if(position == 1){
        node* temp = head;

        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    // Deleting node at middle or end of linked list
    else{

        node* prev = NULL;
        node *curr = head;

        int count = 1;

        while(count < position){

            prev = curr;
            curr = curr->next;
            count++;
        }

        // If node to be deleted is last node, update tail
        if(curr->next == NULL){
            tail = prev;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main(){

    node* newNode = new node(5);

    node* head = newNode;
    node* tail = newNode;

    insertAtHead(head,3);
    insertAtTail(tail,6);

    insertAtPosition(head,tail,4,2);
    print(head);

    cout<<"Head is pointing to: "<<head->data<<endl;
    cout<<"Tail is pointing to: "<<tail->data<<endl;

    deleteNode(head,tail,4);
    print(head);

    cout<<"Head is pointing to: "<<head->data<<endl;
    cout<<"Tail is pointing to: "<<tail->data<<endl;

    return 0;
}
