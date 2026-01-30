#include<iostream>
using namespace std;

int main(){
    int a = 10,b=5;
    int *p1 = &a;
    int *p2 = &b;

    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout<<"After swapping : \n ";
    cout<<"a : "<<a<<"\n b : "<<b;

    return 0;
}

