#include <iostream>
using namespace std;

class Shape {
protected:
    int width;
    int height;

public:
    Shape(int w, int h) {
        width = w;
        height = h;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(int w, int h) : Shape(w, h) {}

    void calculateArea() {
        int area = width * height;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() {
    Rectangle r(10, 5);
    r.calculateArea();
    return 0;
}