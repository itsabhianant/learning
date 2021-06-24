#include "d.hpp"

int main() {
    Array<double ,5> num;
    cout << num << endl;
    num.fill(1176.98);
    cout << num << endl;
    num[1] = 5.4;
    num[4] = 3.4;
    cout << num << endl;

    Array<double, 100> num1{1.4};
    cout << "The size of num1: " << num1.get_size() << endl;
    cout << num1 << endl;

    return 0;
}