#include <iostream>
using namespace std; // This std has all the standard libraries of C++

class flowers {
    string name;
    string colour;
    float petal_length;
    int seating_capacity;
    float petal_width;

public:
    // Member Function to input car details
    void set() {
        cout << "Enter Company Name: ";
        cin >> name;
        cout << "Enter Model Name: ";
        cin >> colour;
        cout << "Enter Price:";
        cin >> petal_length;
        cout << "Enter Seating Capacity: ";
        cin >> seating_capacity;
        cout << "Enter Mileage (in km/l): ";
        cin >> petal_width;
    }

    // Function to display car details
    void display() {
        cout << "Company: " << name << endl;
        cout << "Model: " << colour << endl;
        cout << "Price:" << petal_length << endl;
        cout << "Seating Capacity: " << seating_capacity << " persons" << endl;
        cout << "Mileage: " << petal_width << " km/l" << endl;
    }
};

int main() {
    flowers c1, c2, c3;

    // Take input from user for car details
    cout << "Enter details for Car 1:" << endl;
    c1.set();
    cout << "Enter details for Car 2:" << endl;
    c2.set();
    cout << "Enter details for Car 3:" << endl;
    c3.set();

    // Display car details
    cout<<endl;
    cout << "Car 1 Details:" << endl;
    c1.display();
    cout<<endl;
    cout << "Car 2 Details:" << endl;
    c2.display();
    cout<<endl;
    cout << "Car 3 Details:" << endl;
    c3.display();
    cout<<endl;
    return 0;
}
