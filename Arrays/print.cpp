#include<iostream>
using namespace std;

void printArray(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        cout<< a[i] << "\t" ;
    }
}

int main(){
    int a[] = {1,3,5,7,33,9};
    
    //number of elements = size of array

    int n = sizeof(a)/sizeof(a[0]);
    cout << "No of elements in array :" << n << endl;

    printArray(a,n);
}