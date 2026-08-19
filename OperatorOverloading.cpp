#include<iostream>
using namespace std;

class sample{

    public:
    int a;
    int b;

    // Using + operator to perform subtraction
    void operator+ (sample &obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout<<value1 - value2<<endl;
    }
};

int main(){

    sample obj1, obj2;

    obj1.a = 10;
    obj2.a = 8;

    obj1 + obj2;

    return 0;
}
