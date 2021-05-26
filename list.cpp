#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    vector <int> vec {};    // The vector that will store the list
    char response {};       // Takes a response as an input
    do {
        // Displaying the prompt and getting an input
        cout << "-------------------------------------------" << endl;
        cout << "P - Print numbers\n";
        cout << "A - Add a number\n";
        cout << "M - Display mean of the numbers\n";
        cout << "S - Display the smallest number\n";
        cout << "L - Display the largest number\n";
        cout << "D - Display how many time a number occurs\n";
        cout << "C - Clear out the list\n";
        cout << "Q - Quit\n";
        cin >> response; 

        // Selection of what's to be done for the above responses
        if (response == 'P' || response == 'p') {
            // Selecting the output on the basis of empty or equiped vector
            if (vec.size() > 0) {
                cout << "[ ";
                for (int i = 0; i < vec.size(); i++) {
                    cout << vec.at(i) << ' ';
                }
                cout << "]";
                cout << endl;
            } else {
                cout << "[] - This list is empty." << endl;
            }

        } else if (response == 'A' || response == 'a') {
            int num {};
            cout << "Number : ";
            cin >> num;
            vec.push_back(num);

        } else if (response == 'M' || response == 'm') {
            double mean;
            int total = 0;
            for (int i = 0; i < vec.size(); i++) {
                total += vec.at(i);
            }
            mean = static_cast <double> (total) / vec.size();
            cout << fixed << setprecision(2);
            cout << "Mean: " << mean << endl;

        } else if (response == 'S' || response == 's') {
            int min = 2'000'000'000;
            for (int i = 0; i < vec.size(); i++) {
                min = (min > vec.at(i) ? vec.at(i) : min);
            }
            cout << "Smallest number in the list : " << min << endl;
        } else if (response == 'L' || response == 'l') {
            int max = 0;
            for (int i = 0; i < vec.size(); i++) {
                max = (max < vec.at(i) ? vec.at(i) : max);
            }
            cout << "Largest number in the list : " << max << endl;
        } else if (response == 'D' || response == 'd') {
            int num {};
            int count = 0;
            cout << "Number : ";
            cin >> num;
            for (int i = 0; i < vec.size(); i++) {
                count += (num == vec.at(i) ? 1 : 0);
            }
            if (count > 0)
                cout << num << " appears " << count << " times in the list.\n";
            else 
                cout << "The number isn't in the list.\n";
        } else if (response == 'C'|| response == 'c') {
            vec.clear();
            cout << "The list has been cleared" << endl;
        } else if (response =='Q' || response == 'q') {
            cout << "Goodbye...\n";
        } else {
            cout << "Illegal choice...";
        }

        

    } while (response != 'Q' && response != 'q');
    return 0; 
}