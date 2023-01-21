#include<iostream>
using namespace std;
class sum
{
    int a,b,i,fact ;
    
    public:
    void read()
    {
        cin>>a>>b;
    }
    void add()
    {
        for(i=1;i<=a;i++)
        {
            fact = fact * i;
        }
        cout<<fact<<endl;
    }
    
};
int main()
{
    sum ob1;
    ob1.read();
    ob1.add();

    return 0;
}