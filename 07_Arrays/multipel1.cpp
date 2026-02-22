#include<iostream>
using namespace std;

class InputA {
protected:
    int a;
public:
    void getA(){
        cout<<"Enter first number: ";
        cin>>a;
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
};

class Sum : public InputA , public InputB{
    public:
    void getSum() {
        cout << "Sum of the two numbers is: " << a + b << endl;
    }
};

int main() {
    Sum s;
    s.getA();
    s.getB();
    s.getSum();
    return 0;
}