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
        static int totalUsers; //Static Variable: Tracks total users
    
    public:
        //Constructor & Destructor
        Account(string id = "", string n = "", float b = 0.0) : accountID(id), name(n), balance(b) {
            totalUsers++;
        }
        ~Account() { cout << "Account object destroyed!\n"; } //Destructor
    
        // Getter methods to access protected data - Encapsulation
        string getAccountID() const { return accountID; }
        string getName() const { return name; }
        float getBalance() const { return balance; }
    
        //Virtual Function (Polymorphism)
        virtual void displayBalance() const {
            cout << "Balance: " << balance << endl;
        }

        // Method to deposit money
        void deposit(float amount) {
            string inputID;
            cout << "Enter Account ID: ";
            cin >> inputID;
        
            if (inputID != accountID) {
                cout << "-- Error: Account ID does not match! --\n";
                return;
            }
        
            if (amount > 0) {
                balance += amount;
                cout << "\n++ Deposit Successful! ++\n";
                cout << "== New Balance: ₹" << balance << " ==\n";
                updateAccountInFile();
            } else {
                cout << "-- Invalid deposit amount! --\n";
            }
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
    
        //Operator Overloading for Transactions
        void operator+(float amount) { balance += amount; }
        void operator-(float amount) { balance -= amount; }
    
        //Friend Function to Display Account
        friend ostream &operator<<(ostream &out, const Account &acc);
    
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
    //reason for using ignore is if there is a name with space then it will not be read properly but with the usage of
    //ignore it will ignore the space and read the name properly
    
    int Account::totalUsers = 0; //Initializing Static Variable
    
    //Friend Function Implementation
    ostream &operator<<(ostream &out, const Account &acc) {
        out << "ID: " << acc.accountID << " | Name: " << acc.name << " | Balance: ₹" << acc.balance;
        return out;
    }
    
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
        // Overriding the virtual function (Polymorphism)
        void displayBalance() const override {
        cout << "** Student Balance: ₹" << balance << " **" << endl;
        }

    };
    
    //Exception Handling: Custom Exception Class
    class InvalidUserException : public exception {
        public:
            const char *what() const throw() {
                return "Invalid User ID!";
            }
        };
    
    //Function to Retrieve Balance from File
    float getBalanceFromFile(const string &studentID, string &studentName) {
        ifstream file("accounts.txt");
        if (!file) return -1;
        string id;
        float bal;
        while (getline(file, id, '|')) {
            getline(file, studentName, '|');
            file >> bal;
            file.ignore();
            if (id == studentID) {
                file.close();
                return bal;
            }
        }
        file.close();
        throw InvalidUserException(); //Throwing Exception
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