/*
Write a C++ program to create a class called LIST (linked list) with member functions to:-
    1) Insert an element from any position.
    2) To display the list.
*/

#include <iostream>
using namespace std;

class LIST;

LIST *head = NULL;

class LIST{
    int data;
    LIST *link;

    public:
    void ins_at_end(){
        LIST *newnode;
        int val;

        cout<<"Enter data part of node : ";
        cin>>val;

        newnode = new LIST;
        newnode->data = val;
        newnode->link = NULL;

        if(head==NULL){
            head=newnode;
        }
        else{
            LIST *ptr;
            ptr = head;

            while(ptr->link != NULL){
                ptr=ptr->link;
            }
            ptr->link=newnode;
        }
    }

    void ins_at_beg(){
        LIST *newnode;
        int val;

        cout<<"Enter data part of node : ";
        cin>>val;

        newnode = new LIST;
        newnode->data = val;
        newnode->link = NULL;

        if(head==NULL){
            head=newnode;
        }
        else{
            newnode->link = head;
            head = newnode;
        }
    }

    void ins_at_mid(){
        LIST *newnode,*ptr;
        int val,pos;

        cout<<"Enter data part of node : ";
        cin>>val;

        newnode = new LIST;
        newnode->data = val;
        newnode->link = NULL;

        cout<<"Enter the node after which you want to insert : ";
        cin>>pos;

        if(head==NULL){
            head = newnode;
        }
        else{
            ptr = head;
            while( (ptr->data != pos)  && (ptr->link != NULL)){
                ptr = ptr->link;
            }
            newnode->link = ptr->link;
            ptr->link = newnode;
        }
    }

    void display(){
        LIST *ptr;
        ptr = head;

        while(ptr != NULL){
            cout<<ptr->data<<"-->";
            ptr = ptr->link;
        }
        cout<<"NULL";
    }
};


int main(){
    int ch;

    LIST ob;

    cout<<"1. to INSERT AT END"<<endl;
    cout<<"2. to INSERT AT BEG"<<endl;
    cout<<"3. to INSERT AT MID"<<endl;
    cout<<"4. to DISPLAY"<<endl;
    cout<<"5. to EXIT"<<endl;

    do{
        cout<<"\nEnter the choice : ";
        cin>>ch;

        switch(ch){
            case 1:
                ob.ins_at_end();
                break;
            case 2:
                ob.ins_at_beg();
                break;
            case 3:
                ob.ins_at_mid();
                break;
            case 4:
                ob.display();
                break;
            case 5:
                cout<<"Exit"<<endl;
                break;
            default:
                cout<<"invalid choice"<<endl;
        }

    }while(ch != 5);

    return 0;
}
