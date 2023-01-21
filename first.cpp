/*Introduction to C++ language 
Learning some point or shorts

cpp - for save file (whereas in C we use .c)
g++ - for compile file (whereas in C we use gcc)
g++ - file name.cpp -o filename.o(or g++ file name.cpp)
cout>>" statement name";(c-compiler or out-output) - which is work as printf
cin(c-compiler or in-input) -  which is work as scanf
"\n" or "endl"- for separate statement
To run a program - ./a.out (or ./file name.o)
*/

#include<iostream>
using namespace std;
struct student
{
    int roll;
    int marks;
    
};

int main()
{
    struct student s1,s2;
    //input//
    cout<<"enter your roll number and mark"<<endl;
    cin>>s1.roll;
    cin>>s2.marks;
    //output//
    cout<<"roll="<<s1.roll<<endl;
    cout<<"marks="<<s2.marks<<endl;

    return 0;

} 

    
