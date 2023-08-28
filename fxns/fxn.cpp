#include<iostream>
using namespace std;
//void when nothing is returned
    void pname( string name) {  //paramaterised fxn
    cout << " Hey " << name << endl;
    }
int main() {
    string name;
    cin >> name;
    pname(name);

    string name2;
    cin >> name2;
    pname(name2);
    return 0; 
}