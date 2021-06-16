#pragma once

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

//The Account class(parent class)
class Account{
    friend std::ostream &operator<<(std::ostream &os, const Account &account);  //Outputs the object
private:
    static constexpr const char *def_name = "Empty";              //Default name
    static constexpr double def_balance = 0.0;              //Default balance
protected:
    string name{};                                          //Name of the Account holder
    double balance{};                                       //Balance of the Account
public:
    Account(string n = def_name, double b = def_balance);   //Constructor
    bool deposit(double amount);                                 //Method to deposit 
    bool withdraw(double amount);                                //Method to withdraw
};