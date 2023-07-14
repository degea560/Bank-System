#include<iostream>
#include<string>
using namespace std;
class Bank {
private:
    int balance;
    int loan;
    float interestRate;
    string username;
    string password;
public:
    Bank() {
        balance = 0;
        loan = 0;
        interestRate = 0.0;
        username = "";
        password = "";
    }
    void deposit() {
        int amount;
        cout << "\n Enter Amount to be Deposited : ";
        cin >> amount;
        balance += amount;
        cout << "\n Amount Deposited Successfully";
    }
    void checkBalance() {
        cout << "\n Your Balance is : " << balance;
    }
    void withdraw() {
        int amount;
        cout << "\n Enter Amount to be Withdrawn : ";
        cin >> amount;
        if (balance >= amount) {
            balance -= amount;
            cout << "\n Amount Withdrawn Successfully";
        }
        else {
            cout << "\n Insufficient Balance";
        }
    }
    void transfer(Bank& b) {
        int amount;
        cout << "\n Enter Amount to be Transferred : ";
        cin >> amount;
        if (balance >= amount) {
            balance -= amount;
            b.balance += amount;
            cout << "\n Amount Transferred Successfully";
        }
        else {
            cout << "\n Insufficient Balance";
        }
    }
    void closeAccount() {
        balance = 0;
        cout << "\n Account Closed Successfully";
    }
    void takeLoan() {
        int amount;
        cout << "\n Enter Amount of Loan : ";
        cin >> amount;
        loan += amount;
        cout << "\n Loan Taken Successfully";
    }
    void payLoan() {
        int amount;
        cout << "\n Enter Amount to be Paid : ";
        cin >> amount;
        if (loan >= amount) {
            loan -= amount;
            cout << "\n Loan Paid Successfully";
        }
        else {
            cout << "\n Invalid Amount";
        }
    }
    void setInterestRate(float rate) {
        interestRate = rate;
    }
    void addInterest() {
        balance += (balance * interestRate) / 100.0;
    }

    void setUsername(string name) {
        username = name;
        cout << "\nUsername set successfully\n";
        return;
    }

    void setPassword(string pass) {
        password = pass;
        cout << "\nPassword set successfully\n";
        return;
    }

};
int main() {
    Bank b1, b2;

    int choice;

    do {

        string name, pass;

        cout << "\nEnter your choice: \n1- Add new account \n2- Withdraw \n3- Deposit \n4- Get Balance \n5- Transfer \n6- Close Account \n7- Take Loan \n8- Pay Loan \n9- Set Interest Rate \n10- Add Interest \n11- Set Username \n12- Set Password \n13- Exit\n";

        cin >> choice;

        switch (choice) {

        case 1: {
            b1 = Bank();
            cout << "\nNew Account Created Successfully\n";
            break;
        }

        case 2: {
            b1.withdraw();
            break;
        }

        case 3: {
            b1.deposit();
            break;
        }

        case 4: {
            b1.checkBalance();
            break;
        }

        case 5: {
            b1.transfer(b2);
            break;
        }

        case 6: {
            b1.closeAccount();
            break;
        }

        case 7: {
            b1.takeLoan();
            break;
        }

        case 8: {
            b1.payLoan();
            break;
        }

        case 9: {
            float rate;
            cout << "\nEnter Interest Rate: ";
            cin >> rate;
            b1.setInterestRate(rate);
            break;
        }

        case 10: {
            b1.addInterest();
            break;
        }

        case 11: {
            cout << "\nEnter your username: ";
            cin >> name;
            b1.setUsername(name);
            break;
        }

        case 12: {
            cout << "\nEnter your password: ";
            cin >> pass;
            b1.setPassword(pass);
            break;
        }

        case 13: {
            exit(0);
            break;
        }

        default: {
            cout << "\nEnter a valid choice\n";
            break;
        }