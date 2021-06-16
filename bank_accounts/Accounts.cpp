#include "Accounts.hpp"

//Construtor
Account::Account(string n, double b) 
    :name{n}, balance{b} {
}

//Method for deposit
bool Account::deposit(double amount) {
    if (amount < 0)
        return false;
    else {
        balance += amount;
        return true;
    }
}

//Method for withdraw
bool Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    } else {
        return false;
    }
}

//Outputs the object
std::ostream &operator<<(std::ostream &os, const Account &account) {
    os << "A-> " << account.name << " : " << account.balance << endl;
    return os;
}