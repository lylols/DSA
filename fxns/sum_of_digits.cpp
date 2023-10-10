#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<< "Enter a no. =>" ;
    cin >> n;
    int number = n;
    int sum =0;
    while(n != 0)
    {
        int digit = n%10;

        sum += digit;

        n /= 10;
    }

    cout << "\nSum of all digits of the number " << number << "  = "<< sum;

}