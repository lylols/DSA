#include<iostream>
using namespace std;
int main (){
    cout << "enter the elements" << endl;
    int arr[4];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    arr[2] = 33;
    arr[1] += 4;
    cout << arr[0] <<" " << arr[1] <<" "<< arr[2] <<" " << arr[3];
}