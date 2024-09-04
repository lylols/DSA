//divide & merge
#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){

    int mid = (s+e)/2;

    int len1= mid -s +1;
    int len2= e- mid;

    int *first = new int[len1];
    int *sec = new int[len2];

    //cpy values
    int k= s;
    for (int i=0; i<len1; i++){
        first[i] = arr[k++];
    } 

    k= mid+1;
    for (int i=0; i<len2; i++){
        sec[i] = arr[k++];
    }

    //merge 2 sorted arrays
    int ind1 =0;
    int ind2 =0;
    k = s; //k represents MainArrayIndex everywhere

    while(ind1 < len1 && ind2 < len2){
        if(first[ind1]< sec[ind2]) {
            arr[k++] = first[ind1++];
        }
        else{
            arr[k++] = sec[ind2++];
        }
    }

    while(ind1 < len1){
        arr[k++] = first[ind1++];
    }

    while(ind2 < len2){
        arr[k++] = sec[ind2++];
    }
}

void mergeSort( int *arr, int s, int e){

    //base case
    if(s>=e) return;

    int mid = (s+e)/2;

    //left side
    mergeSort(arr, s, mid);

    //right side
    mergeSort(arr, mid+1, e);

    //merge
    merge(arr, s, e);

}

int main() {

    int arr[5] = {2,5,6,1,4};
    int n = 5;

    mergeSort(arr, 0, n-1);

    for(int i= 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout<< endl;
    return 0;
}

//TC: log2(n)* n(bcz of comparisions)
//SC: O(n)