#include <iostream>
#include <queue>
using namespace std;

int main() {
    //Initializing
    queue<int> q;

    // Enqueue elements
    q.push(10);
    q.push(20);
    q.emplace(30);

    //Front element
    cout<< "1st element: "<< q.front() << endl;

    //Back element
    cout<< "last: " << q.back() << endl;

    //Dequeue element
    q.pop();
    cout<< (q.empty() ? "Empty" : "Not empty")<< endl;

    cout << "Size of the queue: " << q.size() << endl;
}