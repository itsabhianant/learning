#pragma once

#include "Accounts.hpp"

//The Savings_Account class(child of Account)
class Savings_Account: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Savings_Account &s_account);  //Outputing the object
private:
    static constexpr const char *def_name = "Empty_s";            //Default name
    static constexpr double def_balance = 0.0;              //Default balance
    static constexpr double def_rate = 0.0;                 //Default rate
protected:
    double rate{};
public:
    Savings_Account(string n = def_name, double b = def_balance, double r = def_rate);  //Constructor
    bool deposit(double amount);            //Method for deposit
    //Withdraw method is inherited from Account
};