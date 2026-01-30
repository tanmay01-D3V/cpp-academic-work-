#include<iostream>
using namespace std;

void display(int *p) {
    cout << "Value = " << *p;
}

int main() {
    int a = 50;
    display(&a);
    return 0;
}
