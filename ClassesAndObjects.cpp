#include<iostream>
using namespace std;

class hero{

    // Data members of the class (which are private by default)
    public:
    string name;
    char level;
    int health;

    // this keyword is the pointer to the current object
    void print(){
        cout<<"Name: "<<this->name<<endl;;
        cout<<"Level: "<<this->level<<endl;;
        cout<<"Health: "<<this->health<<endl;        
    }

};

int main(){

    // Creating an object/instance h1 of class hero statically
    // Data members of the class are accessed by the object/instance using dot(.) operator in case of static allocation
    hero h1;
    h1.name = "Shubham";
    h1.level = 'A';
    h1.health = 160;

    h1.print();

    return 0;
}
