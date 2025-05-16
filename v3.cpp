#include <iostream>   
#include <fstream>    
#include <sstream>    
using namespace std;

// Function to convert string to float (alternative to stof for older compilers)
float stringToFloat(const string& str) {
    stringstream ss(str);
    float result = 0.0;
    ss >> result;
    return result;
}

// Defining a Class and Creating Objects
// Base class: Account(Abstract class)
class Account {
protected:
    string accountID; // Account ID
    string name;      // Student name
    float balance;    // Account balance

public:
    // Constructor to initialize account details, with default values
    Account(string id = "", string n = "", float b = 0.0) : accountID(id), name(n), balance(b) {}

    // Getter functions to retrieve account details of a private variable (Member functions)
    string getAccountID() const { return accountID; }
    string getName() const { return name; }
    float getBalance() const { return balance; }

    // Function to deposit money into the account
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount; // Adds deposit amount to balance
            cout << "\n++ Deposit Successful! ++\n";
            cout << "== New Balance: Rs " << balance << " ==\n";
            updateAccountInFile(); // Updates the account details in the file
        } else {
            cout << "-- Invalid deposit amount! --\n";
        }
    }

    // Function to display the account balance
    void displayBalance() const {
        cout << "\n== Current Balance: Rs " << balance << " ==\n";
    }

    // Function to save account details to a file by using file handling method 
    void saveAccountToFile() {
        ofstream file("hsbc_accounts.txt", ios::app); // Opens file in append mode
        if (file.is_open()) {
            file << accountID << "|" << name << "|" << balance << "\n";
            file.close(); // Closes the file
        } else {
            cout << "-- Error: Could not open file for writing! --\n";
        }
    }

    // Function to update account details in the file by using file handling method 
    void updateAccountInFile() {
        ifstream inFile("hsbc_accounts.txt"); // Opens the existing accounts file
        ofstream tempFile("temp.txt"); // Temporary file for modifications

        if (!inFile || !tempFile) {
            cout << "-- Error: Could not access file! --\n";
            return;
        }

        string line;
        bool found = false;

        // Reads all account details and updates the relevant one
        while (getline(inFile, line)) {
            stringstream ss(line);
            string id, studentName, balStr;
            getline(ss, id, '|');
            getline(ss, studentName, '|');
            getline(ss, balStr);
            float bal = stringToFloat(balStr);

            if (id == accountID) {
                tempFile << accountID << "|" << name << "|" << balance << "\n"; // Updated entry
                found = true;
            } else {
                tempFile << id << "|" << studentName << "|" << bal << "\n";
            }
        }

        inFile.close();
        tempFile.close();
        remove("hsbc_accounts.txt"); // Deletes old file
        rename("temp.txt", "hsbc_accounts.txt"); // Renames temp file to original
    }

    // Function to delete an account from the file from the method file handling 
    static void deleteAccount(const string& studentID) {
        ifstream inFile("hsbc_accounts.txt"); // Opens accounts file
        ofstream tempFile("temp.txt"); // Creates a temporary file

        if (!inFile || !tempFile) {
            cout << "-- Error: Could not access file! --\n";
            return;
        }

        string line;
        bool found = false;

        // Reads all accounts and excludes the one to be deleted
        while (getline(inFile, line)) {
            stringstream ss(line);
            string id, studentName, balStr;
            getline(ss, id, '|');
            getline(ss, studentName, '|');
            getline(ss, balStr);

            if (id == studentID) {
                found = true; // Account found, so it won't be written to temp file
                continue;
            }
            tempFile << id << "|" << studentName << "|" << balStr << "\n";
        }

        inFile.close();
        tempFile.close();
        remove("hsbc_accounts.txt");
        rename("temp.txt", "hsbc_accounts.txt");

        if (found) {
            cout << "\n++ Account deleted successfully! ++\n";
        } else {
            cout << "-- Account not found! --\n";
        }
    }

    // Function to display all accounts from the file
    static void displayAllAccounts() {
        ifstream file("hsbc_accounts.txt"); // Opens the accounts file
        if (!file) {
            cout << "-- No accounts found! --\n";
            return;
        }

        cout << "\n++ All Student Accounts ++\n";
        cout << "-----------------------------------\n";
        string line;

        while (getline(file, line)) {
            stringstream ss(line);
            string id, studentName, balStr;
            getline(ss, id, '|');
            getline(ss, studentName, '|');
            getline(ss, balStr);
            float bal = stringToFloat(balStr);
            cout << ">> ID: " << id << " | Name: " << studentName << " | Balance: Rs " << bal << "\n";
        }

        cout << "-----------------------------------\n";
        file.close();
    }
};

// Derived class: StudentAccount, inherits from Account
class StudentAccount : public Account {
public:
    StudentAccount(string id = "", string n = "", float b = 0.0) : Account(id, n, b) {}
};

// Function to create a new student account
StudentAccount createNewAccount() {
    string id, name;
    float balance;
    cout << "\nEnter Account ID: ";
    cin >> id;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Initial Balance: Rs ";
    cin >> balance;
    StudentAccount newAccount(id, name, balance);
    newAccount.saveAccountToFile();
    cout << "\n++ Account Created Successfully! ++\n";
    return newAccount;
}

// Main function to handle the banking system menu
int main() {
    int choice;
    StudentAccount student;

    do {
        // Displays the main menu
        cout << "\n====================================\n";
        cout << "||    HSBC SYSTEM - MAIN MENU    ||\n";
        cout << "====================================\n";
        cout << "1. Create New Account\n";
        cout << "2. View All Accounts\n";
        cout << "3. Deposit Money\n";
        cout << "4. Delete Account\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Handles user choices
        switch (choice) {
            case 1:
                student = createNewAccount();
                break;
            case 2:
                Account::displayAllAccounts();
                break;
            case 3: {
                cout << "\n++ Deposit Money ++\n";
                string accID;
                cout << "Enter Account ID: ";
                cin >> accID;

                ifstream file("hsbc_accounts.txt");
                string line;
                bool found = false;

                while (getline(file, line)) {
                    stringstream ss(line);
                    string id, studentName, balStr;
                    getline(ss, id, '|');
                    getline(ss, studentName, '|');
                    getline(ss, balStr);

                    if (id == accID) {
                        float bal = stringToFloat(balStr);
                        StudentAccount temp(id, studentName, bal);
                        float amount;
                        cout << "Enter amount to deposit: Rs ";
                        cin >> amount;
                        temp.deposit(amount);
                        found = true;
                        break;
                    }
                }

                file.close();
                if (!found) {
                    cout << "-- Account not found! --\n";
                }
                break;
            }
            case 4: {
                cout << "\n++ Delete Account ++\n";
                string accID;
                cout << "Enter Account ID to delete: ";
                cin >> accID;
                Account::deleteAccount(accID);
                break;
            }
            case 5:
                cout << "\n++ Exiting HSBC System. Goodbye! ++\n";
                break;
            default:
                cout << "-- Invalid choice! Please try again. --\n";
        }
    } while (choice != 5);
    return 0;
}

