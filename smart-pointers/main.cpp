#include "d.hpp"

int main() {
    unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    int numb;
    cout << "How many data have you got? ";
    cin >> numb;
    fill(*vec_ptr,numb);
    display(*vec_ptr);
    cout << "\nDestroying the data --------------------------\n" << endl;
    
    return 0;
}