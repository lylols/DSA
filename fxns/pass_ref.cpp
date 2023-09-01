#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//pass by ref
void valref(string &s) { //IT CHANGES THE ADDRESS
    s[0] = 't';
    cout<< s << endl;
}

int main() {
    string s = "Raj";
    valref(s);
    cout << s;
    return 0;
}