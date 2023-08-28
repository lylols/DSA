#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//pass by value
void valref(string s) {
    s[0] = 't';
    cout<< s << endl;
}

int main() {
    string s = "Raj";
    valref(s);
    cout << s;
    return 0;
}