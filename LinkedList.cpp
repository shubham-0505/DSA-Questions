#include<iostream>
using namespace std;

// Creating node of linked list
class node{

    public:
    int data;
    node *next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int main(){

    node *node1 = new node(5);

    cout<<"Value in the node is: "<<node1->data<<endl;
    cout<<"Address of the next node is: "<<node1->next<<endl;

    return 0;
}
