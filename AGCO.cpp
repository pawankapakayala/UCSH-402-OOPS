#include <iostream>
using namespace std;
class B{
	private:
		int ID;
	public:
		B(int id){ //parameterized constructor
			this->ID=id;
			cout<<"Constructor B object : "<<id<<endl;
		}
		~B(){ //destructor of class B defined
			cout<<"Destructor B object : "<<this->ID<<endl;
		}
};

class C{
	public:
		C(){ //default constructor
			cout<<"Constructor C object"<<endl;
		}
		~C(){
			cout<<"Destructor C object"<<endl;
		}
};

class A{
	private:
		B* bptr; //aggregation the object in class B is created using dynamic memory allocation
		C composition;//composition, static object is created for class c
	public:
		A(){ //default constructor
			cout<<"Constructor A object"<<endl;
		}
		~A(){
			cout<<"Destructor A object"<<endl;
		}
		void Aggregation(){
			bptr=new B(1); //bptr will contain the address of an object of B
			//delete bptr;
		}
};

int main(){
	cout<<"Demo for class aggregation relationship"<<endl;
	A a;
	a.Aggregation();
	//a.Aggregation();
	return 0;
}
