/*
WAP in c++ to define a class named Bank.
include the following data members:
    a). name of account holder 
    b). account number
    c). type of account
    d). balance amount in account
    d). no. of transaction in the bank(static data member)

create following member functions:
    1). to read inputs
    1). to deposit amount
    1). to withdraw amount after checking current balance

Display number of of transaction(use static function) 
*/

#include <iostream>
using namespace std;

class bank{
    string ac_name;
    int ac_no;
    string ac_type;
    float bal;
    static int no_of_trans;

    public:
    void read(){
        cout<<"Enter A/c name : ";
        cin>>ac_name;
        cout<<"Enter A/c num : ";
        cin>>ac_no;
        cout<<"Enter A/c type : ";
        cin>>ac_type;
    }

    void deposit(){
        float deposit;
        cout<<"Enter amount to deposit : ";
        cin>>deposit;
        bal = bal + deposit;
        no_of_trans++; 
        // non-static member function can access static data members like--deposit() accessing no_of_trans.
    }

    void withDraw(){
        int wamt;
        cout<<"Enter withdraw amount : ";
        cin>>wamt;

        if(wamt>bal){
            cout<<"\nCan't Withdraw, insuffucient bal.";
        }
        if(bal >= wamt){
            bal = bal - wamt;   
        }
        no_of_trans++;
    }

    static void tot_trans(){
        cout<<"No of Transactions are : "<<no_of_trans<<endl;
    }

    void display(){
        cout<<"Account name - "<<ac_name<<endl;
        cout<<"Account num - "<<ac_no<<endl;
        cout<<"Account type - "<<ac_type<<endl;
        cout<<"Total Amount- "<<bal<<endl;
    }

};

int bank::no_of_trans;

int main(){
    bank ob1;
    int ch;
    ob1.read();

    do{
        cout<<"\n1. to deposit"<<endl;
        cout<<"2. to withdraw"<<endl;
        cout<<"3. to display"<<endl;

        cout<<"\nEnter the choice : ";
        cin>>ch;
        switch(ch){
            case 1:
                ob1.deposit();
                break;
            case 2:
                ob1.withDraw();
                break;
            case 3:
                ob1.display();
                break;
            case 4:
                cout<<"Exit\n";
                break;
            default:
                cout<<"invalid choice selected"<<endl;
        }
    }while(ch != 4);

    ob1.tot_trans();

    return 0;
}