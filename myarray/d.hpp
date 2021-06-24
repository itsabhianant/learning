#pragma once

#include <bits/stdc++.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


template <typename T,int N>
class Array {
    int size {N};
    T values [N];

    friend std::ostream &operator<<(std::ostream &os, const Array<T, N> &arr) {
        os << "[ ";
        for (const auto &a: arr.values)
            os << a << " ";
        os << "]" << endl;
        return os;
    }

public:
    Array() = default;
    Array(T v) {
        for (auto &item:values)
            item = v;
    }
    void fill(T val) {
        for (auto &v: values)
            v = val;
    }
    
    int get_size() {return size;}
    
    T &operator[](int index) {
        return values[index];
    }
};