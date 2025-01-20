#include <iostream>//iostreams which allow you to read from files and the keyboard, and to write to files and the display
using namespace std;//this std has all the standard libraries of c++
class complex//creating a class
{
    int i;
    int r;
    public:
        void set(){
            cout<<"Enter real part of complex no. :";//cout prints the output stream of bits on screen
            cin>>r;//cin belongs to input stream class
            cout<<"Enter imaginary part of complex no. :";//cout prints the output stream of bits on screen
            cin>>i;//cin belongs to input stream class
        };//declaring the function
        void display(){//member function
            cout<<r<<"+"<<i<<"i"<<endl;//cout prints the output stream of bits on screen
        }        
        friend complex add(complex a, complex b);
};

// Function to add two complex numbers
complex add(complex a, complex b) {
    complex result;
    result.r = a.r + b.r;
    result.i = a.i + b.i;
    return result;
}

int main() {// In C++, main( )always has return type of int.
    complex c1, c2, c3;//creating an object...memory is alocated here

    // Input two complex numbers
    cout << "Enter the first complex number:" << endl;//cout prints the output stream of bits on screen
    c1.set();

    cout << "Enter the second complex number:" << endl;//cout prints the output stream of bits on screen
    c2.set();

    // Add the complex numbers
    c3 = add(c1, c2);

    // Display the result
    cout << "The sum of the two complex numbers is: ";//cout prints the output stream of bits on screen
    c3.display();

    return 0;
}