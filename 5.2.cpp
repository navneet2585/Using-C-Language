/*
Write a program in C++ to create a class named student,create a constructor and destructor for the class and demonstrate sequences of executions of constructors and destructors
*/

/* 
NOTE --> By default, constructors are defined in public section of class. So, question is can a constructor be defined in private section of class ?
Answer : Yes, Constructor can be defined in private section of class
*/

#include <iostream>
using namespace std;

class student{
    int a;

    public:
    student(int x){
        a=x;
        cout<<"constructor is called for : "<<a<<endl;
    }
    ~student(){
        cout<<"destructor is called : "<<a<<endl;
    }
};

student ob1(1); // global object

int main(){
    // object created from Left to Right
    student ob2(2),ob3(3),ob4(4); // local object
    student ob5(5);

    return 0;
}