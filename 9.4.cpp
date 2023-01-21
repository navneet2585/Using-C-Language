/*
WAP in c++ to create a class called MATRIX using a two-dimensional array of integers. Implement the folllowing operations by overloading the operator == which checks the compatibility of two matrices to be added and subtracted. perform the addition and subtraction by overloading the operators + and - respectively:- 
*/

#include <iostream>
using namespace std;

class MATRIX{
    int row;
    int col;
    int m[10][10];

    public:
    void read(){
        cout<<"Enter row & col of matrix : ";
        cin>>row>>col;
        cout<<"Enter matrix elements : \n";
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cin>>m[i][j];
            }
            cout<<"\n";
        }
    }

    int operator == (MATRIX m1){
        if(row == m1.row && col == m1.col)
            return 1;
        else
            return 0;
    }

    MATRIX operator + (MATRIX m1) {
        MATRIX temp;

         for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                temp.m[i][j] = m[i][j] + m1.m[i][j];
            }
            temp.row=row;
            temp.col=col;
        }
        return temp;
    }

    MATRIX operator - (MATRIX m1) {
        MATRIX temp;

         for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                temp.m[i][j] = m[i][j] - m1.m[i][j];
            }
            temp.row=row;
            temp.col=col;
        }
        return temp;
    }

    void display(){
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<m[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
};

int main(){
    MATRIX m1,m2,m3,m4;
  
    m1.read();
    m2.read();

    cout<<"matrix-1 is : \n";
    m1.display();
    cout<<endl;
    cout<<"matrix-2 is : \n";
    m2.display();

    if(m1==m2){
        m3=m1+m2;
        m4=m1-m2;

        cout<<"Addition of matrices\n";
        cout<<"the result is\n";
        m3.display();
        cout<<"subtraction of matrices\n";
        cout<<"The result is \n";
        m4.display();
    }
    else
        cout<<"change the dimension\n";


    return 0;
}