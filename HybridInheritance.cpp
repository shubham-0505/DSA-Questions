// Hybrid Inheritance: In hybrid inheritence, two or more types of inheritance are combined in one program

#include<iostream>
using namespace std;

class a{

    public:
    void func1(){
        cout<<"This function belongs to class a"<<endl;
    }
};

class b: public a{

    public:
    void func2(){
        cout<<"This function belongs to class b"<<endl;
    }
};

class d{

    public:
    void func3(){
        cout<<"This function belongs to class d"<<endl;
    }

};

class c:public a, public d{

    public:
    void func4(){
        cout<<"This function belongs to class c"<<endl;
    }
};

int main(){

    b b1;

    b1.func1();
    b1.func2();
    
    c c1;

    c1.func1();
    c1.func3();
    c1.func4();

    return 0;
}
