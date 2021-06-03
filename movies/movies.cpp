#include "movies.hpp"

bool Movies::add_movie(int w, string r, string s){
    for (const Movie &movie: movies) {
        if (movie.get_name() == s){
            cout << "Can't add \"" << s << "\" in your movie list as it already exists..." << endl;
            return false;
        }
    }

    // Creating an object movie and setting it's name, rating and watch count
    Movie movie;
    movie.set_name(s);
    movie.set_rating(r);
    movie.set_watched(w);

    // Adding the movie in the movies vector.
    movies.push_back(movie);
    cout << "Movie added successfully" << endl;
    return true;
}
bool Movies::increase_watched(string s){
    for (Movie &movie: movies) {
        if (movie.get_name() == s) {
            movie.set_watched(1);
            cout << "Watch count for \"" << s << "\" incremented successfully" << endl;
            return true;
        }
    }
    cout << "Sorry, but there is no movie called \"" << s << "\" in your list..." << endl; 
    return false;
}
void Movies::display() const{
    if (movies.size() != 0) {
        cout << "============================================" << endl;
        cout << endl;
        for (const Movie &movie: movies) {
            cout << movie.get_name();
            cout << ", rating: " << movie.get_rating();
            cout << ", watched: " << movie.get_watched() << endl;
            cout << "++++++++++++++++++++++++++++++++++++++++++++" << endl;
            cout << endl;
        }
        cout << "============================================" << endl;
    } else {
        cout << "There is no movie to display..." << endl;
    }
}