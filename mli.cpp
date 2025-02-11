// C++ program to implement  
// Multilevel Inheritance 
#include <iostream> 
using namespace std; 
  
// base class 
class Vehicle  
{ 
  protected: 
    Vehicle1() 
    { 
      cout << "This is a Vehicle:" << endl; 
    } 
}; 
class fourWheeler: public Vehicle //when we use protected access specifier keyword it becomes protected inheritance
{  protected: 
    fourWheeler1() 
    { 
      cout<<"Objects with 4 wheels are vehicles"<<endl; 
    } 
}; 
// sub class derived from the base classes 
class Car: public fourWheeler{ 
   protected: 
     Car1() 
     { 
       cout<<"Car has 4 Wheels"<<endl; 
     } 
}; 
  
// main function 
int main() 
{    
    //creating object of sub class will 
    //invoke the constructor of base classes 
    Car obj; 
    obj.Vehicle1();
    obj.fourWheeler1();
    obj.Car1();
    return 0; 
} 

