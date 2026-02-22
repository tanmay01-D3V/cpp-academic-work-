#include<iostream>
using namespace std;

class area{
public: 
    int w;
    int h;

    area(int width, int height){
        w = width;
        h = height;
    }
    void display()
    {
        cout<<"The area of a room is: "<< w*h <<endl;
    }
};

class volume : public area{
public: 
    int l;

    volume(int width, int height, int length) : area(width, height){
        l = length;
    }

    void display()
    {
        cout<<"The volume of a room is: "<< w*h*l <<endl;
    }
};

int main()
{
    int w, h, l;
    cout<<"Enter the value of width, height and length : "<<endl;
    cin>>w>>h>>l;

    area a(w, h);
    a.display();

    volume v(w, h, l);
    v.display();

    return 0;
}
