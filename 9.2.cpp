/*
Write a C++ program to create a class called COMPLEX and implement the following by overloading + operator:-

    1) a + s2; where a is an integer (real part) and s2 is a complex number
    2) s1 + s2; where s1 and s2 are complex numbers.
    2) Return object and display the result.
*/

#include <iostream>
using namespace std;

class complex{
    int real;
    int img;

    public:
    void read(){
        cin>>real>>img;
    }
    void display(){
        cout<<real<<" + "<<img<<"i";
    }
    friend complex operator + (complex,complex);
    friend complex operator + (int,complex);
};

complex operator + (complex c1,complex c2){
        complex temp;
        temp.real = c1.real + c2.real;
        temp.img = c1.img + c2.img;
        return temp;
}

complex operator + (int a,complex c1){
        complex temp;
        temp.real = a + c1.real;
        temp.img = c1.img;
        return temp;
}

int main(){
    complex ob1,ob2,ob3;

    int a;

    cout<<"Enter real and imaginary part of 1st complex number : ";
    ob1.read();
    cout<<"Enter real and imaginary part of 2nd complex number : ";
    ob2.read();
    cout<<"Enter integer num : ";
    cin>>a;

    cout<<"Addition of complexes are : ";
    ob3 = ob1 + ob2; // operator overloading calling
    ob3.display();

    cout<<"\nAddition of integer and complex are : ";
    ob3 = a + ob1;   // operator overloading calling
    ob3.display();

    return 0;
}

// Try it by using member functions(with one parameter) not friend functions