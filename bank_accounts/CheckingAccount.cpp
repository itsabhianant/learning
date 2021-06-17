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
void Checking_Account::print(std::ostream &os) const {
    os << "C-> " << name << " : " << balance << " : " << fee;
}