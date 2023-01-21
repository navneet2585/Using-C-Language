/*
Define a structure named "Date" with three integer members 
"day","month" and "year".
    Develop an interactive modular program to perform the following tasks:
        1) To read the data into structure member using a function.
        2) Create a function named validate() to validate the  date 
Display the date in the format "April 29 2014" using a function. 
*/

#include <iostream>
#include <string.h>

using namespace std;

struct Date{
    int d;
    int m;
    int y;

    void readData(){
        cout<<"Enter the day, month and year : ";
        cin>>d>>m>>y;
    }

    // check the case of leap year
    void validate(){
        if((m==1||m==3||m==5||m==7||m==8||m==10||m==12) && (d>=1 && d<=31)){
            cout<<"valid date"<<endl;
        }
        else if((m==4||m==6||m==9||m==11) && (d>=1 && d<=30)){
            cout<<"valid date"<<endl;
        }
        else{
            if(m==2){
                if(((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) && (d >= 1 && d <= 29) ){
                    cout<<"valid date"<<endl;
                }
                else if((d>=1 && d<=28)){
                    cout<<"valid date"<<endl;
                }
                else{
                    cout<<"invalid date"<<endl;
                }
            }
        }
    }

    void displayDate(){
        string mon;
        switch(m){
            case 1:
                mon="January";
                break;
            case 2:
                mon="February";
                break;
            case 3:
                mon="March";
                break;
            case 4:
                mon="April";
                break;
            case 5:
                mon="May";
                break;
            case 6:
                mon="June";
                break;
            case 7:
                mon="July";
                break;
            case 8:
                mon="August";
                break;
            case 9:
                mon="September";
                break;
            case 10:
                mon="October";
                break;
            case 11:
                mon="November";
                break;
            case 12:
                mon="December";
                break;
            default:
                cout<<"invalid month"<<endl;
        }

        cout<<d<<" "<<mon<<" "<<y<<" "<<endl;
    }
};


int main(){
    struct Date obj;

    obj.readData();
    obj.validate();
    obj.displayDate();

    return 0;
}