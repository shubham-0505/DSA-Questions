// Single Inheritance: In single inheritance, a subclass is derived from only one superclass

#include<iostream>
using namespace std;

// Creating parent class (base class/superclass)
class animal{

    public:
    string name;
    int lifespan;

    void info(){
        cout<<"Name of the animal is: "<<this->name<<endl;
        cout<<"Lifespan of the animal is: "<<this->lifespan<<endl;
    }
};

// Creating child class (subclass)
class cat: public animal{

    public:
    void catinfo(){
        cout<<"Hello I am cat!"<<endl;
    }
};

int main(){

    cat c1;
    c1.name = "Kitty";
    c1.lifespan = 20;

    c1.info();
    c1.catinfo();

    return 0;
}
