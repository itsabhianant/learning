#include "SavingsAccount.hpp"

//Constructor
Savings_Account::Savings_Account(string n, double b, double r)
    :Account(n, b), rate{r} {
}

//Method for deposit
bool Savings_Account::deposit(double amount) {
    if (amount >= 0) {
        amount += amount * (rate / 100);
        return Account::deposit(amount);
    } else {
        return false;
    }
}

//Outputing the object
std::ostream &operator<<(std::ostream &os, const Savings_Account &s_account) {
    os << "S-> " << s_account.name << " : " << s_account.balance << " : " << s_account.rate << endl;
    return os;
}