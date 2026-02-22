#include <iostream>
using namespace std;

class Maths {
protected:
    int m;
public:
    void getMaths() {
        cout << "Enter Maths marks: ";
        cin >> m;
    }
};

class Science {
protected:
    int s;
public:
    void getScience() {
        cout << "Enter Science marks: ";
        cin >> s;
    }
};

class Total : public Maths, public Science {
public:
    void showTotal() {
        cout << "Total Marks = " << m + s;
    }
};

int main() {
    Total obj;
    obj.getMaths();
    obj.getScience();
    obj.showTotal();
    return 0;
}
