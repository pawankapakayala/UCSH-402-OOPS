#include <iostream> // iostream allows input and output operations
using namespace std; // this std has all the standard libraries of C++

class Complex { // Creating a class
    int r; // Real part
    int i; // Imaginary part

public:
    Complex() { // Constructor function
        cout << "Enter real part of complex number: ";
        cin >> r;
        cout << "Enter imaginary part of complex number: ";
        cin >> i;
    }

    Complex add(Complex& c) { // Function to add two complex numbers
    //& is used to pass the object by reference
        r = r + c.r;
        i = i + c.i;
        return *this;//this is a pointer that points to the object
    }

    void display() { // Member function to display complex number
        cout << r << " + " << i << "i" << endl;
    }
};

int main() { // In C++, main() always has a return type of int
    cout << "Enter the first complex number:" << endl;
    Complex c1; // Constructor is called

    cout << "Enter the second complex number:" << endl;
    Complex c2; // Constructor is called

    Complex sum = c1.add(c2); // Calling add function

    cout << "The sum of the two complex numbers is: ";
    sum.display(); // Displaying the result

    return 0;
}
