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
        bool flag = Savings_Account::withdraw(amount);
        if (flag)
            this->count++;
        return flag;
    } else {
        return false;
    }
}

//Outputing the object
void Trust_Account::print(std::ostream &os) const {
    os << "T-> " << name << " : " << balance << " : " << rate << " : " << count;
}