#include "CheckingAccount.hpp"

//Defining the constant fee;
const double Checking_Account::fee = 1.50;

//Constructor
Checking_Account::Checking_Account(string n, double b)
    :Account(n, b) {
}

//Method for withdrawl
bool Checking_Account::withdraw(double amount) {
    if (amount >= 0 && (balance - amount) >= 0) {
        amount += fee;
        return Account::withdraw(amount);
    } else {
        return false;
    }
}

//Outputing the object
std::ostream &operator<<(std::ostream &os, const Checking_Account &c_account) {
    os << "C-> " << c_account.name << " : " << c_account.balance << " : " << c_account.fee << endl;
    return os;
}