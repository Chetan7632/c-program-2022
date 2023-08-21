#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Bank_Account {
private:
    string acc_no;
    string acc_holder_name;
    string addr;
    string contact_number;
    double balance;
public:
    Bank_Account(string no, string name, string a, string c, double b) : acc_no(no), acc_holder_name(name), addr(a), contact_number(c), balance(b) {}

    void display() const {
        cout << "Account Details:" << endl;
        cout << "Account Number: " << acc_no << endl;
        cout << "Account Holder Name: " << acc_holder_name << endl;
        cout << "Address: " << addr << endl;
        cout << "Contact Number: " << contact_number << endl;
        cout << fixed << setprecision(2);
        cout << "Balance: $" << balance << endl;
    }

    void deposit(double amount) {
        balance += amount;
    }
};

int main() {
    Bank_Account account("12345", "tushar", "belapur", "555-1234", 1000.00);
    account.display();
    account.deposit(500.00);
    cout << "After depositing $500.00:" << endl;
    account.display();
    return 0;
}

