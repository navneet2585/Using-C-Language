/*
Write a program in C++ to create a template function and perform bubble sort.
*/

#include <iostream>
using namespace std;

template <typename T>
void bbl_sort(T arr[],int s){
    for(int i=0;i < s - 1;i++){
        for(int j=0;j < s-i-1;j++){
            if(arr[j] > arr[j+1]){
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void print_arr(T arr[],int s){
     for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int int_arr[] = {10,5,101,45,23,65,3};
    int s1 = sizeof(int_arr)/sizeof(int_arr[0]);

    char char_arr[] = {'A','Z','C','I','E','B'};
    int s2 = sizeof(char_arr)/sizeof(char_arr[0]);

    bbl_sort<int> (int_arr,s1);
    /*
    for(int i=0;i<s1;i++){
        cout<<int_arr[i]<<" ";
    }
    */
    print_arr<int>(int_arr,s1);

    cout<<"\n";

    bbl_sort<char> (char_arr,s2);
    /*
    for(int i=0;i<s2;i++){
        cout<<char_arr[i]<<" ";
    }
    */
    print_arr<char>(char_arr,s2);

    return 0;
}
