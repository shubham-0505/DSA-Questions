#include<iostream>
using namespace std;

class hero{

    private:
    string name;
    char level;
    int health;

    // Constructor ensures object completeness until properties are assigned to a object
    // It is called automatically whenever a new object is created
    // Name of the constructor is same as class name and it has no return type (not even void)
    // Whenever we create a constructor manually, the default constructor provided by compiler is destroyed

    public:

    // Default constructor
    hero(){
        cout<<"Default constructor called!"<<endl;
    }

    // Parameterised constructor
    hero(string name,char level,int health){
        cout<<"Parameterised constructor called!"<<endl;
        this->name = name;
        this->level = level;
        this->health = health;
    }

    string setName(string name){
        this->name = name;
    }
    char setLevel(char level){
        this->level = level;
    }
    int setHealth(int health){
        this->health = health;
    }

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
    h1.setLevel('E');
    h1.setHealth(90);

    h1.getName();
    h1.getLevel();
    h1.getHealth();

    // Creating object h2 using parameterised constructor
    hero h2("Rakesh",'B',80);

    h2.getName();
    h2.getLevel();
    h2.getHealth();
    
    return 0;
}
