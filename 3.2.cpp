/*
WAP in OOP in C++ to create a class Employe with data members as 
    name
    employe-code
    gross-sal.
Include member functions to read input and display output of individual objects. create an array of 10 employes. Display the details of the employes with highest and lowest gross salary.  
*/

#include <iostream>
using namespace std;

class Employe{
    public:
    string name;
    long int emp_code;
    long int gross_sal;

    public:
    void read(){
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter employ code : ";
        cin>>emp_code;
        cout<<"Enter gross salary : ";
        cin>>gross_sal;
    }
    void display(){
        cout<<name<<"-"<<emp_code<<"-"<<gross_sal<<endl;
    }
};

int main(){
    Employe obj[10];
    int i;

    for(i=0;i<5;i++){
        obj[i].read();
    }
    for(i=0;i<5;i++){
        obj[i].display();
    }

    int highest,lowest,k,l;
    highest=0;
    lowest=65535;

    for(int i=0;i<5;i++){
        if(obj[i].gross_sal>highest){
            highest=obj[i].gross_sal;
            k=i;
        }
    }

    for(int i=0;i<5;i++){
        if(obj[i].gross_sal<lowest){
            lowest=obj[i].gross_sal;
            l=i;
        }
    }

    cout<<"Employe Name - "<<obj[k].name<<" of employe code - "<<obj[k].emp_code<<" has Highest Gross salary of- "<<obj[k].gross_sal<<endl;

    cout<<"Employe Name - "<<obj[l].name<<" of employe code - "<<obj[l].emp_code<<" has Lowest Gross salary of- "<<obj[l].gross_sal<<endl;


    return 0;
}

