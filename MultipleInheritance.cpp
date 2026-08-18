// Multiple Inheritance: In Multiple inheritance, one class can have more than one superclass 
// The child class can inherit features from all parent classes

#include<iostream>
using namespace std;

class a{

    public:
    void func1(){
        cout<<"This function belongs to class a"<<endl;
    }
};

class b{

    public:
    void func2(){
        cout<<"This function belongs to class b"<<endl;
    }
};

class c:public a, public b{

    public:
    void func3(){
        cout<<"This function belongs to class c"<<endl;
    }
};

int main(){

    c c1;
    
    c1.func1();
    c1.func2();
    c1.func3();

    return 0;
}
