#include <iostream>
using namespace std;
class X {
public:
    int i;
    string Name;
  X(){//it is same as the function only difference is that it is a constructor function
    //name of the function should be same as the class name
  //contructor functions doesnt have return type
      i=100;
      Name="Sai";
  }
};

int main() {
  X x1;//constructor function is called when the object is created
  cout<<x1.i<<endl;
  cout<<x1.Name<<endl;
  return 0;   
}