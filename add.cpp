#include<iostream>
using namespace std;
struct student
{
    int a,b;
    int add(){
        cout<<a+b;
    }
      
};
int main()
{
    struct student s1;
    
    cin>>s1.a;
    cin>>s1.b;
    s1.add();

    return 0;

}