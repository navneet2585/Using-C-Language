/*
Write a C++ program to create a class called LIST (linked list) with member functions to:-
    1) Delete an element from any position.
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

    void del_at_end(){
        if(head==NULL){
            cout<<"List is empty\n";
        }
        else if(head->link == NULL){ // when there is only one Node
            delete head;
            head=NULL;
        }   
        else{
            LIST *temp1 = head;
            LIST *temp2 = head;
        
            while(temp1->link != NULL){
                temp2 = temp1;
                temp1 = temp1->link;
            }
            temp2->link = NULL;
            cout<<"\n"<<temp1->data<<" node is deleted";
            delete temp1;
        }
    }

    void del_at_beg(){
        if(head==NULL){
            cout<<"List is empty\n";
        }
        else{
            LIST *temp;
            temp=head;
            head=head->link;
            cout<<"\n"<<temp->data<<" node is deleted";
            delete temp;
        }
    }

    void del_at_mid(){
        if(head==NULL){
            printf("List is empty\n");
        }
        else if(head->link == NULL){ // when there is only one Node
            delete head;
            head=NULL;
        }
        else{
            int pos;
            LIST *temp1 = head;
            LIST *temp2 = head;

            cout<<"Enter the node which you want to delete : ";
            cin>>pos;

            while(temp1->data != pos){
                temp2 = temp1;
                temp1 = temp1->link;
            }
            temp2->link = temp1->link;
            cout<<"\n"<<temp1->data<<" node is deleted";
            delete temp1;
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
    cout<<"2. to DELETE AT END"<<endl;
    cout<<"3. to DELETE AT BEG"<<endl;
    cout<<"4. to DELETE AT MID"<<endl;
    cout<<"5. to DISPLAY"<<endl;
    cout<<"6. to EXIT"<<endl;

    do{
        cout<<"\nEnter the choice : ";
        cin>>ch;

        switch(ch){
            case 1:
                ob.ins_at_end();
                break;
            case 2:
                ob.del_at_end();
                break;
            case 3:
                ob.del_at_beg();
                break;
            case 4:
                ob.del_at_mid();
                break;
            case 5:
                ob.display();
                break;
            case 6:
                cout<<"Exit"<<endl;
                break;
            default:
                cout<<"invalid choice"<<endl;
        }

    }while(ch != 6);


    return 0;
}
