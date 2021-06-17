#pragma once

#include "Accounts.hpp"

//The Checking_Account class(child of Account)
class Checking_Account: public Account {
private:
    static constexpr const char *def_name = "Empty_c";        //Default name
    static constexpr double def_balance = 0.0;          //Default balance
    static const double fee;                            //Fixed fee;
public:
    Checking_Account(string n = def_name, double b = def_balance);      //Constructor
    virtual bool withdraw(double amount) override;                                       //Method for withdrawl
    virtual void print(std::ostream &os) const override;                //Prints the object
    virtual ~Checking_Account() {};                                     //Virtual desconstructor
    //Deposit method is inherited from Account
};