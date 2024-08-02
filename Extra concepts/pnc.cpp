#include <iostream>
#include <algorithm>  // For std::next_permutation
using namespace std;

int main() {
    string s = "123"; //Start from sorted to get all permutations
    //if u started with 231 -> 312 -> 321 THE END 
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
}