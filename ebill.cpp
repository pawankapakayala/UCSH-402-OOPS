#include <iostream>//iostream is a library function that is used to take input and output
using namespace std;//std has the standard libraries of c++

class ebill {
    int units;
    float charges;

public:
    // Constructor to initialize values
    ebill() {
        units = 0;
        charges = 0.0;
    }

    // Function to take user input
    void set() {
        cout << "Enter the number of units consumed: ";
        cin >> units;
    }

    // Function to calculate bill
    void get_bill() {
        if (units <= 100) {
            charges = units * 0.50; // 50 Paise per unit
        }
        else if (units > 100 && units <= 300) {
            charges = (100 * 0.50) + ((units - 100) * 0.60); // 50 Paise for first 100, 60 Paise beyond 100
        }
        else if (units >= 300) {
            charges = (100 * 0.50) + ((units - 100) * 0.60); // 50 Paise for first 100, 60 Paise beyond 100
        }

        // calculate 15% surcharge if total bill exceeds Rs. 250
        if (charges > 250) {
            float surcharge = (charges - 250) * 0.15;
            charges += surcharge;
        }
    }

    // Function to display the bill
    void displayBill() {
        cout << "Total electricity bill: Rs. " << charges << endl;
    }
};

int main() {
    ebill e1, e2, e3;
    e1.set();
    e1.get_bill();
    e1.displayBill();
    e2.set();
    e2.get_bill();
    e2.displayBill();
    e3.set();
    e3.get_bill();
    e3.displayBill();
    return 0;
}
