#include "d.hpp"

void display(const Tour &tour) {
    cout << std::setw(27) << std::right << '|' + tour.title + '|' << endl;
    cout << std::setw(27) << std::right << std::setfill('_') << "==============" << std::setw(15) << std::setfill('_') << " \n" << endl;
    
    for(const auto &country: tour.countries) {
        cout << "-> " + country.name << ':' << endl;
        cout << std::setw(country.name.length() + 4) << std::setfill('-') << ' ' << endl;
        string n = "NAME";
        cout << std::setw(20) << std::left << std::setfill(' ') <<  "          " + n;
        cout << std::setw(10) << std::right << "POPULATION";
        cout << std::setw(7) << std::right << "COST" << endl;
        for (const auto &city: country.cities) {
            cout << std::setw(20) << std::left << std::setfill(' ') << "*******=> " + city.name;
            cout << std::setw(10) << std::right << city.population;
            cout << std::setw(10) << city.cost << endl;
        }
        cout << '\n';
    }
}