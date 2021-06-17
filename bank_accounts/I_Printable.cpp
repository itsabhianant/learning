#include "I_Printable.hpp"

//Prints out the objects of I_Printable instance
std::ostream &operator<<(std::ostream &os, const I_Printable &obj) {
    obj.print(os);
    return os;
}   