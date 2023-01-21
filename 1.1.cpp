/*
WAP to create a structure named "named" with following details:-
a) playname
b) Team name
c) batting average
    Using structure cricket declare an array with 50 elements & read information about all the players and display team-wise list containing names of players with their batting average score.
*/

#include <iostream>
#include <string.h>

using namespace std;

struct cricket{
    string player_name[30];
    string team_name;
    float bat_avg[30];
};

int main(){
    struct cricket team[3];
    int i,j;

    for(i=0;i<3;i++){
        cout<<"Enter the team"<< i+1<<" name - ";
        cin>>team[i].team_name;

        for(j=0;j<5;j++){
            cout<<"Enter player"<<j+1<<" name and his avg : ";
            cin>>team[i].player_name[j]>>team[i].bat_avg[j];
        }
    }

    for(i=0;i<3;i++){
        float sum=0;
        for(j=0;j<5;j++){
            sum = sum + team[i].bat_avg[j];
        }
        sum=sum/3;
        cout<<"bat avg of team " <<i+1<< " is "<<sum<<endl;
    }

    return 0;
}