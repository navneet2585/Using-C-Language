#include<iostream>
using namespace std;
class String
{
    char s1[20];
    char s2[20];
    public :
    void read()
    {
        cout<<"enter the first string:";
        cin>>s1;
        cout<<"enter the second string:";
        cin>>s2;
    }
    void join()
    {
        strcat(s1,s2);
    }
    void display(){
        cout<<"the joined string is :"<<s1<<endl;
    }
};
int main()
{
    String obj;
    obj.read();
    obj.join();
    obj.display();

    return 0;
}