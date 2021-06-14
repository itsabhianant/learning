//=============================================


//=============================================
#include <iostream> 
#include <iomanip>

using namespace std;

int main() {
    double a = 22;
    double b = 7;
    double c = a/b;
    double n {};
    cout << "Enter the number upto what you want the value of pi to be printed: ";

    bool active = true;
    do {
        cin >> n;
        if (n >= 52)
            cout << "What the hell do you need this precised value 😡... ask for less: ";
        else    
            active = false;

    } while(active);

    cout << fixed;
    cout << setprecision(n); 
    cout << c << endl;

    return 0;
}
