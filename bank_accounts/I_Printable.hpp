#pragma once

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

class I_Printable {
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);  //Operator overloading for printing the object
public:
    virtual void print(std::ostream &os) const = 0;     //Pure virtual method to print object
    virtual ~I_Printable() {};                          //Virtual Destructor
};