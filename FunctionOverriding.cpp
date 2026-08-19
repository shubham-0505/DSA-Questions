// Function overriding is an example of runtime polymorphism
// The child class object overrides the inherited implementation of the parent class and executes on its own
// Name and no. of arguments of function must be same and this can be achieved only through inheritance

#include<iostream>
using namespace std;

class animal{

    public:
    void sound(){
        cout<<"Speaking!"<<endl;
    }
};

class dog: public animal{

    public:
    void sound(){
        cout<<"Barking!"<<endl;
    }
};

int main(){

    dog d1;
    d1.sound();

    return 0;
}
