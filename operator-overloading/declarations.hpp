#pragma once

#include <iostream>
#include <cstring>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;


// Mystring class
class Mystring {
    friend bool operator== (const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    friend std::ostream &operator<<(std::ostream &os, const Mystring &obj);
    friend std::istream &operator>>(std::istream &in, Mystring &obj);
private:
    char *str;      // C-style string

public:
    Mystring();                                         //No-args constructor
    Mystring(const char *s);                            //Overladed Constructor
    Mystring(const Mystring &source);                   //Copy Constructor
    ~Mystring();                                        //Destructor
    Mystring &operator=(const Mystring &rhs);           //Copy Assignment
    Mystring &operator=(Mystring &&rhs);                //Move Assignment

    //Operators as member methods       
    /* Mystring operator-() const;                         //Make lowercase
    Mystring operator+(const Mystring &rhs) const;      //Concatenate
    bool operator==(const Mystring &rhs) const;         //Compares */


    void display() const;                               //Display method
    int get_length() const;                             //Getter for the length of the string
    const char *get_str() const;                        //Getter for the string

};
