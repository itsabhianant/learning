#include "AccountsUtil.hpp" 

int main() {
    try {
        unique_ptr<Account> a = make_unique<Checking_Account> ("Mo", 1000);
        a->deposit(-100);
        a->withdraw(500);
        std::cout << "Use mo account" << endl;
    }
    catch (const IllegalBalanceException &ex) {
        cout << ex.what() << endl;
    }
    catch (const InsufficientFundException &ex) {
        cout << ex.what() << endl;
    }
    catch(...) {
        cout << "Unknown error" << endl;
    }

    return 0;
}
