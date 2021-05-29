/*
This is my first program that involves concepts of pointers, references,
dynamic memory allocation and some basic memory management.

The idea of this program is very simple. It takes two arrays and 
gives the products of all the elements in the array and those values
are stored in the heap in another array that is dynamically allocated
at the runtime.

There is no memory leak in this program.
Valgrind summary:
HEAP SUMMARY:
==25072==     in use at exit: 0 bytes in 0 blocks
==25072==   total heap usage: 3 allocs, 3 frees, 73,788 bytes allocated
==25072== 
==25072== All heap blocks were freed -- no leaks are possible
==25072== 
==25072== For lists of detected and suppressed errors, rerun with: -s
==25072== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
*/
#include <iostream>

using namespace std;

void print(int array[], size_t n);
int *apply_all(int arr1[], size_t n, int arr2[], size_t o);

int main() {
    int arr1[] {1,2,3,4,5};
    int arr2[] {10,20,30};

    cout << "Array 1: ";
    print(arr1,5);

    cout << "Array 2: ";
    print(arr2,3);

    int *results = apply_all(arr1,5,arr2,3);
    cout << "Result: ";
    print(results,15);

    delete [] results;

    return 0;
}

void print(int array[], size_t n) {
    cout << "[ ";
    for (int i = 0; i < n; i++){
        cout << array[i] << ' ';
    }
    cout << ']' << endl;
}

int *apply_all(int arr1[], size_t n, int arr2[], size_t o) {
    int *res = new int[n * o];
    int c = 0;
    for (int i = 0; i < o; i++) {
        for (int j = 0; j < n; j++) {
            res[c] = arr2[i] * arr1[j];
            c++;
        }
    }
    return res;
}