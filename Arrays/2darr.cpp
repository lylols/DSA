#include<iostream>
using namespace std;
int main (){
    //2d array arr [row] [clm]
    int arr [3] [2];

    arr [1] [1] = 11;
    arr [1] [2] = 15;
    arr [2] [1] = 81;
    arr [2] [2] = 90;

    cout << arr[1][2] <<" " << arr[3][2];
    //prints garbage value
    return 0;
}
