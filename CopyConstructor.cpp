#include<iostream>
using namespace std;

class hero{

    public:
    string name;
    char level;
    int health;

    hero(){
        cout<<"Default constructor called!"<<endl;
    }

    // Copy constructor
    // Always pass object by reference in copy constructor to avoid infinite loop
    hero(hero &temp){
        cout<<"Copy constructor called!"<<endl;
        name = temp.name;
        level = temp.level;
        health = temp.health;
    }

    void print(){
        cout<<this->name<<endl;
        cout<<this->level<<endl;
        cout<<this->health<<endl;
    }

};

int main(){

    hero h1;

    h1.name = "Shubham";
    h1.level = 'D';
    h1.health = 75;

    h1.print();

    // Copying object h1 into h2
    // Here = is copy assignment operator
    hero h2 = h1;
    h2.print();

    return 0;
}
