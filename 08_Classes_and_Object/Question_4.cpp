#include<iostream>
using namespace std;


class AdditionClass {
public:
    int num1;
    int num2;
    int result;

    void read(){
        cout<<"Enter num1 and num2: ";
        cin>>num1>>num2;
    }

    void sum(){
        result = num1 + num2;
    }      
    
    void print() const {
        cout<<"sum = "<<result<<endl;
    }
};


int main(){
    AdditionClass obj1;
    AdditionClass obj2;

    cout<<"Object 1"<<endl;
    obj1.read();
    obj1.sum();
    obj1.print();

    cout<<"Object 2"<<endl;
    obj2.read();
    obj2.sum();
    obj2.print();

    return 0;
}