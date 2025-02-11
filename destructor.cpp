#include <iostream>
using namespace std;
class X {
private:
    int i,j;
public:
      X(){//deafault constructor
          i=0;
          j=0;
      }
      X(int a,int b){//parameterized constructor 
      //constructors with different parameters is called constructor overloading
      i=a;
      j=b;
  }
  void display(){
      cout<<"The number is"<<i<<"+i"<<j<<endl;  
  }
  ~X(){//destructor is defined
  //destructor cannot take any parameters
      cout<<"Destrcutor is called"<<endl;
  }
 
};

int main() {
  X x1;//deafulat constructor is called
  X x2(2,3);//parameterized constructor is called
  x1.display();
  x2.display();
  return 0;   
}