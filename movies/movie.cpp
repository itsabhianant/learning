#include "movies.hpp"
// Getters for name, rating and watched
    string Movie::get_name() const{
        return name;
    }          
    string Movie::get_rating() const{
        return rating;
    }          
    int Movie::get_watched() const{
        return watched;
    }         

    // Setters for name, rating and watched
    void Movie::set_name(string s){
        name = s;
    }
    void Movie::set_rating(string r){
        rating = r;
    }
    void Movie::set_watched(int w){
        watched += w; 
    }