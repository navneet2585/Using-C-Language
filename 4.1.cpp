/*
Create a class named C_POWER with a function power to raise a number m to the power n. The function takes a double value for m and int value for n, returns the result correctly. Use a default value of 2 for n to make the function to calculate squares when this argument is omitted. Write another function that takes an int value of m. Both functions should have same name. Write a main function that gets values of m and n from user.

Algorithm:
Step1:Create a class named C_POWER 
    Step1.1 - Define its member function power(with m and n asarguments Declare m as double and n as integer. 
    Step1.2 - Assign a default value 2 to n
    Step1.3 - Define another function power(with m and n arguments and calculate the power.
    Declare m and n as integer.

    Step1.4 - Declare a member function accept() to take values for m and n and calculate the power. 

Step2:Define main()
    Step2.1 - Create object of the class.
    Step2.2 - Call accept() 
    Step2.3 - Call power() appropriately.

Step3: End main().
*/

#include <iostream>
using namespace std;

class C_POWER{
    public:
    double power(double m,int n=2){
        double res=1;
        while(n!=0){
            res=res*m;
            n--;
        }
        return res;
    }

    int power(int m,int n){
        int res=1;
        while(n!=0){
            res=res*m;
            n--;
        }
        return res;
    }
};

int main(){
    int n;
    double ans,m;
    cout<<"Enter the value of m and n to calculate power : ";
    cin>>m>>n;

    C_POWER obj;

    ans=obj.power(m,n);
    ans=obj.power(m,n);

    cout<<ans<<endl;

    return 0;
}

