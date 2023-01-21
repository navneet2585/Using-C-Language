/*
Parametrized consructor --> constructor with parameters is called Parametrized consructor
*/

#include <iostream>
#include <string.h>

using namespace std;

class student{
    int roll;
    char name[25];
    float marks;

    public:
    student(int r,char nm[],float m){
        roll=r;
        strcpy(name,nm);
        marks=m;
    }
    void display(){
        cout<<"Roll : "<<roll;
        cout<<"\nname : "<<name;
        cout<<"\nmarks : "<<marks;
    }
};

int main(){
    student s(2,"Avinash",89.63); // creating obj.. passing values to constructors
    s.display();

    return 0;
}