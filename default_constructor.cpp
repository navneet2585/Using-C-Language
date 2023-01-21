
/* 
default constructors --> constructors without parameters called default constructors 
*/
#include <iostream>
#include <string.h>

using namespace std;

class student{
    int roll;
    char name[25];
    float marks;

    public:
    student(){
      roll=1;
      strcpy(name,"kumar");
      marks=78.42;
    }
    void display(){
      cout<<"Roll : "<<roll;
      cout<<"\nname : "<<name;
      cout<<"\nmarks : "<<marks;
    }
};

int main(){
    student s; 
    s.display();

    return 0;
}

