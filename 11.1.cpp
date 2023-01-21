/*
Write a C++ program to create a class called STUDENT with data members USN, Name and Age. Using inheritance,create the classes UGSTUDENT and PGSTUDENT having fields as Semester,Fees Stipend. Enter the data for atleast 5 students.Find the semester wise avg age for all UG and PG students separately.
*/
#include <iostream>
using namespace std;

class STUDENT{
    public:
    int usn;
    string name;
    int age;
};

class UG_STUDENT:public STUDENT{
    public:
    int sem;
    int fee;
    int stipend;

    public:
    void read(){
        cout<<"Enter usn,name,age,sem-no,fee,stipend : ";
        cin>>usn>>name>>age>>sem>>fee>>stipend;
    }
};

class PG_STUDENT:public STUDENT{
    public:
    int sem;
    int fee;
    int stipend;

    public:
    void read(){
        cout<<"Enter usn,name,age,sem-no,fee,stipend : ";
        cin>>usn>>name>>age>>sem>>fee>>stipend;
    }
};

int main(){
    UG_STUDENT ug[5];
    PG_STUDENT pg[5];

    for(int i=0;i<5;i++){
        cout<<"Enter details for UG student - "<<i+1<<endl;
        ug[i].read();
    }

    for (int sem = 1; sem <= 8; sem++){
        float sum = 0,avg=0;
        int found = 0, count = 0;
        for (int i = 0; i < 5; i++){
            if (ug[i].sem == sem){
                sum = sum + ug[i].age;
                found = 1;
                count++;
            }
        }
        if(found == 1){
            avg = sum / count;
            cout << "\nAverage UG age of sem " <<sem<< " is " << avg;
        }
    }

    for(int i=0;i<5;i++){
        cout<<"\nEnter details for PG student - "<<i+1<<endl;
        pg[i].read();
    }

    for (int sem = 1; sem <= 8; sem++){
        float sum = 0,avg=0;
        int found = 0, count = 0;
        for (int i = 0; i < 5; i++){
            if (pg[i].sem == sem){
                sum = sum + pg[i].age;
                found = 1;
                count++;
            }
        }
        if(found == 1){
            avg = sum / count;
            cout << "\nAverage PG age of sem " <<sem<< " is " << avg;
        }
    }


    return 0;
}