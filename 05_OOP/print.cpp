#include<iostream>
using namespace std;

class integer {
public: 
    int n,m;
    void show(){
        cout<<"Sum: "<<n+m;
    }
};


int main(){
    integer obj;
    obj.n = 10;
    obj.m = 5;
    obj.show();
    return 0;
}
