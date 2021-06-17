#pragma once

#include "SavingsAccount.hpp"
#include "CheckingAccount.hpp"

//A Trust_Account(child of Savings_Account)
class Trust_Account: public Savings_Account {
private:
    static constexpr const char *def_name = "Empty_n";          //Default name
    static constexpr double def_balance = 0.0;                  //Default balance
    static constexpr double def_rate = 0.0;                     //Default rate
    int count = 0;
public:
    Trust_Account(string n = def_name, double b = def_balance, double r = def_rate);    //Constructor
    virtual bool deposit(double amount) override;                 //Method for deposit
    virtual bool withdraw(double amount) override;                       //Method for withdrawl
    virtual void print(std::ostream &os) const override;                    //Prints the object
    virtual ~Trust_Account() {};                                        //Virtual Deconstructor
};