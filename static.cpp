#include <iostream>
using namespace std;

class X {
private:
  int i;//member variable
  //static int si;
public:
  static int si;//declcaring the class variable as static
  void set_i(int arg) { i = arg; }//member function //a non static member function can access both static and non-static data members
  static void set_si(int arg) { si = arg; }//class function
  //static member functions can only access static data members not non-static data members

  void print_i() {
    cout << "Value of i = " << i << endl;
    cout << "Again, value of i = " << this->i << endl;
  }

  static void print_si() {//class function
    cout << "Value of si = " << si << endl;
    //cout << "Again, value of si = " << this->si << endl; // error 
    /* this is a pointer to the object of the class and cannot be used in a static member function , 
    this ia a pointer that always points to  value of the current object*/
  }

};

int X::si = 99;       // Initialize static data member with scope resolution operator

int main() {
  cout<< X::si;//class name followed by scope resolution operator and the static variable name
  X xobj;
  xobj.set_i(99);
  xobj.print_i();
  xobj.set_si(99);
  xobj.print_si();//static member function can be called using object of the class 
}