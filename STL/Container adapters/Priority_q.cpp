#include <iostream>
#include <queue>
using namespace std;

int main() {
    int arr[5] = {2,4,1,3,7};

    //defining priority queue
    priority_queue<int> pq;

    //Printing array
    cout<< "Array: ";
    for (auto i : arr) {
        cout << i << ' ';
    }
    cout << endl;

    //Pushing array sequentially one by one
    for (int i =0; i<6; i++) {
        pq.push(arr[i]);
    }

    // printing priority queue
    cout << "Priority Queue: ";
    while (!pq.empty()) {
        cout << pq.top() << ' ';
        pq.pop();
    }
    cout << endl;
    //Minimum priority queue
    priority_queue<int, vector<int>, greater<int>> minpq;
    for (int i =0; i<6; i++) {
        minpq.push(arr[i]);
    } 
    while (!minpq.empty()) {
        cout << minpq.top() << ' ';
        minpq.pop();
    }

    return 0;
}
