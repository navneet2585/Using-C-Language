/*
Write a C++ program to create a class called STRING and implement the following
operations.

stringS1 = "SMIT"
stringS2 = "MAJITAR"
stringS3 = S1 + S2(Use copy constructor).

Algorithm:
Step1:Declare class STRING
    Step1.1 Declare its data members name and length.
    Step1.2 Declare default constructor and single parameterized constructors to initialize length and name.
    Step1.3 Declare it smember function display(toprinttheconcatenatedres 
    Step1.4 Declare a member function join(to concatenate two strings 

Step2 Define main()
Step2.1 Create object of the class.
Step2.2 Initializeb data members.
Step2.3 Call join() 
Step2.4 Call display
Step3 : End main()
*/

/*
#include <iostream>
#include <string.h>

using namespace std;

class STRING{
    char s1[25];
    char s2[25];

    public:
    STRING(char str1[],char str2[]){
        strcpy(this->s1,str1);
        strcpy(this->s2,str2);
    }

    void operator + (){
        cout<<strcat(s1,s2);
    }
};

int main(){
    char str1[]="avinash ";
    char str2[]="kumar";

    STRING ob(str1,str2);

    +ob;

    return 0;
}
*/

// By operator overloading
/*
#include <iostream>
#include <string.h>

using namespace std;

class STRING{
    string s1;
    string s2;

    public:
    STRING(string str1,string str2){
        s1=str1;
        s2=str2;
    }
    void operator + (){
        string res;
        res=s1+s2;
        cout<<res<<endl;
    }
};

int main(){
    STRING ob("Avinash ","Kumar");
    
    +ob;

    return 0;
}
*/


#include <iostream>
#include <string.h>

using namespace std;

class STRING{
    char s1[20];
    char s2[20];

    public:
    void read(){
        cout<<"Enter string s1 : ";
        cin>>s1;
        cout<<"Enter string s2 : ";
        cin>>s2;
    }
    void add(){
        cout<<"concatenation of string are : "<<strcat(s1,s2)<<endl;
    }
};

int main(){
    STRING ob;

    ob.read();
    ob.add();

    return 0;
}

// By copy constructor
