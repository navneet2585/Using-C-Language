/*
Create two classes DM and DB which stores the value in distances.DM stores distance in meters and centimeters and DB in feet and inches. Write a program that can read values for the class objects and one object of a friend function to carry out the addition operation.The object that stores the results may be a DM object or DB object, depending on the units in which the results are required. The display should be in the format of feet and inches or meters and centimeters depending on the object on display.Use the concept of friend function.
*/

#include <iostream>
using namespace std;

class DB;

class DM{
    public:
    float m;
    float cm;

    public:
    void read(){
        cout<<"Enter the meter and centimeter : ";
        cin>>m>>cm;
    }
    friend void addMeter(DM,DB);
};

class DB{
    public:
    float ft;
    float in;

    public:
    void read(){
        cout<<"Enter the feet and inch : ";
        cin>>ft>>in;
    }
    friend void addFeet(DM,DB);
};

void addMeter(DM ob1,DB ob2){
    float tot_mtr,tot_centi;
    tot_mtr = ob1.m + ob2.ft*0.3048;
    tot_centi = ob1.cm + ob2.in*2.54;

    cout<<"Adition of the obj are : "<<tot_mtr<<"m : "<<tot_centi<<"cm";
}

void addFeet(DM ob1,DB ob2){
    float tot_feet,tot_inch;
    tot_feet = ob1.m*3.2808 + ob2.ft;
    tot_inch = ob1.cm*0.3937 + ob2.in;

    cout<<"Adition of the obj are : "<<tot_feet<<"ft : "<<tot_inch<<"in";
}

int main(){
    DM a;
    DB b;

    a.read();
    b.read();


    int ch;
    cout<<"1. to result in Meter and Centimeter\n2. to result in Feet and Inch\n3. to Exit";
    cout<<"\nEnter the choice : ";
    cin>>ch;

    switch(ch){
        case 1:
            addMeter(a,b);   
            break;
        case 2:
            addFeet(a,b);
            break;
        case 3:
            cout<<"Exit";
            break;
        default:
            cout<<"Inavlid choice selected"<<endl;
    }

    return 0;
}