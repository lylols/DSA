//Given sorted array of integers and an element K. 
//write a function which return the index on which K is present using loops

#include <bits/stdc++.h>
using namespace std;

int linearSearch(int a[], int n, int k)
{
    int i;
    for(i=0; i<n; i++)
    {
        if (a[i] == k)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
     int a[] = {1,2,3,4,6,8,9};
     int k= 6;
     int n = sizeof(a)/sizeof(a[0]);

     int index = linearSearch(a,n,k );

     cout << "The element "<< k << " is at index :" << index<< endl;

    return 0;
}