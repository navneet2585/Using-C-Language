#include <iostream>
using namespace std;

void checkYear(int y){
    if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        cout<<"Leap year";
    else
        cout<<"Not Leap year";
}

int main(){
    int year;
    cout<<"Enter the year : ";
    cin>>year;

    checkYear(year);

    return 0;
}