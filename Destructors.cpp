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

    void print(){
        cout<<this->name<<endl;
        cout<<this->level<<endl;
        cout<<this->health<<endl;
    }

    // Destructor is automatically called when the object goes out of scope to free memory
    // Whenever we create a destructor manually, the default destructor provided by compiler is destroyed
    // A class can have only one destructor, and it cannot be overloaded
    ~hero(){
        cout<<"Destructor called!"<<endl;
    }

};

int main(){

    hero h1;
    h1.name = "Shubham";
    h1.level = 'C';
    h1.health = 60;

    h1.print();

    return 0;
}
