#include "TrustAccount.hpp"

//Constructor
Trust_Account::Trust_Account(string n, double b, double r)
    :Savings_Account(n, b, r) {
}

//Method for deposit
bool Trust_Account::deposit(double amount) {
    if (amount >= 5000)
        amount += 50;
    return Savings_Account::deposit(amount);
}

//Method for withdraw
bool Trust_Account::withdraw(double amount) {
    if (this->count < 3) {
        this->count++;
        return Savings_Account::withdraw(amount);
    } else {
        return false;
    }
}

//Outputing the object
std::ostream &operator<<(std::ostream &os, const Trust_Account &t_account) {
    os << "T-> " << t_account.name << " : " << t_account.balance << " : " << t_account.rate << " : " << t_account.count << endl;
    return os;
}