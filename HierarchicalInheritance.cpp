// Hierarchical Inheritance: In hierarchical inheritance, more than one subclass is inherited from a single base class
// That means more than one derived class is created from a single base class

#include<iostream>
using namespace std;

class a{

    public:
    void func1(){
        cout<<"This function belongs to base class"<<endl;
    }
};

class b:public a{

    public:
    void func2(){
        cout<<"This function belongs to first child class"<<endl;
    }
};

class c:public a{

    public:
    void func3(){
        cout<<"This function belongs to second child class"<<endl;
    }
};

int main(){

    b b1;

    b1.func1();
    b1.func2();

    c c1;

    c1.func1();
    c1.func3();

    return 0;
}
