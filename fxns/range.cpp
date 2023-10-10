#include<iostream>
using namespace std;

void printRange(int start, int end)
{
    while(start <= end)
    {
        cout << start<<" ";
        start++;
    }
}

int main() {
    int start ;
    cout << "Start =" << endl;
    cin >> start;
    int end ;
    cout << "End =" << endl;
    cin >> end;

    printRange(start, end);
}