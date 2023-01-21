#include <iostream>
using namespace std;

class ABC{
    int a;
    int b;

    public:
    /*
    ABC(){
        a=10;
        b=55;
        cout<<"constructor called";
    }
    */
    void read(){
        cout<<"Enter two num : ";
        cin>>a>>b;
    }
    void operator + (){
        cout<<a+b;
    }
};

int main(){
    ABC ob;
    ob.read();

    +ob;

    return 0;
}