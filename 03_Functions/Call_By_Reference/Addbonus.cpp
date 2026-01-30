#include <iostream>
using namespace std;

void addBonus(int &salary) {
    salary = salary + 5000;
}

int main() {
    int salary;
    cin >> salary;
    addBonus(salary);
    cout << "Updated Salary = " << salary;
    return 0;
}
