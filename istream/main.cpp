#include "d.hpp"

int main() {
    std::ifstream in_file {"input.txt"};
    string word{};
    long int found{0};
    long int sub_found{0};
    cout << "Enter the word you are looking for: ";
    cin >> word;

    if (!in_file) {
        std::cerr << "Problem while loading the file" << endl;
        return 1;
    }

    while(!in_file.eof()) {
        string temp{};
        in_file >> temp;
        if (temp == word)
            found++;
        if (temp.find(word) != string::npos)
            sub_found++;
    }
    cout << sub_found << endl;
    cout << found << endl;
    in_file.close();

    return 0;
}