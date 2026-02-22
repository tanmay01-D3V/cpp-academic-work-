#include <iostream>
using namespace std;

class Vehicle {
protected:
    int speed;

public:
    Vehicle(int s) {
        speed = s;
    }

    void displaySpeed() {
        cout << "Speed of vehicle: " << speed << " km/h" << endl;
    }
};

class Car : public Vehicle {
public:
    Car(int s) : Vehicle(s) {}

    void identifyCar() {
        cout << "This is a car." << endl;
    }
};

int main() {
    Car c(80);
    c.identifyCar();
    c.displaySpeed();
    return 0;
}