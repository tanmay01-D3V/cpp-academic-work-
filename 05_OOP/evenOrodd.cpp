#include<iostream>
using namespace std;

class number{
public:
    int a;
    void odd(){
    if (a % 2 == 0){
        cout<<"Entered number is even: ";
    }
    else{
        cout<<"Enter number is odd: ";
    }
}
};

int main(){
    number obj;
    obj.a = 10;
    obj.odd();
    return 0;
}