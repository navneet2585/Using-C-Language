#include<iostream>
#include<string.h>

using namespace std;
class book
{
    public:
    char title[20];
    char author[20];
    int price;
    int ISBN_NO;

    void read()
    {
        cout<<"enter the title:";
        cin>>title;
        cout<<"enter the author :";
        cin>>author;
        cout<<"enter the price:";
        cin>>price;
        cout<<"enter the ISBN_NO";
        cin>>ISBN_NO;
    }
    void disp()
    {
        cout<<"Title:"<<title<<endl<<"author"<<author<<endl<<"price"<<price<<endl<<"ISBN_NO"<<ISBN_NO<<endl;
    }
    int search(int n)
    {
        if(ISBN_NO == n)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
};

int main()
{
    book obj[5];
    int ISBN,flag;
    for(int i=0;i<2;i++)
    {
        obj[i].read();
    }
    for(int i=0;i<2;i++)
    {
        obj[i].disp();
    }
    cout<<"enter the ISBN_NO to be search :";
    cin>>ISBN;
    for(int i=0;i<2;i++)
    {
        flag = obj[i].search(ISBN);
    }
    if(flag == 1){
    
        cout<<"the book is array";
    }
    else{
            cout<<"the book is not found in array ";
    }
    
    return 0;
}

