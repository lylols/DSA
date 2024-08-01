//Given sorted array of integers and an element K. 
//write a function which return the index on which K is present using loops

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int s, int e,int k)
{
    while (s <= e)
    {   
        int mid = (s+e)/2;

        if(a[mid] == k)
        {
            return mid;
        }
        else if (a[mid] > k)
        {
            e = mid -1;
        }
        else 
        {
            e = mid +1; 
        }
    }
    return -1;
}

int main()
{
     int a[] = {1,2,3,4,6,8,9};
     int k= 6;
     int n = sizeof(a)/sizeof(a[0]);

     int index = binarySearch(a,0,n-1,k );

     cout << "The element "<< k << " is at index :" << index<< endl;

    return 0;
}