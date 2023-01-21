#include <iostream>
using namespace std;

int checkYear(int y){
    if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        return 1;
    else
        return 0;
}

int main(){
    int d1,m1,y1,d2,m2,y2,tot_days=0;
    
    cout<<"Enter day1,mon1,year1 : ";
    cin>>d1>>m1>>y1;

    cout<<"Enter day2,mon2,year2 : ";
    cin>>d2>>m2>>y2;

    int month_days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    int no_of_years;


    if(y1 >= y2){
        if(checkYear(y1) || checkYear(y2)){
            no_of_years = y1 - y2;
            tot_days =  tot_days + no_of_years*365 + 1;
        }
        else{
            no_of_years = y1 - y2;
            tot_days =  tot_days + no_of_years*365 ;
        }

        if(m1 >= m2){
            for(int i=m2;i < m1;i++){
                tot_days = tot_days + month_days[i];
            }
        }
        else{
            for(int i=m1;i < m2;i++){
                tot_days = tot_days + month_days[i];
            }
        }

        if(d1 >= d2)
            tot_days = tot_days + (d1 - d2);
        else
            tot_days = tot_days + (d2 - d1);

        cout<<"Total no of days is : "<<tot_days<<endl;

    }
    else{
        cout<<"Enter y1 bigger year"<<endl;
    }





/*
    if(d1 > d2){
        if(m1==m2){
            tot_days = d2 - d1;
            cout<<"total days : "<<tot_days<<endl;
        }
        else{
            for(int i=m1;i < m2;i++){
                tot_days = tot_days + month_days[i];
            }
            tot_days = tot_days + (d2 - d1);

            if(checkYear(y1) || checkYear(y2)){
                no_of_years = y2 - y1;
                tot_days =  tot_days + no_of_years*365 + 1;
                cout<<"\ntotal days with leap year : "<<tot_days<<endl;
            }
            else{
                no_of_years = y2 - y1;
                tot_days =  tot_days + no_of_years*365 ;
                cout<<"\ntotal days without leap year : "<<tot_days<<endl;
            }
        }
    }
    else{

    }
*/

    return 0;
}