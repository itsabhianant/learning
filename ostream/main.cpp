#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main() {
    std::ifstream in_file {"input.txt"};
    std::ofstream out_file {"output.txt"};

    if (!in_file) {
        std::cerr << "Can't open input.txt" << endl;
        return 1;
    }

    if (!out_file) {
        std::cerr << "Can't open output.txt" << endl;
        return 1;
    }
    int num{0};
    while(!in_file.eof()) {
        num++;
        string line{};
        std::getline(in_file,line);
        if (line.size() != 0)
            out_file << std::setw(10) << std::left << num << line << endl;
        else {
            num--;
            out_file << line << endl;
        }
    }
    
    in_file.close();
    out_file.close();

    return 0;
}