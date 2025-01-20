#include <iostream> // iostream allows input and output operations.
using namespace std; // std has all the standard libraries of C++.

class flowers { // Creating a class named 'flowers'.
    string name;
    string colour;
    float petal_length;
    float petal_width;

public:
    // Member function to set flower features using parameters
    void set(string flower_name, string flower_colour, float length, float width) {
        name = flower_name; // Assign parameter values to class member variables.
        colour = flower_colour;
        petal_length = length;
        petal_width = width;
    }

    // Member function to display flower features
    void display() const {
        cout << "Flower name: " << name << endl; // Output the flower name.
        cout << "Colour: " << colour << endl;   // Output the flower colour.
        cout << "Petal length: " << petal_length << endl; // Output the petal length.
        cout << "Petal width: " << petal_width << endl;   // Output the petal width.
    }
};

int main() { // In C++, main() always has a return type of int.
    flowers f1; // Creating an object of the 'flowers' class.

    // Passing values to the set() function
    f1.set("Rose", "Red", 5.5, 2.5); // Set flower details using parameters.

    // Displaying flower details
    cout << "Flower Details:" << endl;
    f1.display(); // Display the flower details.

    return 0; // Indicating successful program termination.
};
