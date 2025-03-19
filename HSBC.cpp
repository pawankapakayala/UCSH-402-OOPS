#include <iostream>
using namespace std;

// Base class: Account
class Account {
protected:
    string accountID;  // Unique student ID
    string name;       // Student name
    float balance;     // Account balance

public:
    // Constructor with the class name
    Account(string id, string n, float b) : accountID(id), name(n), balance(b) {}

    //member function to deposit money
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "++ Deposit Successful! ++\n";
            cout << "== New Balance: ₹" << balance << " ==\n";
        } else {
            cout << "-- Invalid deposit amount! --\n";
        }
    }

    //member function to check balance
    void displayBalance() const {
        cout << "\n== Current Balance: ₹" << balance << " ==\n";
    }
};

// Derived class: StudentAccount
class StudentAccount : public Account {
public:
    // Constructor for StudentAccount
    StudentAccount(string id, string n, float b) : Account(id, n, b) {}

    //member function to display student details
    void displayAccountInfo() {
        cout << "====================================\n";
        cout << "|| ACCOUNT DETAILS               ||\n";
        cout << "====================================\n";
        cout << ">> Account ID : " << accountID << "\n";
        cout << ">> Name       : " << name << "\n";
        cout << ">> Balance    : ₹" << balance << " \n";
        cout << "====================================\n";
    }
};

// Main function with user input
int main() {
    string studentID, studentName;
    float initialBalance, depositAmount;

    // Taking user input for student account creation
    cout << "\n++ Create Student Account ++\n";
    cout << "Enter Student ID: ";
    cin >> studentID;
    cout << "Enter Student Name: ";
    cin.ignore();
    getline(cin, studentName);
    cout << "Enter Initial Deposit: ₹";
    cin >> initialBalance;

    // Creating student account with user input
    StudentAccount student(studentID, studentName, initialBalance);
    student.displayAccountInfo();

    // Deposit money
    cout << "\n++ Deposit Money ++\n";
    cout << "Enter deposit amount: ₹";
    cin >> depositAmount;
    student.deposit(depositAmount);

    // Display final balance
    student.displayBalance();

    return 0;
}
