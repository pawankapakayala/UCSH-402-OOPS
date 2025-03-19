#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

// Base class: Account
class Account {
protected:
    string accountID;
    string name;
    float balance;

public:
    // Constructor
    Account(string id = "", string n = "", float b = 0.0) : accountID(id), name(n), balance(b) {}

    // Getter methods to access protected data
    string getAccountID() const { return accountID; }
    string getName() const { return name; }
    float getBalance() const { return balance; }

    // Method to deposit money
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "\n++ Deposit Successful! ++\n";
            cout << "== New Balance: ₹" << balance << " ==\n";
            updateAccountInFile();
        } else {
            cout << "-- Invalid deposit amount! --\n";
        }
    }

    // Method to display balance
    void displayBalance() const {
        cout << "\n== Current Balance: ₹" << balance << " ==\n";
    }

    // Save new account details to file
    void saveAccountToFile() {
        ofstream file("hsbc_accounts.txt", ios::app);
        if (file.is_open()) {
            file << accountID << " " << name << " " << balance << "\n";
            file.close();
        } else {
            cout << "-- Error: Could not open file for writing! --\n";
        }
    }

    // Update account balance in file
    void updateAccountInFile() {
        ifstream inFile("hsbc_accounts.txt");
        ofstream tempFile("temp.txt");

        if (!inFile || !tempFile) {
            cout << "-- Error: Could not access file! --\n";
            return;
        }

        string id, studentName;
        float bal;
        bool found = false;

        while (inFile >> id) {
            inFile.ignore();
            getline(inFile, studentName, ' ');
            inFile >> bal;

            if (id == accountID) {
                tempFile << accountID << " " << name << " " << balance << "\n";
                found = true;
            } else {
                tempFile << id << " " << studentName << " " << bal << "\n";
            }
        }

        inFile.close();
        tempFile.close();
        remove("hsbc_accounts.txt");
        rename("temp.txt", "hsbc_accounts.txt");

        if (!found) {
            cout << "-- Account not found in file, creating new entry! --\n";
            saveAccountToFile();
        }
    }

    // Read and display all student accounts
    static void displayAllAccounts() {
        ifstream file("hsbc_accounts.txt");
        if (!file) {
            cout << "-- No accounts found! --\n";
            return;
        }

        cout << "\n++ All Student Accounts ++\n";
        cout << "-----------------------------------\n";
        string id, studentName;
        float bal;

        while (file >> id) {
            file.ignore();
            getline(file, studentName, ' ');
            file >> bal;
            cout << ">> ID: " << id << " | Name: " << studentName << " | Balance: ₹" << bal << "\n";
        }

        cout << "-----------------------------------\n";
        file.close();
    }
};

// Derived class: StudentAccount
class StudentAccount : public Account {
public:
    // Constructor
    StudentAccount(string id, string n, float b) : Account(id, n, b) {}

    // Display student details
    void displayAccountInfo() {
        cout << "====================================\n";
        cout << "|| ACCOUNT DETAILS               ||\n";
        cout << "====================================\n";
        cout << ">> Account ID : " << getAccountID() << "\n";
        cout << ">> Name       : " << getName() << "\n";
        cout << ">> Balance    : ₹" << getBalance() << " \n";
        cout << "====================================\n";
    }
};

// Function to check if an account exists and return balance
float getBalanceFromFile(const string& studentID, string& studentName) {
    ifstream file("hsbc_accounts.txt");
    if (!file) return -1;

    string id;
    float bal;
    while (file >> id) {
        file.ignore();
        getline(file, studentName, ' ');
        file >> bal;
        if (id == studentID) {
            file.close();
            return bal;
        }
    }
    file.close();
    return -1;
}

// Function to create a new account
StudentAccount createNewAccount() {
    string studentID, studentName;
    float initialBalance;

    cout << "\n++ Create New Student Account ++\n";
    cout << "Enter Student ID: ";
    cin >> studentID;
    cout << "Enter Student Name: ";
    cin.ignore();
    getline(cin, studentName);
    cout << "Enter Initial Balance: ₹";
    cin >> initialBalance;

    StudentAccount student(studentID, studentName, initialBalance);
    student.saveAccountToFile();
    return student;
}

// Function to view an existing account
StudentAccount viewAccount() {
    string studentID, studentName;
    float balance;

    cout << "\n++ View Student Account ++\n";
    cout << "Enter Student ID: ";
    cin >> studentID;

    balance = getBalanceFromFile(studentID, studentName);
    if (balance == -1) {
        cout << "-- Account Not Found! --\n";
        return StudentAccount("", "", 0.0);
    }

    StudentAccount student(studentID, studentName, balance);
    student.displayAccountInfo();
    return student;
}

// Main function with updated menu
int main() {
    int choice;
    StudentAccount student("", "", 0.0);

    do {
        cout << "\n====================================\n";
        cout << "||    HSBC SYSTEM - MAIN MENU    ||\n";
        cout << "====================================\n";
        cout << "1. Create New Account\n";
        cout << "2. View Existing Account\n";
        cout << "3. View All Accounts\n";
        cout << "4. Deposit Money\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                student = createNewAccount();
                student.displayAccountInfo();
                break;
            case 2:
                student = viewAccount();
                break;
            case 3:
                Account::displayAllAccounts();
                break;
            case 4:
                if (student.getAccountID().empty()) {
                    cout << "-- Please create or load an account first! --\n";
                } else {
                    float depositAmount;
                    cout << "\n++ Deposit Money ++\n";
                    cout << "Enter deposit amount: ₹";
                    cin >> depositAmount;
                    student.deposit(depositAmount);
                    student.displayBalance();
                }
                break;
            case 5:
                cout << "\n++ Exiting HSBC System. Sairam! ++\n";
                break;
            default:
                cout << "-- Invalid choice! Please try again. --\n";
        }
    } while (choice != 5);

    return 0;
}
