// Including some libraries
#include <iostream>
#include <string>

// Declaring the scopes
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
    // Prompting the user for the string
    string message {};
    cout << "Message: ";
    getline(cin, message);

    // Iterating over the string
    for (size_t i = 0; i < message.length(); i++) {
        size_t words = i * 2 + 1;     // How much words are to be printed
        size_t total = message.length() + (message.length() - 1); // Total no. of chars to be printed
        size_t spaces = (total - words)/2;  // How much spaces is to be printed
        string block;   // String that will contain the block to be printed at a time.
        int flag = -1;  
        size_t bl = 0;  // The length of the block
        for (size_t j = 0; j < words;j++) {
            
            // Checking for the flag
            if (j > words / 2) {
                flag = 0;
                bl--;
            }

            // Prints forwards
            if (flag == -1){
                block.push_back(message.at(bl));
                bl++;

              // Prints backwards.  
            } else if (flag == 0){
                block.push_back(message.at(bl - 1));
            }
        }
        cout << string(spaces, ' ');
        cout << string(block);
        cout << string(spaces, ' ');
        cout << endl;
    }
    cout << endl;
    return 0;
}