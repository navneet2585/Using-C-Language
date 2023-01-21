/*
WAP in c++ to create a class called STACK using array of integers.implement the following operations by overloading the operators 
+ and -- 

1) s1 = s1 + element; where s1 is a object of the class STACK and element is an integer to be PUSHED on top of the STACK
2) s1 = s1-- ; where s1 is object of the class STACK , -- operator POP the element.

NOTE-->handle the STACK empty and STACK full conditions.
*/

#include <iostream>
using namespace std;

#define size 5

class STACK{
    int arr[size];
    int top = -1;

    public:
    void operator + (int x){
        if(top >= size - 1){
            cout<<"stack is full"<<endl;
        }
        else{
            top++;
            arr[top] = x;
        }
    }
    void operator -- (){
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
                ob + num; // calling push method
                break;
            case 2: 
                --ob;  // calling pop method
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
