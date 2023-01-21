/*
WAP in c++ to overload unary minus operator to change the sign of a number.
*/

#include <iostream>
using namespace std;

class abc{
    int a;
    int b;

    public:
    abc(int x,int y){
        a = x;
        b = y;
    }
    void operator - (){
        a = -a;
        b = -b;
    }
    void display(){
        cout<<"a is : "<<a<<", b is : "<<b<<endl;
    }
};

int main(){
    abc ob1(1,-3),ob2(5,-9);

    -ob1;
    -ob2;

    ob1.display();
    ob2.display();

    return 0;
}
