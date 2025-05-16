//Header Files
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Template Function to Get Greater Balance 
// TOPIC: Templates
// This function works for int, float, double — generic function
template <typename T>
T getGreaterBalance(T a, T b) {
    return (a > b) ? a : b;
}

//Base Class
// TOPIC: Class, Access Specifiers
class Account {
protected:
    string accountID;
    string name;
    float balance;

public:
    Account() {
        accountID = "";
        name = "";
        balance = 0.0;
    }

    void setDetails(string id, string n, float b) {
        accountID = id;
        name = n;
        balance = b;
    }

    void displayDetails() {
        cout << "\n== Account Details ==" << endl;
        cout << "Account ID: " << accountID << endl;
        cout << "Name      : " << name << endl;
        cout << "Balance   : ₹" << balance << endl;
    }

    float getBalance() {
        return balance;
    }

    void deposit(float amt) {
        balance += amt;
        cout << "++ ₹" << amt << " Deposited Successfully ++\n";
    }
};

//Derived Class
// TOPIC: Inheritance
class HSBC_Account : public Account {
public:
    void purchaseItem(float cost, string item) {
        cout << "\n== Attempting to Purchase: " << item << " ==\n";
        if (cost <= balance) {
            balance -= cost;
            cout << "++ Purchase Successful! ++\n";
            cout << "== " << item << " bought for ₹" << cost << " ==\n";
            cout << "== Remaining Balance: ₹" << balance << " ==\n";
        } else {
            cout << "!! Not Enough Balance to Buy " << item << " !!\n";
        }
    }
};

//File Handling
// TOPIC: File Handling (ofstream, ifstream, ios::app, ios::in, ios::out)
void saveToFile(HSBC_Account acc, string filename) {
    ofstream outFile(filename, ios::app);
    if (outFile.is_open()) {
        outFile << acc.getBalance() << endl;  // Saving only balance for demo
        outFile.close();
        cout << "== Account Data Saved Successfully ==\n";
    } else {
        cout << "!! Error Saving Account Data !!\n";
    }
}

//Main Menu
int main() {
    HSBC_Account student;
    string name, id, item;
    float balance, cost;

    cout << "\n+----------------------------------+\n";
    cout << "|        Welcome to HSBC          |\n";
    cout << "+----------------------------------+\n";

    cout << "\nEnter Student Name       : ";
    getline(cin, name);
    cout << "Enter Account ID         : ";
    getline(cin, id);
    cout << "Enter Initial Balance ₹  : ";
    cin >> balance;

    student.setDetails(id, name, balance);

    int choice;
    do {
        cout << "\n+-------- Main Menu --------+\n";
        cout << "1. View Account Details\n";
        cout << "2. Make a Purchase\n";
        cout << "3. Deposit Amount\n";
        cout << "4. Save to File\n";
        cout << "5. Compare Two Balances (Template)\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                student.displayDetails();
                break;

            case 2:
                cout << "Enter Item Name: ";
                cin.ignore();
                getline(cin, item);
                cout << "Enter Cost: ₹";
                cin >> cost;
                student.purchaseItem(cost, item);
                break;

            case 3:
                cout << "Enter Amount to Deposit: ₹";
                cin >> cost;
                student.deposit(cost);
                break;

            case 4:
                saveToFile(student, "hsbc_accounts.txt");
                break;

            case 5: {
                float b1, b2;
                cout << "Enter Balance 1: "; cin >> b1;
                cout << "Enter Balance 2: "; cin >> b2;
                float max = getGreaterBalance(b1, b2);
                cout << "== Greater Balance is ₹" << max << " ==\n";
                break;
            }

            case 0:
                cout << "== Exiting HSBC System. Goodbye! ==\n";
                break;

            default:
                cout << "!! Invalid Choice. Try Again. !!\n";
        }

    } while (choice != 0);

    return 0;
}
