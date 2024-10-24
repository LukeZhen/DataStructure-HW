#include <iostream>
#include <queue>
using namespace std;

void rearrangeQueue(queue<int>& q) {
    int n = q.size();
    int mid = n / 2;

    int firstHalf[mid];
    int secondHalf[mid];

    for (int i = 0; i < mid; i++) {
        firstHalf[i] = q.front();
        q.pop();
    }

    for (int i = 0; i < mid; i++) {
        secondHalf[i] = q.front();
        q.pop();
    }

    int temp = firstHalf[mid - 1];
    firstHalf[mid - 1] = secondHalf[0];
    secondHalf[0] = temp;

    for (int i = 0; i < mid; i++) {
        q.push(firstHalf[i]);
    }
    for (int i = 0; i < mid; i++) {
        q.push(secondHalf[i]);
    }
}

int main() {
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    rearrangeQueue(q);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
