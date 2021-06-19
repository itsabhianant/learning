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
        throw IllegalBalanceException {};
    }
}

//Outputing the object
void Savings_Account::print(std::ostream &os) const {
    os << "S-> " << name << " : " << balance << " : " << rate;
}