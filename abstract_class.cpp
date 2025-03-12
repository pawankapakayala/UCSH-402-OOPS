#include <iostream>
using namespace std;
class a{//class a has a function declared but not defined so it is an abstract class
    public:
        void display1();//here we are declaring the function so the class is abstract//this function must be overridden in the child class
};

class b : public a{
    public:
        void display1(){//method overriding - what r the fuctions in the parent class, the same functions are in the child class
            //this functions overrides the function of the parent class
            cout<<"I belong to child class"<<endl;
        }
};

int main(){
    b obj;
    a obj1;
    obj.display1();
    obj.display1(); //this will call the function of the child class
}