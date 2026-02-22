#include<iostream>
using namespace std;

class Number {
protected:
int n;
public:
    void getNumber(){
        cout<<"Enter a number: ";
        cin>>n;
    }
};

class Square : public Number{
public: 
    void getSquare(){
        cout<<"The square of number is : "<< n*n <<endl;
    }
};

class cube : public Square{
public: 
    void getcube(){
        cout<<"The cube of the number is: "<< pow(n,3) <<endl;
    }
};

int main(){
    Square s;
    cube c;
    s.getNumber();
    s.getSquare();
    c.getNumber();
    c.getcube();
    return 0;
}


