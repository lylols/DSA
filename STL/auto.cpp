#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main () {

    //auto allows the compiler to automatically deduce the type of a variable from its initializer.
    //like for a in v in python
    vector<int> v = {1, 2, 3, 4, 5};
    for (auto elem : v) {
        elem *= 2; // Changes only the local copy
        cout << elem << " ";
    }
    cout << endl;

    cout << "The OG elements: ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    cout << "After using &: ";
    for (auto& elem : v) {
        elem *= 2; // Modifies the actual elements in the vector
        cout << elem << " ";
    }
    cout << endl;

    //other way
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        *it *= 2; // Double each element
    }

    cout << "Modified elements in v: ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

}