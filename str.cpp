#include<iostream>
using namespace std;
int main (){
    string s= "lylols";
    int len = s.size();
    cout << len << endl;
    cout << s[len -1]<< endl; //to access the last element
    s[len-1] = 'z';
    cout << s;
    return 0;
}