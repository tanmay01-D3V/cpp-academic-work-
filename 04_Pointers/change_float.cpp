#include<iostream>
using namespace std;

void changefl(float f){
    f = 2.1;
    cout<<f<<endl;
}

int main(){
    float value = 19.3;
    changefl(value);
    cout<<value<<endl;
    return 0;
}
