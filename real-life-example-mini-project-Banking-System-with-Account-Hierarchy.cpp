#include <iostream>
#include <string>
using namespace std;

class Account
{
protected:
    int accountNumber;
    string holderName;
    double balance;

public:
    Account(int accNo, string name, double bal)
        : accountNumber(accNo),
          holderName(name),
          balance(bal)
    {
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Amount Deposited: Rs. " << amount << endl;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Amount Withdrawn: Rs. " << amount << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    void displayAccount()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Holder Name: " << holderName << endl;
        cout << "Balance: Rs. " << balance << endl;
    }

    virtual void calculateInterest() = 0;

    virtual ~Account() = default;
};

class SavingsAccount : public Account
{
public:
    SavingsAccount(int accNo, string name, double bal)
        : Account(accNo, name, bal)
    {
    }

    void calculateInterest() override
    {
        double interest = balance * 0.04;

        cout << "Savings Account Interest: Rs. "
             << interest << endl;
    }
};

class CurrentAccount : public Account
{
public:
    CurrentAccount(int accNo, string name, double bal)
        : Account(accNo, name, bal)
    {
    }

    void calculateInterest() override
    {
        cout << "Current Account Interest: No Interest"
             << endl;
    }
};

class FixedDepositAccount : public Account
{
public:
    FixedDepositAccount(int accNo, string name, double bal)
        : Account(accNo, name, bal)
    {
    }

    void calculateInterest() override
    {
        double interest = balance * 0.07;

        cout << "Fixed Deposit Interest: Rs. "
             << interest << endl;
    }
};

int main()
{
    SavingsAccount savings(1001, "Akshata", 50000);
    CurrentAccount current(1002, "Priya", 75000);
    FixedDepositAccount fd(1003, "Rohan", 100000);

    cout << "===== SAVINGS ACCOUNT =====" << endl;
    savings.displayAccount();
    savings.deposit(5000);
    savings.withdraw(2000);
    savings.calculateInterest();

    cout << endl;

    cout << "===== CURRENT ACCOUNT =====" << endl;
    current.displayAccount();
    current.deposit(10000);
    current.withdraw(5000);
    current.calculateInterest();

    cout << endl;

    cout << "===== FIXED DEPOSIT ACCOUNT =====" << endl;
    fd.displayAccount();
    fd.calculateInterest();

    return 0;
}
