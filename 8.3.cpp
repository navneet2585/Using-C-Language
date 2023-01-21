/*
Write an OOP in C++ to create a class called STACK with an array of integer type data member and 
member functions to PUSH/POP elements from the stack and display the elements on the stack.
*/

#include <iostream>
using namespace std;

#define size 5

class STACK{
    int arr[size];
    int top = -1;

    public:
    void push(int x){
        if(top >= size - 1){
            cout<<"stack is full"<<endl;
        }
        else{
            top++;
            arr[top] = x;
        }
    }
    void pop(){
        if(top <= -1){
            cout<<"stack is empty"<<endl;
        }
        else{
            cout<<arr[top]<<" elem is pop out"<<endl;
            top--;
        }
    }
    void display(){
        if(top >= 0){
            cout<<"STACK elem are : "<<endl;
            for(int i=top;i>=0;i--){
                cout<<arr[i]<<endl;
            }
        }
        else{
            cout<<"nothing to display, stack is empty"<<endl;
        }
    }
};

int main(){
    STACK ob;
    int ch,num;

    do{
        cout<<"1. to push"<<endl;
        cout<<"2. to pop"<<endl;
        cout<<"3. to display"<<endl;
        cout<<"4. to EXit"<<endl;

        cout<<"Enter the choice : ";
        cin>>ch;

        switch(ch){
            case 1:
                cout<<"Enter num to be pushed : ";
                cin>>num;
                ob.push(num);
                break;
            case 2:
                ob.pop();
                break;
            case 3:
                ob.display();
                break;
            case 4:
                cout<<"Exit"<<endl;
                break;
            default:
                cout<<"invalid choice"<<endl;
        }

    }while(ch != 4);

    return 0;
}