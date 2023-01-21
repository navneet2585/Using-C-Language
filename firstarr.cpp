#include<iostream>
using namespace std;
struct student 
{
    int roll;
    int marks;
    char name;
};
int main()
{
    struct student s[2];
    cout<<"enter your roll no. and marks "<<endl;
    cin>>s[0].roll;
    cin>>s[1].marks;
    cout<<"enter your name "<<endl;
    cin>>s[0].name;

    cout<<"roll="<<s[0].roll<<endl;
    cout<<"marks="<<s[1].marks<<endl<<s[0].name<<endl;

    return 0;
}
