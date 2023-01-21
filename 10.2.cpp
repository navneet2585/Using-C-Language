/*
Write a program,in C++ to create a template class STACK and perform push and pop operations.
*/

#include <iostream>
using namespace std;

#define s 5

template <class T>
class stack{
    int top = -1;
    T arr[s];

    public:
    void push(T x){
        if(top >= s-1){
            cout<<"Stack is overflow/full"<<endl;
        }
        else{
            top++;
            arr[top] = x;
        }
    }

    void pop(){
        if(top <= -1){
            cout<<"Stack is empty/underflowed"<<endl;
        }
        else{
            cout<<arr[top]<<" is poped out from stack"<<endl;
            top--;
        }
    }

    void display(){
        if(top <= -1){
            cout<<"Stack is empty/underflowed"<<endl;
        }
        for(int i = top;i >=0;i--){
            cout<<arr[i]<<endl;
        }
    }
};

int main(){
    stack<int> ob1;

    ob1.push(10);
    ob1.push(20);
    ob1.push(30);
    ob1.push(40);
    ob1.push(50);
    ob1.display();


    /*
    stack<char> ob2;

    ob1.push('a');
    ob1.push('b');
    ob1.push('c');
    ob1.push('d');
    ob1.push('e');
    ob1.display();
    */


    return 0;
}

