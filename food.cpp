#include <iostream>//iostreams which allow you to read from files and the keyboard, and to write to files and the display
using namespace std;//this std has all the standard libraries of c++
class food//creating a class
{
    string name;
    float cost;
    int quantity;
    public:
        void set(){//member function
            cout<<"Enter food item:";//cout prints the output stream of bits on screen
            cin>>name;//cin belongs to input stream class
            cout<<"Cost of the item:";//cout prints the output stream of bits on screen
            cin>>cost; //cin belongs to input stream class
            cout<<"Quantity:";//cout prints the output stream of bits on screen
            cin>>quantity;//cin belongs to input stream class   
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

int main(){// In C++, main( )always has return type of int.
    food f1, f2, f3;//creating an object...memory is alocated here

    //Input data from user
    cout<<"Enter food item details:"<<endl;//cout prints the output stream of bits on screen
    f1.set();
    cout<<"Enter food item details:"<<endl;//cout prints the output stream of bits on screen
    f2.set();
    cout<<"Enter food iteam details:"<<endl;//cout prints the output stream of bits on screen
    f3.set();
    // Displaying discounted costs
    cout << "\nDisplaying discounted costs of food items:" << endl;
    f1.displayDiscountedCost();
    f2.displayDiscountedCost();
    f3.displayDiscountedCost();
    return 0;
};