#include <iostream>
using namespace std;

class ABC{
    int a;
    static int b;

    public:
    ABC(int x,int y){
        a=x;
        b=y;
        cout<<"constructor called"<<endl;
    }
    void show(){
        cout<<a<<" "<<b<<endl;
    }
    static void disp(){
        // We can not access non-static data member by static member functions
        // cout<<a<<endl; 
        cout<<b<<endl;
    }

};

int ABC::b=0;

int main(){
    ABC ob1(10,100),ob2(20,200),ob3(30,300);
    
    ob1.show();
    ob2.show();

    ABC::disp();

    return 0;
}

