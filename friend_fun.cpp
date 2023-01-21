#include <iostream>
using namespace std;

class ABC{
    int a;
    int b;

    public:
    void read(){
        cout<<"Enter two numbers : ";
        cin>>a>>b;
    }
    friend void addTwo(ABC);
};

void addTwo(ABC ob){
    cout<<"Sum of "<<ob.a<<" and "<<ob.b<<" is "<<ob.a + ob.b<<endl;
}

int main(){
    ABC obj;

    obj.read();
    addTwo(obj);

    return 0;
}