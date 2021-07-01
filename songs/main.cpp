#include "Songs.hpp"

int main() {
    char response{};
    //Initialising the list of songs
    list<Songs> song;
    song.emplace_back("Holiday", "KSI", 5.0);
    song.emplace_back("Drive Forever", "Sergio Valentino", 4.9);
    song.emplace_back("Yaalgar", "Carryminati", 1.8);
    song.emplace_back("Bhendi", "Saiman Says", 3.5);
    song.emplace_back("Shanti", "Dank Rishu", 4.1);
    song.emplace_back("The Nights", "Avicci", 4.5);

    //Displaying the list of songs
    cout << song;
    auto csong = song.begin();
    do {
        cout << "Current song:" << endl;
        cout << *csong << endl;
        response = get_response();
        if (response == 'f') {
            csong = song.begin();
        } else if (response == 'n') {
            if (*csong != song.back())
                csong++;
            else
                csong = song.begin();
        } else if (response == 'p') {
            if (csong == song.begin())
                csong = song.end();  
            csong--;
        } else if (response == 'a') {
            string s;
            string a;
            double r;
            cout << "Enter the name of the song: ";
            cin.ignore();
            std::getline(cin, s);
            cout << "Enter the name of the artist: ";
            std::getline(cin, a);
            cout << "Enter the rating of the song: ";
            cin >> r;

            song.emplace_back(s, a, r);
            cout << song.back() << " status: Added succesfully" << endl;
        } else if (response == 'l') {
            cout << song << endl;
        }

    } while (response != 'q');
    
    return 0;
}