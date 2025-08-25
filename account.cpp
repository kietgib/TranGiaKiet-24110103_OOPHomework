/*
    Name : Tran Gia Kiet 
    Date Update : 25/8/2025
    account.cpp 
*/
#include <iostream>
using namespace std; 

class Account {
private:
    string accountNumber; 
    double balance; 
    string ownerName;

public: 
    Account() {}

    void setInfor(string ownerName, string accountNumber, double balance) {
        this->ownerName = ownerName; 
        this->accountNumber = accountNumber;
        this->balance = balance;
    }

    void deposit(double amount) {
        balance += amount; 
        cout << "Deposited: " << amount << " VND" << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else if ((balance - amount) < 100000) {
            cout << "Not allowed! Account must keep at least 100,000 VND." << endl;
        } else {
            balance -= amount;
            cout << "Withdrew: " << amount << " VND" << endl;
        }
    }

    void displayBalance() {
        cout << "Owner: " << ownerName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << " VND" << endl;
    }
};

int main() {
    Account acc1; 
    string name; 
    cout << "Enter account owner name: ";
    getline(cin, name);

    acc1.setInfor(name, "123456789", 500000); // mở tài khoản với số dư ban đầu
    acc1.displayBalance(); 

    acc1.deposit(200000);     // nạp tiền
    acc1.displayBalance();

    acc1.withdraw(200000);    // rút tiền hợp lệ
    acc1.displayBalance();

    acc1.withdraw(600000);    // rút quá số dư
    acc1.displayBalance();

    acc1.withdraw(300000);    // rút làm số dư < 100k => không hợp lệ
    acc1.displayBalance();

    return 0;
}
/*output testing
Enter account owner name: Gia Kiet
Owner: Gia Kiet
Account Number: 123456789
Current Balance: 500000 VND
Deposited: 200000 VND
Owner: Gia Kiet
Account Number: 123456789
Current Balance: 700000 VND
Withdrew: 200000 VND
Owner: Gia Kiet
Account Number: 123456789
Current Balance: 500000 VND
Insufficient balance!
Owner: Gia Kiet
Account Number: 123456789
Current Balance: 500000 VND
Withdrew: 300000 VND
Owner: Gia Kiet
Account Number: 123456789
Current Balance: 200000 VND
*/
