/*
Write an OOP in C++ to create a Class Two_alues with two integer type data members and member function to read values in those data members. Create another Class Min_Max and declare it as friend of Class Two_values. Min_Max should have member functions to find the minimum and maximum of two values.
*/

#include <iostream>
using namespace std;

class TwoValues{
    int a;
    int b;

    public:
    void read(){
        cout<<"Enter two numbers : ";
        cin>>a>>b;
    }

    friend class Min_Max;
};

class Min_Max{
    public:
    void find_min_max(TwoValues obj){
        if(obj.a > obj.b){
            cout<<obj.a<<" is the maximum number"<<endl;
            cout<<obj.b<<" is the minimum number"<<endl;
        }
        else{
            cout<<obj.b<<" is the maximum number"<<endl;
            cout<<obj.a<<" is the minimum number"<<endl;
        }
    }
};

int main(){
    TwoValues A;
    Min_Max B;

    A.read();
    B.find_min_max(A);


    return 0;
}