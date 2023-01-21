#include <iostream>
#include <string.h>

using namespace std;

class student{
    int roll;
    char name[25];
    float marks;
    
    public:
    student(){
        roll=4;
        strcpy(name,"Avinash");
        marks=84.56;
    }
    void display(){
        cout<<"\nRoll : "<<roll;
        cout<<"\nname : "<<name;
        cout<<"\nmarks : "<<marks;
    }
    ~student(){
        cout<<"\nEnd of program";
    }
};

int main(){
    student s;
    s.display();

    return 0;
}

