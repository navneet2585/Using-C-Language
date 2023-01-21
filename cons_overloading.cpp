#include <iostream>
#include <string.h>

using namespace std;

// constructor can be overloaded 
class student{
    int roll;
    char name[25];
    float marks;

    public:
    student(int r,char nm[],float m){ // constructor 1
        roll=r;
        strcpy(name,nm);
        marks=m;
    }
    student(int r,float m,char nm[]){ // constructor 2
        roll=r;
        strcpy(name,nm);
        marks=m;
    }
    student(char nm[],int r,float m){ // constructor 3
        roll=r;
        strcpy(name,nm);
        marks=m;
    }
    void display(){
        cout<<"\nRoll : "<<roll;
        cout<<"\nname : "<<name;
        cout<<"\nmarks : "<<marks;
    }
};

int main(){
    student s1(101,"kumar",78.53);
    student s2("Avinash",102,55.33);
    student s3(103,65.99,"sumit");

    s1.display();
    s2.display();
    s3.display();

    return 0;
}