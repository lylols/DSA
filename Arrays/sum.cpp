#include<iostream>
using namespace std;

int main () { 
    int n,i,sum=0;
    cin >> n;
    int arr[n];
    cout << "Enter elements of array"<< endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum= sum + arr[i];
    }
    cout<< "sum is :" << sum << endl;
    return 0;
}
    