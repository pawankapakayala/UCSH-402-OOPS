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

public:
    void allocate_funds(long funds) // function to allocate funds
    {
        allocated_funds = funds * 100000; // converting lakhs to rupees and storing in allocated_funds
    }

    long get_allocated_funds() // function to get the allocated funds for this object
    {
        return allocated_funds; // returns the allocated funds
    }
};

int main() // in C++, main() always has a return type of int
{
    Company a, b, c; // creating objects for each branch... memory is allocated here

    a.allocate_funds(15); // allocating funds to A
    b.allocate_funds(14); // allocating funds to B
    c.allocate_funds(9);  // allocating funds to C

    // Calculating the total allocated funds
    long total_allocated_funds = a.get_allocated_funds() + b.get_allocated_funds() + c.get_allocated_funds();

    // Calculating the remaining funds
    long initial_capital = 5000000; // total initial capital of the company in rupees
    long remaining_funds = initial_capital - total_allocated_funds;

    cout << "Remaining funds with the company: Rs " << remaining_funds << endl; // cout prints the output stream of bits on screen

    return 0;
}
