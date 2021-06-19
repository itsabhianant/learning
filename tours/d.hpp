#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

//Struct for the City
typedef struct City {
    string name;
    long population;
    double cost;
} City;

//Struct for the Country 
typedef struct Country {
    string name;
    vector<City> cities;
} Country;

//Struct for the Tours
typedef struct Tour {
    string title;
    vector<Country> countries;
} Tour;

//Prototypes for function
void display(const Tour &tour);     //Dispalys the tour