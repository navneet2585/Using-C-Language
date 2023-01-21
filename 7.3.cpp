/*
Write an OOP in C++ to demonstrate the advantage of overloading '+' operator using friend function.
*/

#include <iostream>
using namespace std;

class abc{
    int a;

    public:
    void read(){
        cout<<"Enter num : ";
        cin>>a;
    }
    void disp(){
        cout<<"Addition of a is : "<<a<<endl;
    }

    friend abc operator + (abc ob1,int x);
    friend abc operator + (int x,abc ob1);
    friend abc operator + (abc ob1,abc ob2);
};

abc operator + (abc o1,int x){
    abc temp;
    temp.a = o1.a + x;
    return temp;
}

abc operator + (int x,abc o1){
    abc temp;
    temp.a = x + o1.a;
    return temp;
}

abc operator + (abc o1,abc o2){
    abc temp;
    temp.a = o1.a + o2.a;
    return temp;
}

int main(){
    abc ob1,ob2,ob3,ob4,ob5;
    ob1.read();
    ob2.read();

    ob3 = ob1 + 10;
    ob4 = 25 + ob1;
    ob5 = ob1 + ob2;

    ob3.disp();
    ob4.disp();
    ob5.disp();

    return 0;
}
