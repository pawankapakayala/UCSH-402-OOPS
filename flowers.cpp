#include <iostream>//iostreams which allow you to read from files and the keyboard, and to write to files and the display
using namespace std; // This std has all the standard libraries of C++

class flowers {//creating a class
    string name;
    string colour;
    float petal_length;
    float petal_width;

public:
    // Member Function to input flower features
    void set() {
        cout << "Enter flower Name: ";//cout prints the output stream of bits on screen
        cin >> name;//cin belongs to input stream class
        cout << "Colour: ";//cout prints the output stream of bits on screen
        cin >> colour;//cin belongs to input stream class
        cout << "Enter Petal length:";//cout prints the output stream of bits on screen
        cin >> petal_length;//cin belongs to input stream class
        cout << "Enter Petal width: ";//cout prints the output stream of bits on screen
        cin >> petal_width;//cin belongs to input stream class
    }

    // Function to display flower features
    void display() {
        cout << "Flower name: " << name << endl;//cout prints the output stream of bits on screen
        cout << "Colour: " << colour << endl;//cout prints the output stream of bits on screen
        cout << "Petal_length:" << petal_length << endl;//cout prints the output stream of bits on screen
        cout << "Petal_width: " << petal_width << endl;//cout prints the output stream of bits on screen
    }
};

int main() {// In C++, main( )always has return type of int.
    flowers f1, f2, f3;//creating an object...memory is alocated here

    // user input for flowers
    cout << "Flower 1:" << endl;//cout prints the output stream of bits on screen
    f1.set();
    cout << "Flower 2:" << endl;//cout prints the output stream of bits on screen
    f2.set();
    cout << "Flower 3:" << endl;//cout prints the output stream of bits on screen
    f3.set();

    // Display flower features
    cout<<endl;
    cout << "Flower 1:" << endl;//cout prints the output stream of bits on screen
    f1.display();
    cout<<endl;
    cout << "Flower 2:" << endl;//cout prints the output stream of bits on screen
    f2.display();
    cout<<endl;
    cout << "Flower 3:" << endl;//cout prints the output stream of bits on screen
    f3.display();
    cout<<endl;
    return 0;
};
