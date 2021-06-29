#pragma once

#include <bits/stdc++.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::list;


class Songs{
    friend std::ostream &operator<<(std::ostream &os, const Songs &obj);    //Outputing the object
    friend bool operator!=(const Songs &lhs, const Songs &rhs);    //Compares the object
private:
    string song;
    string artist;
    double rating;
    static constexpr const char *def_song = "None";         //Default song name
    static constexpr const char *def_artist = "None";       //Default artist name
    static constexpr double def_rating = 0;                 //Default rating of the song
public:
    Songs(string s = def_song, string a = def_artist, double r = def_rating);   //Constructor
};



//Outputing the list
std::ostream &operator<<(std::ostream &os, const list<Songs> &lists);

//Compares the object
bool operator!=(const Songs &lhs, const Songs &rhs);

//Get response
char get_response();