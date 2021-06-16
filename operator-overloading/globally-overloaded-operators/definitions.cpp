#include "declarations.hpp"

//No-args constructor
Mystring::Mystring()
    :str{nullptr} {
    str = new char[1];
    *str = '\0';
}

//Overloded constructor
Mystring::Mystring(const char *s)
    :str{nullptr} {
    if (s == nullptr) {
        str = new char[1];
        *str = '\0';
    } else {
        str = new char [std::strlen(s) + 1];
        std::strcpy(str,s);
    }
}

//Copy constructor(Deep copy)
Mystring::Mystring(const Mystring &source)
    :str{nullptr} {
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

//Move constructor
Mystring::Mystring(Mystring &&source) 
    :str{source.str} {
    source.str = nullptr;
}

//Destructor
Mystring::~Mystring() {
    delete [] str;
}

//Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
    if (this == &rhs)
        return *this;
    
    delete [] str;
    str = new char [std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);
    return *this;
}

//Move assignment
Mystring &Mystring::operator=(Mystring &&rhs) {
    if (this == &rhs)
        return *this;

    str = rhs.str;
    rhs.str = nullptr;

    return *this;
}

//Displays the objects's string
void Mystring::display() const {
    cout << str << " : " << std::strlen(str) << endl;
}

//Gets the length of the string
int Mystring::get_length() const {
    return (std::strlen(str));
}

//Gets the string of the object
const char *Mystring::get_str() const {
    return str;
}

/* Operators as global operator overload */
//Makes the letter lowecase
Mystring operator-(const Mystring &rhs) {
    char *buff = new char[std::strlen(rhs.str) + 1];
    std::strcpy(buff, rhs.str);
    for (long unsigned int i = 0; i < std::strlen(buff); i++)
        buff[i] = tolower(buff[i]);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

//Concatenates
Mystring operator+(const Mystring &lhs, const Mystring &rhs) {
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

//lhs += rhs
Mystring operator+=(Mystring &lhs, const Mystring &rhs) {
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);

    delete [] lhs.str;
    lhs.str = new char[std::strlen(buff) + 1];
    std::strcpy(lhs.str, buff);
    delete [] buff;
    return lhs;
}

//s1 = s2 * 4;
Mystring operator*(const Mystring &lhs, int n) {
    char *buff = new char[(std::strlen(lhs.str) + 1) * n];
    std::strcpy(buff, lhs.str);
    for(int i = 0; i < (n - 1); i++)
        std::strcat(buff, lhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

//s1 *= 4
Mystring operator*=(Mystring &lhs, int n) {
    char *buff = new char[std::strlen(lhs.str) + 1];
    std::strcpy(buff, lhs.str);
    delete [] lhs.str;
    lhs.str = new char[(std::strlen(buff) + 1) * n];
    std::strcpy(lhs.str, buff);
    for (int i = 0; i < (n - 1); i++) 
        std::strcat(lhs.str, buff);
    delete [] buff;
    return lhs;
}

//True if lhs == rhs
bool operator==(const Mystring &lhs, const Mystring &rhs) {
    return (std::strcmp(lhs.str, rhs.str) == 0);
}

//True if lhs != rhs
bool operator!=(const Mystring &lhs, const Mystring &rhs) {
    return (std::strcmp(lhs.str, rhs.str) != 0);
}

//True if lhs < rhs
bool operator<(const Mystring &lhs, const Mystring &rhs) {
    return (std::strcmp(lhs.str, rhs.str) < 0);
}

//True if lhs > rhs
bool operator>(const Mystring &lhs, const Mystring &rhs) {
    return (std::strcmp(lhs.str, rhs.str) > 0);
}