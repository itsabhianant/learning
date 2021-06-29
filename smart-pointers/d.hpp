#pragma once

#include <iostream>
#include <vector>
#include <memory>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::unique_ptr;
using std::shared_ptr;
using std::make_unique;
using std::make_shared;


//A class Test
class Test {
private:
    int data;
public:
    Test() :data{0} {cout << "\tTest constructor for (" << data << ")" << endl; }
    Test(int number) :data{number} {cout << "\tTest constructor for (" << data << ")" << endl; }
    int get_data() const {return data;}
    ~Test() {cout << "\t Test destructor for (" << data << ")" << endl;}
};

//Prototypes for functions
unique_ptr<vector<shared_ptr<Test>>> make();
void fill(vector<shared_ptr<Test>> &vec, int num);
void display(const vector<shared_ptr<Test>> &vec);