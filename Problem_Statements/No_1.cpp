#include<iostream>
using namespace std;

class Shapes{
    public:
        virtual void area() = 0;
};

class Square : public Shapes{
    float side;
public:
    Square (float s) {
        side = s;
    }
    void area() override {
        cout<<"Area of a Square is: "<< side * side <<endl;
    }
};

class Circle : public Shapes{
    float radius;
public:
    Circle (float r) {
        radius = r;
    }
    void area() override {
        cout<<"The Area of a circle is : "<< 3.14* radius * radius <<endl;
    }
};

class Rectangle : public Shapes{
    float length;
    float width;
public:
    Rectangle (float l, float w){
        length = l;
        width = w;
    }
    void area() override {
        cout<<"The Area of a Rectangle is : "<< length * width <<endl;
    }
};

class Rhombus : public Shapes{
    float diagonal1;
    float diagonal2;
public:
    Rhombus (float d1, float d2) {
        diagonal1 = d1;
        diagonal2 = d2;
    }
    void area() override {
        cout<<"The Area of a Rhombus is : "<< diagonal1 * diagonal2 / 2 <<endl;
    }
};


int main()
{
    Shapes* s;

    Square squ(4);
    Circle cir(2);
    Rectangle rect(5,9);
    Rhombus rho(3,3);

    s = &squ;
    s->area();

    s = &cir;
    s -> area();

    s = &rect;
    s-> area();

    s = &rho;
    s -> area();

    return 0;

}
