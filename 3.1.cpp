/*
Define a student class with usn ,name and marks in 3 test of a subject,declare an array of 1 student object find the average of two better marks for each student. Print USN, name, and average marks of all the students.
*/

#include <iostream>
using namespace std;

class Student{
    long int usn;
    string name;
    int marks[3];

    public:
    void accept(){
        cout<<"Enter usn no : ";
        cin>>usn;
        cout<<"Enter student name : ";
        cin>>name;
        for(int i=0;i<3;i++){
            cout<<"Marks of test"<<i+1<<" - ";
            cin>>marks[i];
        }
    }
    void average(){
        int max1,max2;
        float avg;
        max1=max2=marks[0];

        for(int i=0;i<3;i++){
            if(marks[i]>max1)
                max1=marks[i];
        }
        for(int i=0;i<3;i++){
            if(marks[i]>max2 && marks[i]<max1)
                max2=marks[i];
        }
        avg=(float)(max1+max2)/2;
        cout<<avg<<endl;
    }
    void display(){
        cout<<usn<<"-"<<name<<"-";
    }
};

int main(){
    Student obj[10];

    for(int i=0;i<5;i++){
        obj[i].accept();
    }
    for(int i=0;i<5;i++){
        obj[i].display();
        obj[i].average();
    }

    return 0;
}