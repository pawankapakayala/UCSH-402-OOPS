#include <iostream>
#include <fstream>
#include <exception>
using namespace std;

//Classes & Objects: Defining a Base Class
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

    //Getter Methods (Encapsulation)
    string getAccountID() const { return accountID; }
    string getName() const { return name; }
    float getBalance() const { return balance; }

    //Virtual Function (Polymorphism)
    virtual void displayBalance() const {
        cout << "Balance: ₹" << balance << endl;
    }

    //File Handling: Save Account Details
    void saveAccountToFile() {
        ofstream file("accounts.txt", ios::app);
        file << accountID << "|" << name << "|" << balance << "\n";
        file.close();
    }

    //Operator Overloading for Transactions
    void operator+(float amount) { balance += amount; }
    void operator-(float amount) { balance -= amount; }

    //Friend Function to Display Account
    friend ostream &operator<<(ostream &out, const Account &acc);
};

int Account::totalUsers = 0; //Initializing Static Variable

//Friend Function Implementation
ostream &operator<<(ostream &out, const Account &acc) {
    out << "ID: " << acc.accountID << " | Name: " << acc.name << " | Balance: ₹" << acc.balance;
    return out;
}

//Derived Class: StudentAccount (Inheritance)
class StudentAccount : public Account {
public:
    StudentAccount(string id, string n, float b) : Account(id, n, b) {}

    //Overriding displayBalance() (Polymorphism)
    void displayBalance() const override {
        cout << "Student Account Balance: ₹" << balance << endl;
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

int main() {
    string studentID, studentName;
    float initialBalance, depositAmount;

    try {
        cout << "Enter Student ID: ";
        cin >> studentID;
        initialBalance = getBalanceFromFile(studentID, studentName);
        StudentAccount student(studentID, studentName, initialBalance);

        cout << student << endl;
        cout << "Enter deposit amount: ₹";
        cin >> depositAmount;
        student + depositAmount;
        student.displayBalance();
    }
    catch (InvalidUserException &e) {
        cout << e.what() << endl;
    }

    return 0;
}
