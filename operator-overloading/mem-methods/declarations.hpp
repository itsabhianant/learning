#pragma once

#include <iostream>
#include <cstring>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;

class Mystring {
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

    //Operators as member methods
    Mystring operator-() const;                         //Makes the string lowercase
    Mystring operator+(const Mystring &rhs) const;      //Concatenates two strings
    Mystring operator+=(const Mystring &rhs);           //Concatenates lhs += rhs
    Mystring operator*(int n) const;                    //Repeats the string n times ex: (s1 = s2 * 
    Mystring operator*=(int n);                         //Repeats the string n times ex: (s1 *= 4)
    bool operator==(const Mystring &rhs) const;         //Returns true if two strings are equal
    bool operator!=(const Mystring &rhs) const;         //Returns true if two strings are not equal
    bool operator<(const Mystring &rhs) const;          //Returns true if lhs < rhs
    bool operator>(const Mystring &rhs) const;          //Returns true if lhs > rhs

    //Display and getters
    void display() const;                               //Displays the object's string
    int get_length() const;                             //Gets the length of the string
    const char *get_str() const;                        //Gets the string of the object
};