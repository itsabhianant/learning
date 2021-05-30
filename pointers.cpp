/*
This is my first program that involves concepts of pointers, references,
dynamic memory allocation and some basic memory management.

The idea of this program is very simple. It takes two arrays and 
gives the products of all the elements in the array and those values
are stored in the heap in another array that is dynamically allocated
at the runtime.


========================================================================
30-05-2021:

In the update the program become more dynamic as the user can now create
array by himself/herself, as the program now asks the user the size for
both the arrays and what numbers should fill the array.

Also the program has become a less error prone as now the print() and
apply_all() functions can't change the values or addresses of the arrays
that the user provides.
========================================================================

There is no memory leak in this program.
HEAP SUMMARY (Using valgrind):
==28455==     in use at exit: 0 bytes in 0 blocks
==28455==   total heap usage: 6 allocs, 6 frees, 75,012 bytes allocated [// The number of bytes allocated may change depending upon your input and machine]
==28455== 
==28455== All heap blocks were freed -- no leaks are possible
==28455== 
==28455== For lists of detected and suppressed errors, rerun with: -s
==28455== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
*/
#include <iostream>

using namespace std;

int *create_array(size_t size);
void print(const int *const array, size_t n);
int *apply_all(const int *const arr1, size_t n,const int *const arr2 ,size_t o);

int main() {
    int a {};
    cout << "What should be the size of the first array? ";
    cin >> a;
    int *arr1 = create_array(a);

    int b {};
    cout << "What should be the size of the second array? ";
    cin >> b;
    int *arr2 = create_array(b);

    cout << "Array 1: ";
    print(arr1,a);

    cout << "Array 2: ";
    print(arr2,b);

    int *results = apply_all(arr1,a,arr2,b);
    cout << "Result: ";
    print(results,a*b);

    delete [] results;
    delete [] arr1;
    delete [] arr2;

    return 0;
}

void print(const int *const array, size_t n) {
    cout << "[ ";
    for (int i = 0; i < n; i++){
        cout << array[i] << ' ';
    }
    cout << ']' << endl;
}

int *apply_all(const int *const arr1, size_t n,const int *const arr2 ,size_t o) {
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

int *create_array(size_t size) {
    int *array = new int[size];
    if (size == 0) 
        return array;
    cout << "What are the numbers you want in the array? ";
    for (int i = 0; i < size;i++) {
        int n;
        cin >> n;
        array[i] = n;
    }
    return array;
}

/*
Now planning to make changes such that the user defines how many arrays
he wants and than the program asks the user for that many inputs and 
than gives him/her the product of all the elements in all those user
demanded arrays.
*/