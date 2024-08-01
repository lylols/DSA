#include <bits/stdc++.h>
using namespace std;

// Comparison function to sort pairs
//Sort it acc to 2nd element in ASC
//tie breaker 1st element but in DESC
bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;
    // If the second elements are the same, sort by the first element in descending order
    return p1.first > p2.first;
}

int main() {
    pair<int, int> a[] = {{1, 2}, {3, 1}, {2, 1}, {2, 4}};

    // Sort the array using the comparison function
    sort(a, a + 4, comp);

    // Print the sorted array
    cout << "Sorted array of pairs:" << endl;
    for (const auto& p : a) {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }

    return 0;
}
