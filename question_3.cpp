#include <iostream>
#include <deque>
using namespace std;

void printFirstNegative(int arr[], int n, int k) {
    deque<int> dq;

    for (int i = 0; i < n; i++) {
        if (!dq.empty() && dq.front() == i - k) {
            dq.pop_front();
        }

        if (arr[i] < 0) {
            dq.push_back(i);
        }

        if (i >= k - 1) {
            cout << "{ ";
            for (int j = i - k + 1; j <= i; j++) {
                cout << arr[j] << " ";
            }
            cout << "} = ";

            if (!dq.empty()) {
                cout << arr[dq.front()];
            } else {
                cout << "0 (does not contain a negative integer)";
            }
            cout << endl;
        }
    }
}

int main() {
    int arr[] = {-8, 2, 3, -6, 10};
    int k = 2;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "First negative integer for each window of size " << k << endl;
    printFirstNegative(arr, n, k);

    return 0;
}
