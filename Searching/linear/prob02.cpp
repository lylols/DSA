//return the index on which k is present using recursion
#include <bits/stdc++.h>
using namespace std;

int linearSearch(int a[], int i, int b, int k)
{
    b = 5;
     if(i == b)
    {
        return -1;
    }
    if(a[i] == k)
    {
        return i;
    }
    // else{
    //     return -1;
    // }
   return linearSearch(a, i+1, b, k);
}

int main ()
{
    int a[] = {1,4,6,8,9,12};
    int k = 8;

    int index = linearSearch(a,0,5,k);
    cout << "The element " << k << " is present at index :" << index << endl;
    return 0;
}