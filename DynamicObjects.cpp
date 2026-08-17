#include<iostream>
using namespace std;

class hero{

    string name;
    char level;
    int health;

    public:
    // Using setter to set properties for the object h1 which are private
    string setName(string name){
        this->name = name;
    }
    char setLevel(char level){
        this->level = level;
    }

    int setHealth(int health){
        this->health = health;
    }

    // Using getter to access private data members of the class outside the class
    void getName(){
        cout<<"Name: "<<this->name<<endl;
    }
    void getLevel(){
        cout<<"Level: "<<this->level<<endl;
    }
    void getHealth(){
        cout<<"Health: "<<this->health<<endl;
    }

};

int main(){

    // Creating an object/instance h2 of class hero dynamically
    // Data members of the class are accessed by the object/instance using arrow(->) operator in case of dynamic allocation
    hero *h1 = new hero();

    h1->setName("Shubham");
    h1->setLevel('C');
    h1->setHealth(100);

    h1->getName();
    h1->getLevel();
    h1->getHealth();

    delete h1;
    cout<<"Heap memory released!"<<endl;

    return 0;
}
