#include "declarations.hpp"

//No-args constructor
Mystring::Mystring()
    :str{nullptr} {
    str = new char[1];
    *str = '\0';
}

//Overloaded constructor
Mystring::Mystring(const char *s) 
    :str{nullptr} {
    if (s == nullptr) {
        str = new char[1];
        *str = '\0';
    } else {
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

//Copy constructor
Mystring::Mystring(const Mystring &source)
    :str{nullptr} {
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

//Destructor
Mystring::~Mystring() {
    delete [] str;
}

//Copy Assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
    cout << "Copied with = " << endl;
    if (this == &rhs)
        return *this;

    delete [] str;

    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);

    return *this;
}

//Move Assignment
Mystring &Mystring::operator=(Mystring &&rhs) {
    cout << "Moved with = " << endl;
    if (this == &rhs)
        return *this;
    delete [] str;
    
    str = rhs.str;
    rhs.str = nullptr;

    return *this;
}

/* //Make lowecase
Mystring Mystring::operator-() const{
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);
    for (size_t i = 0; i < std::strlen(buff); i++) 
        buff[i] = tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;

    return temp;
}

//Concatenate
Mystring Mystring::operator+(const Mystring &rhs) const {
    size_t buff_s = std::strlen(str) + std::strlen(rhs.str) + 1;
    char *buff = new char[buff_s];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);

    Mystring temp {buff};
    delete [] buff;

    return temp;
}

//Compare
bool Mystring::operator==(const Mystring &rhs) const {
    return (std::strcmp(str, rhs.str) == 0);
} */

//Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << endl;
}

//Getter for the length
int Mystring::get_length() const {
    return std::strlen(str);
}

//Getter for the string
const char *Mystring::get_str() const {
    return str;
}

/* Global operator overloaders */

//Comparision
bool operator==(const Mystring &lhs, const Mystring &rhs) {
    return (std::strcmp(lhs.str, rhs.str) == 0);
}

//Makes lowercase
Mystring operator-(const Mystring &obj) {
    char *buff = new char[std::strlen(obj.str) + 1];
    std::strcpy(buff, obj.str);
    for (int i = 0; i < std::strlen(buff); i++) 
        buff[i] = tolower(buff[i]);

    Mystring temp {buff};

    delete [] buff;

    return temp;
}

//Concatenation
Mystring operator+(const Mystring &lhs, const Mystring &rhs) {
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 2];
    std::strcpy(buff, lhs.str);
    std::strcat(buff," ");
    std::strcat(buff, rhs.str);

    Mystring temp {buff};

    delete [] buff;
    return temp;
}

// << and >> overloads
std::ostream &operator<<(std::ostream &os, const Mystring &obj) {
    os << obj.get_str();

    return os;
}

std::istream &operator>>(std::istream &in, Mystring &obj) {
    char *buff = new char[1000];
    in >> buff;

    obj = Mystring{buff};       //This step depends upon what we have got move or copy.As we have got both move will come to play

    delete [] buff;
    return in;
}