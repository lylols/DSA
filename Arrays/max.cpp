#include<iostream>
using namespace std;

int main () { 
    int n,i,max;
    cin >> n;
    int a[n];
    cout << "Enter elements of array"<< endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        max=a[0];
        if(a[i] > max){
            max = a[i];
        }
    }
    cout<< "The max element is :" << max << endl;
    return 0;
}