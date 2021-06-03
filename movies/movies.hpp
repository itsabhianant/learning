#pragma once

#include "movie.hpp"

class Movies{
    // Attributes
    vector <Movie> movies;

public:
    // Methods 
    bool add_movie(int w, string r, string s);
    bool increase_watched(string s);
    void display() const;
};