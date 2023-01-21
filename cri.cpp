#include<iostream>
#include<string.h>
using namespace std;
struct cricket{
    string name;
    string teamname;
    float bat_avg[30];
};

int main(){
    struct cricket team[3];
    int i,j;
    for(i=0;i<3;i++){
        cout<<"Enter the team"<<i+1<<"name";
        cin>>team[i].teamname;
    
        for(j=0;j<10;j++){
            cout<<"Enter the player"<<j+1<<"name and avg";
            cin>>team[i].name[j]>>team[i].bat_avg[i];
        }
    }
    for(i=0;i<3;i++){
        float sum=0;
        for(j=0;j<10;j++){
            sum+=team[i].bat_avg[j];
        }
        sum=sum/3;
        cout<<"bat_avg is "<<i+1<<"is"<<sum<<endl;
    }
    return 0;
}