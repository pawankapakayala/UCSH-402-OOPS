#include <iostream>
#include "Classes.cpp"
using namespace std;
void printHSBCLogo() {
    cout << "=================================================\n";
    cout << "||   H   H  SSSSS  BBBBB   CCCCC               ||\n";
    cout << "||   H   H  S      B    B  C                   ||\n";
    cout << "||   HHHHH   SSSS  BBBBB   C                   ||\n";
    cout << "||   H   H      S  B    B  C                   ||\n";
    cout << "||   H   H  SSSSS  BBBBB   CCCCC               ||\n";
    cout << "=================================================\n";
    cout << "++    Welcome to HSBC Hostel Banking System    ++\n";
    cout << "==  Secure & Easy Transactions for Students  ==\n";
    cout << "=================================================\n\n";
}

// Main function with menu
int main() {
    printHSBCLogo();
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
            case 4: {
                string accountID;
                float depositAmount;
                cout << "\n++ Deposit Money ++\n";
                cout << "Enter Account ID: ";
                cin >> accountID;

                string studentName;
                float balance = getBalanceFromFile(accountID, studentName);

                if (balance == -1) {
                    cout << "-- Account Not Found! --\n";
                } else {
                    StudentAccount tempAccount(accountID, studentName, balance);
                    cout << "Enter deposit amount: ₹";
                    cin >> depositAmount;
                    tempAccount.deposit(depositAmount);
                    tempAccount.displayBalance();
                }
                break;
            }
            case 5:
                cout << "\n++ Exiting HSBC System. Sairam! ++\n";
                break;
            default:
                cout << "-- Invalid choice! Please try again. --\n";
        }
    } while (choice != 5);

    return 0;
}
