#include "AccountsUtil.hpp"

/* Utils for Account */
//Displays all the Account
void display(const vector<Account> &a) {
    cout << "--->Accounts----------------" << endl;
    for (const auto &i: a)
        cout << i << endl;
    cout << "=====================================\n" << endl;
}

//Deposits to all the Account
void deposit(vector<Account> &a, double bl) {
    cout << "Depositing for Account=========================" << endl;
    for (auto &i: a) {
        if (i.deposit(bl))
            cout << "Deposited " << bl << " to " << i << endl;
        else   
            cout << "Failed deposit of " << bl << " to " << i << endl;
    }
    cout << "==============================================\n" << endl;
}

//Withdraws from all the Account
void withdraw(vector<Account> &a, double bl) {
    cout << "Withdrawing for Account============================" << endl;
    for (auto &i: a) {
        if (i.withdraw(bl))
            cout << "Withdrawl of " << bl << " from " << i << endl;
        else    
            cout << "Failed withdraw of " << bl << " from " << i << endl;
    }
    cout << "===================================================\n" << endl;
}

/* Utils for Savings_Account */
//Displays all the Savings_Account
void display(vector<Savings_Account> &sa) {
    cout << "--->Savings_Accounts----------------" << endl;
    for (const auto i: sa)
        cout << i << endl;
    cout << "=====================================\n" << endl;
}

//Deposits to all the Savings_Account
void deposit(vector<Savings_Account> &sa, double bl) {
    cout << "Depositing for Savings_Account=========================" << endl;
    for (auto &i: sa) {
        if (i.deposit(bl))
            cout << "Deposited " << bl << " to " << i << endl;
        else   
            cout << "Failed deposit of " << bl << " to " << i << endl;
    }
    cout << "==============================================\n" << endl;
}

//Withdraws from all the Savings_Account
void withdraw(vector<Savings_Account> &sa, double bl) {
    cout << "Withdrawing for Savings_Account============================" << endl;
    for (auto &i: sa) {
        if (i.withdraw(bl))
            cout << "Withdrawl of " << bl << " from " << i << endl;
        else    
            cout << "Failed withdraw of " << bl << " from " << i << endl;
    }
    cout << "===================================================\n" << endl;
}


/* Utils for Checking_Account */
//Displays all the Checking_Account
void display(vector<Checking_Account> &ca) {
    cout << "--->Checking_Accounts----------------" << endl;
    for (const auto i: ca)
        cout << i << endl;
    cout << "=====================================\n" << endl;
}

//Deposits to all the Checking_Account
void deposit(vector<Checking_Account> &ca, double bl) {
    cout << "Depositing for Checking_Account=========================" << endl;
    for (auto &i: ca) {
        if (i.deposit(bl))
            cout << "Deposited " << bl << " to " << i << endl;
        else   
            cout << "Failed deposit of " << bl << " to " << i << endl;
    }
    cout << "==============================================\n" << endl;
}

//Withdraws from all the Checking_Account
void withdraw(vector<Checking_Account> &ca, double bl) {
    cout << "Withdrawing for Checking_Account============================" << endl;
    for (auto &i: ca) {
        if (i.withdraw(bl))
            cout << "Withdrawl of " << bl << " from " << i << endl;
        else    
            cout << "Failed withdraw of " << bl << " from " << i << endl;
    }
    cout << "===================================================\n" << endl;
}

/* Utils for Trust_Account */
//Displays all the Trust_Account
void display(vector<Trust_Account> &ta) {
    cout << "--->Trust_Accounts----------------" << endl;
    for (const auto i: ta)
        cout << i << endl;
    cout << "=====================================\n" << endl;
}

//Deposits to all the Trust_Account
void deposit(vector<Trust_Account> &ta, double bl) {
    cout << "Depositing for Trust_Account=========================" << endl;
    for (auto &i: ta) {
        if (i.deposit(bl))
            cout << "Deposited " << bl << " to " << i << endl;
        else   
            cout << "Failed deposit of " << bl << " to " << i << endl;
    }
    cout << "==============================================\n" << endl;
}

//Withdraws from all the Trust_Account
void withdraw(vector<Trust_Account> &ta, double bl) {
    cout << "Withdrawing for Trush_Account============================" << endl;
    for (auto &i: ta) {
        if (i.withdraw(bl))
            cout << "Withdrawl of " << bl << " from " << i << endl;
        else    
            cout << "Failed withdraw of " << bl << " from " << i << endl;
    }
    cout << "===================================================\n" << endl;
} 