/*
WAP in OOP in c++ to demonstrate static members of a class.Include static data members to count the number of objects created for the class.
*/

#include <iostream>
using namespace std;

class abc{
    int a;
    static int count; 

    public:
    abc(){
        count++;
    }
    void disp(){
        cout<<"no of objects are : "<<count<<endl;
    }

};

int abc::count;

int main(){
    abc ob1,ob2,ob3,ob4,ob5;
    ob1.disp();

    return 0;
}