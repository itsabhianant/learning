#include <bits/stdc++.h>
// #include <iomanip>

using namespace std;

int print(char, vector <int> &list);
int add(char, vector <int> &list);
int mean(char, vector <int> &list);
int smallest_num(char, vector <int> &list);
int largest_num(char, vector <int> &list);
int find(char, vector <int> &list);
int clean(char, vector <int> &list);  
int quit(char);       

int main() {
    char response;
    vector <int> list;
    do {
        cout << "---------------------------------------------" << endl;
        cout << "P - Print the list\n";
        cout << "A - Add a number to the list\n";
        cout << "M - Mean of the numbers in the list\n";
        cout << "S - Smallest number in the list\n";
        cout << "L - Largest number in the list\n";
        cout << "F - Find how many times a number appears in the list\n";
        cout << "C - Clean the list\n";
        cout << "Q - Quit\n";
        cin >> response;
        if (
            response != 'P' && response != 'p' &&
            response != 'A' && response != 'a' &&
            response != 'M' && response != 'm' &&
            response != 'S' && response != 's' &&
            response != 'L' && response != 'l' &&
            response != 'F' && response != 'f' &&
            response != 'C' && response != 'c' &&
            response != 'Q' && response != 'q'
            ) {                
            cout << "===========================================\n";
            cout << "Illegal Response\n";
            cout << "===========================================\n";
        }
        
        

        print(response, list);
        add(response, list);
        mean(response, list);
        smallest_num(response, list);
        largest_num(response, list);
        find(response, list);
        clean(response, list);
        quit(response);

    } while (response != 'q' && response != 'Q');

    return 0;
}

// Prints the list
int print(char response, vector <int> &list) {
    if (response != 'P' && response != 'p') 
        return 0;
    if (list.size() > 0) {
        cout << "===========================================\n";
        cout << "[ ";
        for (int i = 0; i < list.size(); i++) {
            cout << list.at(i) << ' ';
        }
        cout << "]\n";
        cout << "===========================================\n";
    } else {
        cout << "===========================================\n";
        cout << "[] - The list is empty\n";
        cout << "===========================================\n";
    }

    return 0;
}
// Adds a number to the list
int add(char response, vector <int> &list) {
    if (response != 'A' && response != 'a') 
        return 0;
    int n;
    cout << "Number to add: ";
    cin >> n;
    list.push_back(n); 

    return 0;
}
// Gets the mean of the list
int mean(char response, vector <int> &list) {
    if (response != 'M' && response != 'm') 
        return 0;
    double m = 0;
    for (int i = 0; i < list.size(); i++) {
        m += list.at(i);
    } 
    cout << fixed << setprecision(2);
    cout << "===========================================\n";
    cout << "Mean: "<< m/list.size() << endl;
    cout << "===========================================\n";

    return 0;
}
// Gets the smallest number of the list
int smallest_num(char response, vector <int> &list) {
    if (response != 'S' && response != 's') 
        return 0;
    int min = list.at(0);
    for (int i = 0; i < list.size(); i++) {
        min = (min > list.at(i)) ? list.at(i) : min;
    }
    cout << "===========================================\n";
    cout << "Smallest number: " << min << endl;
    cout << "===========================================\n";

    return 0;
}
// Gets the largest number of the list
int largest_num(char response, vector <int> &list) {
    if (response != 'L' && response != 'l') 
        return 0;
    int max = list.at(0);
    for (int i = 0; i < list.size(); i++) {
        max = (max < list.at(i)) ? list.at(i) : max;
    }
    cout << "===========================================\n";
    cout << "Smallest number: " << max << endl;
    cout << "===========================================\n";

    return 0;
}
// Finds how many times a particular number is in the list
int find(char response, vector <int> &list) {
    if (response != 'F' && response != 'f') 
        return 0;
    int n;
    cout << "Number: ";
    cin >> n;
    int count = 0;
    for (int i = 0; i < list.size(); i++) {
        if (n == list.at(i))
            count++;
    } 
    if (count > 0) {
        cout << "===========================================\n";
        cout << count << " times\n";
        cout << "===========================================\n";
    }

    return 0;
}
// Cleans the list
int clean(char response, vector <int> &list) {
    if (response != 'C' && response != 'c') 
        return 0;
    list.clear();
    cout << "===========================================\n";
    cout << "The list has been cleaned\n";
    cout << "===========================================\n";
    return 0;
}
// Goodbye message
int quit(char response) {
    if (response != 'Q' && response != 'q') 
        return 0;
    cout << "===========================================\n";
    cout << "Goodbye\n";
    cout << "===========================================\n";

    return 0;
}
