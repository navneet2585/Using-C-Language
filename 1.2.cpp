/*
Define a structure named "census" with following three members:-
1) A char array "city" to store the names
2) A long integer to store population of the city
3) A float number to store literacy lvl
    Implement the following 
        1) Read the details for five cities randomly using array variable
        1) Sort the city list alphabetically and display all the details
*/

#include <iostream>
#include <string.h>

using namespace std;

struct census{
    char city[10];
    long int population;
    float literacy;
};

int main(){
    int i,j;
    struct census c[5];

    for(i=0;i<5;i++){
        cout<<"Enter the city"<< i+1<<" name : ";
        cin>>c[i].city;
        cout<<"Enter the population : ";
        cin>>c[i].population;
        cout<<"Enter the literacy : ";
        cin>>c[i].literacy;
    }

    cout<<"Before sorting - "<<endl;
    for(i=0;i<5;i++){
            cout<<c[i].city<<" - "<<c[i].population<<" - "<<c[i].literacy<<endl;
    }

    // sorting alphabetically 
    char temp[30];

    for(i=0;i<5;i++){
        for(j=0;j<5-i-1;j++){
            if(strcmp(c[j].city,c[j+1].city) > 0){
                strcpy(temp,c[j].city);
                strcpy(c[j].city,c[j+1].city);
                strcpy(c[j+1].city,temp);

                int temp=c[j].population;
                c[j].population=c[j+1].population;
                c[j+1].population=temp;

                int t=c[j].literacy;
                c[j].literacy=c[j+1].literacy;
                c[j+1].literacy=t;
            }
        }
    }

    cout<<"After sorting - "<<endl;
    for(i=0;i<5;i++){
            cout<<c[i].city<<" - "<<c[i].population<<" - "<<c[i].literacy<<endl;
    }

    return 0;
}
