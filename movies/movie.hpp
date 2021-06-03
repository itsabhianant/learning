#pragma once

#include <iostream>
#include <string>
#include <vector>

// Using namespaces
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::getline;


class Movie {
    // Attributes
    string name;
    string rating;
    int watched = 0;
public:
    // Getters for name, rating and watched
    string get_name() const;          
    string get_rating() const;          
    int get_watched() const;          

    // Setters for name, rating and watched
    void set_name(string s);   
    void set_rating(string r);
    void set_watched(int w);
};