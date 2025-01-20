#include <iostream> // iostream allows input and output operations.
using namespace std; // std has all the standard libraries of C++.

class food { // Creating a class named 'food'.
    string name;
    float cost;
    int quantity;

public:
    // Member function to set food details using parameters
    void set(string food_name, float food_cost, int food_quantity) {
        name = food_name;    // Assign parameter values to class member variables.
        cost = food_cost;
        quantity = food_quantity;
    }

    // Member function to calculate discounted cost
    float getDiscount() {
        if (quantity > 5) {
            return cost * quantity * 0.9; // 10% discount if quantity > 5
        } else {
            return cost * quantity; // No discount
        }
    }

    // Member function to display discounted cost
    void displayDiscountedCost() {
        cout << "Food item: " << name << ", Discounted cost: " << getDiscount() << endl;
    }
};

int main() { // In C++, main() always has a return type of int.
    food f1, f2, f3; // Creating a single object of the 'food' class.

    // Setting details for multiple food items and displaying the discounted costs
    cout << "Food item 1 details:" << endl;
    f1.set("Burger", 50.0, 6); // Passing details for food item 1.
    f1.displayDiscountedCost();

    cout << "Food item 2 details:" << endl;
    f2.set("Pizza", 200.0, 3); // Passing details for food item 2.
    f2.displayDiscountedCost();

    cout << "Food item 3 details:" << endl;
    f3.set("Pasta", 100.0, 7); // Passing details for food item 3.
    f3.displayDiscountedCost();

    return 0; // Indicating successful program termination.
};
