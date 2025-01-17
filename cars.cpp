#include <iostream>//iostreams which allow you to read from files and the keyboard, and to write to files and the display
using namespace std; // This std has all the standard libraries of C++

class flowers {//creating a class
    string name;
    string colour;
    float petal_length;
    int seating_capacity;
    float petal_width;

public:
    // Member Function to input car details
    void set() {
        cout << "Enter Company Name: ";//cout prints the output stream of bits on screen
        cin >> name;//cin belongs to input stream class
        cout << "Enter Model Name: ";//cout prints the output stream of bits on screen
        cin >> colour;//cin belongs to input stream class
        cout << "Enter Price:";//cout prints the output stream of bits on screen
        cin >> petal_length;//cin belongs to input stream class
        cout << "Enter Seating Capacity: ";//cout prints the output stream of bits on screen
        cin >> seating_capacity;//cin belongs to input stream class
        cout << "Enter Mileage (in km/l): ";//cout prints the output stream of bits on screen
        cin >> petal_width;//cin belongs to input stream class
    }

    // Function to display car details
    void display() {
        cout << "Company: " << name << endl;//cout prints the output stream of bits on screen
        cout << "Model: " << colour << endl;//cout prints the output stream of bits on screen
        cout << "Price:" << petal_length << endl;//cout prints the output stream of bits on screen
        cout << "Seating Capacity: " << seating_capacity << " persons" << endl;//cout prints the output stream of bits on screen
        cout << "Mileage: " << petal_width << " km/l" << endl;//cout prints the output stream of bits on screen
    }
};

int main() {// In C++, main( )always has return type of int.
    flowers c1, c2, c3;//creating an object...memory is alocated here

    // Take input from user for car details
    cout << "Enter details for Car 1:" << endl;//cout prints the output stream of bits on screen
    c1.set();
    cout << "Enter details for Car 2:" << endl;//cout prints the output stream of bits on screen
    c2.set();
    cout << "Enter details for Car 3:" << endl;//cout prints the output stream of bits on screen
    c3.set();

    // Display car details
    cout<<endl;
    cout << "Car 1 Details:" << endl;//cout prints the output stream of bits on screen
    c1.display();
    cout<<endl;
    cout << "Car 2 Details:" << endl;//cout prints the output stream of bits on screen
    c2.display();
    cout<<endl;
    cout << "Car 3 Details:" << endl;//cout prints the output stream of bits on screen
    c3.display();
    cout<<endl;
    return 0;
}
