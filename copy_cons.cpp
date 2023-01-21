#include <iostream>
#include <string.h>

using namespace std;

class student{
    int roll;
    char name[25];
    float marks;

    public:
    student(int r,char nm[],float m){ //constructor 1 --> parametrize constructor
        roll=r;
        strcpy(name,nm);
        marks=m;
    }
    student(student &s){   //constructor 2 --> copy constructor
        roll=s.roll;
        strcpy(name,s.name);
        marks=s.marks;
    }
    void display(){
        cout<<"\nRoll : "<<roll;
        cout<<"\nname : "<<name;
        cout<<"\nmarks : "<<marks;
    }
};

int main(){
    student s1(2,"Avinash",89.63);

    student s2(s1); 

    cout<<"Values in obj S1";
    s1.display();

    cout<<"\nValues in obj S2";
    s2.display();

    return 0;
}