#include <iostream>
#include <set>
using namespace std;

int main() {
    // Create a set of integers
    set<int> s;

    // Insert elements into the set
    s.insert(5);
    s.insert(3);
    s.emplace(3);
    s.insert(8);
    s.insert(1);
    s.insert(2);
    s.insert(7);

    int cnt = s.count(3);
    cout << cnt<< endl ;

    auto it1 = s.find(2);
    auto it2 = s.find(5); //returns an iterator which points to 8
    auto itt = s.find(9); //returns s.end ie an iterator that points right after the end of set
    s.end();
    s.erase(it1,it2);


    // Display all elements in the set
    cout << "Elements in the set: ";
    for (int elem : s) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}