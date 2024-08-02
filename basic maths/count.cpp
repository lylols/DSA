#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = (int) (log10(n)+1);
    cout << cnt << endl; // Output the result
    return 0;
}

//TC O(log10(n))
//As the loopwould run every time it gets divided by 10
//If it was n/2 it would be log2(n)
//In case of divisions the TC becomes in log