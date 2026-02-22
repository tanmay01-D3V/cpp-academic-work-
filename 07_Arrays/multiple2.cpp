#include<iostream>
using namespace std;

class InputA {
private:
    int a;
public:
    void getA(){
        cout<<"Enter first number: ";
        cin>>a;
    }
    int getValueA(){
        return a;
    }
};

class InputB{
protected: 
    int b;
public:
    void getB(){
        cout<<"Enter second number: ";
        cin >> b;
    }
    int getValueB(){
        return b;
    }
};

class Sum : public InputA , public InputB{
    public:
    void getSum() {
        cout << "Sum of the two numbers is: " << getValueA() + getValueB() << endl;
    }
};

int main() {
    Sum s;
    s.getA();
    s.getB();
    s.getSum();
    return 0;
}