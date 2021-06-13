#include "declarations.hpp"

int main() {
    Mystring abhi {"abhi"};
    Mystring anant {"anant"};
    Mystring singh;

    cout << "Enter singh" << endl;
    cin >> singh;

    cout << "My name is: " << abhi << " " << anant << " " << singh << endl;

    cout << "Now enter the correct full name: ";
    cin >> abhi >> anant >> singh;

    cout << "The proper name is: " << abhi + anant + singh << endl;
    

    return 0;
}