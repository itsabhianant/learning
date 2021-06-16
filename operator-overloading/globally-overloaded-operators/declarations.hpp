#pragma once

#include <iostream>
#include <cstring>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;

class Mystring {
    //Operators as global operator overload
    friend Mystring operator-(const Mystring &rhs);                         //Makes the letter lowecase
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);    //Concatenates
    friend Mystring operator+=(Mystring &lhs, const Mystring &rhs);         //lhs += rhs
    friend Mystring operator*(const Mystring &lhs ,int n);                  //s1 = s2 * 4
    friend Mystring operator*=(Mystring &lhs, int n);                       //s1 *= 4
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);       //True if lhs == rhs
    friend bool operator!=(const Mystring &lhs, const Mystring &rhs);       //True if lhs != rhs
    friend bool operator<(const Mystring &lhs, const Mystring &rhs);        //True if lhs < rhs
    friend bool operator>(const Mystring &lhs, const Mystring &rhs);        //True if lhs > rhs
private:
    char *str;
public:
    Mystring();                                         //No-args constructor
    Mystring(const char *s);                            //Overloaded constructor
    Mystring(const Mystring &source);                   //Copy constructor(deep copy)
    Mystring(Mystring &&source);                        //Move constructor
    ~Mystring();                                        //Destructor
    Mystring &operator=(const Mystring &rhs);           //Copy assignment
    Mystring &operator=(Mystring &&rhs);                //Move assignment

    //Display and getters
    void display() const;                               //Displays the object's string
    int get_length() const;                             //Gets the length of the string
    const char *get_str() const;                        //Gets the string of the object
};