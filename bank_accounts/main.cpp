#include "AccountsUtil.hpp" 

int main() {

    Account *a = new Account("Abhishek", 4999);
    Account *sa = new Savings_Account("Utsav",5000,5);
    Account *ca = new Checking_Account("Suraj", 10000);
    Account *ta = new Trust_Account("Prashar", 50000,10);

    vector<Account *> account{a, sa, ca, ta};
    display(account);
    deposit(account, 500);
    withdraw(account,5500);
    deposit(account, 6000);
    withdraw(account,500000);
    withdraw(account,5000);
    withdraw(account,10000);
    withdraw(account,20000);

    cout << "Cleaning stuff" << endl;
    delete a;
    delete sa;
    delete ca;
    delete ta;

    return 0;
}
