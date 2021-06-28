#include "d.hpp"

//Makes and returns a unique pointer
unique_ptr<vector<shared_ptr<Test>>> make() {
    return make_unique<vector<shared_ptr<Test>>> ();
}

//Fills the vector of shared pointers of Test
void fill(vector<shared_ptr<Test>> &vec, int num) {
    cout << "Filling the data --------------------------\n" << endl;
    for (int i = 1; i <= num; i++) {
        int n;
        cout << "Number [" << i << "]: ";
        cin >> n;
        vec.push_back(make_shared<Test> (n));
    }
}

//Displays the shared pointers of Test in the vector
void display(const vector<shared_ptr<Test>> &vec) {
    cout << "\nDisplaying the data --------------------------\n" << endl;
    for (auto &v: vec) {
        cout << "Number: " << v->get_data() << endl;
    }
}