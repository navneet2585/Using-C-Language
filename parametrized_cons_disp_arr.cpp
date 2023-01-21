#include <iostream>
using namespace std;

class student{
    int reg;
    string name;
    int fee;

    public:
    student(int r,string n,int f){
        reg=r;
        name=n;
        fee=f;
    }
    void display(){
        cout<<reg<<endl;
        cout<<name<<endl;
        cout<<fee<<endl;
    }
};

int main(){
    student ob[3]={ student(101,"a",1000),
                    student(102,"b",2000),
                    student(103,"c",3000)
                };

    for(int i=0;i<3;i++){
        ob[i].display();
    }

    return 0;
}
