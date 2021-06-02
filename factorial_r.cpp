/* ==============================================
This program gets you a factorial of a number
you give in the input. This is my attempt of
solving this problem with both recurssion and
iteration.
============================================== */
#include <iostream>

using namespace std;
long long fact(int num);


int main() {
    int num, i;
    long long factorial = 1;
    cout << "Number: ";
    cin >> num;

    // With the help of iteration
    for (i = 1; i <= num; i++) {
        factorial *= i;
    }
    cout << "With iteration: ";
    cout << factorial << endl;

    // With the help of recurssion
    factorial = fact(num);
    cout << "With recurssion: ";
    cout << factorial << endl;

    return 0;
}

// Defining the fact function
long long fact(int num) {
    if (num == 0)
        return 1;
    return num * fact(num - 1);
}