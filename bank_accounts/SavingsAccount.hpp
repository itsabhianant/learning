#pragma once

#include "Accounts.hpp"

//The Savings_Account class(child of Account)
class Savings_Account: public Account {
private:
    static constexpr const char *def_name = "Empty_s";            //Default name
    static constexpr double def_balance = 0.0;              //Default balance
    static constexpr double def_rate = 0.0;                 //Default rate
protected:
    double rate{};
public:
    Savings_Account(string n = def_name, double b = def_balance, double r = def_rate);  //Constructor
    virtual bool deposit(double amount) override;            //Method for deposit
    virtual void print(std::ostream &os) const override;            //Prints the object
    virtual ~Savings_Account() {};                                  //Virtual Destructor
    //Withdraw method is inherited from Account
};