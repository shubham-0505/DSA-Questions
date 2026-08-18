// Multilevel Inheritance: In Multilevel inheritance, a class is derived from another derived class
// This forms a chain of inheritance

#include<iostream>
using namespace std;

class a{

    public:
    void func1(){
        cout<<"This function belongs to class a"<<endl;
    }
};

class b:public a{

    public:
    void func2(){
        cout<<"This function belongs to class b"<<endl;
    }
};

class c:public b{

    public:
    void func3(){
        cout<<"This function belongs to class c"<<endl;
    }
};

int main(){

    a a1;
    a1.func1();
    cout<<endl;

    b b1;
    b1.func1();
    b1.func2();
    cout<<endl;

    c c1;
    c1.func1();
    c1.func2();
    c1.func3();

    return 0;
}
