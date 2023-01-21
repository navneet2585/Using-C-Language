/*
Write an OOP in C++ to create a class called BOOK with the following data members
and member function:
Data Members:Title,Author,Price, ISBN NO. 
Memberfunctions:Read,Display,Search_book(using ISBN_NO)
Create an array of 5 BOOK type objects and demonstrate all member functions.
*/


#include <iostream>
using namespace std;

class Book{
    string title;
    string author;
    int price;
    long int ISBN_NO;

    public:
    void read(){
        cout<<"Enter title : ";
        cin>>title;
        cout<<"Enter author : ";
        cin>>author;
        cout<<"Enter price : ";
        cin>>price;
        cout<<"Enter ISBN_no : ";
        cin>>ISBN_NO;
    }

    void display(){
        cout<<"Title - "<<title<<",Author - "<<author<<",Price - "<<price<<",ISBN-No - "<<ISBN_NO<<endl;
    }

    int searchBook(int n){
        if(n==ISBN_NO)
            return 1;
        else   
            return 0;
    }

};

int main(){
    Book obj[5];

    for(int i=0;i<3;i++){
        obj[i].read();
    }

    for(int i=0;i<3;i++){
        obj[i].display();
    }
    
    // For Searching of ISBN_no in Seaching Book function
    int k,n;

    cout<<"Enter ISBN-No to search in Book list : ";
    cin>>n;

    for(int i=0;i<3;i++){
        k=obj[i].searchBook(n);

        if(k==1){
            cout<<"Book of ISBN-No "<<n<<" is found in book list";
            return 0;
        }
    }
    cout<<"Book of ISBN-No "<<n<<" is Not found in book list";


    return 0;
}


