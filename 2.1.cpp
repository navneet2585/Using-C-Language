/*
Create a class named circle with data member radius,Pi(constant member) and area.
create the following member functions :
    1) to accept the radius from the user
    2) to calculate the area of the circle
    3) to display the details
*/

#include <iostream>
using namespace std;

class Circle{
    int r;
    const float PI =3.14;
    float a;

    public:
    void read(){
        cout<<"Enter the radius : ";
        cin>>r;
    }
    void area(){
        a = PI*r*r;
    }
    void display(){
        cout<<"area of circle is : "<<a<<endl;
    }

};

int main(){
    Circle obj;

    obj.read();
    obj.area();
    obj.display();

    return 0;
}
