#include <iostream>
using namespace std; // This std has all the standard libraries of C++

class flowers {
    string name;
    string colour;
    float petal_length;
    float petal_width;

public:
    // Member Function to input flower features
    void set() {
        cout << "Enter flower Name: ";
        cin >> name;
        cout << "Colour: ";
        cin >> colour;
        cout << "Enter Petal length:";
        cin >> petal_length;
        cout << "Enter Petal width: ";
        cin >> petal_width;
    }

    // Function to display flower features
    void display() {
        cout << "Flower name: " << name << endl;
        cout << "Colour: " << colour << endl;
        cout << "Petal_length:" << petal_length << endl;
        cout << "Petal_width: " << petal_width << endl;
    }
};

int main() {
    flowers f1, f2, f3;

    // user input for flowers
    cout << "Flower 1:" << endl;
    f1.set();
    cout << "Flower 2:" << endl;
    f2.set();
    cout << "Flower 3:" << endl;
    f3.set();

    // Display flower features
    cout<<endl;
    cout << "Flower 1:" << endl;
    f1.display();
    cout<<endl;
    cout << "Flower 2:" << endl;
    f2.display();
    cout<<endl;
    cout << "Flower 3:" << endl;
    f3.display();
    cout<<endl;
    return 0;
};
