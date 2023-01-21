/*
Given that Employe class contains following data members:
    emp_name
    emp_no
    basic
    da
    IT
    gross_sal
    net_sal
Member functions to read the data, to calculate net_sal and to print data members. WAP in c++ program to read the data of an employe and compute net_sal of the employe(DA = 52% of basic and income-tax(IT) = 30% of the gross salary). while writing consider following:
    1) initialize members using method
    2) create more the two objects.
*/

#include <iostream>
using namespace std;

class Employe{
    string emp_name;
    int emp_no;
    int basic;
    int da;
    int IT;
    int gross_sal;
    int net_sal;

    public:
        void read(){
            cout<<"Enter Employe name : ";
            cin>>emp_name;
            cout<<"Enter Employe number : ";
            cin>>emp_no;
            cout<<"Enter the basic salary : ";
            cin>>basic;
        }
        void disp(){
            da=basic * 0.52;
            gross_sal=basic + da;
            IT=gross_sal * 0.3;
            net_sal=gross_sal - IT;

            cout<<emp_name<<" of employe num "<<emp_no<< " has net salary of "<<net_sal;

        }

};

int main(){
    Employe obj;

    obj.read();
    obj.disp();

    return 0;
}