#include "declarations.hpp"

int main() {
    /* Implementing the overloaded operators */

    // -
    cout << "\n===========================" << endl;
    cout << "Overloaded (-)" << endl;
    Mystring upper {"UPPER"};
    upper.display();                    //UPPER
    Mystring lower = -upper;
    lower.display();                    //upper
    cout << "===========================\n" << endl;

    // +
    cout << "\n===========================" << endl;
    cout << "Overloaded (+)" << endl;
    Mystring first_name = "Abhishek";
    first_name.display();               //Abhishek
    Mystring middle_name = " Anant";    
    middle_name.display();              // Anant
    Mystring name = first_name + middle_name + " Singh";
    name.display();                     //Abhishek Anant Singh;
    cout << "===========================\n" << endl;

    // +=
    cout << "\n===========================" << endl;
    cout << "Overloaded (+=)" << endl;
    Mystring s1 = "abc";
    s1.display();                       //abc
    s1 += "ABC";
    s1.display();                       //abcAbc
    Mystring s2 = "xyz";
    s2.display();                       //xyz
    s2 += "XYZ";
    s2.display();                       //xyzXYZ
    s1 += s2;                           
    s1.display();                       //abcABCxyzXYZ
    cout << "===========================\n" << endl;

    // *
    cout << "\n===========================" << endl;
    cout << "Overloaded (*)" << endl;
    Mystring s3 = "123";
    s3.display();                       //123
    Mystring s4 = s3 * 4;               
    s4.display();                       //123123123123
    cout << "===========================\n" << endl;

    // *=
    cout << "\n===========================" << endl;
    cout << "Overloaded (*=)" << endl;
    Mystring s5 = "12345";
    s5.display();                       //12345
    s5 *= 5;                            
    s5.display();                       //1234512345123451234512345
    cout << "===========================\n" << endl;

    cout << "\n+++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    Mystring a = "abc";
    a.display();                        //abc
    Mystring a_ = "abc";
    a_.display();                       //abc
    Mystring b = "bac";
    b.display();                        //bac
    Mystring c = "cab";
    c.display();                        //cab
    // ==
    cout << "\n===========================" << endl;
    cout << "Overloaded (==)" << endl;
    cout << (a == a_) << endl;          //1(not false)
    cout << (a == b) << endl;           //0(false)
    cout << "===========================\n" << endl;

    // !=
    cout << "\n===========================" << endl;
    cout << "Overloaded (!=)" << endl;
    cout << (a != b) << endl;           //1(not false)
    cout << (a != a_) << endl;          //0(false)
    cout << "===========================\n" << endl;

    // <
    cout << "\n===========================" << endl;
    cout << "Overloaded (<)" << endl;
    cout << (b < c) << endl;            //1(not false)
    cout << (c < b) << endl;            //0(false)
    cout << "===========================\n" << endl;

    // >
    cout << "\n===========================" << endl;
    cout << "Overloaded (>)" << endl;
    cout << (c > b) << endl;            //1(not false)
    cout << (b > c) << endl;            //0(false)
    cout << "===========================" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++\n" << endl;

    return 0;
}
