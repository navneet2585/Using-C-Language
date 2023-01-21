/*
Write a program in C++ to create a class named TIME that stores two time values in hours(float) and minutes (integer).
Perform the following operations by using a function add(): Add T1 + T2 where,T1 and T2 are time objects.
Add T1 + x where T1 is a TIME object and x is any
integer. Return time objects from the member function to main and display.
*/

#include <iostream>
using namespace std;

class time{
    float hrs;
    int min;

    public:
    void read(){
        cin>>hrs>>min;
    }

    time add(time t1,time t2){
        time temp;
        temp.hrs = t1.hrs + t2.hrs;
        temp.min = t1.min + t2.min;

        int m = temp.min,q,r;
        if(temp.min >= 60){
            q = temp.min/60;
            r = temp.min%60;
            temp.hrs = temp.hrs + q;
            m = m - 60*q;
        }
        temp.min = m;

        return temp;
    }
    
    time add(time t,int x){
        time temp;
        temp.hrs = t.hrs;
        temp.min = t.min + x;

        int m = temp.min,q,r;
        if(temp.min >= 60){
            q = temp.min/60;
            r = temp.min%60;
            temp.hrs = temp.hrs + q;
            m = m - 60*q;
        }
        temp.min = m;

        return temp;
    }
    void display(){
        cout<<hrs<<"h : "<<min<<"m";
    }
};

int main(){
    time t1,t2,t3,res;
    int x;

    cout<<"Enter hours and min for t1 obj : ";
    t1.read();
    cout<<"Enter hours and min for t2 obj : ";
    t2.read();
    cout<<"Enter min to be  added : ";
    cin>>x;


    cout<<"Addition of t1 and t2 time object are : ";
    res=t3.add(t1,t2);
    res.display();

    cout<<"\nAddition of t-time obj and x-integer are : ";
    res=t3.add(t1,x);
    res.display();


    return 0;
}
