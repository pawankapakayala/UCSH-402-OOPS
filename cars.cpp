#include <iostream>
using namespace std; // This std has all the standard libraries of C++

class cars {
    string company;
    string model;
    float price;
    int seating_capacity;
    float mileage;

public:
    // Member Function to input car details
    void setDetails() {
        cout << "Enter Company Name: ";
        cin >> company;
        cout << "Enter Model Name: ";
        cin >> model;
        cout << "Enter Price:";
        cin >> price;
        cout << "Enter Seating Capacity: ";
        cin >> seating_capacity;
        cout << "Enter Mileage (in km/l): ";
        cin >> mileage;
    }

    // Function to display car details
    void displayDetails() {
        cout << "Company: " << company << endl;
        cout << "Model: " << model << endl;
        cout << "Price:" << price << endl;
        cout << "Seating Capacity: " << seating_capacity << " persons" << endl;
        cout << "Mileage: " << mileage << " km/l" << endl;
    }
};

int main() {
    cars c1, c2, c3;

    // Take input from user for car details
    cout << "Enter details for Car 1:" << endl;
    c1.setDetails();
    cout << "Enter details for Car 2:" << endl;
    c2.setDetails();
    cout << "Enter details for Car 3:" << endl;
    c3.setDetails();

    // Display car details
    cout<<endl;
    cout << "Car 1 Details:" << endl;
    c1.displayDetails();
    cout<<endl;
    cout << "Car 2 Details:" << endl;
    c2.displayDetails();
    cout<<endl;
    cout << "Car 3 Details:" << endl;
    c3.displayDetails();
    cout<<endl;
    return 0;
}
