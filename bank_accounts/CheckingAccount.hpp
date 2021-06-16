#pragma once

#include "Accounts.hpp"

//The Checking_Account class(child of Account)
class Checking_Account: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &c_account);   //Outputing the object
private:
    static constexpr const char *def_name = "Empty_c";        //Default name
    static constexpr double def_balance = 0.0;          //Default balance
    static const double fee;                            //Fixed fee;
public:
    Checking_Account(string n = def_name, double b = def_balance);      //Constructor
    bool withdraw(double amount);                                       //Method for withdrawl
    //Deposit method is inherited from Account
};