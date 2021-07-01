#include "Songs.hpp"

//Constructor
Songs::Songs(string s, string a, double r)
    :song{s}, artist{a}, rating{r}{
}

//Outputing the object
std::ostream &operator<<(std::ostream &os, const Songs &obj) {
    os << std::setw(30) << std::left << obj.song;
    os << "--by-->";
    os << std::setw(30) << std::right << obj.artist;
    os << std::setw(5) << std::right << obj.rating;
    os << endl;

    return os;
}


//Compares the object
bool operator!=(const Songs &lhs, const Songs &rhs) {
    return (lhs.song != rhs.song && lhs.artist != rhs.artist && lhs.rating != rhs.rating);
}

//Outputing the list
std::ostream &operator<<(std::ostream &os, const list<Songs> &lists) {
    for (const auto &o: lists)
        os << o;
    return os;
}

//Get response
char get_response() {
    char response;
    int something{0}; 
    do {
        if (something)
            cout << "Please give a valid input..." << endl;
        cout << endl;
        cout << "F - Play first song" << endl;
        cout << "N - Play next song" << endl;
        cout << "P - Play previous song" << endl;
        cout << "A - Add new song to the playlist" << endl;
        cout << "L - List the current playlist" << endl;
        cout << "====================================================" << endl;
        cout << "Enter a selection (Q to quit): ";
        cin >> response;
        response = tolower(response);
        something++;
    } while (
        response != 'f' &&
        response != 'n' &&
        response != 'p' &&
        response != 'a' &&
        response != 'l' &&
        response != 'q');
    
    return response;
}