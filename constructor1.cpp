#include <iostream>
using namespace std;
class X {
public://error we cant access the private members of the class
    int i;
    string Name;
  X(){//it is same as the function only difference is that it is a constructor function
    //name of the function should be same as the class name
  //contructor functions doesnt have return type
      i=100;
      cout<<"Enter the age: "<<endl;
      cin>>i;
      Name="Sai";
      cout<<"Enter the Name: "<<endl;
      cin>>Name;
  }
  void display(){
      cout<<"Swamis's Age: "<< i <<endl;
  }
};

int main() {
  X x1;//constructor function is called when the object is created
  x1.display();
  //cout<<x1.i<<endl;
  //cout<<x1.Name<<endl;
  return 0;   
}