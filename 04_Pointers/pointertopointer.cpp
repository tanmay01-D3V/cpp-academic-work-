#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int *p = &a;
    int **pp = &p;

    cout<<"Value of a : "<<**pp;

    return 0;
}