#include <iostream>
using namespace std;//this std has all the standard libraries of c++
class food
{
    string name;
    float cost;
    int quantity;
    public:
        void set(){//member function
            cout<<"Enter food item:";
            cin>>name;
            cout<<"Cost of the item:";
            cin>>cost; 
            cout<<"Quantity:";
            cin>>quantity;     
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

int main(){
    food f1, f2, f3;

    //Input data from user
    cout<<"Enter food item details:"<<endl;
    f1.set();
    cout<<"Enter food item details:"<<endl;
    f2.set();
    cout<<"Enter food iteam details:"<<endl;
    f3.set();
    // Displaying discounted costs
    cout << "\nDisplaying discounted costs of food items:" << endl;
    f1.displayDiscountedCost();
    f2.displayDiscountedCost();
    f3.displayDiscountedCost();

    return 0;


};