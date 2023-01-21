/*
WAP in OOP in c++ to preapre a student record class calss and object with following data members and member functions:
    Data-members:
        name
        reg_no
        marks in three subjects
    Member functions:
        Read
        Display
        Avg marks
*/
#include <iostream>
using namespace std;

class Student{
    string name;
    long int reg_no;
    int marks[3];

    public:
    void read(){
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter reg-no : ";
        cin>>reg_no;
        for(int i=0;i<3;i++){
            cout<<"marks - "<< i<<" ";
            cin>>marks[i];
        }
    }

    void display(){
        cout<<"Name is "<<name<<endl;
        cout<<"Reg-No is "<<reg_no<<endl;
        cout<<"Marks is - ";
        for(int i=0;i<3;i++){
            cout<<marks[i]<< " ";
        }
    }

    void avgMarks(){
        float sum=0,avg;
        for(int i=0;i<3;i++){
            sum = sum + marks[i];  
        }
        avg=sum/3;
        cout <<"\nAvg marks is : "<< avg;
    }
};

int main(){
    Student obj;

    obj.read();
    obj.display();
    obj.avgMarks();

    return 0;
}

