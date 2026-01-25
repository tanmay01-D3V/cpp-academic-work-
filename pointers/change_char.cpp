#include<iostream>
using namespace std;

void changechar(char c){
    c = 'Z';
    cout<<c<<endl;
}

int main(){
    char ch = 'A';
    changechar(ch);
    cout<<ch<<endl;
    return 0;
}