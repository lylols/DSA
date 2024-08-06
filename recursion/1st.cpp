#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n <= 0) return; // Base case
    printNumbers(n - 1); // Recursive call
    cout << n << " "; // Print the current number
}

void printDescending(int n) {
    if (n <= 0) return; // Base case
    cout << n << " ";   // Print the current number
    printDescending(n - 1); // Recursive call
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printNumbers(n);
    cout << endl;
    printDescending(n);
    return 0;
}