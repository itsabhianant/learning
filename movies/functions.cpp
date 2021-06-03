#include "movies.hpp"

void welcome_prompt() {
    cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "What would you like to do? " << endl;
    cout << "A - Add a new movie in the list\n";
    cout << "B - Increase the watched count of a movie in the list\n";
    cout << "C - Display the list of your movies\n";
    cout << "Q - QUIT\n";
}

string choose_ratings() {
    int choice;
    cout << "\nRating: " << endl;
    cout << "How's your movie rated? " << endl;
    cout << "0 - G (Genereal Audience)" << endl;
    cout << "1 - PG (Parental Guidance Suggested)" << endl;
    cout << "2 - PG-13 (Parents Strongly Cautioned. Some scenes not suited for under 13.)" << endl;
    cout << "3 - R (Restricted)" << endl;
    cout << "4 - NC-17 (Clearly Adult)" << endl;
    cin >> choice;
    if (choice != 0 && choice != 1 && choice != 2 
        && choice != 3 && choice != 4) {
            cout << "Invalid response... Considering the rating as PG...";
        }
    switch (choice) {
        case 0:
            return "G";
        case 2:
            return "PG-13";
        case 3:
            return "R";
        case 4:
            return "NC-17";
        default:
            return "PG";
    }
    return "PG";
}

string get_movie() {
    string movie;
    cout << "\nName: ";
    cin.ignore();
    getline(cin, movie);
    return movie;
}

int get_watched_count() {
    int watched_count;
    cout << "\nWatch count: ";
    cin >> watched_count;
    return watched_count;
}