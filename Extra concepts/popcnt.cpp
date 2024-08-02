#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num =7; //0111 in binary
    int cnt = __builtin_popcount(num); // counts the number of set bits (1s) 
    cout << "Number of set bits in " << num << " is " << cnt << endl;
    //Use __builtin_popcountll() for long long num

    return 0;
}