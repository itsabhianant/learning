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

//Makes the string lowercase
Mystring Mystring::operator-() const {
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);
    for (size_t i = 0; i < std::strlen(buff); i++)
        buff[i] = tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

//Concatenates two string
Mystring Mystring::operator+(const Mystring &rhs) const {
    char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

//Concatenates lhs += rhs
Mystring Mystring::operator+=(const Mystring &rhs) {
    char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    delete [] str;
    str = new char [std::strlen(buff) + 1];
    std::strcpy(str,buff);
    delete [] buff;
    return *this;
}

//Repeats the string n times ex: (s1 = s2 * 3)
Mystring Mystring::operator*(int n) const {
    char *buff = new char[(std::strlen(str) + 1) * n];
    std::strcpy(buff, str);
    for (int i = 0; i < (n - 1); i++)
        std::strcat(buff,str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

//Repeats the string n times ex: (s1 *= 4)
Mystring Mystring::operator*=(int n) {
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);

    delete [] str;
    str = new char[(std::strlen(buff) + 1) * n];
    std::strcpy(str, buff);
    for (int i = 0; i < (n - 1); i++)
        std::strcat(str, buff);
    delete [] buff;
    return *this;
}

//Returns true if two string are equal
bool Mystring::operator==(const Mystring &rhs) const {
    return (std::strcmp(str, rhs.str) == 0);
}

//Returns true if two strings are not equal
bool Mystring::operator!=(const Mystring &rhs) const {
    return (std::strcmp(str, rhs.str) != 0);
}

//Returns true if lhs < rhs
bool Mystring::operator<(const Mystring &rhs) const {
    return (std::strcmp(str, rhs.str) < 0);
}

//Returns true if lhs > rhs
bool Mystring::operator>(const Mystring &rhs) const {
    return (std::strcmp(str, rhs.str) > 0);
}
