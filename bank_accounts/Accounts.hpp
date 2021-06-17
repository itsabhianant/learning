#pragma once

#include "I_Printable.hpp"

//The Account class(parent class)
class Account: public I_Printable{
private:
    static constexpr const char *def_name = "Empty";              //Default name
    static constexpr double def_balance = 0.0;              //Default balance
protected:
    string name{};                                          //Name of the Account holder
    double balance{};                                       //Balance of the Account
public:
    Account(string n = def_name, double b = def_balance);       //Constructor
    virtual bool deposit(double amount);                                //Method to deposit 
    virtual bool withdraw(double amount);                               //Method to withdraw
    virtual void print(std::ostream &os) const override;        //Prints the object
    virtual ~Account() {};                                      //Virtual destructor                                  
};