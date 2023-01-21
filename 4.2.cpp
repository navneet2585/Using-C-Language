/*
Write a C++ program to create a class called complex and implement the following by overloading functions ADD(that return a complex number . ADD(a, s2), where a is an integer (real part), s2 is a complex number. ADD(s1, s2) where s1 and s2 are complex numbers.
*/

#include <iostream>
using namespace std;

class complex{
    int real,img;

    public:
    void read(){
        cin>>real>>img;
    }

    complex add(int a ,complex c){
        complex temp;
        temp.real = a + c.real;
        temp.img = c.img;
        
        return temp;
    }
    
    complex add(complex c1 ,complex c2){
        complex temp;
        temp.real = c1.real + c2.real;
        temp.img = c1.img + c2.img;

        return temp;
    }
    void display(){
        cout<<real<<" + "<<img<<"i";
    }

};

int main(){
    complex ob1,ob2,ob3,res;
    int a;

    cout<<"Enter real and imaginary part of 1st complex number : ";
    ob1.read();
    cout<<"Enter real and imaginary part of 2nd complex number : ";
    ob2.read();
    cout<<"Enter integer num : ";
    cin>>a;

    cout<<"Addition of complexes are : ";
    res = ob3.add(ob1,ob2);
    res.display();

    cout<<"\nAddition of integer and complex are : ";
    res = ob3.add(a,ob1);
    res.display();

    return 0;
}
