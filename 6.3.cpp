/*
WAP in OOP in c++ to demonstrate static members function of a class to pre-initialize private static data members. Also show restrictions that apply on static member functions.
*/


#include <iostream>
using namespace std;

class abc{
    int a;
    static int b;

    public:
    static void initialize(){
        b=100;
        cout<<"b is : "<<b<<endl;
    }

};

// a non-static data members can't defined outside class. 
// int abc::a;  // Error
int abc::b;

int main(){
    abc ob1;

    ob1.initialize();

    return 0;
}