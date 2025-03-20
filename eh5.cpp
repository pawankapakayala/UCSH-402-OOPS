//When an exception is thrown, all objects created inside the enclosing try block are destructed before the control is 
//transferred to catch block.
#include <iostream> 
using namespace std; 
  
class Test { 
public: 
  int i=10;
   Test() { cout << "Constructor of Test " << endl; } 
   ~Test() { cout << "Destructor of Test "  << endl; } 
}; 
  
int main() { 
  try { 
    Test t1,t2; 
    throw 10; 
    throw t1;
    throw t2;//when your throwing an object of class Test, it will call the destructor of the object t1
  } catch(Test e) { 
    cout << "Caught " << e.i << endl; 
  } 
} 

