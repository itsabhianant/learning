#include "AccountsUtil.hpp"

/* Utils for Accounts */
//Displays all the Accounts
void display(const vector<Account *> &a) {
    cout << "--->Accounts ----------------\n" << endl;
    for (const auto i: a)
        cout << *i << endl;
    cout << "=====================================\n" << endl;
}

//Deposits to all the Accounts
void deposit(vector<Account *> &a, double bl) {
    cout << "Depositing =========================\n" << endl;
    for (auto i: a) {
        if (i->deposit(bl))
            cout << "Deposited " << bl << " to " << *i << endl;
        else   
            cout << "Failed deposit of " << bl << " to " << *i << endl;
    }
    cout << "==============================================\n" << endl;
}

//Withdraws from all the Accounts
void withdraw(vector<Account *> &a, double bl) {
    cout << "Withdrawing ============================\n" << endl;
    for (auto i: a) {
        if (i->withdraw(bl))
            cout << "Withdrawl of " << bl << " from " << *i << endl;
        else    
            cout << "Failed withdraw of " << bl << " from " << *i << endl;
    }
    cout << "===================================================\n" << endl;
}