/*A Company X has three subbranches ( A,B,C ) situated at three differnt places.
The company possess an initial captial of Rs 50 Lakhs.
For the financial year 2025-26,A requires 15 Lakhs,
B requires 14 lakhs and C requires 
9 Lakhs for their respectie operations.
Accordlingly the company allocates the funds required at each sub-branch.
After all the allocations ,how much is left with the Company.*/
#include<iostream> // iostreams allow you to read from files and the keyboard, and to write to files and the display
using namespace std; // this std has all the standard libraries of C++

class Company // creating a class
{
    long initial_capital = 5000000; // initial capital of the company in rupees (50 lakhs)
    long allocated_funds = 0; // variable to track the total allocated funds for this object
    long required_funds; // variable to store the funds required by each branch

public:
    long get_required_funds()
    {
        cin >> required_funds; // cin reads the input stream of bits from the keyboard
        if (required_funds > initial_capital) // if the required funds are more than the initial capital
        {
            cout << "Insufficient funds" << endl; // cout prints the output stream of bits on screen
            return 0;
        }
        else
        {
            return required_funds; // returning the required funds
        }
    }
    long allocate_funds(long funds) // function to allocate funds
    {
        long allocated_funds = funds; // allocating funds to the branch
        return allocated_funds;
    }

};

int main() // in C++, main() always has a return type of int
{
    long f1, f2, f3=0;
    Company a, b, c; // creating objects for each branch... memory is allocated here

    cout<<"Enter the funds required by Branch A: "<<endl; // cout prints the output stream of bits on screen
    f1=a.get_required_funds(); // cin reads the input stream of bits from the keyboard
    f1=a.allocate_funds(f1); // allocating funds to A
    cout<<"Enter the funds required by Branch B: "<<endl; // cout prints the output stream of bits on screen
    f2=b.get_required_funds(); // cin reads the input stream of bits from the keyboard
    f2=b.allocate_funds(f2); // allocating funds to B
    cout<<"Enter the funds required by Branch C: "<<endl; // cout prints the output stream of bits on screen
    f3=c.get_required_funds(); // cin reads the input stream of bits from the keyboard
    f3=c.allocate_funds(f3);  // allocating funds to C

    // Calculating the total allocated funds
    long total_allocated_funds = f1+f2+f3;

    // Calculating the remaining funds
    long initial_capital = 5000000; // total initial capital of the company in rupees
    long remaining_funds = initial_capital - total_allocated_funds;

    cout << "Remaining funds with the company: Rs " << remaining_funds << endl; // cout prints the output stream of bits on screen

    return 0;
}
