#include<iostream>
using namespace std;

class hero{

    private:
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

    hero h1;

    h1.setName("Shubham");
    h1.setLevel('B');
    h1.setHealth(85);

    h1.getName();
    h1.getLevel();
    h1.getHealth();

    return 0;
}
