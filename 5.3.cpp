/*
Write an OOP in C++ to demonstrate overloading of constructors for a class that allows creating initialized and uninitialized array of objects.
*/

#include <iostream>
using namespace std;

class abc{
    int a;
    int b;

    public:
    abc(){
        cout<<"This is default constructor"<<endl;
    }
    abc(int x,int y){
        a=x;
        b=y;
        cout<<"a is : "<<a<<",b is : "<<b<<endl;
    }
};

int main(){
    cout<<"uninitialized array : "<<endl;
    abc ob1[1]={};

    cout<<"initialized array are: "<<endl;
    abc ob2[4]={ abc(10,20),abc(30,40),abc(50,60),abc(70,70) };

    return 0;
}