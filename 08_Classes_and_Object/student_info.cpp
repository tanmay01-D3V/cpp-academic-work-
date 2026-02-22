#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int roll_no;
    float marks;

    void setData (const string& n,int r, float m){
        name = n;
        roll_no = r;
        marks = m;
    }

    void PrintData()const{
        cout<<"Name: "<< name << endl;
        cout<<"ROll.No: "<< roll_no << endl;
        cout<<"Marks: "<< marks << endl;
    }
};

int main(){
    Student s;
    s.setData("Anna", 1, 88.8);
    s.PrintData();
    return 0;
}