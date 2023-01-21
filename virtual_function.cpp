// concept of Virtual Functions

#include<iostream>
using namespace std;

// This is base class
class Parent {
    public:
    // virtual function preceded by virtual keyword
	virtual void print(){
		cout << "print Parent class\n";
	}
	void show(){
		cout << "show Parent class\n";
	}
};

// This is derived class
class child : public Parent {
    public:
	void print(){
		cout << "print child class\n";
	}
	void show(){
		cout << "show child class\n";
	}
};

int main(){
	Parent *bptr;  // base class pointer 
	child d;
	bptr = &d;

	// Virtual function, binded at runtime
	bptr->print();

	// Non-virtual function, binded at compile time
	bptr->show();
	
	return 0;
}
