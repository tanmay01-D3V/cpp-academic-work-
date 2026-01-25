#include<iostream>
using namespace std;
int main(){
    for (int i = 1;i <= 5 ;++i){
        cout<<"Outer: " << i <<endl;
        for (int j=5;j >= 0;--j){
            cout<<"  Inner: "<< j << endl;
        }
    }
    return 0;
}       