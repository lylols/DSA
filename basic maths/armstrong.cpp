#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int arm=0;
    cin >> n;
    int temp =n;
    while(n>0){
        int lg= n%10;
        arm += pow(lg, 3);
        n/=10;
    }

    if(arm==temp){
        cout << "Armstrong";
    }
    else {cout << "No";
    }
    return 0;
}