
/*
WAP in C++ to create a class called Figure. Use this class to store two double type values that could be used to compute the area of various shapes length, breadth for rectangle and base,height for triangle). Derive two specific classes called Triangle and Rectangle inherited from super class Figure. Create avirtual function called area() to compute and display the area of the basic shapes. Redefine this function in derived classes to suit its requirements.
*/
#include <iostream>
using namespace std;

class Figure{
    public:
    double a;
    double b;

    virtual void area(){
        double ar;
        ar = a*b;
        cout<<"Area is : "<<ar<<endl;
    }
    void read(){
        cout<<"Enter a and b : ";
        cin>>a>>b;
    }
};

class Triangle:public Figure{
    public:
    void area(){
        double ar;
        ar = 0.5*a*b;
        cout<<"Area of triangle is : "<<ar<<endl;
    }
};

class Rectangle:public Figure{
    public:
    void area(){
        double ar;
        ar = a*b;
        cout<<"Area of rectangle is : "<<ar<<endl;
    }
};

int main(){
    Triangle t1;
    Rectangle r1;

    t1.read();
    r1.read();
    
    t1.area();
    r1.area();

    return 0;
}