
// C++ program to explain  
// Single inheritance 
#include <iostream> 
using namespace std; 
  
// base class 
class Vehicle { 
  protected: //protected member variables or member functions are similar to private members
    void Vehicle1() 
    { 
      cout << "This is a Vehicle" << endl; 
    } 
}; 
  
// sub class derived from tho base classes 
class Car: public Vehicle{ //the public keyword ,vehical becomes the function of car 
  //
  
}; 
  
// main function 
int main() 
{    
    // creating object of sub class will 
    // invoke the constructor of base classes 
    Car obj; 
    //obj.Vehicle1();
    return 0; 
} 

