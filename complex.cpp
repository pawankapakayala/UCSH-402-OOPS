#include <iostream>
using namespace std;//this std has all the standard libraries of c++
class complex
{
    int i;
    int r;
    public:
        void set(){//member functions
            cout<<"Enter real part of complex no. :";
            cin>>r;
            cout<<"Enter imaginary part of complex no. :";
            cin>>i;
        }
        void display(){//member function
            cout<<r<<"+"<<i<<"i"<<endl;
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

int main() {
    complex c1, c2, c3;

    // Input two complex numbers
    cout << "Enter the first complex number:" << endl;
    c1.set();

    cout << "Enter the second complex number:" << endl;
    c2.set();

    // Add the complex numbers
    c3 = add(c1, c2);

    // Display the result
    cout << "The sum of the two complex numbers is: ";
    c3.display();

    return 0;
}