#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <memory>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::exception;
using std::unique_ptr;
using std::make_unique;

//IllegalBalanceException that throws exception when a negative balance is entered or deposited
class IllegalBalanceException: public exception {
public:
    IllegalBalanceException() noexcept = default;       //Constructor
    //~IllegalBalanceException();                         //Destructor

    //what() function
    virtual const char* what() const noexcept {
        return "Illegal balance exception: Negative balance can't be deposited";
    }
    virtual ~IllegalBalanceException() {};
};

//InsufficientFundException that throws exception when there are insufficient funds while withdrawing
class InsufficientFundException: public exception{
public:
    InsufficientFundException() noexcept = default;     //Constructor
    //~InsufficientFundException();                       //Destructor

    //what() function
    virtual const char* what() const noexcept {
        return "Insufficient fund exception: You don't have the specified amount to withdraw";
    }
    virtual ~InsufficientFundException() {};
};