#include "functions.hpp"

int main() {
    Movies list;               
    char response;
    cout << "=========Welcome to your movie list=========" << endl;
    do {
        welcome_prompt();
        cin >> response;
        if (tolower(response) != 'a' &&
            tolower(response) != 'b' &&
            tolower(response) != 'c' &&
            tolower(response) != 'q') {
                cout << "Please give a valid response...";
            }
        
        if (tolower(response) == 'a') {
            list.add_movie(get_watched_count(), choose_ratings(), get_movie());
            
        } else if (tolower(response) == 'b') {
            list.increase_watched(get_movie());

        } else if (tolower(response) == 'c') {
            list.display();
        } else {
            cout << "\nGoodbye..." << endl;
        }


    }while(tolower(response) != 'q'); 


    return 0;
}