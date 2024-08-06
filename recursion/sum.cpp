#include <iostream>
using namespace std;

void sum(int i, int s){
    if (i<1){
        cout << s;
        return ;
    } 
    sum(i-1,s+i);
}

int fxn(int n){
    if (n==0) return 0;
    return n + fxn(n-1);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    sum(n,0);
    cout << endl;
    int result = fxn(n);  // Capture the result of fxn(n)
    cout << "Sum using fxn: " << result << endl;
    return 0;
}
