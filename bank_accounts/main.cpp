#include "AccountsUtil.hpp" 

int main() {
   //Account=================================================
    vector<Account> acnt;
    acnt.push_back(Account {});
    acnt.push_back(Account {"Tony"});
    acnt.push_back(Account {"Steve", 3000});
    acnt.push_back(Account {"Thor", 5000});
    
    display(acnt);
    deposit(acnt,1000);
    withdraw(acnt,3000);
    //=========================================================
    cout << "---------------------------------------------------------" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "---------------------------------------------------------\n" << endl;
    //Savings_Account==========================================
    vector<Savings_Account> s_acnt;
    s_acnt.push_back(Savings_Account {});
    s_acnt.push_back(Savings_Account {"Abhishek"});
    s_acnt.push_back(Savings_Account {"Utsav", 3000});
    s_acnt.push_back(Savings_Account {"Suraj", 5000});
    s_acnt.push_back(Savings_Account {"Prashar",5000,5});

    display(s_acnt);
    deposit(s_acnt,1000);
    withdraw(s_acnt,3000);
    //=========================================================
    cout << "---------------------------------------------------------" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "---------------------------------------------------------\n" << endl;
    //Checking_Account=========================================
    vector<Checking_Account> c_acnt;
    c_acnt.push_back(Checking_Account {});
    c_acnt.push_back(Checking_Account {"Batman"});
    c_acnt.push_back(Checking_Account {"Superman", 3000});
    c_acnt.push_back(Checking_Account {"Wonderwoman", 5000});

    display(c_acnt);
    deposit(c_acnt,1000);
    withdraw(c_acnt,3000);
    //=========================================================
    cout << "---------------------------------------------------------" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "---------------------------------------------------------\n" << endl;
    //Trust_Account============================================
    vector<Trust_Account> t_acnt;
    t_acnt.push_back(Trust_Account {});
    t_acnt.push_back(Trust_Account {"Pewdiepie"});
    t_acnt.push_back(Trust_Account {"Jimmy", 3000});
    t_acnt.push_back(Trust_Account {"JJ", 5000});
    t_acnt.push_back(Trust_Account {"Saiman", 10000, 4});

    display(t_acnt);
    deposit(t_acnt,4000);
    withdraw(t_acnt,5000);
    deposit(t_acnt,6000);
    withdraw(t_acnt,1000);
    withdraw(t_acnt,1000);
    withdraw(t_acnt,1000);
    //=========================================================

    return 0;
}
